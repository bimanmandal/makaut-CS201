# Java Learning Project

A beginner-friendly Java project for learning core Java concepts using Gradle build system.

## Prerequisites

### Java Development Kit (JDK)

**Minimum Version:** JDK 21 (or compatible version)

**Download Links:**
- **Oracle JDK 21** (Official): https://www.oracle.com/java/technologies/downloads/#java21
- **OpenJDK 21** (Open-source): https://openjdk.org/projects/jdk/21/
- **Eclipse Adoptium** (Community): https://adoptium.net/

### Visual Studio Code

**Download:** https://code.visualstudio.com/

### Setting Up Java Environment Variables (Windows)

1. **Click on Windows button** and search for **"Edit environment variables"**
2. Open **"Edit the system environment variables"**
3. Click on **"Environment Variables"** button (bottom right)
4. Under **User variables**, click on **"New"**
5. Create a new variable:
   - Variable name: `JAVA_HOME`
   - Variable value: Browse to your JDK installation directory (e.g., `C:\Program Files\jdk-21`)
6. Click **OK**
7. Now edit the **Path** variable:
   - Select **Path** and click **Edit**
   - Click **New**
   - Add: `%JAVA_HOME%\bin`
   - Click **OK**
8. **Restart your terminal/VSCode** for changes to take effect

### Verify Installation

```bash
java -version
javac -version
```

## VSCode Setup

### Required Extensions

1. **Extension Pack for Java** by Microsoft
   - Provides debugging, testing, and IntelliCode support
   
2. **Java by Oracle**
   - Official Oracle Java extension

Install from VSCode Extensions marketplace (Ctrl+Shift+X / Cmd+Shift+X)

## Project Structure

```
java-learning/
├── src/main/java/com/biman/helloworld/
│   └── TestAppMain.java       # Main application entry point
├── build.gradle               # Gradle build configuration
├── gradle/                     # Gradle wrapper files
├── .gitignore                 # Git ignore rules
└── README.md                  # This file
```

## Compiling & Running

### Using javac (Java Compiler)

**Compile:**
```bash
javac -d build/classes/java/main src/main/java/com/biman/helloworld/TestAppMain.java
```

**Run:**
```bash
java -cp build/classes/java/main com.biman.helloworld.TestAppMain
```

**Output:**
```
Hello World!
```

### Using Gradle (Recommended)

**Compile:**
```bash
./gradlew compileJava
```

**Build entire project:**
```bash
./gradlew build
```

## Dependencies

- **Apache Commons Lang** - Utility functions
- **SLF4J & Logback** - Logging framework
- **JUnit Jupiter** - Testing framework
- **AssertJ** - Fluent assertions for testing

## Learning Resources

- Official Java Documentation: https://docs.oracle.com/en/java/
- Java Tutorials: https://docs.oracle.com/javase/tutorial/
- Gradle Documentation: https://docs.gradle.org/

## Notes

- Project configured for Java 21
- UTF-8 encoding enabled
- Compiler warnings enabled (`-Xlint:unchecked`, `-Xlint:deprecation`)
