plugins {
    id("cpp-application") // or 'cpp-library'
    id("cpp-unit-test")
}

group   = "com.ronreynolds"
version = "0.0.1-SNAPSHOT"


repositories {
    mavenCentral()
    mavenLocal()
}

//application {
//    dependencies {
//        implementation(project(":common"))
//    }
//}
