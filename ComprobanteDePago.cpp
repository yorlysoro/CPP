#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
const float Pregrado = 0.14, Especialista = 0.16, Magister = 0.18, Doctorado = 0.20,
PrimaAnt = 0.0115, UT = 1500;
const float SSO = 0.015, FAOV = 0.02, PIE = 0.01, CajaAh = 0.20;
float TotalAsignaciones = 0.00, TotalDeducciones = 0.00;

void ObtenerDatos(void);
void CrearNuevoComprobante(void);
void EliminarUnComprobante(void);
void ModificarUnComprobante(void);
void ConsultarUnComprobante(void);
void Menu(void);

struct fecha {
        int Dia;
        int Mes;
        int Anio;
    };

struct persona {
        int CI;
        string Nombre;
        string Apellido;
    };

struct comprobante {
		int id;
        string NomEmpresa;
        persona Trabajador;
        fecha FechaPago;
        string Cargo;
        float Sueldo;
        int NInstru;
        int AniosAnt;
    };

comprobante CompPago;

int main() {
	Menu();
    return 0;
}

void ObtenerDatos(void){
    cout << setw(20) << "Generador de comprobante de pago" << endl;
    cout << "Introduzca el nombre de la empresa: ";
    getline(cin, CompPago.NomEmpresa);

    cin.ignore();
    cout << "Introduzca la cedula del trabajador: ";
    cin >> CompPago.Trabajador.CI;
    while(CompPago.Trabajador.CI <= 0) {
        cout << "Error! Cedula incorrecta!!" << endl;
        cout << "Introduzca la cedula del trabajador: ";
        cin >> CompPago.Trabajador.CI;
    }

    cin.ignore();
    cout << "Introduzca el nombre del trabajador: ";
    getline(cin, CompPago.Trabajador.Nombre);

    cin.ignore();
    cout << "Introduzca el apellido del trabajador: ";
    getline(cin, CompPago.Trabajador.Apellido);

    cout << "Introduzca la fecha de pago" << endl;
    cout << "introduzca  el Dia: ";
    cin >> CompPago.FechaPago.Dia;
    while(CompPago.FechaPago.Dia <= 0 || CompPago.FechaPago.Dia > 31){
        cout << "Error!! Dia Incorrecto" << endl;
        cout << "Intrduzca el dia:";
        cin >> CompPago.FechaPago.Dia;
    }

    cout << "Intrduzca el Mes: ";
    cin >> CompPago.FechaPago.Mes;
    while(CompPago.FechaPago.Mes <= 0 || CompPago.FechaPago.Mes > 12){
        cout << "Error!! Mes Incorrecto!!" << endl;
        cout << "Intrduzca el Mes: ";
        cin >> CompPago.FechaPago.Mes;
    }

    cout << "Introduzca el Año:";
    cin >> CompPago.FechaPago.Anio;
    while(CompPago.FechaPago.Anio > 2018){
        cout << "Error!! Año Incorrecto!!" << endl;
        cout << "Intrduzca el Año: ";
        cin >> CompPago.FechaPago.Anio;
    }

    cin.ignore();
    cout << "Introduzca el cargo del trabajador: ";
    cin >> CompPago.Cargo;

    cout << "Introduzca el sueldo basico del trabajador: ";
    cin >> CompPago.Sueldo;
    while(CompPago.Sueldo <= 3921546){
        cout << "Error! El sueldo basico no puede ser menor o igual a 3921546" << endl;
        cout << "Introduzca el sueldo basico del trabajador: ";
        cin >> CompPago.Sueldo;
    }

    cout << "Introduzca el Nivel de instruccion del trabajador" << endl;
    cout << "1)Pregrado. 2)Especialista." << endl;
    cout << "3)Magister. 4)Doctorado." << endl;
    cout << ": ";
    cin >> CompPago.NInstru;
    while(CompPago.NInstru <= 0 || CompPago.NInstru > 4) {
        cout << "Error!! Solo puede introducir" << endl;
        cout << "1)Pregrado. 2)Especialista." << endl;
        cout << "3)Magister. 4)Doctorado." << endl;
        cout << ": ";
        cin >> CompPago.NInstru;
    }

    cout << "Introduzca los años laborados por el trabajador: ";
    cin >> CompPago.AniosAnt;
    while(CompPago.AniosAnt < 0) {
        cout << "Error! Los años trabajados no puede ser menor a cero" << endl;
        cout << "Introduzca los años laborados por el trabajador: ";
        cin >> CompPago.AniosAnt;
    }
}

