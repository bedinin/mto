
-- -----------------------------------------------------
-- procedure get_nomenclature_to_devisions
-- -----------------------------------------------------

USE `mto`;
DROP procedure IF EXISTS `mto`.`get_nomenclature_to_devisions`;
SHOW WARNINGS;

DELIMITER $$
USE `mto`$$
CREATE PROCEDURE `mto`.`get_nomenclature_to_devisions` (IN i_ovd_id INT, IN i_divisions_id INT)
BEGIN
	SELECT nomenclature_to_devisions.id as id, nomenclature_to_devisions.necessary as necessary, nomenclature_to_devisions.ovd_id as ovd_id, nomenclature_to_devisions.divisions_id as divisions_id, nomenclature_to_devisions.nomenclature_id as nomenclature_id, nomenclature.necessary as nomenclature_necessary FROM nomenclature_to_devisions, nomenclature WHERE nomenclature_to_devisions.ovd_id = i_ovd_id AND nomenclature_to_devisions.divisions_id = i_divisions_id AND nomenclature_to_devisions.nomenclature_id=nomenclature.id AND nomenclature_to_devisions.del = TRUE;
END$$

DELIMITER ;
SHOW WARNINGS;
