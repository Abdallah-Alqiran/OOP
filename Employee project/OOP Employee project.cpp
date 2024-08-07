#include <iostream>

using namespace std;

class Employee
{
protected:
	string Name;
	int empID;
	double Salary;

public:
	Employee(string n, int id, double s)
	{
		Name = n;
		empID = id;
		Salary = s;
	}

	void setName(string n)
	{
		Name = n;
	}
	void setID(int id)
	{
		empID = id;
	}
	void setSalary(double s)
	{
		Salary = s;
	}

	virtual float getTotalSalary() = 0;

	virtual void print()
	{
		cout << "Name = " << Name;
		cout << "\tID = " << empID;
		cout << "\tSalary = " << Salary << '\t';
	}

};

class Sales : public Employee
{
private:
	float grossSales;
	float commissionRate;

public:
	Sales(string n, int id, double s, float gs, float cr) :Employee(n, id, s)
	{
		grossSales = gs;
		commissionRate = cr;
	}

	void setGossSales(float gs)
	{
		grossSales = gs;
	}
	void setCommissionRate(float cr)
	{
		commissionRate = cr;
	}

	void print()
	{
		Employee::print();
		cout << "\tGroos Sales = " << grossSales;
		cout << "\tCommission Rate = " << commissionRate;
		cout << '\n';
	}

	float getTotalSalary()
	{
		return Salary + (grossSales * commissionRate);
	}

};

class Engineer : public Employee
{
private:
	string Speciality;
	int Experience;
	float overTimeHourRate;
	float overTime;

public:
	Engineer(string n, int id, double s, string sp, int ex, float othr, float ov) : Employee(n, id, s)
	{
		Speciality = sp;
		Experience = ex;
		overTimeHourRate = othr;
		overTime = ov;
	}

	void setSpeciality(string s)
	{
		Speciality = s;
	}
	void setExperience(int ex)
	{
		Experience = ex;
	}
	void setOverTimeHourRate(float o)
	{
		overTimeHourRate = o;
	}
	void setOverTime(float o)
	{
		overTime = o;
	}

	void print()
	{
		Employee::print();
		cout << "\tSpeciality = " << Speciality;
		cout << "\tExperience = " << Experience;
		cout << "\tOver Time Hour Rate = " << overTimeHourRate;
		cout << "\tOver Time = " << overTime;
		cout << '\n';
	}

	float getTotalSalary()
	{
		return Salary + (overTime * overTimeHourRate);
	}
};


int main()
{
	
	Sales S1("Mahmoud", 1, 10000, 12, 0.5);
	S1.setID(10);
	S1.print();

	Engineer E1("Abdallah", 1, 12000, "Computer Science", 3, 100, 7);
	E1.setSalary(20000);
	cout << E1.getTotalSalary() << '\n';
	E1.print();

}
