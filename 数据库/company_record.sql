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
-- Table structure for table `record`
--

DROP TABLE IF EXISTS `record`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `record` (
  `ID` int NOT NULL,
  `name` varchar(45) COLLATE utf8mb3_bin NOT NULL,
  `Dateoflasttraining` varchar(45) CHARACTER SET utf8mb3 COLLATE utf8mb3_bin NOT NULL,
  `TrainingStatus` varchar(45) CHARACTER SET utf8mb3 COLLATE utf8mb3_bin NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `id4` (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3 COLLATE=utf8mb3_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `record`
--

LOCK TABLES `record` WRITE;
/*!40000 ALTER TABLE `record` DISABLE KEYS */;
INSERT INTO `record` VALUES (2023002,'employee2','2023/12/1','NT'),(2023003,'employee3','2023/12/1','NT'),(2023004,'employee4','2023/12/1','NT'),(2023005,'employee5','2023/12/1','NT'),(2023006,'employee6','2023/12/1','NT'),(2023007,'employee7','2023/12/1','NT'),(2023008,'employee8','2023/12/1','NT'),(2023009,'employee9','2023/12/1','NT'),(2023010,'employee10','2023/12/1','NT'),(2023011,'employee11','2023/12/1','NT'),(2023012,'employee12','2023/12/1','NT'),(2023013,'employee13','2023/12/1','NT'),(2023014,'employee14','2023/12/1','NT'),(2023015,'employee15','2023/12/1','NT'),(2023016,'employee16','2023/12/1','NT'),(2023017,'employee17','2023/12/1','NT'),(2023018,'employee18','2023/12/1','NT'),(2023019,'employee19','2023/12/1','NT'),(2023020,'employee20','2023/12/1','NT'),(2023021,'employee21','2023/12/1','NT'),(2023022,'employee22','2023/12/1','NT'),(2023023,'employee23','2023/12/1','NT'),(2023024,'employee24','2023/12/1','NT'),(2023025,'employee25','2023/12/1','NT'),(2023026,'employee26','2023/12/1','NT'),(2023027,'employee27','2023/12/1','NT'),(2023028,'employee28','2023/12/1','NT'),(2023029,'employee29','2023/12/1','NT'),(2023030,'employee30','2023/12/1','NT'),(2023031,'employee31','2023/12/1','NT'),(2023032,'employee32','2023/12/1','NT'),(2023033,'employee33','2023/12/1','NT'),(2023034,'employee34','2023/12/1','NT'),(2023035,'employee35','2023/12/1','NT'),(2023036,'employee36','2023/12/1','NT'),(2023037,'employee37','2023/12/1','NT'),(2023038,'employee38','2023/12/1','NT'),(2023039,'employee39','2023/12/1','NT'),(2023040,'employee40','2023/12/1','NT'),(2023041,'employee41','2023/12/1','NT'),(2023042,'employee42','2023/12/1','NT'),(2023043,'employee43','2023/12/1','NT'),(2023044,'employee44','2023/12/1','NT'),(2023045,'employee45','2023/12/1','NT'),(2023046,'employee46','2023/12/1','NT'),(2023047,'employee47','2023/12/1','NT'),(2023048,'employee48','2023/12/1','NT'),(2023049,'employee49','2023/12/1','NT'),(2023050,'employee50','2023/12/1','NT'),(2023051,'employee51','2023/12/1','NT'),(2023052,'employee52','2023/12/1','NT'),(2023053,'employee53','2023/12/1','NT'),(2023054,'employee54','2023/12/1','NT'),(2023055,'employee55','2023/12/1','NT'),(2023056,'employee56','2023/12/1','NT'),(2023057,'employee57','2023/12/1','NT'),(2023058,'employee58','2023/12/1','NT'),(2023059,'employee59','2023/12/1','NT'),(2023060,'employee60','2023/12/1','NT'),(2023061,'employee61','2023/12/1','NT'),(2023062,'employee62','2023/12/1','NT'),(2023063,'employee63','2023/12/1','NT'),(2023064,'employee64','2023/12/1','NT'),(2023065,'employee65','2023/12/1','NT'),(2023066,'employee66','2023/12/1','NT'),(2023067,'employee67','2023/12/1','NT'),(2023068,'employee68','2023/12/1','NT'),(2023069,'employee69','2023/12/1','NT'),(2023070,'employee70','2023/12/1','NT'),(2023071,'employee71','2023/12/1','NT'),(2023072,'employee72','2023/12/1','NT'),(2023073,'employee73','2023/12/1','NT'),(2023074,'employee74','2023/12/1','NT'),(2023075,'employee75','2023/12/1','NT'),(2023076,'employee76','2023/12/1','NT'),(2023077,'employee77','2023/12/1','NT'),(2023078,'employee78','2023/12/1','NT'),(2023079,'employee79','2023/12/1','NT'),(2023080,'employee80','2023/12/1','NT'),(2023081,'employee81','2023/12/1','NT'),(2023082,'employee82','2023/12/1','NT'),(2023083,'employee83','2023/12/1','NT'),(2023084,'employee84','2023/12/1','NT'),(2023085,'employee85','2023/12/1','NT'),(2023086,'employee86','2023/12/1','NT'),(2023087,'employee87','2023/12/1','NT'),(2023088,'employee88','2023/12/1','NT'),(2023089,'employee89','2023/12/1','NT'),(2023090,'employee90','2023/12/1','NT'),(2023091,'employee91','2023/12/1','NT'),(2023092,'employee92','2023/12/1','NT'),(2023093,'employee93','2023/12/1','NT'),(2023094,'employee94','2023/12/1','NT'),(2023095,'employee95','2023/12/1','NT'),(2023096,'employee96','2023/12/1','NT'),(2023097,'employee97','2023/12/1','NT'),(2023098,'employee98','2023/12/1','NT'),(2023099,'employee99','2023/12/1','NT'),(2023100,'employee100','2023/12/1','NT'),(2023101,'employee101','2023/12/1','NT'),(2023102,'employee102','2023/12/1','NT'),(2023103,'employee103','2023/12/1','NT'),(2023104,'employee104','2023/12/1','NT'),(2023105,'employee105','2023/12/1','NT'),(2023106,'employee106','2023/12/1','NT'),(2023107,'employee107','2023/12/1','NT'),(2023108,'employee108','2023/12/1','NT'),(2023109,'employee109','2023/12/1','NT'),(2023110,'employee110','2023/12/1','NT'),(2023111,'employee111','2023/12/1','NT'),(2023112,'employee112','2023/12/1','NT'),(2023113,'employee113','2023/12/1','NT'),(2023114,'employee114','2023/12/1','NT'),(2023115,'employee115','2023/12/1','NT'),(2023116,'employee116','2023/12/1','NT'),(2023117,'employee117','2023/12/1','NT'),(2023118,'employee118','2023/12/1','NT'),(2023119,'employee119','2023/12/1','NT'),(2023120,'employee120','2023/12/1','NT'),(2023121,'employee121','2023/12/1','NT'),(2023122,'employee122','2023/12/1','NT'),(2023123,'employee123','2023/12/1','NT'),(2023124,'employee124','2023/12/1','NT'),(2023125,'employee125','2023/12/1','NT'),(2023126,'employee126','2023/12/1','NT'),(2023127,'employee127','2023/12/1','NT'),(2023128,'employee128','2023/12/1','NT'),(2023129,'employee129','2023/12/1','NT'),(2023130,'employee130','2023/12/1','NT'),(2023131,'employee131','2023/12/1','NT'),(2023132,'employee132','2023/12/1','NT'),(2023133,'employee133','2023/12/1','NT'),(2023134,'employee134','2023/12/1','NT'),(2023135,'employee135','2023/12/1','NT'),(2023136,'employee136','2023/12/1','NT'),(2023137,'employee137','2023/12/1','NT'),(2023138,'employee138','2023/12/1','NT'),(2023139,'employee139','2023/12/1','NT'),(2023140,'employee140','2023/12/1','NT'),(2023141,'employee141','2023/12/1','NT'),(2023142,'employee142','2023/12/1','NT'),(2023143,'employee143','2023/12/1','NT'),(2023144,'employee144','2023/12/1','NT'),(2023145,'employee145','2023/12/1','NT'),(2023146,'employee146','2023/12/1','NT'),(2023147,'employee147','2023/12/1','NT'),(2023148,'employee148','2023/12/1','NT'),(2023149,'employee149','2023/12/1','NT'),(2023150,'employee150','2023/12/1','NT'),(2023151,'employee151','2023/12/1','NT'),(2023152,'employee152','2023/12/1','NT'),(2023153,'employee153','2023/12/1','NT'),(2023154,'employee154','2023/12/1','NT'),(2023155,'employee155','2023/12/1','NT'),(2023156,'employee156','2023/12/1','NT'),(2023157,'employee157','2023/12/1','NT'),(2023158,'employee158','2023/12/1','NT'),(2023159,'employee159','2023/12/1','NT'),(2023160,'employee160','2023/12/1','NT'),(2023161,'employee161','2023/12/1','NT'),(2023162,'employee162','2023/12/1','NT'),(2023163,'employee163','2023/12/1','NT'),(2023164,'employee164','2023/12/1','NT'),(2023165,'employee165','2023/12/1','NT'),(2023166,'employee166','2023/12/1','NT'),(2023167,'employee167','2023/12/1','NT'),(2023168,'employee168','2023/12/1','NT'),(2023169,'employee169','2023/12/1','NT'),(2023170,'employee170','2023/12/1','NT'),(2023171,'employee171','2023/12/1','NT'),(2023172,'employee172','2023/12/1','NT'),(2023173,'employee173','2023/12/1','NT'),(2023174,'employee174','2023/12/1','NT'),(2023175,'employee175','2023/12/19','NT'),(2023176,'employee176','2023/12/1','NT'),(2023177,'employee177','2023/12/1','NT'),(2023178,'employee178','2023/12/14','T'),(2023179,'employee179','2023/12/14','NT'),(2023180,'employee180','NULL','NULL'),(2023181,'employee181','NULL','NULL'),(2023182,'employee182','NULL','NULL'),(2023183,'employee183','NULL','NULL'),(2023184,'employee184','NULL','NULL'),(2023185,'employee185','NULL','NULL'),(2023186,'employee186','NULL','NULL'),(2023187,'employee187','NULL','NULL'),(2023188,'employee188','NULL','NULL'),(2023189,'employee189','NULL','NULL'),(2023190,'employee190','NULL','NULL'),(2023191,'employee191','NULL','NULL'),(2023192,'employee192','NULL','NULL'),(2023193,'employee193','NULL','NULL'),(2023194,'employee194','NULL','NULL'),(2023195,'employee195','NULL','NULL'),(2023196,'employee196','NULL','NULL'),(2023197,'employee197','NULL','NULL'),(2023198,'employee198','NULL','NULL'),(2023199,'employee199','NULL','NULL'),(2023200,'employee200','NULL','NULL'),(2023202,'lisi','NULL','NULL');
/*!40000 ALTER TABLE `record` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-12-19  2:26:10
