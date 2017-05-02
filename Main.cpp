#include <Logger.h>

using namespace std;
using namespace Utilities;

int main(int argc, char *argv[]) {
	Logger* speaker = new Logger();
	speaker->sayHello();
}
