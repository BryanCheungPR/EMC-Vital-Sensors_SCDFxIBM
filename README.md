## Short Description:

Problem Definition:

Singapore is currently facing an increasing ageing population, due to increased life expectancy and decreasing birth rates. As a result, this has led to a steady increase in the vulnerable population. The vulnerable population in Singapore consists mainly of the elderly and people with physical disabilities. In addition, there has been an increasing trend of elderly with no next on kin to attend to their needs, thus putting the vulnerable populations at risk of accidents. Hence, it is important to increase awareness at the onset of incidents which require emergency response and mobilise CFRs for early intervention in order to mitigate the extent of such accidents.


How Technology Can Help?

The use of wearable technology and/or sensors can be used to monitor vital signs or movements of the elderly around the house. In the event of an emergency, a CFR can respond to the distress signals sent out via an online monitoring application, assess the severity of the situation and assist the person in distress.


Our Proposed Idea:

Swift and timely intervention is essential to ensure that medical assistance reaches the vulnerable population when such incidents occur, such as a fall or unattended house fires. Providing a set of open source tools, backed by IBM Cloud and Watson Services, will enable CFRs and the relevant authorities to effectively respond to a potential emergency.


## Detail Solution:

https://docs.google.com/document/d/1lq4sG2jqJ4fhoC9lTFAym2TtL8LTV3ePjyCdNVslrZg/edit?usp=sharing


## Getting Started with Demo: 

Watson assistant to supplement the current CFR application can be found directly at this link:
https://web-chat.global.assistant.watson.cloud.ibm.com/preview.html?region=us-south&integrationID=2a45b6ec-8c6a-4bb5-aecd-10d62c39e41d&serviceInstanceID=d0fa605d-d481-4d4a-83c2-b9964e9a56d9

Console application can be launch through visual studio code with c/c++ extension and code runner extension. For windows user TDM-GCC must be installed in order to run the console application on VS code:
https://jmeubank.github.io/tdm-gcc/download/


## Bulding the Solution:

1) Voice Agent:

Having a voice agent to guide CFRs will not only quicken the process but also reducing the need of utilising officers to the minimum. We are not able to showcase this implementation as the trial twilio account does not provide local Singapore number for us to test the deployment. 

2) Watson Assistant:

The main focus of our solution is having a chatbot that provides guidance towards CFRs in times of need. our chatbot will act as a virtual officer to assist CFRs in providing the required first aid responses. 
on top of assisting, user is able to request explanations for diseases, illnesses or medical terms that they are curious about. results will be obtainedt from wikipedia.

3) Cloud function:

Cloud function is used to utilised wikipedia API to obtain results when user requested explanation on medical terms. 

4) Visual Studio Code

Used together with c/c++ extension to code a console application to analyse heart rate sensor's data to decide the next mode of action which includes sending distress signal to CFRs and distress signal directly to SCDF in the event of no response from CFR


## The Architecture:

![The Architecture](https://user-images.githubusercontent.com/65862587/84587380-47e51180-ae51-11ea-8b1c-18e775baf11d.JPG)
