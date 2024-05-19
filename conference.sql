/*
 Navicat Premium Data Transfer

 Source Server         : xytong
 Source Server Type    : MySQL
 Source Server Version : 80030
 Source Host           : localhost:3306
 Source Schema         : conference

 Target Server Type    : MySQL
 Target Server Version : 80030
 File Encoding         : 65001

 Date: 19/05/2024 22:54:23
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for conference_reserves
-- ----------------------------
DROP TABLE IF EXISTS `conference_reserves`;
CREATE TABLE `conference_reserves`  (
  `reserves_id` int UNSIGNED NOT NULL AUTO_INCREMENT,
  `reserves_user` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `reserves_number` int NOT NULL,
  `reserves_stime` datetime NOT NULL,
  `reserves_etime` datetime NOT NULL,
  `reserves_subject` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `reserves_capacity` int NOT NULL,
  `reserves_state` int NOT NULL,
  `reserves_describe` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  PRIMARY KEY (`reserves_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of conference_reserves
-- ----------------------------

-- ----------------------------
-- Table structure for conference_rooms
-- ----------------------------
DROP TABLE IF EXISTS `conference_rooms`;
CREATE TABLE `conference_rooms`  (
  `rooms_id` int UNSIGNED NOT NULL AUTO_INCREMENT,
  `rooms_name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `rooms_number` int NOT NULL,
  `rooms_capacity` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `rooms_square` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `rooms_describe` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `rooms_reserve` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  PRIMARY KEY (`rooms_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of conference_rooms
-- ----------------------------

-- ----------------------------
-- Table structure for conference_users
-- ----------------------------
DROP TABLE IF EXISTS `conference_users`;
CREATE TABLE `conference_users`  (
  `users_id` int UNSIGNED NOT NULL AUTO_INCREMENT,
  `users_name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `users_password` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `users_author` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  PRIMARY KEY (`users_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of conference_users
-- ----------------------------
INSERT INTO `conference_users` VALUES (1, 'user', 'user', '0');
INSERT INTO `conference_users` VALUES (2, 'admin', 'admin', '1');

SET FOREIGN_KEY_CHECKS = 1;
