import pygame
import sys
pygame.init()

def linhaverde(screen,colorgreen):
  pygame.draw.line(screen, colorgreen,(180,55), (230, 55), 5)

def segmentodelinha(screen,black):
  pygame.draw.lines(screen, black, False, [(0,80), (50,90), (200, 80), (220, 30)], 5) 

def retangulo(screen,colorRed):
  pygame.draw.rect(screen,colorRed,(150,10,50,20))


def poligono(screen,black):
  pygame.draw.polygon(screen, black,((100,100),(0,200), (200,200)),2)

def circulo(screen,blue):
  pygame.draw.circle(screen, blue, (60, 250), 40)

def elipse(screen,colorRed):
  pygame.draw.ellipse(screen, colorRed, (300,10,50,20))


def main():
    screen = pygame.display.set_mode((600,400))
    pygame.display.set_caption("Desenho")
    screen.fill((255,255,255))
    colorgreen = (0, 255, 0)
    black= (0,0,0)
    colorRed= (255,0,0)
    blue = (0,0,255)
    while True:
      for event in pygame.event.get():
        if event.type == pygame.KEYDOWN:
          if event.key == pygame.K_q:
              retangulo(screen,colorRed)
          if event.key == pygame.K_a:
              segmentodelinha(screen, black)
          if event.key == pygame.K_w:
              linhaverde(screen,colorgreen)
          if event.key == pygame.K_t:
              poligono(screen,black)
          if event.key == pygame.K_y:
              circulo(screen,blue)
          if event.key == pygame.K_e:
              elipse(screen,colorRed)
      
        pygame.display.update()
        pygame.display.flip()
    if event.type == pygame.QUIT:
        pygame.quit()
        sys.exit()


main()

