class Mountain {
    private String name;
    private String country;
    private int elevation;

    public Mountain(String name, String country, int elevation) {
        this.name = name;
        this.country = country;
        this.elevation = elevation;
    }

    public String getName() {
        return name;
    }

    public String getCountry() {
        return country;
    }

    public int getElevation() {
        return elevation;
    }

    public double toMeters() {
        return elevation / 3.2808;
    }
}

public class Main {
    public static Mountain minElevation(Mountain[] mountains) {
        Mountain minMountain = mountains [0];
        for (int i = 1; i < mountains.length; i++) {
            if (mountains[i].getElevation() < minMountain.getElevation()) {
                minMountain = mountains[i];
            }
        }
        return minMountain;
    }

    public static void main(String[] args) {
        new Mountain("Chimborazo", "Ecuador", 20549),
        new Mountain("Matterhorn", "Switzerland", 14692),
        new Mountain("Olympus", "Greece(Macedonia)", 9573),
        new Mountain("Everest", "Nepal", 29029),
        new Mountain("Mount Marcy - Adirondacks", "United States", 5344),
        new Mountain("Mount Mitchell - Blue Ridge", "United States", 9719)
    };

    for (Mountain mountain : mountains) {
        System.out.println("Mountain: " + mountain.getName());
        System.out.println("Country: " + mountain.getCountry());
        System.out.println("Elevation (feet): " + mountain.getElevation());
        System.out.println("Elevation (meters): " + mountain.toMeters());
        System.out.println();
    }

    Mountain shortestMountain = minElevation(mountains);
    System.out.println("Shortest Mountain Name: " + shortestMountain.getName());
    System.out.println("Shortest Mountain Elevation (feet): " + shortestMountain.getElevation());
    }
}