package class_test;
public class main1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.loadLibrary("JavaDll");
		JniPerson jniPerson=new JniPerson();
		jniPerson.initPerson(26, "feifei");
		jniPerson.sayInfo();
		jniPerson.writeFile("text.txt", "helloJni");
		
		
	}

}
