class Paragraph:
    def __init__(self, width):
        self.width = width
        self.words = []

    def add_word(self, word):
        self.words.append(word)


class LeftParagraph(Paragraph):
    def end(self):
        line = ''
        for word in self.words:
            if not line:
                line += word
            elif len(line) + len(word) + 1 <= self.width:
                line += ' ' + word
            else:
                print(line)
                line = word
        print(line)
        self.words.clear()
 
 
class RightParagraph(Paragraph):
  def end(self):
        line = ''
        for word in self.words:
            if not line:
                line += word
            elif len(line) + len(word) + 1 <= self.width:
                line += ' ' + word
            else:
                print(line.rjust(self.width, ' '))
                line = word
        print(line.rjust(self.width, ' '))
        self.words.clear()

lp = LeftParagraph(8)
lp.add_word('abc')
lp.add_word('defg')
lp.add_word('hi')
lp.add_word('jklmnopq')
lp.add_word('r')
lp.add_word('stuv')
lp.end()
print()

