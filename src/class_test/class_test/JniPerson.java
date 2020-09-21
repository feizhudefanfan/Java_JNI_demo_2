package class_test;

public class JniPerson {
	  long nativePerson;
	    //构造函数
	  public JniPerson(){
	        nativePerson = createNativeObject();
	    }
	    /**本地方法：创建c++对象并返回地址*/
	  public void initPerson(int age,String name){
			nativeInitPerson(nativePerson, age, name);
		}
	  public void sayInfo(){
			nativeSayInfo(nativePerson);
		}
	  public void writeFile(String pathName, String content){
		nativeWriteFile(nativePerson, pathName, content);
	  }

	  private native long createNativeObject();
	  private native void nativeInitPerson(long personAddr,int age,String name);
	  private native void nativeSayInfo(long personAddr);
	  private native  void nativeWriteFile(long personAddr, String filePathName, String content); 
}
