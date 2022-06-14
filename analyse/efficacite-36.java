package eraser;

public class EraserEfficace {
	/**
	 * Méthode permettant de supprimer les espaces isolés dans un texte
	 * S'il existe des espaces consécutifs, la méthode ne supprime aucun de ces espaces
	 * Cette méthode est efficace (en terme de temps) quand il est question de textes
	 * contenant beaucoup de caractères.
	 * Pour des textes avec peu de caractères, privilégier la méthode erase du fichier
	 * solution2_Java.
	 * @param str : texte à traiter
	 * @return String : le texte modifié
	 * @see EraserSimple
	 */
	public static String erase(String str) {		
		boolean findChar = true;
		int strLength = str.length();
		for(int i = 0; i<strLength; i++) {
			if(findChar) {
				if(str.charAt(i) == 32){
					if(i+1<strLength){
						if(!(str.charAt(i+1) == 32)) {
							str = str.substring(0, i) + str.substring(i+1);
							strLength--;
						}else {
							findChar=false;
						}
					}else {
						str = str.substring(0, i);
						strLength--;
					}
				}
			}else {
				if(str.charAt(i) != 32) {
					findChar=true;
				}
			}
		}
		return str;
	}
}
