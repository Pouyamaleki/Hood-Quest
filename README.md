# 🐺 HoodQuest - Red Riding Hood Adventure Game

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)]()
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-brightgreen.svg)]()

---

<a id="overview"></a>

## 📖 Overview

**HoodQuest** is a command-line based adventure game where the player controls "Little Red Riding Hood" and must navigate through a dangerous forest to reach Grandma's house (Node **V**) while avoiding the cunning Wolf.  
This project was developed as the final project for the **"Data Structures & Algorithms"** course, demonstrating the practical application of various data structures and pathfinding algorithms in an interactive game environment.

### 🎯 Game Objective

- Guide Red Riding Hood from her starting position to Grandmother's house (Node V)
- Avoid being caught by the Wolf
- Earn the highest score by following optimal paths
- Compete with other players through the leaderboard system

## 📋 Table of Contents

- [Overview](overview)
- [Project Structure](project-structure)
- [Key Features](key-features)
- [Game Map](game-map)
- [Installation & Setup](installation-setup)
- [Game Guide](game-guide)
- [How It Works](how-it-work)
- [Technical Details](technical-details)
- [Development Team](development-team)
- [Licence](licence)
- [Contact US](contact-us)
- [Acknowlegment](acknowledgment)
- [Show Your Support](show-your-support)

<a id="project-structure"></a>

## 📂 Project Structure

```
HOOD_QUEST/
│
├── 📂Include/
│   │
│   ├──📂Controller/
│   │   ├── 📄InputHandler.h
│   │   └── 📄InputHandler.h
│   │
│   ├── 📂Model/
│   │   │
│   │   ├── 📂Algorithms/
│   │   │   ├── 📂PathFinders/
│   │   │   │   ├── 📄AStar.h
│   │   │   │   └── 📄Dijkstra.h
│   │   │   └── 📄BFS.h
│   │   │
│   │   ├── 📂Core/
│   │   │   ├── 📂Characters/
│   │   │   │   ├── 📄Player.h
│   │   │   │   └── 📄Wolf.h
│   │   │   └── 📂Game/
│   │   │       ├── 📄GameEngine.h
│   │   │       ├── 📄GameState.h
│   │   │       └── 📄Move.h
│   │   │
│   │   ├── 📂DataStructure/
│   │   │   ├── 📄BST.h
│   │   │   ├── 📄Graph.h
│   │   │   ├── 📄Maxheap.h
│   │   │   └── 📄Stack.h
│   │   │
│   │   └── 📂Users/
│   │       ├── 📄Hash.h
│   │       ├── 📄User.h
│   │       └── 📄UserManager.h
│   │
│   └── 📂View/
│       └── 📄CLIView.h
│
├── 📂src/
│
├── 📂Include/
│   │
│   ├──📂Controller/
│   │   ├── 📄InputHandler.cpp
│   │   ├── 📜save.txt
│   │   └── 📄InputHandler.cpp
│   │
│   ├── 📂Model/
│   │   │
│   │   ├── 📂Algorithms/
│   │   │   ├── 📂PathFinders/
│   │   │   │   ├── 📄AStar.cpp
│   │   │   │   └── 📄Dijkstra.cpp
│   │   │   └── 📄BFS.cpp
│   │   │
│   │   ├── 📂Core/
│   │   │   ├── 📂Characters/
│   │   │   │   ├── 📄Player.cpp
│   │   │   │   └── 📄Wolf.cpp
│   │   │   └── 📂Game/
│   │   │       ├── 📄GameEngine.cpp
│   │   │       ├── 📄GameState.cpp
│   │   │       └── 📄Move.cpp
│   │   │
│   │   ├── 📂DataStructure/
│   │   │   ├── 📄BST.cpp
│   │   │   ├── 📄Graph.cpp
│   │   │   ├── 📄Maxheap.cpp
│   │   │   └── 📄Stack.cpp
│   │   │
│   │   └── 📂Users/
│   │       ├── 📄Hash.cpp
│   │       ├── 📄User.cpp
│   │       └── 📄UserManager.cpp
│   │
│   └── 📂View/
│       └── 📄CLIView.cpp
│
├── 📜.gitignore
│
├── 📜CMakeLists.txt
│
├── 📄main.cpp
│
└── 📜README.md

```

