
  if(m_userDataHasBeenSet)
  {
      Aws::String userDataLocationAndMember(location);
      userDataLocationAndMember += ".UserData";
      m_userData.OutputToStream(oStream, userDataLocationAndMember.c_str());
  }
