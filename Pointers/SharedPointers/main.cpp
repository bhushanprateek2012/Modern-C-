#include<iostream>
#include<memory>
//manual memory and pointers management
//later  changing manual management to smart shared pointers.
class Project{
	std::string m_Name;
	public:
		void SetName(const std::string &name)
		{
			m_Name=name;
			
		}
		void ShowProjectDetails()
		{
			std::cout<<"[Project Name]"<< m_Name<<std::endl;
		}
};
class Employee{
	std::shared_ptr<Project> m_pProject{};
public:
	void SetProject(const std::shared_ptr<Project> prj)
	{
		m_pProject=prj;
	}
	const std::shared_ptr<Project> GetProject() const	{
		return m_pProject;
	}	
};
void ShowInfo(const std::shared_ptr<Employee> & emp)
{
	emp->GetProject()->ShowProjectDetails();
}
int main()
{
	std::shared_ptr<Project> prj{ new Project{}};
	prj->SetName("My First Project");
	std::shared_ptr<Employee> e1{new Employee{}}; e1->SetProject(prj);ShowInfo(e1);
	std::shared_ptr<Employee> e2{new Employee{}}; e2->SetProject(prj);ShowInfo(e2);
	std::shared_ptr<Employee> e3{new Employee{}}; e3->SetProject(prj);ShowInfo(e3);
	std::shared_ptr<Employee> e4{new Employee{}}; e4->SetProject(prj);ShowInfo(e4);
	
	prj->ShowProjectDetails();
	
	
	
	
	return 0;
}
