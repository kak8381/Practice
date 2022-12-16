"""
Webscraper of dad joke website to get an output
"""

from urllib.request import urlopen

url = 'https://www.goodhousekeeping.com/life/entertainment/a41779929/corny-jokes/?utm_source=google&utm_medium=cpc&utm_campaign=arb_ga_ghk_d_bm_prog_org_usx_a41779929&gclid=CjwKCAiAheacBhB8EiwAItVO22-HLMjlxrP9djKWtmXuL6qgXjoM2iMSmxRLB7omr1YRvM1nXwkTbhoC_JoQAvD_BwE'
page = urlopen(url)

html_bytes = page.read()
html = html_bytes.decode("utf-8")

print(html)

