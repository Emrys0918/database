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
-- Table structure for table `attendance`
--

DROP TABLE IF EXISTS `attendance`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `attendance` (
  `ID` int NOT NULL,
  `name` varchar(45) COLLATE utf8mb3_bin NOT NULL,
  `Attend` int NOT NULL,
  `Absence` int NOT NULL,
  `overtime` int NOT NULL,
  `businesstrip` int NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3 COLLATE=utf8mb3_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `attendance`
--

LOCK TABLES `attendance` WRITE;
/*!40000 ALTER TABLE `attendance` DISABLE KEYS */;
INSERT INTO `attendance` VALUES (2023007,'employee7',30,0,5,3),(2023008,'employee8',30,2,5,3),(2023009,'employee9',30,0,5,3),(2023010,'employee10',30,0,5,3),(2023011,'employee11',30,0,5,3),(2023012,'employee12',30,0,5,3),(2023013,'employee13',30,0,5,3),(2023014,'employee14',30,0,5,3),(2023015,'employee15',30,0,5,3),(2023016,'employee16',30,0,5,3),(2023017,'employee17',30,0,5,3),(2023018,'employee18',30,0,5,3),(2023019,'employee19',30,5,5,3),(2023020,'employee20',30,0,5,3),(2023021,'employee21',30,0,5,3),(2023022,'employee22',30,0,5,3),(2023023,'employee23',30,0,5,3),(2023024,'employee24',30,0,5,3),(2023025,'employee25',30,0,5,3),(2023026,'employee26',30,0,5,3),(2023027,'employee27',30,0,5,3),(2023028,'employee28',30,0,5,3),(2023029,'employee29',30,0,5,3),(2023030,'employee30',30,0,5,3),(2023031,'employee31',30,0,5,3),(2023032,'employee32',30,0,5,3),(2023033,'employee33',30,0,5,3),(2023034,'employee34',30,0,5,3),(2023035,'employee35',30,0,5,3),(2023036,'employee36',30,0,5,3),(2023037,'employee37',30,0,5,3),(2023038,'employee38',30,0,5,3),(2023039,'employee39',30,6,5,3),(2023040,'employee40',30,0,5,3),(2023041,'employee41',30,0,5,3),(2023042,'employee42',30,0,5,3),(2023043,'employee43',30,0,5,3),(2023044,'employee44',30,0,5,3),(2023045,'employee45',30,0,5,3),(2023046,'employee46',30,0,5,3),(2023047,'employee47',30,0,5,3),(2023048,'employee48',30,0,5,3),(2023049,'employee49',30,0,5,3),(2023050,'employee50',30,0,5,3),(2023051,'employee51',30,0,5,3),(2023052,'employee52',30,0,5,3),(2023053,'employee53',30,0,5,3),(2023054,'employee54',30,7,5,3),(2023055,'employee55',30,0,5,3),(2023056,'employee56',30,0,5,3),(2023057,'employee57',30,0,5,3),(2023058,'employee58',30,0,5,3),(2023059,'employee59',30,0,5,3),(2023060,'employee60',30,0,5,3),(2023061,'employee61',30,0,5,3),(2023062,'employee62',30,0,5,3),(2023063,'employee63',30,0,5,3),(2023064,'employee64',30,0,5,3),(2023065,'employee65',30,0,5,3),(2023066,'employee66',30,0,5,3),(2023067,'employee67',30,0,5,3),(2023068,'employee68',30,0,5,3),(2023069,'employee69',30,0,5,3),(2023070,'employee70',30,0,5,3),(2023071,'employee71',30,0,5,3),(2023072,'employee72',30,8,5,3),(2023073,'employee73',30,0,5,3),(2023074,'employee74',30,0,5,3),(2023075,'employee75',30,0,5,3),(2023076,'employee76',30,0,5,3),(2023077,'employee77',30,0,5,3),(2023078,'employee78',30,0,5,3),(2023079,'employee79',30,0,5,3),(2023080,'employee80',30,0,5,3),(2023081,'employee81',30,0,5,3),(2023082,'employee82',30,0,5,3),(2023083,'employee83',30,0,5,3),(2023084,'employee84',30,0,5,3),(2023085,'employee85',30,0,5,3),(2023086,'employee86',30,0,5,3),(2023087,'employee87',30,0,5,3),(2023088,'employee88',30,0,5,3),(2023089,'employee89',30,0,5,3),(2023090,'employee90',30,0,5,3),(2023091,'employee91',30,0,5,3),(2023092,'employee92',30,0,5,3),(2023093,'employee93',30,0,5,3),(2023094,'employee94',30,0,5,3),(2023095,'employee95',30,0,5,3),(2023096,'employee96',30,0,5,3),(2023097,'employee97',30,0,5,3),(2023098,'employee98',30,0,5,3),(2023099,'employee99',30,0,5,3),(2023100,'employee100',30,0,5,3),(2023101,'employee101',30,0,5,3),(2023102,'employee102',30,0,5,3),(2023103,'employee103',30,0,5,3),(2023104,'employee104',30,0,5,3),(2023105,'employee105',30,0,5,3),(2023106,'employee106',30,0,5,3),(2023107,'employee107',30,0,5,3),(2023108,'employee108',30,0,5,3),(2023109,'employee109',30,0,5,3),(2023110,'employee110',30,0,5,3),(2023111,'employee111',30,0,5,3),(2023112,'employee112',30,0,5,3),(2023113,'employee113',30,0,5,3),(2023114,'employee114',30,0,5,3),(2023115,'employee115',30,0,5,3),(2023116,'employee116',30,0,5,3),(2023117,'employee117',30,0,5,3),(2023118,'employee118',30,0,5,3),(2023119,'employee119',30,0,5,3),(2023120,'employee120',30,0,5,3),(2023121,'employee121',30,0,5,3),(2023122,'employee122',30,0,5,3),(2023123,'employee123',30,0,5,3),(2023124,'employee124',30,0,5,3),(2023125,'employee125',30,0,5,3),(2023126,'employee126',30,0,5,3),(2023127,'employee127',30,0,5,3),(2023128,'employee128',30,0,5,3),(2023129,'employee129',30,0,5,3),(2023130,'employee130',30,0,5,3),(2023131,'employee131',30,0,5,3),(2023132,'employee132',30,0,5,3),(2023133,'employee133',30,0,5,3),(2023134,'employee134',30,0,5,3),(2023135,'employee135',30,0,5,3),(2023136,'employee136',30,0,5,3),(2023137,'employee137',30,0,5,3),(2023138,'employee138',30,0,5,3),(2023139,'employee139',30,0,5,3),(2023140,'employee140',30,0,5,3),(2023141,'employee141',30,0,5,3),(2023142,'employee142',30,0,5,3),(2023143,'employee143',30,0,5,3),(2023144,'employee144',30,0,5,3),(2023145,'employee145',30,0,5,3),(2023146,'employee146',30,0,5,3),(2023147,'employee147',30,0,5,3),(2023148,'employee148',30,0,5,3),(2023149,'employee149',30,0,5,3),(2023150,'employee150',30,0,5,3),(2023151,'employee151',30,0,5,3),(2023152,'employee152',30,0,5,3),(2023153,'employee153',30,0,5,3),(2023154,'employee154',30,0,5,3),(2023155,'employee155',30,0,5,3),(2023156,'employee156',30,0,5,3),(2023157,'employee157',30,0,5,3),(2023158,'employee158',30,0,5,3),(2023159,'employee159',30,0,5,3),(2023160,'employee160',30,0,5,3),(2023161,'employee161',30,0,5,3),(2023162,'employee162',30,0,5,3),(2023163,'employee163',30,0,5,3),(2023164,'employee164',30,0,5,3),(2023165,'employee165',30,0,5,3),(2023166,'employee166',30,0,5,3),(2023167,'employee167',30,0,5,3),(2023168,'employee168',30,0,5,3),(2023169,'employee169',30,0,5,3),(2023170,'employee170',30,0,5,3),(2023171,'employee171',30,0,5,3),(2023172,'employee172',30,0,5,3),(2023173,'employee173',30,0,5,3),(2023174,'employee174',30,0,5,3),(2023175,'employee175',30,0,5,3),(2023176,'employee176',30,0,5,3),(2023177,'employee177',30,0,5,3),(2023178,'employee178',30,0,5,3),(2023179,'employee179',30,0,5,3),(2023180,'employee180',999,999,999,999),(2023181,'employee181',999,999,999,999),(2023182,'employee182',999,999,999,999),(2023183,'employee183',999,999,999,999),(2023184,'employee184',999,999,999,999),(2023185,'employee185',999,999,999,999),(2023186,'employee186',999,999,999,999),(2023187,'employee187',999,999,999,999),(2023188,'employee188',999,999,999,999),(2023189,'employee189',999,999,999,999),(2023190,'employee190',999,999,999,999),(2023191,'employee191',999,999,999,999),(2023192,'employee192',999,999,999,999),(2023193,'employee193',999,999,999,999),(2023194,'employee194',999,999,999,999),(2023195,'employee195',999,999,999,999),(2023196,'employee196',999,999,999,999),(2023197,'employee197',999,999,999,999),(2023198,'employee198',999,999,999,999),(2023199,'employee199',999,999,999,999),(2023200,'employee200',999,999,999,999),(2023202,'lisi',999,999,999,999);
/*!40000 ALTER TABLE `attendance` ENABLE KEYS */;
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
