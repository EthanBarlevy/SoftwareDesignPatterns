namespace NullObject
{
	internal class Program
	{
		static void Main(string[] args)
		{
			IAnimal dog = new Dog();
			dog.Speak();
			IAnimal animal = Animal.Null;
			animal.Speak();

			IRobot boston = new BostonDynamics();
			boston.Speak();
			IRobot robot = null;
			robot.Speak();
		}
	}
}
