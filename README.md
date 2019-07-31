# tripdeer

### Web:
Clone the project to your local folder:

The project is structured into 3 parts

```
| packages - frontend
| pacakges - backend
| mobile
```
Since we are using yarn workspace, you can install the web project with:

```
yarn install
```
in the root folder, this will install node_modules into root folder and alias to `packages/*` so that you don't have to go into each folder to install, and start by

```
yarn dev
```

### Mobile:

Mobile version currently using expo, so you have to install expo, and do: ‘yarn install’ 



# Git instructions

Always do git pull before changing anything

```
git pull
```

After changed something, you can change what was changed by running
```
git status
```

and if changes is right, then run commit by
```
git add --all

git commit -m "Some text of what you have changed"

git push
```
