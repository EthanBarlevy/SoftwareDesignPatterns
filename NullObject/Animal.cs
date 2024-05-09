using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NullObject
{
	internal abstract class Animal : IAnimal
	{
		public static readonly IAnimal Null = new NullAnimal();

		private class NullAnimal : Animal
		{
			public override void Speak()
			{ 
				
			}
		}
		public abstract void Speak();

	}
}