void CrearNuevoComprobante(void){
	cout << setfill(' ');
    cout << setw(50) << "Comprobante de pago" << endl;
    cout <<  setw(20) << "Empresa:" << setw(15) << CompPago.NomEmpresa << endl;
    cout <<  setw(20) << "CI Trabajador:" << setw(15) << CompPago.Trabajador.CI << endl;
    cout << setw(20) << "Nombre Trabajador:" << setw(15) << CompPago.Trabajador.Nombre << endl;
    cout << setw(20) << "Apellido Trabajador: "  << setw(15) << CompPago.Trabajador.Apellido << endl;
    cout <<  setw(20) << "Fecha de pago" << endl;
    cout <<  setw(20) << "Dia: " << CompPago.FechaPago.Dia << setw(15) << "Mes: " << CompPago.FechaPago.Mes << setw(15) << "Año: " << CompPago.FechaPago.Anio << endl;
    cout << setw(20) << setprecision(2) << "Sueldo Basico: " << setw(15) <<  fixed << CompPago.Sueldo << " Bs"  << endl << endl << endl;
    cout <<  setw(25) << "Nivel de Instruccion" << endl << endl;

    switch(CompPago.NInstru){
        case 1: cout << setw(20) << setprecision(2) << "Pregrado, Asignacion 14% sobre el sueldo basico: " << CompPago.Sueldo * Pregrado << " Bs";
                TotalAsignaciones = TotalAsignaciones + (CompPago.Sueldo * Pregrado);
        break;
        case 2: cout << setw(20) << setprecision(2) << "Especialista, Asignacion 16% sobre el sueldo basico: " << CompPago.Sueldo * Especialista << " Bs";
                TotalAsignaciones = TotalAsignaciones + (CompPago.Sueldo * Especialista);
        break;
        case 3: cout << setw(20) << setprecision(2) << "Magister, Asignacion 18% sobre el sueldo basico: " << CompPago.Sueldo * Magister << " Bs";
                TotalAsignaciones = TotalAsignaciones + (CompPago.Sueldo * Pregrado);
        break;
        case 4: cout << setw(20) << setprecision(2) << "Doctorado, Asignacion 20% sobre el sueldo basico: " << CompPago.Sueldo * Doctorado << " Bs";
                TotalAsignaciones = TotalAsignaciones + (CompPago.Sueldo * Pregrado);
        break;
    }
    cout << endl << endl;
    cout << setw(30) << "Años de trabajo en la empresa: " << CompPago.AniosAnt << "Años" << endl << endl;
	cout << setw(30) << "Asignaciones" << endl << endl; 
	cout << setw(30) << setprecision(2) << "Asignacion por años de trabajo de 1.5% sobre el sueldo basico: " << CompPago.AniosAnt * CompPago.Sueldo * PrimaAnt << " Bs" << endl;
    TotalAsignaciones = TotalAsignaciones + (CompPago.AniosAnt * CompPago.Sueldo * PrimaAnt);
    cout << setw(30) << setprecision(2) << "Asignacion por Prima Hogar de 300 UT:" << UT * 300 << " Bs" << endl << endl;
    TotalAsignaciones = TotalAsignaciones + (UT * 300);
    cout << setw(30) << setprecision(2) << "Deducciones" << endl << endl;
    cout << setw(25) << setprecision(2) << "Descuento por SSO 5% sobre el sueldo basico: " <<  CompPago.Sueldo * SSO << " Bs" << endl;
    cout << setw(25) << setprecision(2) << "Descuento por FAOV 2% sobre el sueldo basico: " <<  CompPago.Sueldo * FAOV << " Bs" << endl;
    cout << setw(25) << setprecision(2) << "Descuento por PIE 1% sobre el sueldo basico: " <<  CompPago.Sueldo * PIE << " Bs" << endl;
    cout << setw(25) << setprecision(2) << "Descuento por caja de ahorro 20% sobre el sueldo basico: " <<  CompPago.Sueldo * CajaAh << " Bs" << endl;
    TotalDeducciones = TotalDeducciones +( CompPago.Sueldo * SSO + CompPago.Sueldo * FAOV + CompPago.Sueldo * CajaAh + CompPago.Sueldo * PIE);
	cout << setw(25) << "Totales" << endl << endl;
    cout << setw(30) << setprecision(2) << "Total de Asignaciones: " <<  TotalAsignaciones << " Bs" << endl;
    cout << setw(30) << setprecision(2) << "Total de Deducciones: " <<  TotalDeducciones << " Bs" << endl << endl;
    cout << setw(30) << setprecision(2) << "Sueldo Neto a cobrar: " << CompPago.Sueldo + TotalAsignaciones - TotalDeducciones << " Bs" << endl;
	cout << setfill('\0');
}

void Menu(void){
	int Opc = 0;
	cout << setfill(' ');
	ofstream IdsF;
	IdsFO.open("IDs.txt", ios:app);
	if(IdsF.is_open()){
		if(IdsFO.eof())
			0 >> IdsFO;
		else{
			IdsFO.close();
			ifstream IDsFI;
			IDsFI.open("IDs.txt");
			
		}
	}
	do{
		cout << setw(50) <<  "Sistema De Comprobante de Pagos" << endl;
		cout << setw(25) << "1)Crear Un Nuevo Comprobante\t 2)Modificar Un Comprobante" << endl;
		cout << setw(25) << "3)Consultar Un Comprobante\t 4)Eliminar Un Comprobante" << endl;
		cout << setw(25) << "0) Salir" << endl;
		cout << "Seleccione una Opcion: ";
		cin >> Opc;
		switch(Opc){
			case 1: CrearNuevoComprobante(); break;
			case 2: ModificarUnComprobante(); break;
			case 3: ConsultarUnComprobante(); break;
			case 4: EliminarUnComprobante(); break;
			case 0: cout << "Adios!!!" << endl; break;
			default: cout << "Error Opcion Invalida!!!"; cout << "Presione Enter para continuar..."; cin.get();
		}
	}while(Opc != 0);
}