<a id="key-features"></a>

## ✨ Key Features

### 🔐 User Management

- **Secure Authentication**: Create accounts with hashed passwords
- **Persistent Storage**: User data automatically saved to `save.txt`
- **Score Tracking**: Individual player scores maintained across sessions

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HoodQuest - Tables</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        h2 .emoji {
            margin-right: 8px;
        }

        /* Table Styles */
        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: top;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        /* Bold text in tables */
        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        /* Responsive */
        @media (max-width: 600px) {
            body {
                padding: 16px;
            }

            table {
                font-size: 13px;
            }

            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>

</head>
<body>

    <!-- ============================================ -->
    <!-- 🧠 ADVANCED ALGORITHMS TABLE -->
    <!-- ============================================ -->

    <h2>🧠 Advanced Algorithms</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Algorithm</th>
                    <th>Purpose</th>
                    <th>Application</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">Dijkstra</span></td>
                    <td>Shortest path finding</td>
                    <td>Recommends optimal route to destination</td>
                </tr>
                <tr>
                    <td><span class="highlight">A*</span></td>
                    <td>Heuristic-based pathfinding</td>
                    <td>Smarter route recommendation with estimated distances</td>
                </tr>
                <tr>
                    <td><span class="highlight">BFS</span></td>
                    <td>Breadth-first search</td>
                    <td>Wolf movement towards player</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 📊 DATA STRUCTURES TABLE -->
    <!-- ============================================ -->

    <h2>📊 Data Structures</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Structure</th>
                    <th>Usage</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">BST</span></td>
                    <td>Fast user search and score updates</td>
                </tr>
                <tr>
                    <td><span class="highlight">MaxHeap</span></td>
                    <td>Leaderboard (top player display)</td>
                </tr>
                <tr>
                    <td><span class="highlight">Hash Table</span></td>
                    <td>Secure password storage</td>
                </tr>
                <tr>
                    <td><span class="highlight">Stack</span></td>
                    <td>Undo functionality (move history)</td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

### 🎮 Game Mechanics

- **Turn-based Movement**: Player moves first, then Wolf
- **Dice-based Wolf Movement**: Wolf moves only on even dice rolls (50% chance)
- **Smart Scoring System**:
  - Follow recommended path: **+3 points**
  - Choose alternative path: **+1 point**
  - Reach Grandma's house: **+5 points**
  - Undo a move: **-2 points**
- **Interactive Map**: Color-coded display showing player and wolf positions

---

<a id="game-map"></a>

## 🗺️ Game Map

### In-Game Map Display

![Game Map](screenshots/game_map.png)

_The map displays all 19 nodes with weighted edges connecting them. Red indicates Red Riding Hood's position, and Blue indicates the Wolf's position._

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HoodQuest - Tables</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        h2 .emoji {
            margin-right: 8px;
        }

        /* Table Styles */
        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: top;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        /* Bold text in tables */
        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        /* Color indicators for legend */
        .color-dot {
            display: inline-block;
            width: 14px;
            height: 14px;
            border-radius: 50%;
            margin-right: 6px;
            vertical-align: middle;
            border: 1px solid #30363d;
        }

        .color-red {
            background-color: #ff4444;
        }

        .color-blue {
            background-color: #4488ff;
        }

        .color-white {
            background-color: #ffffff;
        }

        /* Responsive */
        @media (max-width: 600px) {
            body {
                padding: 16px;
            }

            table {
                font-size: 13px;
            }

            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>

</head>
<body>

    <!-- ============================================ -->
    <!-- 🧠 ADVANCED ALGORITHMS TABLE -->
    <!-- ============================================ -->

    <h2>🧠 Advanced Algorithms</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Algorithm</th>
                    <th>Purpose</th>
                    <th>Application</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">Dijkstra</span></td>
                    <td>Shortest path finding</td>
                    <td>Recommends optimal route to destination</td>
                </tr>
                <tr>
                    <td><span class="highlight">A*</span></td>
                    <td>Heuristic-based pathfinding</td>
                    <td>Smarter route recommendation with estimated distances</td>
                </tr>
                <tr>
                    <td><span class="highlight">BFS</span></td>
                    <td>Breadth-first search</td>
                    <td>Wolf movement towards player</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 📊 DATA STRUCTURES TABLE -->
    <!-- ============================================ -->

    <h2>📊 Data Structures</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Structure</th>
                    <th>Usage</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">BST</span></td>
                    <td>Fast user search and score updates</td>
                </tr>
                <tr>
                    <td><span class="highlight">MaxHeap</span></td>
                    <td>Leaderboard (top player display)</td>
                </tr>
                <tr>
                    <td><span class="highlight">Hash Table</span></td>
                    <td>Secure password storage</td>
                </tr>
                <tr>
                    <td><span class="highlight">Stack</span></td>
                    <td>Undo functionality (move history)</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 🗺️ MAP LEGEND TABLE -->
    <!-- ============================================ -->

    <h2>🗺️ Map Legend</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Color</th>
                    <th>Entity</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>
                        <span class="color-dot color-red"></span>
                        <span class="highlight">Red</span>
                    </td>
                    <td>Red Riding Hood (Player)</td>
                </tr>
                <tr>
                    <td>
                        <span class="color-dot color-blue"></span>
                        <span class="highlight">Blue</span>
                    </td>
                    <td>The Wolf</td>
                </tr>
                <tr>
                    <td>
                        <span class="color-dot color-white"></span>
                        <span class="highlight">White</span>
                    </td>
                    <td>Empty/Regular Node</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 📍 NODE INFORMATION TABLE -->
    <!-- ============================================ -->

    <h2>📍 Node Information</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Node</th>
                    <th>Location</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">V</span></td>
                    <td>🏠 Grandma's House (Destination)</td>
                </tr>
                <tr>
                    <td><span class="highlight">A-U</span></td>
                    <td>Forest Nodes (Paths)</td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

<a id="installation-setup"></a>

## 🚀 Installation & Setup

### Prerequisites

- [**MinGW32**](https://sourceforge.net/projects/mingw/) or any other c++ compiler
- [**CMake**](https://cmake.org/download/) for easier run
- [**Git**](https://git-scm.com/install/)
- Any code editor like [**VSCode**](https://code.visualstudio.com/download)
- **Terminal/Command Prompt** with ANSI color support (for colored display)

### Windows Installation

```bash
# Clone the repository
git clone <repository url>
cd Hood_Quest # Move to Hood_Quest Folder
```

```bash
mkdir build                    # Create the build Folder
cd build                       # Move to build Folder
cmake .. -G "MinGW Makefiles"  # Generate make files in build Folder
mingw32-make                   # compile the codes and make the Hood_Quest.exe in build folder
./Hood_Quest                   # run Hood_Quest.exe file
```

### Linux Installation

```bash
mkdir build      # Create the build Folder
cd build         # Move to build Folder
cmake ..         # Generate Makefiles
make             # Compile the code
./Hood_Quest     # Run the executable
```

<a id="game-guide"></a>

## 🎮 Game Guide

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HoodQuest - Game Tables</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: top;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        @media (max-width: 600px) {
            body {
                padding: 16px;
            }
            table {
                font-size: 13px;
            }
            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>

</head>
<body>

    <!-- ============================================ -->
    <!-- 🎮 MAIN MENU OPTIONS TABLE -->
    <!-- ============================================ -->

    <h2>🎮 Main Menu Options</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Option</th>
                    <th>Description</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">1</span></td>
                    <td>Create New User Account</td>
                </tr>
                <tr>
                    <td><span class="highlight">2</span></td>
                    <td>Login to Existing Account</td>
                </tr>
                <tr>
                    <td><span class="highlight">3</span></td>
                    <td>View Leaderboard</td>
                </tr>
                <tr>
                    <td><span class="highlight">4</span></td>
                    <td>Check User Score</td>
                </tr>
                <tr>
                    <td><span class="highlight">5</span></td>
                    <td>Exit Game</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 🕹️ GAME CONTROLS TABLE -->
    <!-- ============================================ -->

    <h2>🕹️ Game Controls</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Command</th>
                    <th>Description</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">A - V</span></td>
                    <td>Move to adjacent node (must be connected by edge)</td>
                </tr>
                <tr>
                    <td><span class="highlight">UNDO</span></td>
                    <td>Revert to previous position (-2 points)</td>
                </tr>
                <tr>
                    <td><span class="highlight">EXIT</span></td>
                    <td>Save progress and exit game</td>
                </tr>
            </tbody>
        </table>
    </div>

    <!-- ============================================ -->
    <!-- 🧩 ALGORITHM SELECTION TABLE -->
    <!-- ============================================ -->

    <h2>🧩 Algorithm Selection</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Option</th>
                    <th>Algorithm</th>
                    <th>Best For</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">D</span></td>
                    <td><span class="highlight">Dijkstra</span></td>
                    <td>Guaranteed shortest path</td>
                </tr>
                <tr>
                    <td><span class="highlight">A</span></td>
                    <td><span class="highlight">A*</span></td>
                    <td>Faster pathfinding with heuristic</td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

### Game Flow

1️⃣ **Login/Create** an account  
2️⃣ **Choose Algorithm** (Dijkstra or A\*)  
3️⃣ **View Map** with your position and wolf position  
4️⃣ **Move** to adjacent nodes or use **Undo**  
5️⃣ **Reach** Grandmother's house (V) to win  
6️⃣ **Avoid** the wolf at all costs!

<a id="how-it-work"></a>

## 🧠 How It Works

### Pathfinding Visualization

When you select an algorithm, the system displays:

```
Dijkstra recommended path:
A -> B -> C -> D -> E -> G -> V
Total distance: 17

A* recommended path:
A -> F -> G -> M -> S -> U -> V
Total distance: 18

```

### Scoring System Flowchart

```
          ┌────────────────────┐
          │       START        │
          └──────────┬─────────┘                      
                     │                                
                     ▼                                
          ┌────────────────────┐                      
          │    Player Move     │◄─────────────────────┐                      
          └──────────┬─────────┘                      │
                     │                                │
                     ▼                                │
          ┌────────────────────┐                      │
          │ Is move on         │                      │
          │ recommended path?  │                      │
          └──────────┬─────────┘                      │
                     │                                │
          ┌──────────┴──────────┐                     │
          ▼                     ▼                     │
     ┌────────────┐      ┌────────────┐               │
     │    YES     │      │     NO     │               │
     │ +3 points  │      │ +1 point   │               │
     └────────────┘      └────────────┘               │
          │                     │                     │
          └──────────┬──────────┘                     │
                     │                                │
                     ▼                                │
          ┌────────────────────┐                      │
          │     Wolf Move      │                      │
          │    (50% chance)    │                      │
          └──────────┬─────────┘                      │
                     │                                │
                     ▼                                │
          ┌────────────────────┐                      │
          │   Check win/lose   │                      │
          │     condition      │                      │
          └──────────┬─────────┘                      │
                     │                                │
          ┌──────────┴──────────┐                     │
          ▼                     ▼                     │
     ┌────────────┐      ┌────────────┐               │
     │  Win/Lose  │      │  Continue  │               │
     └────────────┘      └────────────┘               │
          │                     │                     │
          ▼                     └─────────────────────┘
     ┌────────────┐
     │    END     │
     └────────────┘

```

<a id="technical-details"></a>

## 🔧 Technical Details

### Dijkstra's Algorithm

Dijkstra's algorithm is a classic graph search algorithm that solves the single-source shortest path problem for a graph with non-negative edge weights. In HoodQuest, it is used to calculate the guaranteed shortest path from the player's current position to Grandma's house (Node V). It explores all reachable nodes, systematically assigning cumulative distances to each vertex until the destination is reached. This ensures that the recommended path provided to the player has the absolute minimum total weight (distance), regardless of the wolf's position, giving the player a safe and optimal route to follow.

### A* Algorithm

A* (A-Star) is a heuristic-based pathfinding algorithm that extends Dijkstra's approach by using an evaluation function to estimate the cost from a given node to the destination. In HoodQuest, it uses the Euclidean distance as a heuristic to prioritize nodes that are geographically closer to Grandma's house. By combining the actual traveled cost (gScore) with the estimated remaining cost (heuristic), A* often converges to the optimal solution much faster than Dijkstra. This makes it ideal for providing quick, intelligent route recommendations to the player while still guaranteeing the shortest path under the admissible heuristic.

### BFS Algorithm

Breadth-First Search (BFS) is a graph traversal algorithm that explores nodes level by level, guaranteeing the shortest path in terms of the number of edges (unweighted). In HoodQuest, BFS is specifically utilized for the enemy AI (Wolf movement). When activated (based on a dice roll), the wolf uses BFS to find the shortest edge-based path to the player's current position. It returns the immediate next node the wolf should move to, ensuring the wolf relentlessly chases the player step-by-step through the forest. This creates a challenging dynamic where the player must constantly outmaneuver the pursuing wolf.

<a id="data-structure-operations"></a>

## Data Structure Operations

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Structures Complexity</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: top;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        /* Code-like style for complexity */
        .complexity {
            font-family: 'SFMono', 'Consolas', 'Liberation Mono', monospace;
            font-size: 13px;
            color: #f0f6fc;
        }

        @media (max-width: 600px) {
            body {
                padding: 16px;
            }
            table {
                font-size: 13px;
            }
            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>
</head>
<body>

    <h2>📊 Data Structure Operations Complexity</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Structure</th>
                    <th>Search</th>
                    <th>Insert</th>
                    <th>Update</th>
                    <th>Memory</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">BST</span></td>
                    <td><span class="complexity">O(log n)</span></td>
                    <td><span class="complexity">O(log n)</span></td>
                    <td><span class="complexity">O(log n)</span></td>
                    <td><span class="complexity">O(n)</span></td>
                </tr>
                <tr>
                    <td><span class="highlight">MaxHeap</span></td>
                    <td><span class="complexity">O(n)</span></td>
                    <td><span class="complexity">O(log n)</span></td>
                    <td><span class="complexity">O(log n)</span></td>
                    <td><span class="complexity">O(n)</span></td>
                </tr>
                <tr>
                    <td><span class="highlight">Hash</span></td>
                    <td><span class="complexity">O(1) avg</span></td>
                    <td><span class="complexity">O(1) avg</span></td>
                    <td><span class="complexity">O(1) avg</span></td>
                    <td><span class="complexity">O(n)</span></td>
                </tr>
                <tr>
                    <td><span class="highlight">Stack</span></td>
                    <td><span class="complexity">O(n)</span></td>
                    <td><span class="complexity">O(1)</span></td>
                    <td><span class="complexity">O(1)</span></td>
                    <td><span class="complexity">O(n)</span></td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

<a id="development-team"></a>

## Development Team

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HoodQuest - Developer Table</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: top;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        /* Bullet list styling */
        .contrib-list {
            margin: 0;
            padding-left: 0;
            list-style: none;
        }

        .contrib-list li {
            margin-bottom: 4px;
            padding-left: 16px;
            position: relative;
        }

        .contrib-list li::before {
            content: "•";
            position: absolute;
            left: 0;
            color: #f0f6fc;
        }

        @media (max-width: 600px) {
            body {
                padding: 16px;
            }
            table {
                font-size: 13px;
            }
            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>
</head>
<body>

    <h2>👥 Development Team</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Developer</th>
                    <th>Role</th>
                    <th>Contributions</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">[Pouya Maleki](https://github.com/Pouyamaleki)</span></td>
                    <td>Game Engine &amp; Algorithms</td>
                    <td>
                        <ul class="contrib-list">
                            <li>Dijkstra, A*, BFS implementation</li>
                            <li>Game state management</li>
                            <li>Movement logic</li>
                            <li>Score system</li>
                        </ul>
                    </td>
                </tr>
                <tr>
                    <td><span class="highlight">[Abbas Ashoury](https://github.com/Abbasashoury)</span></td>
                    <td>UI &amp; Data Management</td>
                    <td>
                        <ul class="contrib-list">
                            <li>CLI interface design</li>
                            <li>BST &amp; MaxHeap implementation</li>
                            <li>Save/Load system</li>
                            <li>Map visualization</li>
                        </ul>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>

<a id="license"k></a>

## Development Team

📝 License
This project is licensed under the MIT [License](https://en.wikipedia.org/wiki/MIT_License) - see the LICENSE file for details.

<a id="contact-us"></a>

## Contact Us

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HoodQuest - Contact Links</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, sans-serif;
            background-color: #0d1117;
            color: #c9d1d9;
            padding: 40px;
            max-width: 900px;
            margin: 0 auto;
            line-height: 1.6;
        }

        h2 {
            color: #f0f6fc;
            font-size: 24px;
            font-weight: 600;
            margin-top: 40px;
            margin-bottom: 16px;
            border-bottom: 1px solid #21262d;
            padding-bottom: 8px;
        }

        .table-container {
            overflow-x: auto;
            margin: 16px 0 24px 0;
            border: 1px solid #30363d;
            border-radius: 6px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            font-size: 14px;
            background-color: #161b22;
            border-radius: 6px;
        }

        thead {
            background-color: #21262d;
        }

        thead th {
            padding: 12px 16px;
            text-align: left;
            font-weight: 600;
            color: #f0f6fc;
            border-bottom: 2px solid #30363d;
            font-size: 13px;
            letter-spacing: 0.3px;
        }

        tbody td {
            padding: 12px 16px;
            border-bottom: 1px solid #21262d;
            color: #c9d1d9;
            vertical-align: middle;
        }

        tbody tr:last-child td {
            border-bottom: none;
        }

        tbody tr:hover {
            background-color: #1c2128;
        }

        .highlight {
            color: #f0f6fc;
            font-weight: 600;
        }

        /* Link Styles */
        a {
            color: #58a6ff;
            text-decoration: none;
            transition: color 0.2s ease;
        }

        a:hover {
            text-decoration: underline;
            color: #79c0ff;
        }

        @media (max-width: 600px) {
            body {
                padding: 16px;
            }
            table {
                font-size: 13px;
            }
            thead th,
            tbody td {
                padding: 8px 12px;
            }
        }
    </style>
</head>
<body>

    <h2>📧 Contact &amp; Social Links</h2>

    <div class="table-container">
        <table>
            <thead>
                <tr>
                    <th>Platform</th>
                    <th>Link</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><span class="highlight">GitHub</span></td>
                    <td><a href="https://github.com/Pouyamaleki" target="_blank">github.com/Pouyamaleki</a></td>
                </tr>
                <tr>
                    <td><span class="highlight">Email</span></td>
                    <td><a href="mailto:pouyamaleki85@gmail.com">pouyamaleki85@gmail.com</a></td>
                </tr>
                <tr>
                    <td><span class="highlight">LinkedIn</span></td>
                    <td><a href="https://www.linkedin.com/in/pouya-maleki-7982b2360/" target="_blank">www.linkedin.com/in/pouya-maleki-7982b2360/</a></td>
                </tr>
            </tbody>
        </table>
    </div>

</body>
</html>


<a id="acknowledgment"></a>

## Acknowlegment

- **Professor**: Dr. Ali Javidani - Data Structure and Algorithms course  
- **Univercity**: [bu-ali sina](www.basu.ac.ir) Univercity  
- **Resources**:  
    - [GeeksforGeeks](https://www.geeksforgeeks.org) - Algorithms refrences  
    - [cpp Refrence](https://en.cppreference.com) - Documents  
    - [Stack Oveflow](https://stackoverflow.com) - Documents  


<a id="show-your-support"></a>

## ⭐ Show Your Support

If you found this project helpful or interesting, please consider:  
- ⭐ Starring the repository on GitHub  
- 🍴 Forking to contribute  
- 📤 Sharing with fellow students  