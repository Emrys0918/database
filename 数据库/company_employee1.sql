-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: localhost    Database: company
-- ------------------------------------------------------
-- Server version	8.0.34

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `employee1`
--

DROP TABLE IF EXISTS `employee1`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `employee1` (
  `ID` int NOT NULL,
  `name` varchar(45) COLLATE utf8mb3_bin NOT NULL,
  `Incumbency` varchar(45) COLLATE utf8mb3_bin NOT NULL,
  `status` varchar(45) COLLATE utf8mb3_bin NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `id3` (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3 COLLATE=utf8mb3_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee1`
--

LOCK TABLES `employee1` WRITE;
/*!40000 ALTER TABLE `employee1` DISABLE KEYS */;
INSERT INTO `employee1` VALUES (2023001,'employee1','yes','ADMIN'),(2023002,'employee2','yes','HR'),(2023003,'employee3','yes','HR'),(2023004,'employee4','yes','HR'),(2023005,'employee5','yes','RA'),(2023006,'employee6','yes','RA'),(2023007,'employee7','yes','RA'),(2023008,'employee8','yes','RA'),(2023009,'employee9','yes','RA'),(2023010,'employee10','yes','RA'),(2023011,'employee11','yes','RA'),(2023012,'employee12','yes','RA'),(2023013,'employee13','yes','RA'),(2023014,'employee14','yes','RA'),(2023015,'employee15','yes','RA'),(2023016,'employee16','yes','RA'),(2023017,'employee17','yes','RA'),(2023018,'employee18','yes','RA'),(2023019,'employee19','yes','RA'),(2023020,'employee20','yes','RA'),(2023021,'employee21','yes','RA'),(2023022,'employee22','yes','RA'),(2023023,'employee23','yes','RA'),(2023024,'employee24','yes','RA'),(2023025,'employee25','yes','RA'),(2023026,'employee26','yes','RA'),(2023027,'employee27','yes','RA'),(2023028,'employee28','yes','RA'),(2023029,'employee29','yes','RA'),(2023030,'employee30','yes','RA'),(2023031,'employee31','yes','RA'),(2023032,'employee32','yes','RA'),(2023033,'employee33','yes','RA'),(2023034,'employee34','yes','RA'),(2023035,'employee35','yes','RA'),(2023036,'employee36','yes','RA'),(2023037,'employee37','yes','RA'),(2023038,'employee38','yes','RA'),(2023039,'employee39','yes','RA'),(2023040,'employee40','yes','RA'),(2023041,'employee41','yes','RA'),(2023042,'employee42','yes','RA'),(2023043,'employee43','yes','RA'),(2023044,'employee44','yes','RA'),(2023045,'employee45','yes','RA'),(2023046,'employee46','yes','RA'),(2023047,'employee47','yes','RA'),(2023048,'employee48','yes','RA'),(2023049,'employee49','yes','RA'),(2023050,'employee50','yes','RA'),(2023051,'employee51','yes','RA'),(2023052,'employee52','yes','RA'),(2023053,'employee53','yes','RA'),(2023054,'employee54','yes','RA'),(2023055,'employee55','yes','RA'),(2023056,'employee56','yes','RA'),(2023057,'employee57','yes','RA'),(2023058,'employee58','yes','RA'),(2023059,'employee59','yes','RA'),(2023060,'employee60','yes','RA'),(2023061,'employee61','yes','RA'),(2023062,'employee62','yes','RA'),(2023063,'employee63','yes','RA'),(2023064,'employee64','yes','RA'),(2023065,'employee65','yes','RA'),(2023066,'employee66','yes','RA'),(2023067,'employee67','yes','RA'),(2023068,'employee68','yes','RA'),(2023069,'employee69','yes','RA'),(2023070,'employee70','yes','RA'),(2023071,'employee71','yes','RA'),(2023072,'employee72','yes','RA'),(2023073,'employee73','yes','RA'),(2023074,'employee74','yes','RA'),(2023075,'employee75','yes','RA'),(2023076,'employee76','yes','RA'),(2023077,'employee77','yes','RA'),(2023078,'employee78','yes','RA'),(2023079,'employee79','yes','RA'),(2023080,'employee80','yes','RA'),(2023081,'employee81','yes','RA'),(2023082,'employee82','yes','RA'),(2023083,'employee83','yes','RA'),(2023084,'employee84','yes','RA'),(2023085,'employee85','yes','RA'),(2023086,'employee86','yes','RA'),(2023087,'employee87','yes','RA'),(2023088,'employee88','yes','RA'),(2023089,'employee89','yes','RA'),(2023090,'employee90','yes','RA'),(2023091,'employee91','yes','RA'),(2023092,'employee92','yes','RA'),(2023093,'employee93','yes','RA'),(2023094,'employee94','yes','RA'),(2023095,'employee95','yes','RA'),(2023096,'employee96','yes','RA'),(2023097,'employee97','yes','RA'),(2023098,'employee98','yes','RA'),(2023099,'employee99','yes','RA'),(2023100,'employee100','yes','RA'),(2023101,'employee101','yes','RA'),(2023102,'employee102','yes','RA'),(2023103,'employee103','yes','RA'),(2023104,'employee104','yes','RA'),(2023105,'employee105','yes','RA'),(2023106,'employee106','yes','RA'),(2023107,'employee107','yes','RA'),(2023108,'employee108','yes','RA'),(2023109,'employee109','yes','RA'),(2023110,'employee110','yes','RA'),(2023111,'employee111','yes','RA'),(2023112,'employee112','yes','RA'),(2023113,'employee113','yes','RA'),(2023114,'employee114','yes','RA'),(2023115,'employee115','yes','RA'),(2023116,'employee116','yes','RA'),(2023117,'employee117','yes','RA'),(2023118,'employee118','yes','RA'),(2023119,'employee119','yes','RA'),(2023120,'employee120','yes','RA'),(2023121,'employee121','yes','RA'),(2023122,'employee122','yes','RA'),(2023123,'employee123','yes','RA'),(2023124,'employee124','yes','RA'),(2023125,'employee125','yes','RA'),(2023126,'employee126','yes','RA'),(2023127,'employee127','yes','RA'),(2023128,'employee128','yes','RA'),(2023129,'employee129','yes','RA'),(2023130,'employee130','yes','RA'),(2023131,'employee131','yes','RA'),(2023132,'employee132','yes','RA'),(2023133,'employee133','yes','RA'),(2023134,'employee134','yes','RA'),(2023135,'employee135','yes','RA'),(2023136,'employee136','yes','RA'),(2023137,'employee137','yes','RA'),(2023138,'employee138','yes','RA'),(2023139,'employee139','yes','RA'),(2023140,'employee140','yes','RA'),(2023141,'employee141','yes','RA'),(2023142,'employee142','yes','RA'),(2023143,'employee143','yes','RA'),(2023144,'employee144','yes','RA'),(2023145,'employee145','yes','RA'),(2023146,'employee146','yes','RA'),(2023147,'employee147','yes','RA'),(2023148,'employee148','yes','RA'),(2023149,'employee149','yes','RA'),(2023150,'employee150','yes','RA'),(2023151,'employee151','yes','RA'),(2023152,'employee152','yes','RA'),(2023153,'employee153','yes','RA'),(2023154,'employee154','yes','RA'),(2023155,'employee155','yes','RA'),(2023156,'employee156','yes','RA'),(2023157,'employee157','yes','RA'),(2023158,'employee158','yes','RA'),(2023159,'employee159','yes','RA'),(2023160,'employee160','yes','RA'),(2023161,'employee161','yes','RA'),(2023162,'employee162','yes','RA'),(2023163,'employee163','yes','RA'),(2023164,'employee164','yes','RA'),(2023165,'employee165','yes','RA'),(2023166,'employee166','yes','RA'),(2023167,'employee167','yes','RA'),(2023168,'employee168','yes','RA'),(2023169,'employee169','yes','RA'),(2023170,'employee170','yes','NRA'),(2023171,'employee171','yes','NRA'),(2023172,'employee172','yes','NRA'),(2023173,'employee173','yes','NRA'),(2023174,'employee174','yes','NRA'),(2023175,'employee175','yes','NRA'),(2023176,'employee176','yes','NRA'),(2023177,'employee177','yes','NRA'),(2023178,'employee178','yes','NRA'),(2023179,'employee179','yes','NRA'),(2023180,'employee180','no','NULL'),(2023181,'employee181','no','NULL'),(2023182,'employee182','no','NULL'),(2023183,'employee183','no','NULL'),(2023184,'employee184','no','NULL'),(2023185,'employee185','no','NULL'),(2023186,'employee186','no','NULL'),(2023187,'employee187','no','NULL'),(2023188,'employee188','no','NULL'),(2023189,'employee189','no','NULL'),(2023190,'employee190','no','NULL'),(2023191,'employee191','no','NULL'),(2023192,'employee192','no','NULL'),(2023193,'employee193','no','NULL'),(2023194,'employee194','no','NULL'),(2023195,'employee195','no','NULL'),(2023196,'employee196','no','NULL'),(2023197,'employee197','no','NULL'),(2023198,'employee198','no','NULL'),(2023199,'employee199','no','NULL'),(2023200,'employee200','no','NULL'),(2023202,'lisi','no','NULL');
/*!40000 ALTER TABLE `employee1` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-12-19  2:26:09
