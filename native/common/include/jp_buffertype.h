#ifndef _JPBUFFERTYPE_H_
#define _JPBUFFERTYPE_H_

/**
 * Class to wrap Java Class and provide low-level behavior
 */
class JPBufferType : public JPClass
{
public:
	JPBufferType(JPJavaFrame& frame,
			jclass cls,
			const string& name,
			JPClass* superClass,
			JPClass* componentType,
			jint modifiers);
	virtual~ JPBufferType();

	char* getType()
	{
		return const_cast<char*> (m_Type);
	}

	int getSize()
	{
		return m_Size;
	}

private:
	const char* m_Type;
	int m_Size;
} ;

#endif // _JPBUFFERCLASS_H_