// Maniaplanet engine classes documentation
// Generated with Openplanet 0.08 (v4, Public)
// https://openplanet.nl/

using namespace MwFoundations;
using namespace Game;
using namespace Graphic;
using namespace Function;
using namespace Hms;
using namespace Control;
using namespace Motion;
using namespace Plug;
using namespace Scene;
using namespace System;
using namespace Vision;
using namespace Audio;
using namespace Script;
using namespace Net;
using namespace Input;
using namespace Xml;
using namespace TrackMania;
using namespace ShootMania;
using namespace GameData;

namespace MwFoundations {

struct CMwNod {
  CMwNod();

  string IdName;
  const UnknownType Id;
};

struct CMwEngine : public CMwNod {
  CMwEngine();

};

struct CMwCmd : public CMwNod {
};

struct CMwParam : public CMwNod {
  CMwParam();

};

struct CMwParamClass : public CMwParam {
  CMwParamClass();

};

struct CMwParamStruct : public CMwParam {
  CMwParamStruct();

};

struct CMwParamAction : public CMwParam {
  CMwParamAction();

};

struct CMwParamBool : public CMwParam {
  CMwParamBool();

};

struct CMwParamEnum : public CMwParam {
  CMwParamEnum();

};

struct CMwParamInteger : public CMwParam {
  CMwParamInteger();

};

struct CMwParamIntegerRange : public CMwParamInteger {
  CMwParamIntegerRange();

};

struct CMwParamNatural : public CMwParam {
  CMwParamNatural();

};

struct CMwParamNaturalRange : public CMwParamNatural {
  CMwParamNaturalRange();

};

struct CMwCmdFastCall : public CMwCmd {
};

struct CMwParamReal : public CMwParam {
  CMwParamReal();

};

struct CMwParamRealRange : public CMwParamReal {
  CMwParamRealRange();

};

struct CMwParamString : public CMwParam {
  CMwParamString();

};

struct CMwParamVec3 : public CMwParamStruct {
  CMwParamVec3();

  float x;
  float y;
  float z;
};

struct CMwParamIso3 : public CMwParamStruct {
  CMwParamIso3();

  const float AxeXx;
  const float AxeXy;
  const float AxeYx;
  const float AxeYy;
  float tx;
  float ty;
};

struct CMwParamColor : public CMwParamStruct {
  CMwParamColor();

  float r;
  float g;
  float b;
};

struct CMwParamVec2 : public CMwParamStruct {
  CMwParamVec2();

  float x;
  float y;
};

struct CMwParamIso4 : public CMwParamStruct {
  CMwParamIso4();

  const float AxeXx;
  const float AxeXy;
  const float AxeXz;
  const float AxeYx;
  const float AxeYy;
  const float AxeYz;
  const float AxeZx;
  const float AxeZy;
  const float AxeZz;
  float tx;
  float ty;
  float tz;
};

struct CMwCmdBuffer : public CMwNod {
  CMwCmdBuffer();

  const UnknownType Cmds;
  const uint CmdCount;
};

struct CMwCmdFiber : public CMwCmd {
};

struct CMwParamVec4 : public CMwParamStruct {
  CMwParamVec4();

  float x;
  float y;
  float z;
  float w;
};

struct CMwCmdBufferCore : public CMwNod {
  CMwCmdBufferCore();

  const bool IsEnabled;
  const uint ComputerTime;
  const uint HumanTime;
  const uint GameTime;
  const uint SimulationTime;
  const float SimulationRelativeSpeed;
  float PeriodEstimated;
  float DeltaSmoothed;
  UnknownType PeriodSmoothing;
  UnknownType DeltaSmoothing;
  const bool IsLagForbidden;
};

struct CMwParamDataRef : public CMwParam {
  CMwParamDataRef();

};

struct CMwClassInfoViewer : public CMwNod {
  CMwClassInfoViewer();

  const uint ClassId;
};

struct CMwParamProc : public CMwParam {
  CMwParamProc();

};

struct CMwParamPtr : public CMwParam {
  CMwParamPtr();

};

// File extension: 'RefBuffer.Gbx'
struct CMwRefBuffer : public CMwNod {
  CMwRefBuffer();

  const uint Count;
  const NodArray Nods;
  const bool UseAddRefRelease;
  uint NodClassId;
};

struct CMwParamStringInt : public CMwParam {
  CMwParamStringInt();

};

struct CMwStatsValue : public CMwNod {
  uint NbMaxSamples;
  bool ComputeDeviatedMean;
  float StdDevRatio;
  bool ComputeMedian;
  uint ReductionRatio;
  bool ComputeBuckets;
  bool AutoBuckets;
  array<float> BucketsRanges;
  void Log();
  const uint NbSamples;
  const string Summary;
  const float MeanInv;
  const float Mean;
  const float StdDev;
  const float Min;
  const float Max;
  const float Latest;
  const float Median;
  const float MedianStdDev;
  const float DeviatedMean;
  array<float> BucketsRatio;
};

struct CMwCmdBlock : public CMwNod {
  CMwCmdBlock();

};

// File extension: 'Script.Gbx'
struct CMwCmdBlockMain : public CMwCmdBlock {
  CMwCmdBlockMain();

  const string ScriptText;
  const CMwNod* ThisClass;
};

struct CMwCmdContainer : public CMwNod {
  CMwCmdContainer();

};

struct CMwParamQuat : public CMwParamStruct {
  CMwParamQuat();

  float w;
  float x;
  float y;
  float z;
};

struct CMwCmdFastCallUser : public CMwCmd {
};

struct CMwParamInt3 : public CMwParamStruct {
  CMwParamInt3();

  int x;
  int y;
  int z;
};

struct CMwParamNat3 : public CMwParamStruct {
  CMwParamNat3();

  uint x;
  uint y;
  uint z;
};

struct CMwCmdFastCallStatic : public CMwCmd {
};

struct CMwCmdFastCallStaticParam : public CMwCmd {
};

struct CMwParamMwId : public CMwParam {
  CMwParamMwId();

};

struct CMwParamInt2 : public CMwParamStruct {
  CMwParamInt2();

  float x;
  float y;
};

} // namespace MwFoundations

namespace Game {

struct CGameEngine : public CMwEngine {
  CGameEngine();

};

// File extension: 'Title.Gbx'
struct CGameManiaTitle : public CGameNod {
  CGameManiaTitle();

  const string TitleId;
  const string AuthorLogin;
  const wstring AuthorName;
  const wstring Name;
  const wstring Desc;
  const string InfoUrl;
  const string DownloadUrl;
  const string TitleVersion;
  const string MakerTitleId;
  const string BaseTitleId;
  CPlugFileImg* LogosFid;
  string CollectionGroup;
  int SortIndex;
  CGameSkinnedNod* SkinnedBoxCase;
  CGameSkinnedNod* SkinnedLogosStyle;
  string StationManialinkUrl;
  string BoxCaseManialinkUrl;
  bool DisableStationQuickEnter;
  bool ScriptCloud_Enabled;
  CGameManiaTitleCore* TitleCoreFid;
  uint SmGameplayVersion;
  bool InternalAllowLegacyNonScriptModes;
  bool UnlockAdvancedCollectors;
  const NodArray CollectionFids;
  UnknownType VehicleIdentId;
  UnknownType VehicleIdentAuthor;
  UnknownType VehicleIdentCollection;
  const NodArray MusicFids;
  const NodArray EditorSimpleChallengeFids;
  CPlugFileFidContainer* ModFid;
  string MenuMainManialinkUrl;
  CPlugFileImg* MenuBgFid;
  CSystemFidsFolder* MenuBgFolder;
  CGameCtnReplayRecord* MenuBgReplayFid;
  CPlugFileImg* MenuHeaderFid;
  CPlugFileSnd* MenuMusicFid;
  CGameManialink3dStyle* MenuStyle3dFid;
  CPlugFileImg* MenuSkyGradFid;
  CPlugFont* Hud3dFontFid;
  CPlugFileText* SoloModeFid;
  CPlugFileZip* SoloDataPackFid;
  CGameCtnCampaign* SoloCampaignFid;
  CPlugFileText* SoloPlaylistFid;
  CPlugFileText* NetModeFid;
  CPlugFileText* NetPlaylistFid;
  CPlugFileText* SplitScreenModeFid;
  CPlugFileText* SplitScreenPlaylistFid;
  CPlugFileText* EditorMapTypeFid;
  CGameCtnChallenge* AnimEditor_DefaultChallengeFid;
  uint ModelSkinInit;
};

struct CGamePlayer : public CMwNod {
  const CGamePlayerInfo* User;
  const string Login;
  const wstring Name;
  const int RequestedClan;
  const bool RequestsSpectate;
};

struct CGameTerminal : public CMwNod {
  enum SpectatorCameraType {
    _SpectatorCam_Replay = 0,
    _SpectatorCam_Follow = 1,
    _SpectatorCam_Free = 2,
  };
  enum SpectatorCameraTarget {
    _SpectatorCam_Manual = 0,
    _SpectatorCam_Auto = 1,
  };
  CGamePlayer* ControlledPlayer;
  const CGamePlayerCameraSet* CameraSet;
  const CGameCtnMediaClipPlayer* MediaClipPlayer;
  const CGameCtnMediaClipPlayer* MediaAmbianceClipPlayer;
  void GetNextWantedCameraType();
  void GetNextWantedCameraTarget();
  SpectatorCameraType SpectatorCameraType;
  SpectatorCameraTarget SpectatorCameraTarget;
};

struct CGameApp : public CMwNod {
  CGameApp();

  void Start();
  void TerminateGame();
  const CHmsViewport* Viewport;
  const CAudioPort* AudioPort;
  const CInputPort* InputPort;
  const CGameDialogs* BasicDialogs;
  const CGameSystemOverlay* SystemOverlay;
  const NodArray ActiveMenus;
  void ShowMenu(CGameMenu* Menu);
  void HideMenu(CGameMenu* Menu);
  void HeavyUpdate();
  const string OSUTCDate;
  const string OSLocalDate;
  const string OSUTCTime;
  const string OSLocalTime;
  const CGameLoadProgress* LoadProgress;
  string CmdLineUrlMptp;
  wstring BenchLoadingFolderName;
  const CGameAchievementScriptManager* AchievementsScriptManager;
  const CGameScriptNotificationsConsumer* NotificationsConsumer;
  const CGameScriptNotificationsProducer* NotificationsProducer;
};

struct CGameMasterServer : public CNetMasterServer {
  const wstring SubscribeNickName;
  const wstring SubscribeNickNameNew;
  void Subscribe();
  void Connect();
  void Disconnect();
  void GetOnlineProfile();
  void UpdateOnlineProfile();
  void MailAccount();
  void SendCrashLogs();
  void SendGeneralCaps();
  void SendGfxPerformance();
  void SendMessages();
  void ReceiveMessages();
  array<uint> FilesToSubmit;
  array<uint> FilesToConfirm;
  const uint ReturnedError;
  const string ReturnedIP;
  const uint InboxMessagesCount;
  const uint OutboxMessagesCount;
  const NodArray Pools;
  const NodArray RemoteDataInfos;
  void CheckDownloadToLaunch();
  const NodArray Downloads;
  const NodArray CurrentDownloads;
  uint Search_TimeToWait;
  const uint Search_Last;
  const CGameLeagueManager* LeaguesManager;
  const CGameLeagueManager* SubscribedGroupsManager;
};

// File extension: ''
struct CGameNod : public CMwNod {
};

// File extension: 'Menu.Gbx'
struct CGameMenu : public CMwNod {
  CGameMenu();

  enum EMenuOrder {
    Menu = 2,
    InGameMenu = 3,
    GameDialog = 5,
    SystemDialog = 8,
    BasicDialog = 11,
  };
  NodArray Frames;
  CGameMenuFrame* MainFrame;
  const CGameMenuFrame* CurrentFrame;
  const CControlBase* CurrentFocusedControl;
  const CControlStyle* CurrentFocusedControlStyle;
  CPlugSound* SoundDisplayed;
  CPlugSound* SoundHidden;
  CPlugSound* SoundPageChanged;
  CControlStyleSheet* StyleSheet;
  CPlugBitmap* BackgroundBitmapUnderlay;
  CScene3d* BackgroundScene;
  const CSceneCamera* BackgroundCamera;
  float BackgroundCameraFov;
  float BackgroundCameraNearZ;
  float BackgroundCameraFarZ;
  bool EnableFrameStack;
  void Back();
  void RedrawAll();
  vec3 FrustumCenter;
  vec3 FurstrumHfDiag;
  const CScene2d* Overlay;
  EMenuOrder MenuOrder;
  vec2 GridStep;
};

struct CGameNetFormPlaygroundSync : public CNetNod {
  CGameNetFormPlaygroundSync();

};

// File extension: 'Frame.Gbx'
struct CGameMenuFrame : public CControlFrame {
  CGameMenuFrame();

  UnknownType AutoBackButtonId;
  CPlugSound* UpDownSound;
  CPlugSound* ShowSound;
  CMwCmdBlockMain* OnHideScript;
  CMwCmdBlockMain* OnBeforeShowScript;
  CMwCmdBlockMain* OnShowScript;
  const CGameMenu* Menu;
  CScene3d* FrameScene;
  void RunOnShowScripts();
  bool AllowBgCamera;
  uint NavigationDepth_Manialink3d_Unused;
};

struct CGameSystemOverlay : public CMwNod {
  const CScene2d* Overlay;
  const CScene2d* PluginsMenuOverlayOverlay;
  uint HideDelay;
  void SwitchFullscreen();
  void MinimizeApp();
  void CloseApp();
  void OpenGraphicSettings();
  void OpenStereoscopySettings();
  void OpenInputSettings();
  void OpenInterfaceSettings();
  void OpenMessenger();
  void ThrobberOnAction();
  bool IconManiaPlanet_ShowHome;
  const bool ToolBarIsActive;
  wstring ToolTip;
  const CGameManiaPlanetMenuStations* MenuStations;
  const CGameManialinkBrowser* ManialinkBrowser;
  const CGameScriptDebugger* ScriptDebugger;
};

struct CGamePlayground : public CGameSwitcherModule {
  const CGamePlaygroundInterface* Interface;
  const NodArray Players;
  const NodArray GameTerminals;
  const NodArray UIConfigs;
  const CGameCtnReplayRecord* ReplayRecord;
  CGameCtnReplayRecord* PrevReplayRecord;
  bool GameTerminals_IsBlackOut;
  bool GameTerminals_BlackOut_Auto2dVr;
  CGameAnalyzer* Analyzer;
};

struct CGameNetPlayerInfo : public CMwNod {
  enum PlayerType {
    Human = 0,
    Fake = 1,
    Net = 2,
    Replay = 3,
  };
  enum SpectatorMode {
    Void = 0,
    Watcher = 1,
    LocalWatcher = 2,
    Target = 3,
  };
  const uint DbgPlayerUid;
  bool Live_IsRegisteredToMasterServer;
  bool Live_HasRetrieveTimeLeft;
  const bool Live_Updating;
  const bool Live_RetrievingTimeLeft;
  const uint Live_UpdateLastTime;
  const uint LiveUpdate_Counter;
  const PlayerType PlayerType;
  const uint State;
  const uint ChallengeSequenceNumber;
  const uint LatestNetUpdate;
  const uint DownloadRate;
  const uint UploadRate;
  bool CustomDataDeactivated;
  const uint NbSpectators;
  SpectatorMode SpectatorMode;
};

struct CGameNetwork : public CMwNod {
  CGameNetServerInfo* ServerInfo;
  const CNetMasterServer* MasterServer;
  const CNetFileTransfer* FileTransfer;
  const NodArray PackDescs;
  const CSystemFidsFolder* LocationPacksContent;
  const bool IsMultiInternet;
  const bool IsEnabled;
  const bool IsServer;
  const CNetServer* Server;
  const CNetClient* Client;
  const NodArray OnlineServers;
  const NodArray OnlinePlayers;
  NodArray PlayerInfos;
  void FindServers();
  const CGamePlaygroundUIConfigMgrScript* UIConfigMgr_Rules;
  const CGamePlaygroundUIConfigMgrScript* UIConfigMgr_ServerPlugin;
  float VoteDefaultRatio;
  uint CallVoteTimeOut;
  uint CallVotePercent;
  const bool InCallvote;
  const uint VoteNbYes;
  const uint VoteNbNo;
  const array<wstring> ChatHistoryText;
  const array<uint> ChatHistoryUid;
  const array<uint> ChatHistoryTimestamp;
  const array<wstring> ChatHistoryLines;
  const NodArray ManialinkDataCache;
  const uint RecvNetRate;
  const uint SendNetRate;
  const float PacketLossRate;
  const string RecvNetRatePretty;
  const string SendNetRatePretty;
  const uint CanDoUDP;
  const int LatestGamePing;
  const int LatestHumanPing;
  const float LatestEpsilon;
  const float SmoothedEpsilon;
  const uint TotalSendingSize;
  const uint TotalReceivingSize;
  const uint TotalHttpReceivingSize;
  const uint TotalTcpUdpReceivingSize;
  const uint TcpReceivingSize;
  const uint UdpReceivingSize;
  const uint TcpSendingSize;
  const uint UdpSendingSize;
  const uint NbrTotalConnection;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsDisconnecting;
  const uint NbrConnectionsInProgress;
  const uint NbrConnectionsPending;
  const uint NbrAcceptPerSecond;
  const uint NbrNewConnectionPerSecond;
};

struct CGameNetFormTunnel : public CGameNetForm {
  CGameNetFormTunnel();

};

struct CGameManiaPlanetNetwork : public CGameCtnNetwork {
};

struct CGameManiaTitleCore : public CGameNod {
  const wstring DisplayName;
  const CGameManiaPlanet* ManiaPlanet;
  CGameCtnCollection* CollectionCommonFid;
  wstring ModeScriptFolderName;
  bool WithLocalMultiplayer;
};

// File extension: 'ManiaPlanet.Gbx'
struct CGameManiaPlanet : public CGameCtnApp {
  CGameManiaPlanet();

  CSystemFidsFolder* ManiaTitlesFolder;
  CGameCoverFlowDesc* CoverFlowDesc;
  CPlugFileImg* TitleMainDefaultBgFid;
  CControlStyleSheet* DefaultStyleSheet;
  void ScanDiskForManiaTitles();
  const NodArray ManiaTitles;
  const NodArray Stations;
  const CGameManiaTitle* LoadedManiaTitle;
  const CGameManiaTitleCore* LoadedCore;
  const CGameManiaPlanetScriptAPI* ManiaPlanetScriptAPI;
  const CGameManiaTitleControlScriptAPI* ManiaTitleControlScriptAPI;
  const CGameManiaTitleEditionScriptAPI* ManiaTitleEditionScriptAPI;
  string StartupManiaTitle;
  string StartupManiaTitle_SingleTitleMode;
  string StartupManiaTitle_TestMode;
  void Operation_Abort();
  const bool Operation_InProgress;
  CGameCtnMenusManiaPlanet* MenuManager;
  void BackToMainMenu();
};

struct CGameStation : public CGameNod {
  enum EEchelon {
    None = 0,
    Bronze1 = 1,
    Bronze2 = 2,
    Bronze3 = 3,
    Silver1 = 4,
    Silver2 = 5,
    Silver3 = 6,
    Gold1 = 7,
    Gold2 = 8,
    Gold3 = 9,
  };
  const CGameManiaTitle* Title;
  const uint AudienceRegisteredUsers;
  const uint AudienceInstalls;
  const uint AudienceOnlineUsers;
  const uint CampaignMedalsMax;
  const uint CampaignMedalsCurrent;
  const uint CampaignMedalsRanking;
  const float LadderPoints;
  const uint LadderRank;
  const EEchelon Echelon;
  const uint NextEchelonPercent;
  bool DisableQuickEnter;
  bool IsLogoVisible;
  float GhostAlpha;
  vec3 FocusLightColor;
  vec3 NormalLightColor;
  const bool IsEditable;
  const string ManiaApp_Url;
  const CGameManialinkPage* ManialinkViewer_Page;
  const CGameManiaApp* ManiaApp;
};

struct CGameManialinkEntry : public CGameManialinkControl {
  enum ETextFormat {
    Basic = 0,
    Script = 1,
    Password = 2,
    Newpassword = 3,
  };
  wstring Value;
  wstring HackValueWithEvent;
  void StartEdition();
  void SetText(wstring NewText, bool SendSubmitEvent);
  ETextFormat TextFormat;
  float Opacity;
  vec3 TextColor;
  float TextSizeReal;
  uint TextSize;
  int MaxLine;
  bool AutoNewLine;
};

struct CGameScene : public CScene3d {
  CGamePlaygroundResources* Resources;
  const CGameEnvironmentManager* EnvironmentManager;
  const CGameHud3d* Hud3d;
  const CGameMgrActionFxVis* MgrActionFxVis;
  const CGameMgrCamera* MgrCamera;
  CSceneMobil* MarksMobil;
  const NodArray ChallengeDecals_Models;
  CHmsVisMiniMap* MiniMap;
};

// File extension: 'ColorEffect.Gbx'
struct CGameMenuColorEffect : public CControlEffect {
  CGameMenuColorEffect();

  NodArray ColorsBeam;
  array<float> ColorPeriods;
  array<float> BeamWidths;
  array<float> InterWidths;
  float Period;
  bool IsBeamColorEvolving;
  bool IsBeamMoving;
  bool IsMoveHalf;
  bool IsMoveInverse;
  bool IsColorEvolveHalf;
  bool IsColorEvolveInverse;
  bool ForceFirstColorWord;
  bool ForceNoMove;
};

struct CGameCtnCollectorList : public CMwNod {
  CGameCtnCollectorList();

  const uint Bob;
  const UnknownType BlockStockIds;
  array<uint> BlockStockNbAvailables;
};

struct CGameCtnChapter : public CMwNod {
  CGameCtnChapter();

  const CSystemFidFile* CollectionFid;
  const wstring LongDesc;
  const NodArray Articles;
  vec2 MapCoordElem;
  vec2 MapCoordIcon;
  vec2 MapCoordDesc;
  const CSystemFidFile* Icon;
  const bool Unlocked;
};

struct CGameCtnCatalog : public CMwNod {
  CGameCtnCatalog();

  const NodArray Chapters;
};

struct CGameCtnArticle : public CMwNod {
  CGameCtnArticle();

  const wstring Name;
  const CSystemFidFile* CollectorFid;
  const bool IsLoaded;
  void Preload();
  void Purge();
  const UnknownType IdentId;
  UnknownType CollectionId;
  const UnknownType IdentAuthor;
  const CPlugBitmap* BitmapIcon;
  const CPlugGameSkin* GameSkin;
  uint NbAvailableCurrent;
  uint NbAvailableMax;
  UnknownType ArticleDataLocation;
  const string PageName;
  const string ShortcutString;
  const string AmountString;
};

struct CGameCtnPlayground : public CGamePlayground {
  const CGameScene* GameScene;
  const CGameCtnGhost* PlayerRecordedGhost;
  const CGameCtnGhost* PlayerBestGhost;
};

struct CGameCamera : public CMwNod {
  CGameCamera();

  CSceneCamera* SceneCamera;
  const uint GroupIndex;
};

// File extension: 'GameCtnMediaBlock3dStereo.gbx'
struct CGameCtnMediaBlock3dStereo : public CGameCtnMediaBlock {
  CGameCtnMediaBlock3dStereo();

  float Separation;
  float ScreenDist;
};

struct CGameMasterServerRequest : public CNetMasterServerRequest {
};

struct CGameAvatar : public CMwNod {
  const CSystemPackDesc* PackDesc;
};

struct CGameNetOnlineMessage : public CMwNod {
  CGameNetOnlineMessage();

  string ReceiverLogin;
  string SenderLogin;
  wstring Subject;
  wstring Message;
  uint Donation;
};

// File extension: 'GameCtnMediaBlockTriangles.gbx'
struct CGameCtnMediaBlockTriangles : public CGameCtnMediaBlock {
  const CSceneMobil* Mobil;
};

struct CGameRemoteBuffer : public CMwNod {
  const CMwNod* LocalData;
  const string LastServerUpdate;
  const bool UseRefs;
  const _EMode Mode;
  const uint TotalCount;
  const uint SpecificCount;
  const uint PerPageCount;
  const uint CacheDuration;
  const uint RegisteredUsersCount;
  NodArray Datas;
};

struct CGameRemoteBufferPool : public CMwNod {
  const CGameRemoteBufferDataInfo* DataInfo;
  const uint BuffersCount;
};

struct CGameRemoteBufferDataInfo : public CMwNod {
  uint Default_CacheDuration;
  uint Default_PerPageCount;
};

// File extension: 'GameResources.Gbx'
struct CGameResources : public CMwNod {
  CGameResources();

  NodArray Sounds;
  const NodArray AudioSources;
  CSystemFidsFolder* HymnsFolder;
  CSystemFidsFolder* MenuBackgroundsFolder;
  CSystemFidsFolder* FolderGlobalEnvBanners;
  CMwNod* EditorSpawnHelper;
  CPlugBitmap* BitmapCubeMenuManiaPlanet3d;
  CPlugMaterial* MaterialSkyDomeMenu;
  CPlugShader* InterfaceBg;
  CControlStyleSheet* StyleSheetFid;
  CControlStyle* StyleDefaultTitleLogos;
  CPlugFont* InterfaceFont;
  CScene2d* ReplayInterfaceFid;
  CScene2d* InterfaceEditorFid;
  CScene2d* InterfacePuzzleFid;
  CScene2d* InterfaceEditorSimpleFid;
  CScene2d* InterfaceBlockEditorFid;
  CControlFrame* InterfaceEditorInventoryModelFid;
  CScene2d* RaceInterfaceFid;
  CScene2d* RaceNetInterfaceFid;
  CScene2d* StoryInterfaceFid;
  CScene2d* MediaTrackerInterfaceFid;
  CControlFrame* EditorAnimInterfaceFid;
  CControlFrame* EditorAnimCharInterfaceFid;
  CControlFrame* EditorItemInterfaceFid;
  CControlFrame* EditorVehicleInterfaceFid;
  CControlFrame* EditorClassInterfaceFid;
  CControlFrame* EditorManialinkInterfaceFid;
  CControlFrame* EditorModuleInterfaceFid;
  CControlFrame* EditorAnimSetInterfaceFid;
  CPlugFileTextScript* ModuleMenuBaseScriptFid;
  CPlugFileTextScript* ModuleMenuServerBrowserScriptFid;
  CPlugFileTextScript* ModulePlaygroundStoreScriptFid;
  CPlugFileTextScript* ModulePlaygroundInventoryScriptFid;
  CPlugFileText* MaterialsLibrariesFid;
  CGameMenu* MenusFid;
  CGameMenu* InGameDialogsFid;
  CGameMenu* DialogsFid;
  CGameMenu* SystemDialogsFid;
  CGameMenu* BasicDialogsFid;
  CScene2d* ProgressOverlayFid;
  CScene2d* SystemOverlayFid;
  CScene2d* SystemMenuFid;
  CScene2d* ManialinkBrowserOverlayFid;
  CScene2d* PluginsMenuOverlayFid;
  CPlugSolid* StationGoldFid;
  CPlugSolid* StationSilverFid;
  CPlugSolid* StationBronzeFid;
  CPlugSolid* StationServerFid;
  CPlugGameSkin* StationGameSkin;
  CPlugSolid* PlanetSolidFid;
  CPlugSound* ManiaPlanetMenuMusic;
  CControlFrame* CardStationMainFid;
  CControlFrame* CardStationSummaryFid;
  CControlFrame* CardPlanetMenu1Fid;
  CControlFrame* CardPlanetMenu2Fid;
  CControlFrame* CardPlanetServerMainFid;
  CControlFrame* CardPlanetServerSummaryFid;
  CControlFrame* CardPlanetServerRackSummaryFid;
  CGameManialink3dWorld* MenuManialink3dFid;
  CGameManialink3dStyle* MenuManialink3d_BaseStyleFid;
  CGameManialink3dStyle* MenuManialink3d_StationsStyleFid;
  CPlugSolid2Model* MenuManialink3dBox_Box;
  CPlugSolid2Model* MenuManialink3dBox_Title;
  CPlugSolid2Model* MenuManialink3dBox_Button;
  CPlugSolid2Model* MenuManialink3dBox_Window;
  CPlugSolid2Model* MenuManialink3dBox_WindowH;
  CPlugSolid2Model* MenuManialink3dBox_BoxCase;
  CPlugSolid2Model* MenuManialink3dBox_Station1x1;
  CPlugSolid2Model* MenuManialink3dBox_Station2x2;
  CPlugSolid2Model* MenuManialink3dBox_Station3x3;
  CSystemFidsFolder* TitleTemplateFolder;
  CPlugBitmap* DefaultAvatarBitmapFid;
  CPlugFileImg* DefaultMTColorGradingImageFid;
  CPlugBitmap* DefaultMTDecal2dBitmapFid;
  CPlugBitmap* DefaultMTBlockBitmapFid;
  CPlugSound* DefaultMTBlockSoundFid;
  CPlugBitmap* DefaultLeagueLogoBitmapFid;
  CPlugBitmap* DefaultOnlineNewsIconBitmapFid;
  CPlugBitmap* DefaultTeamLogoBitmapFid;
  CPlugBitmap* DefaultTagBitmapFid;
  CPlugMusic* DefaultMusicFid;
  CPlugBitmap* BitmapTeamEmblems;
  CPlugFileSnd* EmptyChallengeCustomMusicFid;
  CGameCtnPainterSetting* PainterSetting;
  CGameControlCardManager* GeneralCardManager;
  CSceneFxNod* SceneFxNodRoot;
  CScene3d* PodiumScene;
  CPlugFileTextScript* DefaultSkillScoreComputerFid;
  CPlugFileImg* ImageTurboRoulette;
  CPlugBitmap* EditorModelSpritesBitmapFid;
  CPlugMaterial* EditorModelDefaultMaterialFid;
  CPlugFileImg* EditorPixelCheckerImageFid;
  CGameCtnMediaClip* DefaultTransitionInClipFid;
  CGameCtnMediaClip* DefaultTransitionOutClipFid;
  CPlugAudioBalance* AudioBalance_Base;
  CPlugAudioBalance* AudioBalance_Menus;
  CPlugAudioBalance* AudioBalance_Editor;
  CPlugShaderApply* OffZoneSurfaceShaderFid;
  CPlugShaderApply* OffZoneLayerShaderFid;
  CGameEditorModel* DefaultEditorMeshFid;
  CGameEditorModel* DefaultEditorEditorFid;
  CGameEditorModel* DefaultEditorVehicleFid;
};

struct CGameNetServerInfo : public CNetMasterHost {
  const bool IsIdle_ForMasterServer;
  const bool IsOnline;
  const bool IsServer;
  const bool IsPrivate;
  const bool IsPrivateForSpectator;
  const bool AcceptReferees;
  uint RefereesCount;
  const uint LadderMatchId;
  const uint DownloadRate;
  const uint UploadRate;
  const _EPingEnum PingEnum;
  const uint Ping;
  string ServerHostName;
  const uint State;
  const uint ChallengeSequenceNumber;
  const bool DetailedPingInfoReceived;
  const uint RoundTrip;
  bool CallVoteEnabled;
  string AdvertisingSuffix;
};

struct CGameNetForm : public CNetNod {
  CGameNetForm();

};

struct CGameDialogs : public CMwNod {
  enum EDialog {
    None = 0,
    Message = 1,
    WaitMessage = 2,
  };
  bool EnableCustomSystemDialogs;
  const EDialog Dialog;
  const wstring Message_LabelText;
  const wstring Message_ButtonText;
  const bool Message_FocusOnButton;
  void Message_Ok();
  const wstring WaitMessage_LabelText;
  const wstring WaitMessage_ButtonText;
  const UnknownType WaitMessage_Progress;
  const bool WaitMessage_ShowProgressBar;
  const bool WaitMessage_ShowAbortButton;
  void WaitMessage_Ok();
  CGameMenu* Dialogs;
  void HideDialogs();
  void DoMessage_Ok();
  void AskYesNo_No();
  void AskYesNo_Yes();
  wstring String;
  void DialogSaveAs_HierarchyUp();
  const wstring DialogSaveAs_Path;
  const wstring DialogSaveAs_PathToDisplay;
  void DialogSaveAs_OnRefresh();
  void DialogSaveAs_OnValidate();
  void DialogSaveAs_OnCancel();
  const NodArray DialogSaveAs_Files;
  void DbgTestDoMessage();
};

// File extension: 'ScaleEffect.Gbx'
struct CGameMenuScaleEffect : public CControlEffect {
  CGameMenuScaleEffect();

  float LeftBorderScale;
  float RightBorderScale;
  float UpBorderScale;
  float DownBorderScale;
  float Shift;
  uint Period;
  uint MaxLetterScaling;
  bool AllowDecalage;
  bool AllowHideBeforeEffect;
  bool IsHalf;
  bool IsInverse;
  bool ReCenter;
};

// File extension: 'Collection.Gbx'
struct CGameCtnCollection : public CMwNod {
  CGameCtnCollection();

  UnknownType CollectionId;
  NodArray CompleteZoneList;
  wstring DisplayName;
  uint CollectionPackMask;
  CGameCtnZone* DefaultZone;
  float SquareSize;
  float SquareHeight;
  float BoardSquareHeight;
  float BoardSquareBorder;
  float TerrainHeightOffset;
  UnknownType Water0_Id;
  float Water0_OffsetTop;
  float Water0_OffsetBottom;
  UnknownType Water1_Id;
  float Water1_OffsetTop;
  float Water1_OffsetBottom;
  float WaterTop;
  bool IsWaterMultiHeight;
  float WaterFogMaxDepth;
  float WaterFogClampAboveDist;
  float CameraMinHeight;
  bool NeedUnlock;
  UnknownType BackgroundShadow;
  bool ShadowCastBack;
  float ShadowSoftSizeInWorld;
  UnknownType VertexLighting;
  UnknownType ColorVertexMin;
  UnknownType ColorVertexMax;
  UnknownType LightMapMapper;
  float VisMeshLodDistScale;
  vec3 Tech3TunnelSpecularExpScaleMax;
  CGameCtnDecoration* DefaultDecoration;
  UnknownType VehicleName;
  UnknownType VehicleAuthor;
  UnknownType VehicleCollection;
  bool IsEditable;
  CPlugBitmap* IconFid;
  CPlugBitmap* LoadScreenFid;
  int SortIndex;
  CSystemFidsFolder* FolderBlockInfo;
  CSystemFidsFolder* FolderItem;
  CSystemFidsFolder* FolderDecoration;
  CSystemFidsFolder* FolderMenusIcons;
  CSystemFidsFolder* FolderCardEventInfo;
  CSystemFidsFolder* FolderMacroBlockInfo;
  CSystemFidsFolder* FolderDecalModels;
  CSystemFidsFolder* FolderMacroDecals;
  CPlugBitmap* MapFid;
  vec2 MapRectMin;
  vec2 MapRectMax;
  vec2 MapCoordElem;
  vec2 MapCoordIcon;
  vec2 MapCoordDesc;
  wstring LongDesc;
  void SetMapCoordFromRect();
  array<wstring> BaseZoneStrings;
  array<wstring> ReplacementZoneStrings;
  NodArray ReplacementTerrainModifiers;
  void AddReplacementZone();
  void RemoveReplacementZone();
  const NodArray ParticleEmitterModelsFids;
  UnknownType DecalsTypesId;
  CSceneVehicleCarMarksModel* MarksModel;
  CFuncShaderLayerUV* FidFuncShaderCloudsX2;
  CPlugBitmap* FidPlugBitmapCloudsX2;
  CPlugFogMatter* OffZone_FogMatter;
  const NodArray ZoneList;
};

struct CGameCtnMediaBlockEditor : public CMwNod {
};

// File extension: 'ObjInfo.Gbx'
struct CGameVskObjectInfo : public CGameCtnCollector {
  CGameVskObjectInfo();

  CMwNod* Helper;
  CMwNod* Mobil;
  CMwNod* AltMobil;
  NodArray Properties;
};

struct CGameCtnBlockUnitInfo : public CMwNod {
  CGameCtnBlockUnitInfo();

  enum CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  int3 OffsetE;
  NodArray ClipsE;
  CGameCtnBlockInfoClip* TopClip;
  CGameCtnBlockInfoClip* BottomClip;
  NodArray Pylons;
  uint AcceptPylons;
  uint PlacePylons;
  bool Underground;
  UnknownType TerrainModifierId;
  CGameCtnBlockUnitInfo* OriginalBlockUnitInfoCopy;
  const uint PlacedPillarIndex;
  const uint ReplacedPillarIndex;
  CardinalDirEnum TopClipDir;
  CardinalDirEnum BottomClipDir;
  const int3 Offset;
  const int3 RelativeOffset;
  const NodArray Clips;
};

struct CGameFid : public CMwNod {
  const wstring Name;
  const wstring Path;
  const wstring FileName;
  const CSystemFidFile* Fid;
  const CSystemFidsFolder* Fids;
  const bool Selected;
};

// File extension: 'Decoration.Gbx'
struct CGameCtnDecoration : public CGameCtnCollector {
  CGameCtnDecoration();

  CPlugFileFidContainer* DefaultSkinFid;
  UnknownType DefaultSkinFileRef;
  CGameCtnDecorationSize* DecoSize;
  CGameCtnDecorationAudio* DecoAudio;
  CGameCtnDecorationMood* DecoMood;
  CGameCtnDecorationMaterialModifiers* DecoMaterialModifiers;
  CGameCtnDecorationTerrainModifier* TerrainModifierBase;
  CGameCtnDecorationTerrainModifier* TerrainModifierCovered;
  bool IsWaterOutsidePlayField;
  CPlugGameSkin* VehicleFxSkin;
  CSystemFidsFolder* VehicleFxFolder;
  CPlugSound* DecoAudio_Ambient;
  UnknownType DecorationZoneFrontierId;
  void InitWithNoSkin();
  void ClearWithNoSkin();
  CPlugDecoratorSolid* DecoratorSolidWarp;
};

// File extension: 'DecorationAudio.Gbx'
struct CGameCtnDecorationAudio : public CMwNod {
  CGameCtnDecorationAudio();

  NodArray Sounds;
  NodArray Musics;
  UnknownType CameraWooshVolumedB;
  float CameraWooshMinSpeedKmh;
  CPlugAudioEnvironment* AudioEnvOutsideOpen;
  CPlugAudioEnvironment* AudioEnvOutsideEnclosed;
  CPlugAudioEnvironment* AudioEnvUndergroundOpen;
  CPlugAudioEnvironment* AudioEnvUndergroundEnclosed;
  CPlugAudioBalance* AudioBalance_Podium;
  CPlugAudioBalance* AudioBalance_ReplaySoft;
  CPlugAudioBalance* AudioBalance_ReplayLoud;
  CPlugAudioBalance* AudioBalance_PlaygroundSoft;
  CPlugAudioBalance* AudioBalance_PlaygroundLoud;
  CPlugAudioBalance* AudioBalance_Overlay_Underground;
  CPlugAudioBalance* AudioBalance_Overlay_Far;
  CPlugAudioBalance* AudioBalance_TM_EvtStartLine;
  CPlugAudioBalance* AudioBalance_TM_EvtCheckpoint;
  CPlugAudioBalance* AudioBalance_TM_EvtRespawn;
  CPlugAudioBalance* AudioBalance_TM_EvtCrash;
  CPlugAudioBalance* AudioBalance_TM_EvtFlying;
  CPlugAudioBalance* m_AudioBalance_TM_EvtSwimming;
  CPlugAudioBalance* AudioBalance_SM_EvtSpawn;
  CPlugAudioBalance* AudioBalance_SM_EvtUnspawn;
  CPlugAudioBalance* AudioBalance_SM_EvtHit;
  CPlugAudioBalance* AudioBalance_SM_EvtHitEliminated;
  CPlugAudioBalance* AudioBalance_SM_EvtFire;
  float ReverbMinBlockDist;
  float ReverbMaxBlockDist;
  array<float> ReverbMaterialGains;
  CPlugFileText* ModifierXmlFile;
};

// File extension: 'DecorationMood.Gbx'
struct CGameCtnDecorationMood : public CMwNod {
  CGameCtnDecorationMood();

  uint ShadowCountCarHuman;
  uint ShadowCountCarOpponent;
  UnknownType ShadowCarIntensity;
  bool ShadowScene;
  bool BackgroundIsLocallyLighted;
  bool SolidLightAreSkinned;
  float Latitude;
  float Longitude;
  float DeltaGMT;
  float SunMoonIntensity;
  float LocalLightScale;
  float EditorHelperHdrScale;
  string TimeSunRise;
  string TimeSunFall;
  bool EnableStars;
  bool WaterReflectFakeCube;
  CFuncCloudsSolids* CloudsSolids;
  const string ToneMapping;
  float ToneMapExposureStaticBase;
  UnknownType ToneMapFilmCurve;
  vec3 Tech3Bloom;
  vec4 Tech3ToneMapAutoExp;
  vec2 Tech3SpecularLocal;
  vec3 Tech3SpecularFake_ExpScaleMax;
  CFuncKeysReal* ToneMapAutoExp_FidAvgLumiToKeyValue;
  CFuncKeysReal* FxBloom_FidFuncIntensAtHdrNorm;
  CPlugFxLightning* FxLightning;
  CPlugFxWindOnDecal* FxWindOnDecal;
  CPlugFxWindOnTreeSprite* FxWindOnTreeSprite;
  CPlugFxHdrScales_Tech3* FxHdrScalesT3;
  CPlugMoodBlender* MoodBlender;
  UnknownType RemappedStartDayTime;
  bool IsNight;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
  CHmsLightMap* HmsLightMap;
  CHmsAmbientOcc* HmsAmbientOcc;
};

// File extension: 'DecorationSize.Gbx'
struct CGameCtnDecorationSize : public CMwNod {
  CGameCtnDecorationSize();

  CSceneLayout* Scene;
  uint SizeX;
  uint SizeY;
  uint SizeZ;
  uint BaseHeightBase;
  uint BaseHeightOffset;
  bool OffsetBlockY;
  vec2 EditionZoneMin;
  vec2 EditionZoneMax;
  uint VertexCount;
};

// File extension: 'TMTerrainModifier.Gbx'
struct CGameCtnDecorationTerrainModifier : public CMwNod {
  CGameCtnDecorationTerrainModifier();

  UnknownType IdName;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
};

// File extension: 'GameAdvertisement.Gbx'
struct CGameAdvertising : public CGameNod {
  CGameAdvertising();

  UnknownType Mode;
  bool ImpressionHelpers_Enable;
  bool DisableOcclusion;
  bool EditionDummies;
  const NodArray Files;
  CPlugFileImg* EditonDummyImage;
  const string Identifier;
  const string PublicKey;
  string Radial_Config;
  uint Impression_Time;
  float Impression_Size;
  float Impression_CosAngle;
  string DefaultAdvertisingSuffix;
  void Init();
  void Destroy();
  void Flush();
  void ImpressionHelpers_Update();
  string ZoneName;
  string ZoneAuthor;
  string ZoneHost;
  string Nation;
  string Login;
  const NodArray ZoneElements;
  const CSceneMobil* ImpressionHelpers_Mobil;
};

struct CGameAdvertisingElement : public CGameNod {
  const string Name;
  const uint ContentDisplayed;
  const NodArray OwnerNods;
  const CSystemFidFile* File;
  void DisplayOrig();
  const float Nadeo_MaxImpression;
  const uint Nadeo_ContentId;
};

// File extension: 'Ghost.Gbx'
struct CGameGhost : public CMwNod {
  CGameGhost();

  const uint Duration;
  const uint Size;
};

// File extension: 'CtrlCamFirstPerson.gbx'
struct CGameControlCameraFirstPerson : public CGameControlCamera {
  CGameControlCameraFirstPerson();

};

// File extension: 'CtrlCamThirdPerson.gbx'
struct CGameControlCameraThirdPerson : public CGameControlCamera {
  CGameControlCameraThirdPerson();

};

// File extension: 'Map.Gbx'
struct CGameCtnChallenge : public CMwNod {
  CGameCtnChallenge();

  const string EdChallengeId;
  const CGameCtnChallengeInfo* MapInfo;
  wstring MapName;
  wstring Comments;
  const string AuthorZoneIconUrl;
  const string CollectionName;
  const string DecorationName;
  const string AuthorLogin;
  const wstring AuthorNickName;
  const wstring AuthorZonePath;
  const wstring MapType;
  const wstring MapStyle;
  const UnknownType TitleId;
  uint TMObjective_AuthorTime;
  uint TMObjective_GoldTime;
  uint TMObjective_SilverTime;
  uint TMObjective_BronzeTime;
  uint TMObjective_NbLaps;
  bool TMObjective_IsLapRace;
  wstring ObjectiveTextAuthor;
  wstring ObjectiveTextGold;
  wstring ObjectiveTextSilver;
  wstring ObjectiveTextBronze;
  const uint CopperPrice;
  const int3 Size;
  CGameCtnChallengeParameters* ChallengeParameters;
  CGameCtnCollectorList* BlockStock;
  const CPlugBitmap* AuthorZoneIcon;
  const wstring MapTypeOrLegacyMode;
  string HashedPassword;
  UnknownType VehicleName;
  UnknownType VehicleAuthor;
  UnknownType VehicleCollection;
  bool NeedUnlock;
  UnknownType Kind;
  UnknownType Difficulty;
  CGameCtnDecoration* Decoration;
  CSystemPackDesc* ModPackDesc;
  CSystemPackDesc* CustomMusicPackDesc;
  CPlugSound* CustomMusic;
  CGameCtnCollection* Collection;
  const NodArray Blocks;
  const NodArray BakedBlocks;
  CPlugTrafficGraph* TrafficGraph;
  const NodArray TrafficElemDescs;
  const NodArray TrafficPathSplines;
  const NodArray TrafficPathSquares;
  const NodArray TrafficZoneSquares;
  void CheckPlayField();
  const uint VertexCount;
  uint TargetTime;
  bool ShowBlockNormalHelpers;
  bool ShowBlockFacultativeHelpers;
  void ComputeCrc32(CMwNod* Nod, uint Crc32);
  CGameCtnMediaClip* ClipIntro;
  CGameCtnMediaClipGroup* ClipGroupInGame;
  CGameCtnMediaClipGroup* ClipGroupEndRace;
  CGameCtnMediaClip* ClipAmbiance;
  vec2 MapCoordTarget;
  vec2 MapCoordOrigin;
  NodArray CarMarksBuffer;
  void TmpBlockOffsetMoulinette();
  uint TmpBlockOffsetMoulinetteY;
  const uint LightMapCacheSmallByteSize;
  NodArray AnchoredObjects;
  CPlugAnimFile* AnimLibrary;
  CScriptTraitsMetadata* ScriptMetadata;
  float ThumbnailCam_TransX;
  float ThumbnailCam_TransY;
  float ThumbnailCam_TransZ;
  float ThumbnailCam_Yaw;
  float ThumbnailCam_Pitch;
  void UpdateBases();
  const uint DecoBaseHeightOffset;
};

struct CGameCtnChallengeInfo : public CGameFid {
  const string MapUid;
  const wstring Comments;
  const uint CopperPrice;
  const string CollectionName;
  const string AuthorLogin;
  const wstring AuthorNickName;
  const wstring AuthorZonePath;
  const wstring AuthorZoneFlagUrl;
  const wstring AuthorCountryFlagUrl;
  const wstring MapType;
  const wstring MapStyle;
  const bool Unlocked;
  const bool IsPlayable;
  const bool CreatedWithSimpleEditor;
  const uint TMObjective_AuthorTime;
  const uint TMObjective_GoldTime;
  const uint TMObjective_SilverTime;
  const uint TMObjective_BronzeTime;
  const bool TMObjective_IsLapRace;
  const wstring NameForUi;
  const string CopperString;
  const vec2 MapCoordOrigin;
  const vec2 MapCoordTarget;
  const UnknownType Kind;
  const bool LapRace;
  const uint DbgPackMask;
  const _EMedal Medal;
  const _EMedal OfficialMedal;
  const uint BestScore;
  const uint BestTime;
  const uint MinRespawnCount;
  const uint OfficialBestScore;
  const uint OfficialBestTime;
  const uint OfficialMinRespawnCount;
  const uint GoldTime;
  const NodArray SoloScores;
};

struct CGameOutlineBox : public CMwNod {
  CGameOutlineBox();

  const CSceneMobil* Mobil;
  bool AdditiveElseBlendSrcA;
  bool IsShowQuads;
  bool IsShowLines;
  float HardLinesColorCoef;
  float SoftLinesColorCoef;
};

// File extension: 'ParticleParam.Gbx'
struct CGameCtnParticleParam : public CMwNod {
  CGameCtnParticleParam();

  UnknownType ParticleModelId;
};

struct CGameHighScore : public CMwNod {
  CGameHighScore();

  enum EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  const wstring Name;
  const uint Time;
  const wstring Score;
  const uint Rank;
  const uint Count;
  const string GhostUrl;
  const EMedal Medal;
  const string GhostName;
};

// File extension: 'PainterSetting.Gbx'
struct CGameCtnPainterSetting : public CMwNod {
  CGameCtnPainterSetting();

  vec2 MinMaxScaleFill;
  vec2 MinMaxScaleSticker;
  vec2 MinMaxScaleStickerText;
  vec2 MinMaxScaleBrush;
  vec2 MinMaxScaleBrushText;
  const CGameControlCameraOrbital3d* Camera;
  void SetDefaultCameraSettings();
  CPlugMaterial* MaterialPaint;
  CPlugMaterial* MaterialFillColor;
  CPlugMaterial* MaterialLayerBlend;
  CPlugMaterial* MaterialLayerModulate;
  CPlugShader* ShaderRasterRgbMask;
  CPlugShader* ShaderRasterAlphaMask;
  CPlugBitmap* BitmapBrushFade;
  CPlugBitmap* BitmapStickerFade;
  CPlugFileImg* ImageSubObjectAllIcon;
  const NodArray ScenesFids;
  float MouseZDeltaRot;
  float MouseZDeltaScale;
  float MouseZDeltaTransparency;
  float MouseZDeltaShininess;
  float BrushDtRefSc;
  bool BrushUseDt;
  bool CameraBottomClipGeometry;
  float CameraBottomIn_m1p1;
  CPlugGameSkin* Remapping;
  CSystemFidsFolder* RemapFolder;
  CFuncKeysReal* FxBloom_FidFuncIntensAtHdrNorm;
};

struct CGameLeagueManager : public CMwNod {
  CGameLeagueManager();

  uint CacheDuration;
  NodArray Leagues;
};

struct CGameCtnMediaBlockEditorTriangles : public CGameCtnMediaBlockEditor {
  CGameCtnMediaBlockEditorTriangles();

  void ModeMoveVertexs();
  void ModeCreateTriangles();
  void ModeDeleteVertexs();
  UnknownType VertRGB;
  UnknownType VertAlpha;
  float VertPosX;
  float VertPosY;
  float VertPosZ;
  CControlFrame* Frame;
};

// File extension: 'GameCtnMediaBlockTriangles2D.gbx'
struct CGameCtnMediaBlockTriangles2D : public CGameCtnMediaBlockTriangles {
  CGameCtnMediaBlockTriangles2D();

};

// File extension: 'GameCtnMediaBlockTriangles3D.gbx'
struct CGameCtnMediaBlockTriangles3D : public CGameCtnMediaBlockTriangles {
  CGameCtnMediaBlockTriangles3D();

};

struct CGameCtnBlockInfo : public CGameCtnCollector {
  enum EBaseType {
    None = 0,
    Conductor = 1,
    Generator = 2,
    Collector = 3,
  };
  enum EWayPointType {
    Start = 0,
    Finish = 1,
    Checkpoint = 2,
    None = 3,
    StartFinish = 4,
    Dispenser = 5,
  };
  enum MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  CGameCtnBlockInfoVariantGround* VariantBaseGround;
  CGameCtnBlockInfoVariantAir* VariantBaseAir;
  const NodArray AdditionalVariantsGround;
  const NodArray AdditionalVariantsAir;
  bool IsPillar;
  EWayPointType EdWaypointType;
  EBaseType BaseType;
  UnknownType SymmetricalBlockInfoId;
  UnknownType Dir;
  CGameCtnBlockInfo* SymmetricalBlockInfoConnected;
  MultiDirEnum PillarShapeMultiDir;
  bool EdNoRespawn;
  bool IconAutoUseGround;
  CMwNod* IconMacroBlockInfo;
  CMwNod* PrecalcPartParams;
  UnknownType PrecalcPartLoc;
  bool CharPhySpecialPropertyCustomizable;
  CPlugCharPhySpecialProperty* CharPhySpecialProperty;
  CGameWaypointSpecialProperty* WaypointSpecialProperty;
  CGamePodiumInfo* PodiumInfo;
  CGamePodiumInfo* IntroInfo;
  CPlugFogVolumeBox* FogVolumeBox;
  CPlugSound* Sound1;
  UnknownType Sound1Loc;
  CPlugSound* Sound2;
  UnknownType Sound2Loc;
  const wstring Name;
  const bool IsRoad;
  const bool IsTerrain;
  const bool IsPodium;
  const EWayPointType WaypointType;
  const EWayPointType WayPointType;
  const bool NoRespawn;
  const CGameCtnBlockInfoVariantGround* VariantGround;
  const CGameCtnBlockInfoVariantAir* VariantAir;
};

// File extension: 'EDFlat.Gbx'
struct CGameCtnBlockInfoFlat : public CGameCtnBlockInfo {
  CGameCtnBlockInfoFlat();

};

// File extension: 'EDFrontier.Gbx'
struct CGameCtnBlockInfoFrontier : public CGameCtnBlockInfo {
  CGameCtnBlockInfoFrontier();

};

// File extension: 'EDClassic.Gbx'
struct CGameCtnBlockInfoClassic : public CGameCtnBlockInfo {
  CGameCtnBlockInfoClassic();

};

// File extension: 'EDRoad.Gbx'
struct CGameCtnBlockInfoRoad : public CGameCtnBlockInfo {
  CGameCtnBlockInfoRoad();

  CGameCtnBlockInfoSlope* Slope;
};

// File extension: 'EDClip.Gbx'
struct CGameCtnBlockInfoClip : public CGameCtnBlockInfo {
  CGameCtnBlockInfoClip();

  enum EnumClipType {
    ClassicClip = 0,
    FreeClipSide = 1,
    FreeClipTop = 2,
    FreeClipBottom = 3,
  };
  enum MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  bool HasPassingPoint;
  float PassingPointPosX;
  float PassingPointPosY;
  float PassingPointRoll;
  float PassingPointPitch;
  UnknownType ASymmetricalClipId;
  UnknownType ClipGroupId;
  UnknownType SymmetricalClipGroupId;
  EnumClipType ClipType;
  bool IsFullFreeClip;
  bool IsExclusiveFreeClip;
  bool CanBeDeletedByFullFreeClip;
  MultiDirEnum TopBottomMultiDir;
};

// File extension: 'EDSlope.Gbx'
struct CGameCtnBlockInfoSlope : public CGameCtnBlockInfo {
  CGameCtnBlockInfoSlope();

};

// File extension: 'EDPylon.Gbx'
struct CGameCtnBlockInfoPylon : public CGameCtnBlockInfo {
  CGameCtnBlockInfoPylon();

  float PylonOffset;
  UnknownType PylonAmount;
  UnknownType PylonPlacement;
  int BlockHeightOffset;
};

// File extension: 'EDRectAsym.Gbx'
struct CGameCtnBlockInfoRectAsym : public CGameCtnBlockInfo {
  CGameCtnBlockInfoRectAsym();

};

struct CGameCtnBlock : public CMwNod {
  CGameCtnBlock();

  enum CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  const UnknownType DescId;
  const UnknownType CollectionId;
  const UnknownType DescAuthor;
  uint CoordX;
  uint CoordY;
  uint CoordZ;
  CardinalDirections Dir;
  const uint MobilIndex;
  const CSceneMobil* Mobil;
  NodArray BlockUnitsE;
  const CGameCtnBlockSkin* Skin;
  void ApplySkin();
  bool Editable;
  const CGameCtnBlockInfo* BlockInfo;
  CPlugCharPhySpecialProperty* CharPhySpecialProperty;
  CGameWaypointSpecialProperty* WaypointSpecialProperty;
  const uint BlockScriptId;
  const bool CanHaveAnchor;
  void UseDefaultAnchor();
  void UseCustomAnchor();
  const int3 Coord;
  const CardinalDirections Direction;
  const NodArray BlockUnits;
  const CGameCtnBlockInfo* BlockModel;
};

struct CGameCtnBlockUnit : public CMwNod {
  CGameCtnBlockUnit();

  uint PlacePylons;
  uint AcceptPylons;
  const int3 Offset;
  const int3 AbsoluteOffset;
  const CGameCtnBlockUnitInfo* BlockUnitModel;
  const CGameCtnBlock* Block;
};

struct CGameCtnBlockSkin : public CMwNod {
  CGameCtnBlockSkin();

  bool IsDirty;
  CSystemPackDesc* PackDesc;
  CSystemPackDesc* ParentPackDesc;
  wstring Text;
};

struct CGameCtnPylonColumn : public CMwNod {
  CGameCtnPylonColumn();

};

struct CGameCtnChallengeParameters : public CMwNod {
  CGameCtnChallengeParameters();

  uint AuthorScore;
  uint AuthorTime;
  uint GoldTime;
  uint SilverTime;
  uint BronzeTime;
  void ResetGoldSilverBronzeStunts();
  wstring MapType;
  wstring MapStyle;
  const wstring Type;
  const wstring Style;
  string Tip;
  CGameCtnGhost* RaceValidateGhost;
  const bool IsValidatedForScriptModes;
};

// File extension: 'TMZone.Gbx'
struct CGameCtnZone : public CMwNod {
  CGameCtnZone();

  UnknownType ZoneId;
  UnknownType SurfaceId;
  UnknownType WaterId;
  bool IsLargeZone;
  float VisualTopGroundHeight;
  UnknownType ForcedParentZoneFrontierId;
  const uint Height;
};

// File extension: 'ZoneFlat.Gbx'
struct CGameCtnZoneFlat : public CGameCtnZone {
  CGameCtnZoneFlat();

  bool GroundOnly;
  bool AutoSimplifyGenealogy;
  CGameCtnBlockInfoFlat* BlockInfoFlat;
  CGameCtnBlockInfoClip* BlockInfoClip;
  CGameCtnBlockInfoRoad* BlockInfoRoad;
  CGameCtnBlockInfoPylon* BlockInfoPylon;
};

// File extension: 'ZoneFrontier.Gbx'
struct CGameCtnZoneFrontier : public CGameCtnZone {
  CGameCtnZoneFrontier();

  int ParentToChildHeightChange;
  const int BlockYOffsetFromParent;
  UnknownType ParentZoneId;
  UnknownType ChildZoneId;
  CGameCtnBlockInfoFrontier* BlockInfoFrontier;
  bool FrontierParentBorder_AcceptPylons;
  bool FrontierChildBorder_AcceptPylons;
  bool FrontierTransitionMiddle_AcceptPylons;
  bool FrontierStraightMiddle_AcceptPylons;
  NodArray CompatibleZones;
};

// File extension: 'GameSkinnedNod.gbx'
struct CGameSkinnedNod : public CGameNod {
  CGameSkinnedNod();

  CMwNod* BaseNodFid;
  CPlugGameSkin* GameSkin;
  NodArray RemapFids;
};

struct CGameCtnMediaShootParams : public CMwNod {
  CGameCtnMediaShootParams();

  uint VideoFps;
  float Duration;
  uint SizeX;
  uint SizeY;
  bool Hq;
  uint HqSampleCountPerAxe;
  bool HqSoftShadows;
  bool HqAmbientOcc;
  UnknownType Stereo3d;
  bool IsAudioStream;
};

struct CGameCampaignsScoresManager : public CMwNod {
  CGameCampaignsScoresManager();

};

struct CGameCampaignScores : public CMwNod {
  CGameCampaignScores();

};

struct CGameChallengeScores : public CMwNod {
  CGameChallengeScores();

};

struct CGameGeneralScores : public CMwNod {
  CGameGeneralScores();

};

struct CGameManialinkBrowser : public CMwNod {
  const CControlFrame* FramePage;
  const CControlFrame* FrameHeader;
  const CGameManialinkPage* CurrentPage;
  const CGameManiaApp* CurrentManiaApp;
  bool Manialink_Enabled;
  bool Manialink_Active;
  wstring ManialinkBrowser_Link;
  UnknownType ManialinkBrowser_Frame3dFocused;
  void ManialinkBrowser_OnHome();
  void ManialinkBrowser_OnQuit();
  void ManialinkBrowser_OnBack();
  void ManialinkBrowser_OnForward();
  void GoToHomeAndResetHistory();
  void GoToCurUrl();
};

struct CGameNetFormAdmin : public CNetNod {
  CGameNetFormAdmin();

};

struct CGameNetFileTransfer : public CNetFileTransfer {
};

struct CGameNetFormTimeSync : public CNetFormTimed {
  CGameNetFormTimeSync();

};

struct CGameNetFormCallVote : public CGameNetForm {
  CGameNetFormCallVote();

};

// File extension: 'CtrlCam.Gbx'
struct CGameControlCamera : public CSceneController {
  CGameControlCamera();

  void Reset();
  bool IsActive;
  bool IsFirstPerson;
  float Fov;
  float NearZ;
  float FarZ;
};

// File extension: 'CtrlCamFree.gbx'
struct CGameControlCameraFree : public CGameControlCamera {
  CGameControlCameraFree();

  vec3 Translation;
  float X;
  float Y;
  float Z;
  float Pitch;
  float Yaw;
  float Roll;
  float Radius;
  vec3 RelativeFollowedPos;
  vec3 TargetPos;
  bool TargetIsEnabled;
  float FovY;
  float DofFocusZ;
  float DofLensSize;
  bool ClampPitch;
  float ClampPitchMin;
  float ClampPitchMax;
  float Acceleration;
  float StartMoveSpeed;
  UnknownType MoveSpeedCoef;
  float MoveSpeed;
  float MoveInertia;
  float RotateSpeed;
  float RotateInertia;
  bool UseForcedRoll;
  float ForcedRoll;
  bool DisableMouseZ;
  bool DebugUseOculus;
};

// File extension: 'CtrlCamOrbital3d.gbx'
struct CGameControlCameraOrbital3d : public CGameControlCameraTarget {
  CGameControlCameraOrbital3d();

  bool CanUseRelativeTargetLocation;
  UnknownType RelativeTargetLocation;
  float MinFov;
  float MaxFov;
  bool CanCameraMove;
  bool UseAutoRadiusFromTargets;
  vec2 RotateSpeed;
  vec3 RadiusScale;
  bool OcclusionIsEnable;
  bool UsingBorderToRotate;
  float MouseBorderMoveSize;
  float OcclusionTargetRadius;
  float OcclusionDistFromHit;
  float Radius;
  float Latitude;
  float Longitude;
  float WheelSensitivity;
  float FovKeySensitivity;
  float ZoomKeySensitivity;
  float DefaultRadius;
  float RadiusMin;
  float RadiusMax;
  float LatitudeMin;
  float LatitudeMax;
  bool FixedTargetLocation;
  bool UseNonLinearZoom;
};

struct CGameControlCameraEffect : public CMwNod {
  CGameControlCameraEffect();

  void Reset();
  void Install();
  void Uninstall();
  const bool IsInstalled;
};

struct CGameControlCameraEffectShake : public CGameControlCameraEffect {
  CGameControlCameraEffectShake();

  const vec3 OffsetPos;
  float Yaw;
  float Pitch;
  float Roll;
  float Speed;
  float Intensity;
};

struct CGameControlCameraTarget : public CGameControlCamera {
};

struct CGameRace : public CGameCtnPlayground {
  CScene2d* InterfaceFid;
  void WriteDebugValidateStringToDisk();
};

struct CGameLadderRanking : public CMwNod {
  wstring Name;
  wstring Path;
  string Login;
  string ScoreStr;
  uint Ranking;
  uint Ranking2;
  uint Score;
  uint Stars;
  uint ChildsCount;
  bool IsFolder;
};

struct CGameCtnMediaBlock : public CMwNod {
  const bool IsInstalled;
  const bool IsActive;
  void SwitchOn();
  void SwitchOff();
  float Start;
  float End;
};

// File extension: 'GameCtnMediaTrack.gbx'
struct CGameCtnMediaTrack : public CMwNod {
  CGameCtnMediaTrack();

  wstring Name;
  bool IsReadOnly;
  bool IsKeepPlaying;
  bool IsCycling;
  const NodArray Blocks;
};

// File extension: 'Clip.gbx'
struct CGameCtnMediaClip : public CMwNod {
  CGameCtnMediaClip();

  wstring Name;
  const NodArray Tracks;
  uint LocalPlayerClipEntIndex;
  bool StopOnRespawn;
};

// File extension: 'GameCtnMediaClipGroup.gbx'
struct CGameCtnMediaClipGroup : public CMwNod {
  CGameCtnMediaClipGroup();

  const NodArray Clips;
};

struct CGameCtnMediaBlockCamera : public CGameCtnMediaBlock {
  const bool IsInstalled;
  const bool IsActive;
};

// File extension: 'GameCtnMediaBlockUi.gbx'
struct CGameCtnMediaBlockUi : public CGameCtnMediaBlock {
  CGameCtnMediaBlockUi();

  CControlContainer* UserInterface;
};

struct CGameCtnMediaBlockFx : public CGameCtnMediaBlock {
  const float FadeDuration;
  const CSceneFx* SceneFx;
};

struct CGameCtnMediaBlockFxBlur : public CGameCtnMediaBlockFx {
};

// File extension: 'GameCtnMediaBlockFxColors.gbx'
struct CGameCtnMediaBlockFxColors : public CGameCtnMediaBlockFx {
  CGameCtnMediaBlockFxColors();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockFxBlurDepth.gbx'
struct CGameCtnMediaBlockFxBlurDepth : public CGameCtnMediaBlockFxBlur {
  CGameCtnMediaBlockFxBlurDepth();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockFxBlurMotion.gbx'
struct CGameCtnMediaBlockFxBlurMotion : public CGameCtnMediaBlockFxBlur {
  CGameCtnMediaBlockFxBlurMotion();

};

// File extension: 'GameCtnMediaBlockFxBloom.gbx'
struct CGameCtnMediaBlockFxBloom : public CGameCtnMediaBlockFx {
  CGameCtnMediaBlockFxBloom();

  void SwitchOn();
};

// File extension: 'GameCtnMediaBlockCamGame.gbx'
struct CGameCtnMediaBlockCameraGame : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraGame();

  EGameCam GameCam;
  uint ClipEntId;
};

struct CGameCtnMediaBlockTime : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTime();

  void SwitchOn();
};

struct CGameCtnMediaClipPlayer : public CMwNod {
  const CGameCtnMediaClip* Clip;
  const CScene2d* Scene2d;
  const NodArray EdMediaTracks;
  const uint LocalPlayerReplicaId;
};

struct CGameCtnMediaBlockEvent_deprecated : public CGameCtnMediaBlock {
};

struct CGameHud3d : public CMwNod {
  CScene2d* Overlay;
  bool Players;
  bool Markers;
  bool DisplayAvatar;
  bool DisplayName;
  bool DisplayBg;
  bool DisplayEchelon;
  bool DoDistanceFade;
  float DisplaySize;
  UnknownType PlayerBaseTint;
  float PlayerBaseAlpha;
  UnknownType MarkerBaseTint;
  float MarkerBaseAlpha;
  float WorldCartoucheAltitude;
  float ScreenCartoucheAltitude;
  bool ForceNameShadow;
  float NameClipLengthSizeRatio;
  float NameRatioXY;
  float LineWidthRatio;
  float GaugeYPos;
  float GaugeHeight;
  float GaugeWidth;
  uint VisibilityFadeDuration;
  uint VisibilityTestPeriod;
};

struct CGameManiaNetResource : public CMwNod {
  const string Url;
};

struct CGamePlayerInfo : public CGameNetPlayerInfo {
  CGamePlayerInfo();

  enum EEchelon {
    None = 0,
    Bronze1 = 1,
    Bronze2 = 2,
    Bronze3 = 3,
    Silver1 = 4,
    Silver2 = 5,
    Silver3 = 6,
    Gold1 = 7,
    Gold2 = 8,
    Gold3 = 9,
  };
  enum ETagType {
    Bronze = 0,
    Silver = 1,
    Gold = 2,
    Nadeo = 3,
  };
  enum EStereoDisplayMode {
    None = 0,
    Stereo = 1,
    HMD = 2,
  };
  enum EMuteSetting {
    Auto = 0,
    Muted = 1,
    NotMuted = 2,
  };
  const string Login;
  const wstring Name;
  const wstring AvatarUrl;
  const wstring ZonePath;
  const wstring ZoneFlagUrl;
  const wstring CountryFlagUrl;
  const string Language;
  const wstring Description;
  const vec3 Color;
  const string ClubLink;
  const string BroadcastTVLogin;
  const string SteamUserId;
  const uint FameStars;
  const EEchelon Echelon;
  const uint NextEchelonPercent;
  const bool IsBeginner;
  const uint LadderRank;
  const uint LadderTotal;
  const float LadderPoints;
  const wstring LadderZoneName;
  const wstring LadderZoneFlagUrl;
  const float ReferenceScore;
  const bool IsFakeUser;
  const array<uint> Tags_Favored_Indices;
  const array<string> Tags_Id;
  const UnknownType Tags_Type;
  const array<wstring> Tags_Comments;
  const array<wstring> Tags_Deliverer;
  const EStereoDisplayMode StereoDisplayMode;
  bool HackCamHmdDisabled;
  const bool VoiceChat_Supported;
  EMuteSetting VoiceChat_MuteSetting;
  const bool VoiceChat_IsSpeaking;
  const bool VoiceChat_IsMuted;
  const uint RequestedClan;
  const bool RequestsSpectate;
  const bool IsConnectedToMasterServer;
  const array<string> AlliesConnected;
  const CPlugBitmap* ZoneBitmap;
  const CGameLeague* ZoneLeague;
  const bool WishSpectator;
  const bool ForcedSpectator;
  uint PlaygroundTeamRequested;
  UnknownType LightTrailLinearHue;
  const wstring StrLadderRanking;
  const wstring StrLadderRankingSimple;
  const string StrLadderScore;
  const string StrLadderLastPoints;
  const string StrLadderWins;
  const string StrLadderDraws;
  const string StrLadderLosses;
  const string StrLadderTeamName;
  const string StrLadderTeamRanking;
  const string StrLadderTeamRankingSimple;
  const string StrLadderNbrTeams;
  const string StrLadderScoreRounded;
  const uint PlaygroundRoundNum;
  const string GameStateName;
};

struct CGamePlayerCameraSet : public CMwNod {
  CGamePlayerCameraSet();

};

struct CGamePlayerProfile : public CMwNod {
  CGamePlayerProfile();

  string ProfileName;
  const wstring DisplayProfileName;
  const uint TotalPlayTime;
  const NodArray Chunks;
  CGamePlayerProfileChunk_AccountSettings* AccountSettings;
  CGamePlayerProfileChunk_GameSettings* GameSettings;
  CGamePlayerProfileChunk_GameScores* GameScores;
  CGamePlayerProfileChunk_GameStats* GameStats;
  CGamePlayerProfileChunk_GlobalInterfaceSettings* GlobalInterfaceSettings;
  CGamePlayerProfileChunk_InterfaceSettings* InterfaceSettings;
  CGamePlayerProfileChunk_VehiclesSettings* VehiclesSettings;
  CGamePlayerProfileChunk_ManiaPlanetStations* ManiaPlanetStations;
  const NodArray InputBindingsConfigs;
  const NodArray PackagesInfosChunks;
  const CScriptTraitsPersistent* ScriptPersistentTraits_NoTitle;
};

struct CGameScriptDebugger : public CMwNod {
  enum EVisibility {
    Hidden = 0,
    Editor = 1,
    EditorAndLogs = 2,
    LogsFull = 3,
    LogsReduced = 4,
  };
  EVisibility Visibility;
  wstring DialogEditScript_TempText;
  wstring DialogEditScript_TempSearchText;
  uint DialogEditScript_TempLineNumber;
  wstring DialogEditScript_TempReplaceText;
  void DialogEditScript_Ok();
  void DialogEditScript_RequestCancel();
  void DialogEditScript_Cancel();
  void DialogEditScript_Compile();
  void DialogEditScript_Save();
  void DialogEditScript_Save_Done();
  void DialogEditScript_SaveAllFiles_Step2();
  void DialogEditScript_Find();
  void DialogEditScript_ToggleIncludes();
};

// File extension: 'League.Gbx'
struct CGameLeague : public CMwNod {
  CGameLeague();

  wstring Path;
  wstring Name;
  wstring Description;
  string Login;
  uint OnlinePlayersCount;
  uint OnlineHostsCount;
  UnknownType MaxServerLevel;
  bool IsGroup;
  const CSystemData* Logo;
};

struct CGameCtnChallengeGroup : public CMwNod {
  CGameCtnChallengeGroup();

  wstring Name;
  const UnknownType Medal;
  bool Unlocked;
  void CleanChallenges();
  void EmptyChallenges();
  void IsUnlocked();
  const NodArray MapInfos;
};

// File extension: 'GameCtnCampaign.Gbx'
struct CGameCtnCampaign : public CMwNod {
  CGameCtnCampaign();

  enum EType {
    None = 0,
    Race = 1,
    Puzzle = 2,
    Survival = 3,
    Platform = 4,
    Stunts = 5,
    Training = 6,
  };
  enum ERequiredPlayersCount {
    Solo_Only = 0,
    Multi_Only = 1,
    Duo_Only = 2,
    Trio_Only = 3,
    Quatuor_Only = 4,
    All = 5,
  };
  enum EUnlockType {
    By_Row = 0,
    By_Column = 1,
    Custom = 2,
  };
  enum EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  const string CampaignId;
  UnknownType CollectionId;
  UnknownType IconId;
  wstring Name;
  EType Type;
  uint Index;
  EUnlockType UnlockType;
  ERequiredPlayersCount RequiredPlayersCount;
  wstring UnlockedByCampaign;
  uint NbMedals;
  uint NbBronzeMedals;
  uint NbSilverMedals;
  uint NbGoldMedals;
  uint NbAuthorMedals;
  const EMedal Medal;
  NodArray MapGroups;
  void AddChallengeGroup();
  wstring ModeScriptName;
  uint GetMapGroupCount();
  CGameCtnChallengeGroup* GetMapGroup(uint Index);
  CGameCtnChallengeInfo* GetNextMap(CGameCtnChallengeInfo* CurrentMapInfo);
  string ScoreContext;
  bool OfficialRecordEnabled;
};

struct CGameCtnGhostInfo : public CMwNod {
  const uint Time;
  const uint StuntsScore;
  const string Login;
  const wstring Nickname;
};

struct CGameCtnGhost : public CGameGhost {
  CGameCtnGhost();

  UnknownType ModelIdentName;
  UnknownType ModelIdentAuthor;
  UnknownType ModelIdentCollection;
  const uint EventsDuration;
  string GhostLogin;
  wstring GhostNickname;
  wstring GhostAvatarName;
  string RecordingContext;
  UnknownType LightTrailColor;
  const uint RaceTime;
  const uint NbRespawns;
  const uint StuntsScore;
  const UnknownType Validate_ChallengeUid;
  const string Validate_ExeVersion;
  const uint Validate_ExeChecksum;
  const string Validate_TitleId;
  const string Validate_RaceSettings;
  const uint Validate_OsKind;
  const uint Validate_CpuKind;
  const uint RecordedPlayerUid;
};

// File extension: 'TMReplay.Gbx'
struct CGameCtnReplayRecord : public CMwNod {
  CGameCtnReplayRecord();

  const CGameCtnMediaClip* Clip;
  const NodArray Ghosts;
  CGameCtnChallenge* Challenge;
  const uint Duration;
  void StopRecord();
  CFuncSegment* HumanTimeToGameTimeFunc;
};

struct CGameCtnReplayRecordInfo : public CGameFid {
  const UnknownType ChallengeId;
  const string MapUid;
  const UnknownType CollectionId;
  const uint BestTime;
  const wstring PlayerNickname;
  const string PlayerLogin;
};

struct CGamePlayerOfficialScores : public CMwNod {
  CGamePlayerOfficialScores();

};

struct CGameLadderRankingLeague : public CGameLadderRanking {
};

struct CGameLadderRankingPlayer : public CGameLadderRanking {
};

struct CGameLadderRankingSkill : public CGameLadderRanking {
  const wstring DynamicLeagueName;
  const CSystemData* DynamicLeagueLogo;
};

// File extension: 'Frame.Gbx'
struct CGameControlCard : public CControlFrame {
  CGameControlCard();

  CMwNod* DisplayedNod;
  void ForceReconfig();
  void ConnectChilds();
  void DisconnectChilds();
  bool UseDelays;
  bool UseOwnData;
  bool SelectionEnabled;
  bool CardFocused;
  bool CardSelected;
};

// File extension: 'CtnCtlCardMng.Gbx'
struct CGameControlCardManager : public CMwNod {
  CGameControlCardManager();

  const NodArray DataTypes;
};

// File extension: 'CtnDispType.Gbx'
struct CGameControlDataType : public CMwNod {
  CGameControlDataType();

  string Name;
  CGameControlCard* CardTemplate;
};

struct CGameCtnMediaBlockCameraSimple : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraSimple();

  const uint KeyCache;
};

struct CGameCtnMediaBlockCameraOrbital : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraOrbital();

  UnknownType BaseLocation;
};

// File extension: 'CtnMediaBlockCamPath.gbx'
struct CGameCtnMediaBlockCameraPath : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraPath();

  const bool IsPathDirty;
  CFuncKeysTrans* Path;
  const array<float> Lengths;
  const float CurveLength;
  const float TotalWeight;
};

// File extension: 'CtnMediaBlockCamCustom.gbx'
struct CGameCtnMediaBlockCameraCustom : public CGameCtnMediaBlockCamera {
  CGameCtnMediaBlockCameraCustom();

  const uint KeyCache;
};

struct CGameCtnMediaBlockCameraEffect : public CGameCtnMediaBlock {
};

// File extension: 'CtnMediaBlockCamFxShake.gbx'
struct CGameCtnMediaBlockCameraEffectShake : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectShake();

  const CGameControlCameraEffect* Effect;
};

// File extension: 'GameCtnMediaBlockImage.gbx'
struct CGameCtnMediaBlockImage : public CGameCtnMediaBlock {
  CGameCtnMediaBlockImage();

  CPlugBitmap* Bitmap;
  const CControlEffectSimi* Effect;
  const CControlBase* Mobil;
};

// File extension: 'CtnMediaBlockMusicFx.gbx'
struct CGameCtnMediaBlockMusicEffect : public CGameCtnMediaBlock {
  CGameCtnMediaBlockMusicEffect();

  uint Dummy;
};

// File extension: 'GameCtnMediaBlockSound.gbx'
struct CGameCtnMediaBlockSound : public CGameCtnMediaBlock {
  CGameCtnMediaBlockSound();

  CPlugSound* Sound;
  CAudioSource* AudioSource;
  const bool IsBlockPlaying;
  bool IsLooping;
  bool IsMusic;
  bool StopWithClip;
  uint PlayCount;
  void OnParamsModified();
};

// File extension: 'GameCtnMediaBlockText.gbx'
struct CGameCtnMediaBlockText : public CGameCtnMediaBlock {
  CGameCtnMediaBlockText();

  wstring Text;
  const CControlBase* Mobil;
  const CControlEffectSimi* Effect;
};

// File extension: 'GameCtnMediaBlockTrails.gbx'
struct CGameCtnMediaBlockTrails : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTrails();

};

struct CGameCtnMediaBlockTransition : public CGameCtnMediaBlock {
};

// File extension: 'CtnMediaBlockTransFade.gbx'
struct CGameCtnMediaBlockTransitionFade : public CGameCtnMediaBlockTransition {
  CGameCtnMediaBlockTransitionFade();

  const CControlBase* Mobil;
  UnknownType Color;
};

struct CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated : public CGameCtnMediaBlockUi {
};

struct CGameCtnMediaClipViewer : public CGameSwitcherModule {
  CGameCtnMediaClipViewer();

  const bool DoInputs;
  const _EStatus ViewerStatus;
  const CGameCtnMediaClip* Clip;
  const CGameCtnMediaClipPlayer* ClipPlayer;
  float PlaySpeed;
  const CGameCtnMediaClipGroup* ClipGroup;
  const CGameCtnMediaClip* ClipGroupClip;
  const CGameCtnMediaClipPlayer* ClipGroupPlayer;
  uint ClipGroupIndex;
  float ClipGroupStartTime;
};

struct CGameCursorBlock : public CMwNod {
  CGameCursorBlock();

  enum CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum AdditionalDirEnum {
    P0deg = 0,
    P15deg = 1,
    P30deg = 2,
    P45deg = 3,
    P60deg = 4,
    P75deg = 5,
  };
  int3 Coord;
  int3 Subdiv;
  int3 SubdivFactors;
  CardinalDirEnum Dir;
  AdditionalDirEnum AdditionalDir;
  float Pitch;
  float Roll;
  UnknownType Color;
  float BrightnessFactor;
  const CGameOutlineBox* CursorBox;
  const CPlugTree* CursorBoxShadow;
  const CSceneMobil* BlockMobil;
  const CSceneMobil* BlockClipsMobil;
  const CSceneMobil* BlockHelperMobil;
  const CSceneMobil* PickerMobil;
  const CSceneMobil* PickerHelperMobil;
  const CPlugTree* DirectionalArrow;
  UnknownType CanPlaceColor;
  UnknownType CanChangeVariantColor;
  UnknownType CanJoinColor;
  UnknownType CannotPlaceNorJoinColor;
  UnknownType NothingToDoColor;
  UnknownType GhostBlockColor;
  UnknownType VariantForcedColor;
};

struct CGameCtnEditor : public CGameEditorParent {
  CControlContainer* FrameRoot;
  const CGameEditorMainPlugin* MainPLugin;
};

struct CGameCtnMediaTracker : public CGameCtnEditor {
  CGameCtnMediaTracker();

  UnknownType EditionMode;
  const CGameCtnMediaClipPlayer* MediaClipPlayer;
  const CGameSafeFrame* SafeFrame;
  bool IsDisplayPlayerNames;
  void SafeFrameCreate();
  void SafeFrameDestroy();
  const CGameControlCameraFree* ControlCamFree;
  const CGameCtnMediaBlockEditor* BlockEditor;
  void Undo();
  void Redo();
  void TimePlay();
  void TimeStop();
  void TimePlayFromStart();
  void TimeSlowForward();
  void TimeNormalForward();
  void TimeFirstFrame();
  void TimeLastFrame();
  void ClipInsert();
  void ClipRemove();
  void TrackInsert();
  void TrackRemove();
  void TrackDuplicate();
  void BlockInsert();
  void BlockRemove();
  void BlockCutBefore();
  void BlockCutAfter();
  void KeyInsert();
  void KeyRemove();
  void KeyRemoveAll();
  void StartIsCycling();
  void EndIsCycling();
  void CameraKeyInsert();
  void CutBefore();
  void CutAfter();
  void IncTimeAndInsertKey();
  void MoveFaster();
  void MoveSlower();
  void SafeFrameSwitch();
  void SafeFrameVisibleSwitch();
  void NextKey();
  void PrevKey();
  void FullScreenSwitch();
  void ActionShootScreen();
  void EditClipConfigScript();
  void BlockHelpersSwitch();
  void TriggerModeValidate();
  void TriggerModeUpdateRef();
  void RecordGhostModeStopWait();
  void CursorUp();
  void CursorDown();
  void CursorRotate();
  void CursorSetHeightFromPickedPoint();
  void ClipGroupPreviewStop();
  void OpenInputList();
  void ButExit();
  void ButShootVideo();
  void ButShootScreen();
  void ButRecordGhost();
  void ButComputeShadows();
  void ButPreview();
  void But3dPreview();
  void ButSave();
  void ButExportClip();
  void ButExportClip_OnOk();
  void ButImportClip();
  void ButImportClip_OnOk();
  void ButImportGhosts();
  void ButImportGhosts_OnOk();
  void ButImportAction();
  void ButImportAction_OnOk();
  float OrientWeight;
  float OrientWeightDist;
  int ReplayTime;
  int BlockStart;
  int BlockEnd;
  void ButPrevFrame();
  void ButNextFrame();
  void ClipRename();
  void TrackRename();
  void ClipRemove_Ok();
  void TrackRemove_Ok();
  void BlockRemove_Ok();
  void ButTriggerMode();
  void ButPreviewClipGroup();
  uint MediaTrackerGhostRefIndex;
  uint MediaTrackerGhosts;
  void ButClipCam();
  void ButFreeCam();
  bool ButIsLooping;
  const bool ClipKeepPlaying;
  const bool ClipIsCycling;
  bool ClipIsInside;
  bool ClipIsScriptEvent;
  bool ClipStopOnRespawn;
  _EClipTriggerCond ClipTriggerCond;
  float ClipTriggerCondValue;
  bool TrackKeepPlaying;
  bool TrackIsCycling;
  uint ClipMaxPlayedCount;
  const string ActionBinding;
  void ButShowFullTimeLine();
  void ButSmoothSpeed();
  float EntryPlaySpeed;
  void ButResetRoll();
  void ButResetDir();
  void ButCamCustomAdvancedParams();
  void ButCamPathAdvancedParams();
  const CControlSimi2* ControlSimi2;
  NodArray Clips;
  NodArray Tracks;
  CGameCtnMediaTrack* SelTrack;
  wstring TrackName;
  wstring TrackText;
  float TextPosX;
  float TextPosY;
  UnknownType TextDepth;
  float TextRot;
  float TextScaleX;
  float TextScaleY;
  UnknownType TextOpacity;
  const wstring TrackImage;
  float ImagePosX;
  float ImagePosY;
  UnknownType ImageDepth;
  float ImageRot;
  float ImageScaleX;
  float ImageScaleY;
  UnknownType ImageOpacity;
  void ButChooseImage();
  void ButChooseSound();
  float TransFadeOpacity;
  float CamPosXCamCustom;
  float CamPosYCamCustom;
  float CamPosZCamCustom;
  float CamPitchCamCustom;
  float CamYawCamCustom;
  float CamRollCamCustom;
  UnknownType CamFovCamCustom;
  const uint CamAnchorCamCustom;
  const wstring CamAnchorNameCamCustom;
  bool CamIsAnchorVisibleCamCustom;
  bool CamUseAnchorOrientationCamCustom;
  const uint CamTargetCamCustom;
  const wstring CamTargetNameCamCustom;
  float CamTargetPosXCamCustom;
  float CamTargetPosYCamCustom;
  float CamTargetPosZCamCustom;
  _ECamInterpCamCustom CamInterpCamCustom;
  float CamLeftTangentXCamCustom;
  float CamLeftTangentYCamCustom;
  float CamLeftTangentZCamCustom;
  float CamRightTangentXCamCustom;
  float CamRightTangentYCamCustom;
  float CamRightTangentZCamCustom;
  float CamNearZCamCustom;
  float CamPosXCamPath;
  float CamPosYCamPath;
  float CamPosZCamPath;
  float CamPitchCamPath;
  float CamYawCamPath;
  float CamRollCamPath;
  UnknownType CamFovCamPath;
  const uint CamAnchorCamPath;
  const wstring CamAnchorNameCamPath;
  float CamWeightCamPath;
  bool CamIsAnchorVisibleCamPath;
  bool CamUseAnchorOrientationCamPath;
  const uint CamTargetCamPath;
  const wstring CamTargetNameCamPath;
  float CamTargetPosXCamPath;
  float CamTargetPosYCamPath;
  float CamTargetPosZCamPath;
  float CamNearZCamPath;
  void ButCamAnchorPrev();
  void ButCamAnchorNext();
  void ButCamTargetPrev();
  void ButCamTargetNext();
  const string CamGameCur;
  void ButCamGamePrev();
  void ButCamGameNext();
  const uint CamGameTarget;
  const wstring CamGameTargetName;
  void ButCamGameTargetPrev();
  void ButCamGameTargetNext();
  const wstring VehicleLightTargetName;
  void ButVehicleLightTargetPrev();
  void ButVehicleLightTargetNext();
  float TimeValue;
  float TimeTangent;
  UnknownType FxColorsFxIntensity;
  UnknownType FxColorsZMode;
  float FxColorsZ_Near;
  UnknownType FxColorsInverseRGB;
  UnknownType FxColorsHue;
  UnknownType FxColorsSaturation;
  UnknownType FxColorsBrightness;
  UnknownType FxColorsContrast;
  UnknownType FxColorsModulateR;
  UnknownType FxColorsModulateG;
  UnknownType FxColorsModulateB;
  UnknownType FxColorsIntensityF;
  float FxColorsZ_Far;
  UnknownType FxColorsInverseRGBF;
  UnknownType FxColorsHueF;
  UnknownType FxColorsSaturationF;
  UnknownType FxColorsBrightnessF;
  UnknownType FxColorsContrastF;
  UnknownType FxColorsModulateRF;
  UnknownType FxColorsModulateGF;
  UnknownType FxColorsModulateBF;
  float FxBlurDepthLensSize;
  bool FxBlurDepthForceZ;
  float FxBlurDepthFocusZ;
  wstring FxCameraMapFileName;
  void ButFxCameraMapScreenShot();
  void ButFxCameraMapReloadFile();
  float CamFxShakeIntensity;
  float CamFxShakeSpeed;
  float CamFxScriptA;
  float CamFxScriptB;
  float CamFxScriptC;
  UnknownType StereoSepMax;
  UnknownType StereoSepUpToMax;
  UnknownType StereoScreenDist;
  float DofFocusZ;
  float DofLensSize;
  const wstring DofTargetName;
  void ButDofTargetPrev();
  void ButDofTargetNext();
  float DofTargetPosX;
  float DofTargetPosY;
  float DofTargetPosZ;
  float ToneMapExposure;
  float ToneMapMaxHDR;
  float ToneMapLightTrailScale;
  uint ToneMapFilmCurve;
  float BloomHdrFxIntensity;
  float BloomHdrStreaksIntensity;
  float BloomHdrStreaksAttenuation;
  float DirtyLensIntensity;
  const wstring ColorGradingName;
  float ColorGradingIntensity;
  void ButChooseColorGrading();
  uint ColoringCapturableIndex;
  float ColoringCapturableHue;
  float ColoringCapturableGauge;
  uint ColoringCapturableEmblemIndex;
  bool ColoringCapturableEmblemBlink;
  uint ColoringBaseBaseIndex;
  float ColoringBaseHue;
  float ColoringBaseIntensity;
  const CGameCtnMediaBlockCameraEffectInertialTracking* SelBlockCamFxTracking;
  float TimeSpeedValue;
  const wstring TrackSound;
  bool SoundIsMusic;
  bool SoundStopWithClip;
  UnknownType SoundVolume;
  UnknownType SoundPan;
  float SoundPosX;
  float SoundPosY;
  float SoundPosZ;
  bool SoundLooping;
  uint SoundPlayCount;
  const wstring SoundTargetName;
  void ButSoundTargetPrev();
  void ButSoundTargetNext();
  bool AudioToSpeak;
  bool ShowHUD;
  bool ShowPing;
  bool ShowCrossHair;
  UnknownType CrossHairSizeScale;
  UnknownType MusicVolume;
  UnknownType GlobalSoundVolume;
  wstring GhostName;
  const wstring GhostSkin;
  const uint GhostRaceTime;
  float GhostStartOffset;
  bool GhostNoDamage;
  bool GhostForceLight;
  bool GhostForceTeamColor;
  UnknownType GhostLightIntens;
  void BlockGhost_SetAsCameraTarget();
  void ButGhostOrEntitySkinSelect();
  bool RenderHq;
  bool RenderHqSoftShadows;
  uint RenderHqCountSS;
  void ButFrameKeyAdvanced();
  bool DrawGhostPaths;
  bool DrawCameraPaths;
  bool GhostPathTranslationC1;
  const wstring GhostSkinSimple;
  void ButGhostSkinSelectSimple();
  CMwNod* DebugNod;
  wstring ManialinkURL;
  wstring ManialinkInterface;
  bool ManialinkInterfaceShow;
  float FogDistance;
  UnknownType FogIntensity;
  UnknownType FogSkyIntensity;
  UnknownType FogSliderBlendF;
  UnknownType CloudsSliderOpacity;
  float CloudsSliderSpeedScale;
  const CMwNod* TriggerOutlineBox;
  const CPlugBitmap* Shoot_Bitmap;
  void ButtonEditCameraEffectScript();
  bool DynaCam_Helpers;
  bool ButtonScreenCaptures;
};

struct CGamePopUp : public CMwNod {
  void OnSelect();
  void OnCancel();
};

struct CGameCtnEdControlCam : public CMwNod {
};

struct CGameCtnEdControlCamCustom : public CGameCtnEdControlCam {
  CGameCtnEdControlCamCustom();

};

struct CGameCtnEdControlCamPath : public CGameCtnEdControlCam {
  CGameCtnEdControlCamPath();

};

struct CGameSafeFrame : public CMwNod {
  CGameSafeFrame();

  uint SafeFrameSizeX;
  uint SafeFrameSizeY;
  float Zoom;
  vec2 Position;
  bool AutoZoom;
};

struct CGameSafeFrameConfig : public CMwNod {
  CGameSafeFrameConfig();

  vec4 Color;
  vec4 LinesColor;
};

struct CGameCtnPainter : public CMwNod {
  CGameCtnPainter();

  UnknownType PainterMode;
  const CSceneMobil* PlayerMobil;
  const CGameControlCameraOrbital3d* ControlCameraOrbital3d;
  CPlugShader* PaintSolidShader;
  CPlugSolid* PaintSolid;
  const CPlugBitmap* IconSkinBitmap;
  const CPlugBitmap* OldBitmap;
  const CPlugBitmap* BitmapToPaintSrc;
  const CPlugBitmap* BitmapToPaintDst;
  const CGameBadgeStickerSlots* BadgeStickerSlots;
  bool ButtonFillModeEnabled;
  bool ButtonBrushModeEnabled;
  bool ButtonStickerModeEnabled;
  bool ButtonLayerModeEnabled;
  bool ButtonTeamModeEnabled;
  UnknownType PaintColor;
  UnknownType Scale;
  UnknownType Angle;
  UnknownType Shininess;
  UnknownType Transparency;
  bool ButtonPaintSymModeSelected;
  bool ButtonColorPickerModeSelected;
  void OnOkInHelpFrame();
  void OnButtonCurrentColorClicked();
  void OnButtonCustomColor0Clicked();
  void OnButtonCustomColor1Clicked();
  void OnButtonCustomColor2Clicked();
  void OnButtonCustomColor3Clicked();
  void OnButtonCustomColor4Clicked();
  void HasToAlignSticker();
  void ImageQuarterRotLeft();
  void ImageQuarterRotRight();
  void EngageColorChooserMode();
  void Undo();
  void Redo();
  void SaveSkin();
  void SaveSkinAs();
  void SaveSkinAs_OnOk();
  void ReloadSkin();
  void WantHelpDialog();
  bool ButtonPaintWithTextEnabled;
  wstring TextToCreateBitmap;
  CPlugBitmap* BitmapText;
};

struct CGameControlGrid : public CControlGrid {
  CGameControlGrid();

  uint MaxPerColumn;
  uint MaxPerRow;
  uint FastNextPageCount;
  uint FastPreviousPageCount;
  uint ForcedPageCount;
  bool ForceHideArrows;
  bool ForceHidePageCounter;
  bool HaveLocalData;
  bool HideLocalDataIfNone;
  uint CurrentPage;
  uint PageCount;
  void UpdatePageCount();
  void UpdatePageCounter();
  void UpdateNavigationButtons();
  void UpdateLocalData();
  void OnCurrentPageChanged();
  CControlButton* ButtonFirstPage;
  CControlButton* ButtonFastPreviousPage;
  CControlButton* ButtonPreviousPage;
  CControlEntry* EntryPageCounter;
  CControlButton* ButtonNextPage;
  CControlButton* ButtonFastNextPage;
  CControlButton* ButtonLastPage;
  CControlBase* BaseLocalData;
  void OnFirstPage();
  void OnFastPreviousPage();
  void OnPreviousPage();
  void OnNextPage();
  void OnFastNextPage();
  void OnLastPage();
  string StrPageCounter;
  const uint Remote_TotalCount;
  const string Remote_SpecificOverTotalCount;
  const CGameRemoteBufferPool* Remote_Pool;
};

// File extension: 'GameGridCards.Gbx'
struct CGameControlGridCard : public CGameControlGrid {
  CGameControlGridCard();

  CGameControlCardManager* CardManager;
  bool PushByColumns;
  bool LeftToRight;
  bool UpToDown;
  bool CacheAtCreation;
  bool AreCardsReadOnly;
  bool UseCustomSelection;
  bool FillWithDefault;
  string DefaultCardName;
  NodArray NodsToDisplay;
  NodArray NodCards;
  void UpdateFromDatas();
  void UpdateOnlyCards();
  void PrecacheAll();
  void CleanCaches();
};

struct CGameCtnNetServerInfo : public CGameNetServerInfo {
  const wstring ServerName;
  const string ServerLogin;
  const string JoinLink;
  const wstring Comment;
  const string ServerVersionBuild;
  const uint PlayerCount;
  const uint MaxPlayerCount;
  const uint SpectatorCount;
  const uint MaxSpectatorCount;
  const float PlayersLevelMin;
  const float PlayersLevelAvg;
  const float PlayersLevelMax;
  const uint ServerLevel;
  const wstring ServerLevelText;
  const wstring ModeName;
  const float LadderServerLimitMax;
  const float LadderServerLimitMin;
  const array<wstring> PlayerNames;
  const array<wstring> ChallengeNames;
  const uint NbChallenges;
  const bool HasBuddies;
  const bool IsFavourite;
  const bool IsLobbyServer;
  const bool IsPrivate;
  const bool IsPrivateForSpectator;
  const string SendToServerAfterMatchUrl;
  wstring ServerName_Menu;
  wstring Comment_Menu;
  const string PlayerCountOverMax;
  const UnknownType LadderMode;
  const wstring PlayerName;
  const bool IsBuddy_HackForServerInfoUsedAsPlayer;
  bool AllowDownload;
  bool DisableHorns;
  bool DisableServiceAnnounces;
  string ClientUIRootModuleUrl;
  uint HideServer;
  UnknownType ValidationMode;
  UnknownType ValidationAction_Invalid;
  UnknownType ValidationAction_NA;
  bool IsWarmUp;
  const uint PlaygroundRoundNum;
  const uint PlaygroundRoundNumToPlay;
  const string GameStateName;
  void TeamProfilesAvoidHueOverlap();
  CGameTeamProfile* TeamProfile0;
  CGameTeamProfile* TeamProfile1;
  CGameTeamProfile* TeamProfile2;
  string ForcedClubLinkUrl1;
  string ForcedClubLinkUrl2;
  uint NextMaxPlayerCount;
  uint NextMaxSpectatorCount;
  UnknownType NextLadderMode;
  _EEVehicleNetQuality NextVehicleNetQuality;
  string FirstPartySessionId;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnChallengeInfo : public CGameControlCard {
  CGameControlCardCtnChallengeInfo();

  const NodArray Groups;
  uint LeagueNameMaxCharsCount;
  const wstring StrFullLeagueName;
  const wstring StrPlayerLeagueRanking;
  const wstring StrChallengeName;
  const wstring StrChallengeAuthor;
  const wstring StrChallengeComments;
  const wstring StrCollectionName;
  const wstring StrCopperPrice;
  const wstring StrPlayerName;
  const wstring StrBronzeScore;
  const wstring StrSilverScore;
  const wstring StrGoldScore;
  const wstring StrAuthorScore;
  const wstring StrPlayerScore;
  const wstring StrPlayerOfficialRecord;
  const string StrCopperString;
  const wstring StrLeagueName;
  const uint Medals;
  const uint TrainingMedal;
  const uint OfficialMedal;
  const uint NextMedalTime;
  const uint PlayerLeagueRanking;
  const uint PlayerSkillScore;
  const CPlugBitmap* BmpLeagueLogo;
  const CPlugBitmap* BmpMood;
  const CPlugBitmap* BmpMod;
  const CPlugBitmap* BmpBannerGrey;
  const CPlugBitmap* BmpBanner;
  void OnRemoveChallenge();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardGeneric : public CGameControlCard {
  CGameControlCardGeneric();

  uint Type;
  string Str1;
  string Str2;
  string Str3;
  string Str4;
  string Str5;
  string Str6;
  string Str7;
  const wstring StrInt1;
  const wstring StrInt2;
  const wstring StrInt3;
  const wstring StrInt4;
  const wstring StrInt5;
  const wstring StrInt6;
  const wstring StrInt7;
  uint Nat1;
  uint Nat2;
  uint Nat3;
  uint Nat4;
  uint Nat5;
  uint Nat6;
  float Real1;
  float Real2;
  float Real3;
  CMwNod* Nod1;
  CMwNod* Nod2;
  CMwNod* Nod3;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardLeague : public CGameControlCard {
  CGameControlCardLeague();

  const wstring StrPath;
  const wstring StrName;
  const wstring StrDescription;
  const string StrOnlinePlayersCount;
  const string StrOnlineHostsCount;
  const string StrLogoUrl;
  CPlugBitmap* Logo;
  const uint MaxLevel;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnNetServerInfo : public CGameControlCard {
  CGameControlCardCtnNetServerInfo();

  enum ELadderServerType {
    _ServerLevel_Amateurs_place = 1,
    _ServerLevel_Serious_challengers = 2,
    _ServerLevel_Competitive_racers = 3,
    _ServerLevel_Pro_racing = 4,
    _ServerLevel_Races_of_champions = 5,
    _ServerLevel_Beginners = 6,
  };
  const wstring StrPath;
  const wstring StrPlayerName;
  const wstring StrServerName;
  const wstring StrHostName;
  const wstring StrPureServerName;
  const wstring StrComment;
  const string StrPlayersCount;
  const string StrPlayersCountMax;
  const string StrSpectatorsCount;
  const string StrSpectatorsCountMax;
  const wstring StrLadderServerLimitMin;
  const wstring StrLadderServerLimitMax;
  const uint LadderMode;
  const uint VehicleQuality;
  const uint RaceType;
  const bool HaveBuddies;
  const bool IsBuddy;
  const bool IsFull;
  const bool IsFullSpectator;
  const bool IsAllowingDownload;
  const bool IsPrivate;
  const bool IsPrivateForSpectator;
  CPlugBitmap* Logo;
  const float PlayersCountRatio;
  const float SpectatorsCountRatio;
  const uint Level;
  const uint State;
  const ELadderServerType LadderServerType;
  void OnChangeBuddyState();
  void OnChangeBuddyState_SetBuddy();
  void OnChangeBuddyState_SetNotBuddy();
  void OnChangeFavouriteState();
  void OnChangeFavouriteState_SetFavourite();
  void OnChangeFavouriteState_SetNotFavourite();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardLadderRanking : public CGameControlCard {
  CGameControlCardLadderRanking();

  const uint ChildsCount;
  const uint Ranking;
  const uint Ranking2;
  const uint Medals;
  const uint Medals2;
  const uint Score2;
  const wstring StrName;
  const wstring StrPath;
  const wstring StrScore;
  const float ManiaStarsRatio;
  const string StrLogin;
  const string StrLogoUrl;
  const string StrSubGroupLogoUrl;
  CPlugBitmap* Logo;
  CPlugBitmap* SubGroupLogo;
  bool DoSelectionOnChildsCount;
  bool UseTop3Medals;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardMessage : public CGameControlCard {
  CGameControlCardMessage();

  string StrSender;
  string StrReceiver;
  const string StrSendDate;
  wstring StrSubject;
  wstring StrMessage;
  uint Donation;
  void OnCheckLogin();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardProfile : public CGameControlCard {
  CGameControlCardProfile();

  const wstring StrLogin;
  wstring StrNickName;
  CPlugBitmap* Avatar;
  void OnChooseProfile();
  void OnRemoveProfile();
  void OnConnectProfile();
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnReplayRecordInfo : public CGameControlCard {
  CGameControlCardCtnReplayRecordInfo();

  const wstring StrName;
  const uint Time;
  bool ShortName;
  void OnRemoveReplayRecord();
};

struct CGameCtnMenus : public CGameSwitcherModule {
  CGameMenu* Menus;
  CGameMenu* InGameDialogs;
  CGameMenu* Dialogs;
  CGameMenu* SystemDialogs;
  const CGameManialinkScriptHandler* ManialinkScriptHandlerMenus;
  string PasswordString;
  string PasswordString2;
  string PasswordString3;
  float RankingScrollDelay;
  float RankingScrollSpeed;
  string SelectedName;
  wstring SelectedNickname;
  wstring SelectedAvatarName;
  const CGameCtnChallengeInfo* SelectedChallengeInfo;
  const NodArray EnvironmentChapters;
  void DialogMessenger_Update();
  void DialogMessenger_UpdateButtons();
  void DialogMessenger_Clean();
  void DialogMessenger_NotifyNewMessages();
  void DialogMessenger_OnNewMessage();
  void DialogMessenger_OnShowInbox();
  void DialogMessenger_OnShowOutbox();
  void DialogMessenger_OnSave();
  void DialogMessenger_OnSend();
  void DialogMessenger_OnReply();
  void DialogMessenger_OnSendAll();
  void DialogMessenger_OnRemove();
  void DialogMessenger_OnRemoveAll();
  void DialogMessenger_OnQuit();
  void Dialog_OnValidate_InGame();
  void Dialog_OnCancel_InGame();
  void Dialog_OnValidate_Normal();
  void Dialog_OnCancel_Normal();
  void DialogJoin_OnJoinAsSpectator();
  const NodArray DialogList_Nods;
  void DialogCardGrid_OnOk();
  void DialogCardGrid_OnCancel();
  void DialogCardGrid_OnRefresh();
  void DialogRefereeStatus_OnCancel();
  const array<wstring> DialogRefereeStatus_Message;
  wstring DialogChooseSkin_Name;
  bool DialogChooseSkin_SaveAsDds;
  uint DialogChooseSkin_SelectIndex;
  CGameCtnArticle* DialogChooseSkin_Article;
  const NodArray DialogChooseSkin_SkinsItem;
  string TempLogin;
  string TempPassword;
  bool CheckPassword;
  string TempEMail;
  void DialogConnect_OnRememberPassword();
  void DialogConnect_OnForgotPassword();
  void DialogConnect_OnConnect();
  void DialogConnect_OnCancel();
  void DialogMailAccount_OnOk();
  void DialogMailAccount_OnCancel();
  void DialogGrid_OnSelect();
  void DialogGrid_OnNextPage();
  void DialogGrid_OnPrevPage();
  void DialogGrid_OnOk();
  void DialogGrid_OnCancel();
  void DialogGrid_OnRemove();
  void DialogGrid_OnAdd();
  uint DialogGrid_CurPage;
  void DialogChoosePackDesc_OnNextPage();
  void DialogChoosePackDesc_OnPrevPage();
  void DialogChoosePackDesc_DrawCurPage();
  void DialogChoosePackDesc_OnAddItem();
  uint DialogChoosePackDesc_CurPage;
  void DialogConfirmRequest_OnOk();
  void DialogConfirmRequest_OnCancel();
  void DialogInputSettings();
  void DialogInputSettings_OnClose();
  void DialogInputSettings_OnDeviceSettings();
  void DialogInputSettings_OnPlayerInputs();
  void DialogInputSettings_OnStandardInputs();
  void DialogInputSettings_OnDeviceSettingsApply();
  bool DialogInputSettingsApplyOnlyToThisTitle;
  void DialogInputSettings_OnBindingsUnbindKey();
  void DialogInputSettings_OnBindingsResetToDefaults();
  UnknownType DialogInputSettings_AnalogDeadZone;
  UnknownType DialogInputSettings_AnalogSensitivity;
  bool DialogInputSettings_AnalogSteerV2;
  UnknownType DialogInputSettings_RumbleIntensity;
  UnknownType DialogInputSettings_CenterSpringIntensity;
  bool DialogInputSettings_MouseLookInvertY;
  UnknownType DialogInputSettings_MouseReleaseKey;
  bool DialogInputSettings_MouseAccel;
  UnknownType DialogInputSettings_MouseScaleY;
  UnknownType DialogInputSettings_MouseScaleFreeLook;
  UnknownType DialogInputSettings_MouseAccelQuantity_NormalizedLog;
  bool DialogInputSettings_MouseSensitivities_EnableSpecific;
  UnknownType DialogInputSettings_MouseSensitivity_Default_Normalized;
  UnknownType DialogInputSettings_MouseSensitivity_Laser_Normalized;
  UnknownType DialogInputSettings_MouseSensitivity_Default_NormalizedLog;
  UnknownType DialogInputSettings_MouseSensitivity_Laser_NormalizedLog;
  void DialogInterfaceSettings_OnOk();
  void DialogInterfaceSettings_OnCancel();
  void DialogInterfaceSettings_OnCrosshairNameSelect();
  void DialogInterfaceSettings_OnCrosshairNameSelect_Yes();
  void DialogInterfaceSettings_OnCrosshairNameUseDefault();
  bool DialogInterfaceSettings_CrosshairCustomColor;
  UnknownType DialogInterfaceSettings_CrosshairSaturation;
  UnknownType DialogInterfaceSettings_CrosshairSize;
  UnknownType DialogInterfaceSettings_CrosshairOpacity;
  const wstring DialogInterfaceSettings_CrosshairName;
  bool DialogInterfaceSettings_AllyCustomColor;
  bool DialogInterfaceSettings_OppoCustomColor;
  UnknownType DialogInterfaceSettings_PlayerShieldScale;
  UnknownType DialogInterfaceSettings_BulletHueOffset;
  UnknownType DialogInterfaceSettings_BeaconOpacity;
  UnknownType DialogInterfaceSettings_BeaconSize;
  UnknownType DialogInterfaceSettings_BeaconDuration;
  bool DialogInterfaceSettings_BeaconAllowCustom;
  void DialogReportAbuse_OnOk();
  void DialogReportAbuse_OnCancel();
  bool DialogReportAbuse_UploadReplay;
  wstring DialogReportAbuse_Reason;
  void DialogStereoscopySettings_OnQuit();
  void DialogStereoscopySettings_Enable();
  void DialogStereoscopySettings_Disable();
  void DialogStereoscopySettings_DefaultValues();
  float DialogStereoscopySettings_DisplaySize_cm;
  float DialogStereoscopySettings_DisplaySize_inch;
  UnknownType DialogStereoscopySettings_Strength;
  UnknownType DialogStereoscopySettings_StrengthPercent;
  UnknownType DialogStereoscopySettings_ScreenDist;
  UnknownType DialogStereoscopySettings_ColorFactor;
  UnknownType DialogStereoscopySettings_Mode;
  bool DialogStereoscopySettings_HmdResetOnRaceReset;
  bool DialogStereoscopySettings_HmdGraphicOptions;
  float DialogStereoscopySettings_HmdWorldScale;
  void DialogStereoscopySettings_HmdDetect();
  void DialogChooseEnvironment_OnCancel();
  void DialogEditorMenu();
  void DialogEditorHelp_OnHelpers();
  void DialogEditorMenu_OnShootCollectorIcons();
  void DialogEditorMenu_OnSaveAllBlocks();
  void DialogEditorMenu_OnAutoAddTopBottomFreeClipsForAllBlockInfos();
  void DialogEditorMenu_OnAutoRemoveTopBottomFreeClipsForAllBlockInfos();
  void DialogEditorMenu_OnReturn();
  void DialogEditorAdditionalMenu();
  void DialogEditorAdditionalMenu_OnEditComments();
  void DialogEditorAdditionalMenu_OnChallengeType();
  void DialogEditorAdditionalMenu_OnPlayMap();
  void DialogEditorAdditionalMenu_OnObjectives();
  void DialogEditorAdditionalMenu_OnEditSnapCamera();
  void DialogEditorAdditionalMenu_OnSetDifficulty();
  void DialogEditorAdditionalMenu_OnChooseCustomMusic();
  void DialogEditorAdditionalMenu_OnComputeShadows();
  void DialogEditorAdditionalMenu_OnSetPassword();
  void DialogEditorAdditionalMenu_OnUnlockExperimentalFeatures();
  void DialogEditorAdditionalMenu_OnReturn();
  void DialogEditorAnimAdditionalMenu();
  void DialogEditorAnimAdditionalMenu_OnTestActionWithMode();
  void DialogEditorAnimAdditionalMenu_OnDefineMap();
  void DialogEditorAnimAdditionalMenu_OnReturn();
  void DialogComputeShadowsQuality_VeryFast();
  void DialogComputeShadowsQuality_Fast();
  void DialogComputeShadowsQuality_Default();
  void DialogComputeShadowsQuality_High();
  void DialogComputeShadowsQuality_Ultra();
  bool DialogComputeShadowsQuality_CheckSaveBounces;
  void DialogEditorHelp();
  void DialogEditorHelp_OnOk();
  void DialogActionMakerHelp();
  void DialogActionMakerHelp_OnOk();
  void DialogItemEditorHelp();
  void DialogItemEditorHelp_OnOk();
  void DialogEditorManialinkHelp();
  void DialogEditorManialinkHelp_OnOk();
  void DialogEditorManialinkOptions();
  void DialogEditorManialinkOptions_OnOk();
  void DialogEditorManialinkOptions_OnCancel();
  bool DialogEditorManialinkOptions_ButtonGrid;
  bool DialogEditorManialinkOptions_ButtonSnap;
  wstring DialogEditorManialinkOptions_GridStep;
  wstring DialogEditorManialinkOptions_RotationStep;
  void DialogEditorShiftTrack_OnDown();
  void DialogEditorShiftTrack_OnUp();
  void DialogEditorShiftTrack_OnLeft();
  void DialogEditorShiftTrack_OnRight();
  void DialogEditorShiftTrack_OnCancel();
  void DialogEditorShiftTrack_OnApply();
  int LastShiftX;
  int LastShiftZ;
  void DialogAskPassword();
  void DialogAskPassword_OnOk();
  void DialogAskPassword_OnCancel();
  wstring DialogAskPassword_String;
  void DialogDisplayChallengeCard();
  void DialogDisplayChallengeCard_OnOk();
  CPlugBitmap* ModBitmap;
  void DialogDisplayAnimCard();
  void DialogDisplayAnimCard_OnOk();
  void MenuMain();
  void MenuMain_OnQuit();
  void MenuEditors();
  void MenuEditors_OnLoadChallenge();
  void MenuEditors_OnLoadChallenge_OnSimple();
  void MenuEditors_OnLoadChallenge_OnAdvanced();
  void MenuTitleTools();
  void MenuCreateChallenge();
  void MenuCreateChallenge_OnSimple();
  void MenuCreateChallenge_OnAdvanced();
  void MenuLoadSimpleChallenge_OnSimple();
  void MenuLoadSimpleChallenge_OnAdvanced();
  void MenuChooseChallenge_OnSelect();
  void MenuChooseChallenge_OnBack();
  void MenuChooseChallenge_OnRefresh();
  void MenuChooseChallenge_OnOk();
  void MenuChooseChallenge_OnPathUp();
  void MenuChooseChallenge_OnOpenInExplorer();
  void MenuChooseChallenge_OnChangeLeague();
  void MenuChooseChallenge_OnChallengeRemoved();
  void MenuChooseChallenge_OnChallengeRemovedConfirmed();
  void MenuChooseChallenge_SelectOrUnselectAll();
  void MenuPlayChallenge_Edit();
  const uint MenuChooseChallenge_ChallengesCount;
  const bool MenuSoloLadderBoth_ShowSkillPointsOrElseMedals;
  bool MenuChooseChallenge_Flatten;
  bool MenuChooseChallenge_SortByName;
  bool MenuChooseChallenge_SortOrderAsc;
  bool SelectAll;
  const wstring HierarchyPath;
  wstring MenuChooseChallenge_FilterString;
  void MenuMultiLocal();
  void MenuMultiLocal_OnBack();
  void MenuMultiLocal_OnOk();
  void MenuMultiLocal_OnConfigureInputs();
  array<bool> MenuMultiLocal_SetUsedPlayersCount;
  void MenuProfileAdvanced();
  void MenuProfile();
  void MenuProfile_Launch();
  void MenuProfile_OnChooseAvatar();
  void MenuProfile_OnChangeHorn();
  void MenuProfile_OnReceiveNews();
  void MenuProfile_OnGroupSelected();
  void MenuProfile_OnAddGroup();
  void MenuProfile_RemoveGroup();
  void MenuProfile_OnChangeZone();
  void MenuProfile_OnConvertAccount();
  void MenuProfile_OnDisconnectAccount();
  void MenuProfile_OnDisconnectAccountConfirmed();
  void MenuProfile_OnCheckModifications();
  void MenuProfile_OnChangePass();
  void MenuProfile_OnShowGameKeyInSteam();
  void MenuProfile_OnEditPodiumAnimWin();
  void MenuProfile_OnEditPodiumAnimLose();
  UnknownType MenuProfile_SoundPitchLog;
  bool MenuProfile_ParentalLock;
  const CGameAvatar* MenuProfile_Avatar;
  const CGameLeague* Menu_GroupToManage;
  const uint MenuProfile_GroupsCount;
  wstring MenuProfile_HornName;
  void DialogManageGroup_Create();
  void DialogManageGroup_ViewPlayers();
  void DialogManageGroup_Invite();
  void DialogManageGroup_Unsubscribe();
  void DialogManageGroup_SetDefault();
  void DialogViewPlayersInGroup_Ok();
  void DialogInviteToGroup_Add();
  void DialogInviteToGroup_Cancel();
  wstring DialogManageGroup_Name;
  string DialogManageGroup_Login;
  string DialogManageGroup_Pass;
  string DialogManageGroup_PassConfirm;
  void MenuPaintVehicle();
  void MenuPaintVehicle_OnBackConfirm();
  void MenuPaintVehicle_OnBack();
  CGameCtnPainter* Painter;
  void DialogRegisterAccountChoice_CreateNewAccount();
  void DialogRegisterAccountChoice_UseExistingAccount();
  void DialogRegisterAccountChoice_Offline();
  string DialogEula_AgeString;
  uint DialogEula_Age;
  bool DialogEula_EulaValidated;
  bool DialogEula_PrivacyPolicyValidated;
  void DialogEula_OnOk();
  void DialogEula_OnCancel();
  void DialogOnlineAccount_OnCancel();
  void DialogOnlineAccount_OnOk();
  void DialogOnlineAccount_OnCheckLogin();
  void DialogOnlineAccountInfo_OnCopyToClipboard();
  void DialogOnlineAccountError_OnOk();
  void DialogOnlineAccountError_OnCancel();
  void DialogOnlineAccountError_OnMailAccount();
  void DialogOnlineAccount_OnRememberPassword();
  void DialogOnlineAccountPersonnal_OnReceiveNews();
  bool DialogOnlineAccount_ChooseLogin1;
  bool DialogOnlineAccount_ChooseLogin2;
  bool DialogOnlineAccount_ChooseLogin3;
  const CGameLeague* DialogOnlineAccount_SubscriptionLeague;
  void DialogOnlineAccountPersonnal_OnCancel();
  void DialogOnlineAccountPersonnal_OnOk();
  void DialogBuyTitlePackages_OnPay();
  void DialogBuyTitlePackages_OnEnterKey();
  void DialogBuyTitlePackages_OnBuyAndEnterKey();
  void DialogBuyTitlePackages_OnBuyKeyAndRefresh();
  void DialogBuyTitlePackages_OnBuyKeyAndQuit();
  void DialogBuyTitlePackages_OnCancel();
  void DialogBuyManiaPlanetStations_OnEnterKey();
  void DialogBuyManiaPlanetStations_OnPay();
  void DialogBuyManiaPlanetStations_OnCancel();
  void DialogGeneratedGameKeys_OnCopyToClipboard();
  void DialogConvertAccount_OnConvert();
  void DialogConvertAccount_OnCancel();
  string ConvertAccount_Key;
  string OnlineAccount_Key;
  string OnlineAccount_Login;
  string OnlineAccount_Pass;
  string OnlineAccount_PassConfirm;
  string OnlineAccount_PassNew;
  uint OnlineAccount_Age;
  string OnlineAccount_EMail;
  string OnlineAccount_EMailConfirm;
  wstring OnlineAccount_NickName;
  wstring OnlineAccount_Path;
  CGameLeague* OnlineAccount_NewLeague;
  bool OnlineAccount_AcceptNews;
  string YoutubeCode;
  const NodArray DialogPlayers;
  const NodArray ConfirmFiles;
  NodArray ReplayInfos;
  void MenuMultiPlayerNetworkLan_OnRefresh();
  void MenuMultiPlayerNetworkLan_OnSel();
  void MenuMultiPlayerNetworkLan_OnCreate();
  void MenuMultiPlayerNetworkLan_OnBack();
  const uint MenuMultiPlayerNetworkLan_ServersCount;
  const uint MenuMultiPlayerNetworkLan_PlayersCount;
  CGameCtnNetServerInfo* MenuMultiPlayerNetworkCreate_ServerInfo;
  void MenuMultiPlayerNetworkCreate();
  void MenuMultiPlayerNetworkCreate_OnStart();
  void MenuMultiPlayerNetworkCreate_OnBack();
  void MenuMultiPlayerNetworkCreate_OnAdvanced();
  void MenuMultiPlayerNetworkCreate_OnLoadSettings();
  void MenuMultiPlayerNetworkCreate_OnLoadSettings_OnYes();
  wstring DialogRemoteBrowser_ToFind;
  void DialogRemoteBrowser_OnClose();
  void DialogRemoteBrowser_OnFind();
  void MenuInternetLeague_OnAll();
  void MenuInternetLeague_OnFavorites();
  void MenuInternetLeague_OnRankings();
  void MenuInternetLeague_OnCreate();
  void MenuInternetLeague_OnBack();
  void MenuInternetLeague_OnRefresh();
  void MenuInternetLeague_OnRefreshSimple();
  void MenuInternetLeague_OnHierarchyUp();
  void MenuInternetLeague_OnHierarchyItemSelected();
  void MenuInternetLeague_OnServerSelected();
  void MenuInternetLeague_OnPlayerSelected();
  void MenuInternetLeague_OnFilterGameMode();
  void MenuInternetLeague_OnFilterEnvironment();
  void MenuInternetLeague_BrowseServers();
  void MenuInternetLeague_BrowsePlayers();
  void MenuInternetLeague_OnChangeBuddyState();
  void MenuInternetLeague_OnLadderHierarchyUp();
  void MenuInternetLeague_SwitchServersPlayers();
  void MenuInternetLeague_SwitchLeaguesPlayersLadder();
  wstring MenuInternetLeague_Today;
  wstring MenuInternet_Path;
  const wstring MenuInternet_LadderCurrentLeagueName;
  const wstring MenuInternetLeague_CurrentLeagueName;
  const wstring MenuInternetLeague_CurrentLeagueDescription;
  void DialogChooseGameModeFilter_OnGameModeChoosen();
  void DialogChooseEnvironmentFilter_OnEnvironmentChosen();
  void MenuHotSeatCreate();
  void MenuHotSeatCreate_Start();
  void MenuHotSeatCreate_LoadSettings();
  void MenuHotSeatCreate_OnBack();
  void MenuHotSeatCreate_OnOk();
  uint HotSeatTime;
  uint HotSeatTries;
  UnknownType HotSeatGameMode;
  void MenuSplitScreenControls_OnScreen1();
  void MenuSplitScreenControls_OnScreen2();
  void MenuSplitScreenControls_OnScreen3();
  void MenuSplitScreenControls_OnScreen4();
  bool SplitScreen_2Players;
  bool SplitScreen_3Players;
  bool SplitScreen_4Players;
  bool SplitScreen_ScoreLeft;
  bool SplitScreen_ScoreMiddle;
  bool SplitScreen_ScoreRight;
  bool SplitScreen_SplitVertical;
  bool SplitScreen_SplitHorizontal;
  uint MenuSplitScreenMode_CompetitionPoints;
  void DialogChooseInputDevice_OnCancel();
  void DialogChooseInputDevice_OnCardSelected();
  void DialogChooseInputDevice_OnSet();
  void DialogSetInputDevice_OnOk();
  void MenuReplay_OnBack();
  void MenuReplay_OnRefresh();
  void MenuReplay_OnSelectDir();
  void MenuReplay_OnSelectReplay();
  void MenuReplay_OnOk();
  void MenuReplay_OnSelectAll();
  void MenuReplay_FilterAndRedraw();
  void MenuReplay_OnPathUp();
  void MenuReplay_OnOpenInExplorer();
  bool MenuReplay_Flatten;
  bool MenuReplay_SortByName;
  bool MenuReplay_SortOrderAsc;
  void MenuReplay_OnReplayRemovedConfirmed();
  const wstring MenuReplay_CurPath;
  const wstring MenuReplay_CurPathToDisplay;
  const uint MenuReplay_ReplaysCount;
  const NodArray ReplayList;
  const NodArray ReplayDirsList;
  void DialogReplayLoaded_OnPlayAgainst();
  void DialogReplayLoaded_OnWatch();
  void DialogReplayLoaded_OnEdit();
  void DialogReplayLoaded_OnCancel();
  void DialogViewReplay_OnView();
  void DialogViewReplay_OnEdit();
  void DialogViewReplay_OnSimpleEdit();
  void DialogViewReplay_OnValidate();
  void DialogViewReplay_OnPlay();
  void DialogViewReplay_OnBench();
  void DialogViewReplay_OnShootVideo();
  void DialogViewReplay_OnConcatenate();
  void DialogViewReplay_OnBack();
  void DialogViewReplay_OnExportToValidate();
  void DialogViewReplay_OnExportChallengeAndReplay();
  const uint DialogViewReplay_ReplayTime;
  const wstring DialogViewReplay_ReplayAuthorLogin;
  const wstring DialogViewReplay_ReplayMapName;
  const wstring DialogViewReplay_ReplayScriptShortName;
  void DialogViewAction_OnWeaponBullet();
  void DialogViewAction_OnWeaponLaser();
  void DialogViewAction_OnMove();
  void DialogViewAction_OnStatic();
  void DialogViewAction_OnShield();
  void DialogViewAction_OnBack();
  void DialogViewAction_OnLoadAction();
  void DialogViewModule_OnHud();
  void DialogViewModule_OnInventory();
  void DialogViewModule_OnMinimap();
  void DialogViewModule_OnStore();
  void DialogViewModule_OnScoresTable();
  void DialogViewModule_OnMenuBase();
  void DialogViewModule_OnMenuPage();
  void DialogViewModule_OnBack();
  void DialogViewModuleMenuComponent_OnLadderRankings();
  void DialogViewModuleMenuComponent_OnServerBrowser();
  void DialogViewModuleMenuComponent_OnMenuBrowser();
  void DialogViewModuleMenuComponent_OnBack();
  void DialogViewScoresTableColumn_OnAvatar();
  void DialogViewScoresTableColumn_OnPlayerName();
  void DialogViewScoresTableColumn_OnManiaStars();
  void DialogViewScoresTableColumn_OnTools();
  void DialogViewScoresTableColumn_OnTags();
  void DialogViewScoresTableColumn_OnSMPoints();
  void DialogViewScoresTableColumn_OnSMRoundPoints();
  void DialogViewScoresTableColumn_OnTMBestTime();
  void DialogViewScoresTableColumn_OnTMPrevTime();
  void DialogViewScoresTableColumn_OnTMBestLapTime();
  void DialogViewScoresTableColumn_OnTMStunts();
  void DialogViewScoresTableColumn_OnTMRespawns();
  void DialogViewScoresTableColumn_OnTMCheckpoints();
  void DialogViewScoresTableColumn_OnTMPoints();
  void DialogViewScoresTableColumn_OnTMPrevRaceDeltaPoints();
  void DialogViewScoresTableColumn_OnCustomReal();
  void DialogViewScoresTableColumn_OnCustomString();
  void DialogViewScoresTableColumn_OnCustomNatural();
  void DialogViewScoresTableColumn_OnCustomInteger();
  void DialogViewScoresTableColumn_OnCustomTime();
  void DialogViewScoresTableColumn_OnBack();
  void DialogViewPixelArtSize_OnBack();
  void DialogChooseEnumValue_OnBack();
  void InputsList_ResetToDefaults_OnYes();
  const NodArray InputsList_Actions;
  void InputDevicesList_OnButtonRemove_OnYes();
  void MenuConfigureInputs();
  void MenuConfigureInputs_OnBack();
  void MenuConfigureInputs_SetDefaults();
  void MenuConfigureInputs_OnPlayerInputs();
  void MenuConfigureInputs_OnStandardInputs();
  void MenuConfigureInputs_OnSplitScreenInputs();
  void MenuConfigureInputs_OnUnbindKey();
  void DialogChooseProfile_OnAdd();
  void DialogChooseProfile_OnSelect();
  void DialogChooseProfile_OnCancel();
  bool DialogChooseProfile_PrivateSession;
  void DialogChooseProfileWelcome_OnConnect();
  void DialogChooseProfileWelcome_OnChangeAccount();
  void DialogChooseProfileWelcome_OnPrivateSession();
  void DialogChooseProfileWelcome_OnStayOffline();
  void DialogInGameMenu_OnAdvanced();
  void DialogInGameMenu_OnServerSettings();
  void DialogInGameMenu_OnResume();
  void DialogInGameMenu_Spectator();
  void DialogInGameMenu_Buddy();
  void DialogInGameMenu_Abuse();
  void DialogInGameMenu_Kick();
  void DialogInGameMenu_Ban();
  void DialogInGameMenu_OnQuit();
  void DialogInGameMenu_OnChangeTeam();
  void DialogInGameMenu_OnValidateBest();
  void DialogInGameMenu_OnRetire();
  void DialogInGameMenu_SwitchFavourite();
  void DialogInGameMenu_OnTrackRankings();
  void DialogInGameMenuAdvanced_OnPlayerProfile();
  void DialogInGameMenuAdvanced_OnCancel();
  void DialogInGameMenuAdvanced_OnInputSettings();
  void DialogInGameMenuAdvanced_OnInterfaceSettings();
  void DialogInGameMenuAdvanced_OnStereoscopySettings();
  void DialogInGameMenuAdvanced_OnSaveReplay();
  void DialogInGameMenuAdvanced_OnSavePrevReplay();
  void DialogInGameMenuAdvanced_OnBecomeReferee();
  void DialogInGameMenuAdvanced_OnSaveChallenge();
  void DialogInGameMenuAdvanced_OnVote();
  void DialogChangeTeam();
  void DialogChangeTeam_OnJoinTeam1();
  void DialogChangeTeam_OnJoinTeam2();
  void DialogChangeTeam_OnCancel();
  const NodArray DialogChangeTeam_Players1;
  const NodArray DialogChangeTeam_Players2;
  void DialogPlayerProfile_OnOk();
  void DialogPlayerProfile_OnPrevPlayer();
  void DialogPlayerProfile_OnNextPlayer();
  void DialogPlayerProfile_OnHorn();
  void DialogPlayerProfile_Buddy();
  void DialogPlayerProfile_Kick();
  void DialogPlayerProfile_Ban();
  void DialogPlayerProfile_Abuse();
  void DialogPlayerProfile_Validate();
  void DialogLadderRankings_OnOk();
  void DialogLadderRankings_OnBack();
  void DialogLadderRankings_OnShowCurrentPlayersRankings();
  void DialogLadderRankings_OnRankingSelected();
  void DialogVote_OnVoteYes();
  void DialogVote_OnVoteNo();
  void DialogVote_OnCancel();
  void DialogInGameAskYesNo_Yes();
  void DialogInGameAskYesNo_No();
  const CScene2d* DialogPlayerProfile_VehicleOverlayScene;
  void DialogManiaCodeActionsList_Ok();
  void DialogManiaCodeActionsList_Cancel();
  void DialogAskIncreaseCacheSize_OnYes();
  void DialogAskIncreaseCacheSize_OnNo();
  void DialogAskIncreaseCacheSize_OnNever();
  void DialogChooseLeague();
  void DialogChooseLeague_Clean();
  void DialogChooseLeague_UpdateThisLevel();
  void DialogChooseLeague_OnSelect();
  void DialogChooseLeague_OnOk();
  void DialogChooseLeague_OnCancel();
  const wstring DialogChooseLeague_CurrentPath;
  const wstring DialogChooseLeague_DisplayableCurrentPath;
  void DialogCreateProfile_OnOk();
  void DialogCreateProfile_OnCancel();
  void DialogCreateProfile_OnAvatar();
  void DialogChooseAvatar_OnCancel();
  void DialogChooseAvatar_OnAddAvatar();
  bool NeverAskAgain;
  const NodArray DataInfos;
  bool DialogConnect_RememberOnlinePassword;
  bool DialogOnlineAccount_RememberOnlinePassword;
  bool DialogOnlineAccountPersonnal_ReceiveNews;
  void DialogAddOrInviteBuddy_OnAdd();
  const CGameLeague* DialogAddOrInviteBuddy_SelectedGroup;
  bool DialogAddOrInviteBuddy_InviteToJoinAGroup;
  void DialogAddOrInviteBuddy_OnMail();
  void DialogAddOrInviteBuddy_OnCancel();
  string DialogAddOrInviteBuddy_Login;
  string DialogAddOrInviteBuddy_EMail;
  void DialogSelectGroup_OnSelect();
  void DialogSelectGroup_CreateNew();
  void DialogSelectGroup_Cancel();
  uint DialogGraphicSettings_DisplayMode;
  const string DialogGraphicSettings_Resolution;
  uint DialogGraphicSettings_WindowSizeX;
  uint DialogGraphicSettings_WindowSizeY;
  bool DialogGraphicSettings_WindowBorder;
  UnknownType DialogGraphicSettings_DisplayRatio;
  uint DialogGraphicSettings_Antialias;
  uint DialogGraphicSettings_Filter;
  uint DialogGraphicSettings_MaxFps;
  uint DialogGraphicSettings_GpuSync;
  uint DialogGraphicSettings_DisplaySync;
  uint DialogGraphicSettings_TripleBuffer;
  uint DialogGraphicSettings_WaterReflect;
  uint DialogGraphicSettings_CarReflect;
  uint DialogGraphicSettings_Bloom;
  uint DialogGraphicSettings_MotionBlur;
  UnknownType DialogGraphicSettings_MotionBlurIntens;
  uint DialogGraphicSettings_SSAO;
  UnknownType DialogGraphicSettings_FogScale;
  uint DialogGraphicSettings_ScreenShotExt;
  void DialogGraphicSettings_OnApply();
  void DialogGraphicSettings_OnCancel();
  void DialogGraphicSettings_OnAdvanced();
  void DialogGraphicSettings_OnBroadcast();
  uint DialogBroadcast_Provider;
  string DialogBroadcast_Login;
  string DialogBroadcast_Password;
  uint DialogBroadcast_Resolution;
  uint DialogBroadcast_VideoMaxKbps;
  uint DialogBroadcast_VideoTargetFps;
  uint DialogBroadcast_VideoCpuUsage;
  bool DialogBroadcast_AudioEnable;
  UnknownType DialogBroadcast_AudioVolumePlayback;
  UnknownType DialogBroadcast_AudioVolumeRecorder;
  void DialogBroadcast_StartStop();
  const wstring DialogBroadcast_UserOutput;
  uint MenuProfile_TagsAdmin_CurTag;
  const uint MenuProfile_TagsAdmin_TagCount;
  bool MenuProfile_TagsAdmin_CurTagIsAvailableForConsultation;
  void DialogSetChallengeType();
  void DialogSetChallengeType_OnOk();
  void DialogSetChallengeType_ShowPickType();
  void DialogSetChallengeType_ShowPickStyle();
  void DialogSetChallengeType_TypePicked();
  void DialogSetChallengeType_StylePicked();
  uint ChallengeType_NbLaps;
  const CGameCtnChallenge* CurGameChallenge;
  void DialogSetDifficulty();
  void DialogSetDifficulty_OnOk();
  UnknownType ChallengeDifficulty;
  void DialogUnlockExperimentalFeatures();
  void DialogUnlockExperimentalFeatures_OnOk();
  void DialogCreateObjectives();
  void DialogCreateObjectives_OnValidate();
  uint CreateObjectives_GoldTime;
  uint CreateObjectives_SilverTime;
  uint CreateObjectives_BronzeTime;
  void DialogEditCutScenes_OnIntroEdit();
  void DialogEditCutScenes_OnIntroRemove();
  void DialogEditCutScenes_OnPodiumEdit();
  void DialogEditCutScenes_OnPodiumRemove();
  void DialogEditCutScenes_OnInGameEdit();
  void DialogEditCutScenes_OnInGameRemove();
  void DialogEditCutScenes_OnEndRaceEdit();
  void DialogEditCutScenes_OnEndRaceRemove();
  void DialogEditCutScenes_OnAmbianceEdit();
  void DialogEditCutScenes_OnAmbianceRemove();
  void DialogEditCutScenes_OnRecordMediaTrackerGhost();
  void DialogEndRaceSummary_OnReplay();
  void DialogGainMedalMoney_OnOk();
  void DialogEditCardEventsDeck_OnAdd();
  void DialogEditCardEventsDeck_OnRemove();
  void DialogEditCardEventsDeck_OnOk();
  void DialogEditCardEventsDeck_OnAvailableCardEventSelect();
  void DialogEditCardEventsDeck_OnCurrentCardEventSelect();
  string DialogEditCardEventsDeck_DeckIdName;
  void DialogSelectCardEventsDeck_OnDeckSelected();
  void DialogSelectCardEventsDeck_OnAdd();
  void DialogSelectCardEventsDeck_OnAddCheckName();
  void DialogSelectCardEventsDeck_OnRemove();
  void DialogSelectCardEventsDeck_OnRemoveYes();
  void DialogSelectCardEventsDeck_OnRename();
  void DialogSelectCardEventsDeck_OnRenameCheckName();
  void DialogSelectCardEventsDeck_OnEdit();
  void DialogSelectCardEventsDeck_OnOk();
  string DialogSelectCardEventsDeck_DeckName;
  void DialogEditorSelectDecal_OnSolidVariant1();
  void DialogEditorSelectDecal_OnSolidVariant2();
  void DialogEditorSelectDecal_OnSolidVariant3();
  void DialogEditorSelectDecal_OnSolidVariant4();
  void DialogEditorSelectDecal_OnSolidVariant5();
  void DialogEditorSelectDecal_OnSolidVariant6();
  void DialogEditorSelectDecal_OnSolidVariant7();
  void DialogEditorSelectDecal_OnSolidVariant8();
  void DialogEditorSelectDecal_OnSolidVariant9();
  void DialogEditorSelectDecal_OnSolidVariant10();
  void DialogEditorSelectDecal_OnType1();
  void DialogEditorSelectDecal_OnType2();
  void DialogEditorSelectDecal_OnType3();
  void DialogEditorSelectDecal_OnType4();
  void DialogEditorSelectDecal_OnType5();
  void DialogEditorSelectDecal_OnType6();
  void DialogEditorSelectDecal_OnDensity1();
  void DialogEditorSelectDecal_OnDensity2();
  void DialogEditorSelectDecal_OnDensity3();
  void DialogEditorSelectDecal_OnVariant1();
  void DialogEditorSelectDecal_OnVariant2();
  void DialogEditorSelectDecal_OnVariant3();
  void DialogEditorSelectDecal_OnVariant4();
  void DialogEditorSelectDecal_OnVariant5();
  void DialogEditorSelectDecal_OnVariant6();
  void DialogEditorSelectDecal_OnVariant7();
  void DialogEditorSelectDecal_OnVariant8();
  void DialogEditorSelectDecal_OnVariant9();
  void DialogEditorSelectDecal_OnVariant10();
  void DialogEditorSelectDecal_OnOk();
  void DialogEditorSelectDecal_OnBack();
  CPlugCharPhySpecialProperty* DialogEditBlockSpecialProperty_Property;
  void DialogEditBlockSpecialProperty_OnOk();
  void DialogEditBlockSpecialProperty_OnCancel();
  void DialogEditBlockSpecialProperty_OnCustom();
  void DialogEditBlockSpecialProperty_OnDefault();
  void DialogChooseMapTypeForEditorSimple_OnMapTypeChosen();
  void DialogUpdateFiles_Abort();
  const UnknownType DialogUpdateFiles_OverallProgress;
  const UnknownType DialogUpdateFiles_CurrentProgress;
  const CGameMenuSkinChooser* MenuSkinChooser;
};

struct CGameLadderRankingCtnChallengeAchievement : public CGameLadderRanking {
};

struct CGameCtnNetForm : public CGameNetForm {
  CGameCtnNetForm();

};

struct CGameRemoteBufferDataInfoFinds : public CGameRemoteBufferDataInfo {
  uint RefreshPlayerDuration;
  uint RefreshServerDuration;
  uint CountPlayerPerPage;
  uint CountServerPerPage;
};

struct CGameRemoteBufferDataInfoSearchs : public CGameRemoteBufferDataInfo {
  uint RefreshLeaguesDuration;
  uint RefreshServersDuration;
  uint RefreshServersSuggestedDuration;
  uint RefreshServersFavouritesDuration;
  uint RefreshPlayersDuration;
  uint LeaguesPerPageCount;
  uint ServersPerPageCount;
  uint ServersSuggestedPerPageCount;
  uint ServersFavouritesPerPageCount;
  uint PlayersPerPageCount;
};

struct CGameMgrActionFxPhy : public CMwNod {
  const uint InstancesCount;
};

struct CGameScriptHandlerStation : public CGameManialinkScriptHandler {
  const CGameManiaPlanetScriptAPI* ManiaPlanet;
  const CGameManiaAppStation* ParentApp;
  const CGameStation* Station;
  void EnterStation();
  void BrowserReload();
};

struct CGameCtnMasterServer : public CGameMasterServer {
  const bool IsTransfering;
};

struct CGameCtnNetwork : public CGameNetwork {
  const uint NextChallengeIndex;
  const bool Spectator;
  void GetFilesToSubmit();
  bool InGetReplaysMode;
  bool IsInRefereeMode;
  UnknownType ValidationMode;
  void GetManiaNetResource_OnCancel();
  CGameManiaAppPlayground* ClientManiaAppPlayground;
  CGameScriptHandlerPlaygroundInterface* PlaygroundInterfaceScriptHandler;
  CGamePlaygroundClientScriptAPI* PlaygroundClientScriptAPI;
  void RequestChangeSpectator_ToSpec();
  void RequestChangeSpectator_ToPlayer();
  CGameServerPlugin* ServerPlugin;
  CGameScriptServerAdmin* GameScriptServerAdminAPI;
};

// File extension: 'GameCtnApp.Gbx'
struct CGameCtnApp : public CGameApp {
  CGameCtnApp();

  CGameResources* Resources;
  CGameCtnNetwork* Network;
  const CGamePlaygroundScript* PlaygroundScript;
  const CGameSwitcher* Switcher;
  CGameCtnChallenge* Challenge;
  UnknownType VehicleCollectionId;
  CGameScene* GameScene;
  const CGameCamera* GameCamera;
  const CGameEditorBase* EditorBase;
  const CGameCtnEditor* Editor;
  const CGamePlayground* CurrentPlayground;
  const CGameCtnCatalog* GlobalCatalog;
  const NodArray AdditionalSkinsFids;
  NodArray ChallengeInfos;
  NodArray ReplayRecordInfos;
  const NodArray PlayerProfiles;
  CGamePlayerProfile* CurrentProfile;
  NodArray BaseOfficialCampaigns;
  NodArray OfficialCampaigns;
  const CGameCtnCampaign* CurrentCampaign;
  bool MenuBackground_MustLoopIntro;
  const uint MessagesCount;
  const wstring Money;
  const string OSLocalTimeOrTimeLeft;
  bool StereoscopyEnable;
  bool CanModifyWithoutInvalidate;
  CGameAdvertising* Advertising;
  const CGameScriptChatManager* ChatManagerScript;
  const CGameMatchSettingsManagerScript* MatchSettingsManagerScript;
  const CGameYoutube* Youtube;
  const CGameUserManagerScript* UserManagerScript;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnArticle : public CGameControlCard {
  CGameControlCardCtnArticle();

  const CPlugBitmap* Icon;
  const wstring StrName;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnCampaign : public CGameControlCard {
  CGameControlCardCtnCampaign();

  const wstring StrName;
  const wstring StrRaceType;
  const wstring StrEnvironment;
  const wstring StrLeagueName;
  const wstring StrSkillRank;
  const wstring StrSkillScore;
  const UnknownType IconId;
  const uint NbMedals;
  const wstring Name;
};

struct CGameManiaPlanetScriptAPI : public CMwNod {
  enum EContext {
    MenuStartUp = 0,
    MenuManiaPlanet = 1,
    MenuManiaTitleMain = 2,
    MenuProfile = 3,
    MenuSolo = 4,
    MenuLocal = 5,
    MenuMulti = 6,
    MenuEditors = 7,
    EditorPainter = 8,
    EditorTrack = 9,
    EditorMediaTracker = 10,
    Solo = 11,
    SoloLoadScreen = 12,
    Multi = 13,
    MultiLoadScreen = 14,
    MenuCustom = 15,
    Unknown = 16,
  };
  enum ELinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
  };
  enum EBuyTitleMode {
    OpenStore = 0,
    BuyIfNeeded = 1,
    Ask = 2,
  };
  enum EMenuStationsPage {
    Channels = 0,
    Play = 1,
    Options = 2,
    Help = 3,
  };
  enum EUplayFlow {
    OverView = 0,
    Auth = 1,
    Reward = 2,
    Rewards = 3,
    Actions = 4,
  };
  enum ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  enum EHmdWearingState {
    Dismount = 0,
    Mount = 1,
    Unknown = 2,
  };
  enum EHmdTrackingState {
    NotStarted = 0,
    Calibrating = 1,
    NotTracking = 2,
    Tracking = 3,
  };
  const int Now;
  const string CurrentLocalDateText;
  const wstring CurrentTimezone;
  const CGamePlayerInfo* LocalUser;
  const CGameManiaTitle* LoadedTitle;
  const NodArray TitlesAvailable;
  const NodArray TitlesBases;
  const array<string> TitleIdsInstalled;
  const array<string> TitleIdsPayed;
  const uint EmptyStationsCount;
  const ESystemPlatform SystemPlatform;
  const ESystemSkuIdentifier SystemSkuIdentifier;
  const string ExeVersion;
  const CGameCtnChallenge* CurrentMap;
  const EContext ActiveContext;
  const string ActiveContext_MenuFrame;
  const string ActiveContext_InGameDialogFrame;
  const string ActiveContext_DialogFrame;
  const string ActiveContext_SystemDialogFrame;
  const bool ActiveContext_ClassicDialogDisplayed;
  const uint ActiveContext_GameWill;
  const bool ActiveContext_ManialinkBrowserDisplayed;
  const bool ActiveContext_MenuStationsDisplayed;
  const bool ActiveContext_InGameMenuDisplayed;
  const EMenuStationsPage ActiveContext_MenuStationsPage;
  const EMenuStationsPage ActiveContext_MenuStationsClickedPage;
  const string CurrentServerLogin;
  const wstring CurrentServerName;
  const wstring CurrentServerModeName;
  const string CurrentServerJoinLink;
  const NodArray CurrentServerPlayers;
  const uint CurrentAppId;
  bool IsPrivateSession;
  const bool IsKioskMode;
  const bool ParentalLock_IsLocked;
  const uint TotalTimePlay;
  const uint Messenger_MessagesCount;
  const uint AccountPlanets;
  const bool IsTitleTimeLimited;
  const bool IsTitleTimeLimitActivated;
  const bool CanUnlockTitleTimeLimitOnStore;
  const uint TitleTimeLeft;
  const uint CurConnectionDate;
  const uint PrevConnectionDate;
  UnknownType MasterSoundVolume;
  UnknownType MasterMusicVolume;
  const bool TmTurbo_IsDemo;
  const bool TmTurbo_IsPartialInstall;
  const bool TmTurbo_IsBeta;
  const bool TmTurbo_IsBetaDeactivated;
  const bool TmTurbo_IsOpenBeta;
  const bool TmTurbo_IsSlowInstall;
  bool Settings_StationsManualLayout;
  void ClipboardSet(wstring ClipboardText);
  void OpenLink(string Url, ELinkType LinkType);
  void QuitGameAndOpenLink(string Url);
  void InstallTitle(string TitleId);
  void InstallTitleFromUrl(string Url, wstring DisplayName);
  void InstallTitleFromUrlEx1(string Url, wstring DisplayName, bool EnterAfterInstall);
  void InstallTitleFromUrlEx2(string Url, wstring DisplayName, wstring OpenLinkAfterInstall);
  void ShowTitle(string TitleId, bool ShowStation);
  void SelectTitle(string TitleId);
  void EnterTitle(string TitleId);
  void ShowCurMapCard();
  void SetMenuStationsActive(bool Activate);
  void Dialog_Message(wstring Message);
  void Dialog_EnterGameKey();
  void Dialog_BuyTitleDialog(string TitleId, string OverrideBuyUrl, int OverrideActionAfterBuy);
  void Dialog_BuyTitleEx(string TitleId, EBuyTitleMode Mode, string OverrideBuyUrl, int OverrideActionAfterBuy);
  void Dialog_GenerateGameKeys(string TitleId, uint FeaturesLevel, uint NbToGenerate, bool AddBuddyOnRegistration);
  void Dialog_BuyStations();
  void Dialog_SetServerFavourite(string ServerLogin, bool Favorite, bool Silent);
  const bool Dialog_IsFinished;
  const bool Dialog_Success;
  const bool Dialog_Aborted;
  void CustomMenu_Request(wstring Type, array<wstring>& Data);
  void SetLocalUserClubLink(string ClubLink);
  void SetLocalUserNickName(wstring NickName);
  void FlashWindow();
  void CreateShortcut(string ShortcutName, string Url);
  void HideSystemLoadingScreen();
  bool IsLiveStreamingEnabled;
  bool IsRemotePlayEnabled;
  void TmTurbo_LoadingOpportunity();
  const CGameScriptChatManager* ChatManager;
  const CGameAchievementScriptManager* AchievementsManager;
  const CGameUserManagerScript* UserMgr;
  void Authentication_GetToken(UnknownType UserId, string AppLogin);
  const bool Authentication_GetTokenResponseReceived;
  const uint Authentication_ErrorCode;
  const string Authentication_Token;
  const NodArray MasterServer_MSTaskResults;
  void MasterServer_ReleaseMSTaskResult(UnknownType TaskId);
  string MasterServer_GetURL(string ShortCutId);
  const CGameMasterServerUserInfo* MasterServer_MainMSUser;
  const NodArray MasterServer_MSUsers;
  CGameMasterServerUserInfo* MasterServer_GetMSUserFromId(UnknownType UserId);
  void MasterServer_Connect(UnknownType UserId);
  CWebServicesTaskResult_GetDisplayNameScriptResult* MasterServer_GetDisplayName(UnknownType UserId);
  CWebServicesTaskResult* MasterServer_CheckNetworkAvailability(UnknownType UserId);
  CWebServicesTaskResult_Session_Get* MasterServer_GetSessionInfo(UnknownType UserId, wstring SessionId);
  void MasterServer_Zone_GetPathAndName(wstring ZoneFullPath, wstring ZonePath, wstring ZoneName);
  CWebServicesTaskResult_ZoneList* MasterServer_Zone_GetChilds(wstring ZoneFullPath);
  CWebServicesTaskResult* MasterServer_Zone_ChangeZone(UnknownType UserId, wstring ZoneFullPath);
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunch(UnknownType UserId, EUplayFlow UplayFlow, uint RewardCode);
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunch_v2(UnknownType UserId, EUplayFlow UplayFlow, string RewardId);
  CWebServicesTaskResult_LaunchUplayScriptResult* MasterServer_UplayLaunchAndCompleteActions(UnknownType UserId, EUplayFlow UplayFlow, string RewardId);
  void MasterServer_Tracking_ContextMenuStart(UnknownType UserId, string MenuName);
  void MasterServer_Tracking_ContextMenuStop(UnknownType UserId, string MenuName);
  void MasterServer_Tracking_ContextGameModeStart(UnknownType UserId, string GameMode);
  void MasterServer_Tracking_ContextGameModeStop(UnknownType UserId, string GameMode);
  void MasterServer_Tracking_ContextMapStart(UnknownType UserId, string MapUid, string Environment);
  void MasterServer_Tracking_ContextMapStop(UnknownType UserId, string MapUid);
  void MasterServer_Tracking_ContextPlayStart(UnknownType UserId, string Type);
  void MasterServer_Tracking_ContextPlayStop(UnknownType UserId, string Type, string Reason, uint NbRespawns);
  void MasterServer_Tracking_MedalUnlock(UnknownType UserId, uint Medal);
  void MasterServer_Tracking_MedalUnlock_v2(UnknownType UserId, uint PreviousMedal, uint Medal);
  void MasterServer_Tracking_NewMapCreated(UnknownType UserId, string Environment, bool IsRandomlyGenerated);
  void MasterServer_Tracking_NewsImpression(UnknownType UserId, string NewsId);
  void MasterServer_Tracking_NewsClick(UnknownType UserId, string NewsId);
  void MasterServer_Tracking_PlayerAchievement(UnknownType UserId, uint AchievementId);
  void MasterServer_Tracking_PlayerProgressionMap(UnknownType UserId, string Value);
  void MasterServer_Tracking_PlayerRespawn(UnknownType UserId, uint RaceTime);
  void MasterServer_Tracking_StatCampaign(UnknownType UserId, uint PlayedMapCount, uint BronzeMedalCount, uint SilverMedalCount, uint GoldMedalCount, uint AuthorMedalCount, uint MaxDifficultyLevel);
  void MasterServer_Tracking_StatCampaign_v2(UnknownType UserId, uint PlayedMapCount, uint PlayedEnvCount, uint BronzeMedalCount, uint SilverMedalCount, uint GoldMedalCount, uint AuthorMedalCount, uint MaxDifficultyLevel);
  void MasterServer_Tracking_StatChallenge(UnknownType UserId, uint PendingChallengeCount);
  void MasterServer_Tracking_StatGlobalRanking(UnknownType UserId, uint GlobalRanking);
  void MasterServer_Tracking_StatOnline(UnknownType UserId, uint Echelon);
  void MasterServer_Tracking_StatRecordCenter(UnknownType UserId, uint BestCount, uint EqualCount, uint WorstCount);
  CWebServicesTaskResult* MasterServer_Beta_RetrieveUserInfo(UnknownType UserId);
  CWebServicesTaskResult* MasterServer_Beta_AcceptNDA(UnknownType UserId);
  CWebServicesTaskResult* BuyFullGame(UnknownType UserId);
  CWebServicesTaskResult* ShowSystemError(UnknownType UserId, uint ErrorCode);
  void HMD_Activate(bool Enable);
  const bool HMD_IsActive;
  const vec3 HMD_HeadTranslation;
  const float HMD_HeadYaw;
  const float HMD_HeadPitch;
  const float HMD_HeadRoll;
  void HMD_ResetTracking();
  void HMD_SelectUser();
  const CGameUserScript* HMD_CurrentUser;
  float HMD_WorldScale;
  UnknownType HMD_MoveScale;
  UnknownType HMD_HUD_Distance;
  const EHmdWearingState HMD_WearingState;
  const EHmdTrackingState HMD_TrackingState;
  const bool HMD_IsUserWarnBySystem_OutOfPlayArea;
  bool Cameras_BlackOut;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnChapter : public CGameControlCard {
  CGameControlCardCtnChapter();

  const CPlugBitmap* Icon;
  const CPlugBitmap* BannerChallenge;
  const wstring StrName;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnGhost : public CGameControlCard {
  CGameControlCardCtnGhost();

  const wstring StrName;
  const uint Time;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnGhostInfo : public CGameControlCard {
  CGameControlCardCtnGhostInfo();

  const wstring StrName;
  const uint Time;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardCtnVehicle : public CGameControlCard {
  CGameControlCardCtnVehicle();

  const CPlugBitmap* Icon;
  const wstring StrName;
};

struct CGameControlGridCtnCampaign : public CControlGrid {
  CGameControlGridCtnCampaign();

  CGameCtnCampaign* Campaign;
  CControlLabel* CampaignNameLabel;
  CControlGrid* ChallengeGroupNamesGrid;
  UnknownType ChallengeGroupAlignment;
  CGameControlCardCtnChallengeInfo* ChallengeCardTemplate;
};

struct CGameControlGridCtnChallengeGroup : public CControlGrid {
  CGameControlGridCtnChallengeGroup();

  CGameCtnChallengeGroup* ChallengeGroup;
  CControlLabel* ChallengeGroupNameLabel;
  UnknownType ChallengeAlignment;
};

struct CGameAnalyzer : public CMwNod {
  const int Mode;
  const CMwStatsValue* FrameRate;
};

struct CGamePlaygroundInterface : public CMwNod {
  CControlContainer* InterfaceRoot;
  const CGameHud3d* Hud3d;
  const CGameCtnNetServerInfo* ServerInfo;
  const CGameCtnChallenge* Challenge;
  const CGamePodium* Podium;
  wstring ChatEntry;
  void ChatNextPage();
  void ChatPreviousPage();
  void ChatToggleDisplayMode();
  const CControlFrame* ManialinkPage;
  const CGameScriptHandlerPlaygroundInterface* ManialinkScriptHandler;
  const CGameManialinkScriptHandler* ManialinkScriptHandlerBasic;
  void ShowChallengeCard();
  void ShowModeHelp();
  void CopyServerLink();
};

struct CGamePlaygroundSpectating : public CMwNod {
};

struct CGameMgrArenaVis : public CSceneMgrVis {
  CGameMgrArenaVis();

};

// File extension: 'GameCtnMediaBlockGhost.gbx'
struct CGameCtnMediaBlockGhost : public CGameCtnMediaBlock {
  CGameCtnMediaBlockGhost();

  CGameCtnGhost* GhostModel;
  float StartOffset;
};

struct CGameEnvironmentManager : public CMwNod {
};

struct CGameDialogShootParams : public CMwNod {
  float Duration;
  uint VideoFps;
  uint Width;
  uint Height;
  uint TileCountX;
  uint TileCountY;
  bool TileSplit;
  bool VideoHq;
  UnknownType VideoHqSampleCount;
  bool Sharpen;
  UnknownType MotionBlur;
  bool VideoHqDOF;
  UnknownType DofSampleCount;
  bool VideoHqCarReflects;
  bool VideoReflectSubSample;
  bool VideoReflectRayCast;
  UnknownType VideoStereo3d;
  bool IsAudioStream;
  UnknownType ExtScreen;
  UnknownType ExtVideo;
  const string EstimatedTime;
  bool UploadToYoutube;
  string YoutubeTitle;
  string YoutubeDesc;
  string ShootName;
  bool Hud3d;
  UnknownType WebmVideoMode;
  UnknownType WebmVideoAutoBirate;
  uint WebmVideoBitrate;
  uint WebmVideoCQ_Level;
  float WebmAudioVBR_Quality;
  void OnOk();
  void OnCancel();
  void OnAdvanced();
  void SetQualityPreset_Low();
  void SetQualityPreset_Medium();
  void SetQualityPreset_High();
};

struct CGameManialinkFileEntry : public CGameManialinkEntry {
  void OnFileChoosen();
  const wstring FullFileName;
};

struct CGameNetDataDownload : public CMwNod {
  CGameNetDataDownload();

  const uint ReturnedError;
  const bool CheckUpToDate;
  const bool PauseOnError;
  const bool IsPaused;
  const bool IsFinished;
};

struct CGameCampaignPlayerScores : public CMwNod {
  CGameCampaignPlayerScores();

};

struct CGameLoadProgress : public CMwNod {
  const CScene2d* Overlay;
};

struct CGameNetFormBuddy : public CNetNod {
  CGameNetFormBuddy();

};

struct CGameScriptHandlerPlaygroundInterface : public CGameManialinkScriptHandler {
  enum EUISound {
    Default = 0,
    Silence = 1,
    StartMatch = 2,
    EndMatch = 3,
    StartRound = 4,
    EndRound = 5,
    PhaseChange = 6,
    TieBreakPoint = 7,
    TiePoint = 8,
    VictoryPoint = 9,
    Capture = 10,
    TimeOut = 11,
    Notice = 12,
    Warning = 13,
    PlayerEliminated = 14,
    PlayerHit = 15,
    Checkpoint = 16,
    Finish = 17,
    Record = 18,
    ScoreProgress = 19,
    RankChange = 20,
    Bonus = 21,
    FirstHit = 22,
    Combo = 23,
    PlayersRemaining = 24,
    Custom1 = 25,
    Custom2 = 26,
    Custom3 = 27,
    Custom4 = 28,
  };
  enum EInGameMenuResult {
    Resume = 0,
    Quit = 1,
    NormalMenu = 2,
    AdvancedMenu = 3,
    ServerSettings = 4,
  };
  const int GameTime;
  const CGamePlaygroundClientScriptAPI* Playground;
  CGamePlaygroundUIConfig* UI;
  CGamePlaygroundUIConfig* ClientUI;
  const bool IsSpectator;
  const bool IsSpectatorClient;
  const bool UseClans;
  const bool UseForcedClans;
  const CGameManiaAppPlaygroundCommon* ParentApp;
  const CGameCtnChallenge* Map;
  void ShowCurChallengeCard();
  void ShowModeHelp();
  void CopyServerLinkToClipBoard();
  void JoinTeam1();
  void JoinTeam2();
  const NodArray Teams;
  void RequestSpectatorClient(bool Spectator);
  void SetSpectateTarget(string Player);
  void ShowProfile(string Player);
  void ShowInGameMenu();
  void CloseInGameMenu(EInGameMenuResult Result);
  void CloseScoresTable();
  const bool IsInGameMenuDisplayed;
  const string CurrentServerLogin;
  const wstring CurrentServerName;
  const wstring CurrentServerDesc;
  const string CurrentServerJoinLink;
  const wstring CurrentServerModeName;
  void PlayUiSound(EUISound Sound, int SoundVariant, float Volume);
  void Spectate(string Player);
  const bool IsTeamMode;
  const bool IsForcedTeams;
  bool IsSpectatorMode;
  const CGamePlayerInfo* LocalPlayerInfo;
  const CGameAchievementScriptManager* AchievementsManager;
};

struct CGameManiaAppStation : public CGameManiaAppMinimal {
  const CGameStation* Station;
  void EnterStation();
  void Maker_EditTitle(string EditedTitleId);
  void Maker_EditNewTitle(wstring EditedTitleName);
  const NodArray Maker_EditedTitles;
};

struct CGameEditPos3D : public CMwNod {
  CGameEditPos3D();

  bool CursorAutoSnap;
  const vec3 CursorStepSize;
  vec3 CursorOffset;
  UnknownType GridDisplayType;
  UnknownType ColorGridPlane;
  float AlphaGridPlane;
  UnknownType ColorGridLines;
  float AlphaGroundLines;
  UnknownType ColorGroundPlane;
  float AlphaGroundPlane;
  UnknownType ColorGroundLines;
  UnknownType ColorAxisX;
  UnknownType ColorAxisY;
  UnknownType ColorAxisZ;
  UnknownType ColorGradationX;
  UnknownType ColorGradationY;
  UnknownType ColorGradationZ;
  bool ShowAxisGradations;
  UnknownType CursorColorBase;
  UnknownType CursorColorMove;
  UnknownType CursorColorRotate;
  UnknownType CursorColorDraw;
  UnknownType CursorColorSplit;
  UnknownType CursorColorMerge;
  UnknownType CursorColorUVMapping;
  float GradationLength;
  const vec3 Pos3D;
  void Show();
  void Hide();
};

struct CGameManialinkScriptHandler : public CMwNod {
  enum LinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
    Goto = 2,
    ExternalFromId = 3,
    ManialinkFromId = 4,
    GotoFromId = 5,
  };
  enum ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  const CGameManialinkPage* Page;
  const bool PageIsVisible;
  const uint Now;
  const uint Period;
  const uint CurrentTime;
  const string CurrentTimeText;
  const string CurrentLocalDateText;
  const wstring CurrentTimezone;
  const CGamePlayerInfo* LocalUser;
  const CGameManiaTitle* LoadedTitle;
  const ESystemPlatform SystemPlatform;
  const ESystemSkuIdentifier SystemSkuIdentifier;
  const NodArray PendingEvents;
  void Dbg_SetProcessed(CGameManialinkScriptEvent* Event);
  bool Dbg_WarnOnDroppedEvents;
  const float MouseX;
  const float MouseY;
  const bool MouseLeftButton;
  const bool MouseRightButton;
  const bool MouseMiddleButton;
  const bool KeyUp;
  const bool KeyDown;
  const bool KeyLeft;
  const bool KeyRight;
  const bool KeyReturn;
  const bool KeySpace;
  const bool KeyDelete;
  bool IsKeyPressed(int KeyCode);
  bool EnableMenuNavigationInputs;
  void EnableMenuNavigation(bool EnableInputs, bool WithAutoFocus, CGameManialinkControl* AutoBackControl, int InputPriority);
  const bool IsMenuNavigationForeground;
  void OpenLink(string Url, LinkType LinkType);
  void TriggerPageAction(string ActionString);
  const CXmlScriptManager* Xml;
  const CNetScriptHttpManager* Http;
  const CGameVideoScriptManager* Video;
  const CAudioScriptManager* Audio;
  const CInputScriptManager* Input;
  const CGameDataFileManagerScript* DataFileMgr;
  const CGameScoreAndLeaderBoardManagerScript* ScoreMgr;
  const CGameUserPrivilegesManagerScript* PrivilegeMgr;
  const CGameMasterServerRichPresenceManagerScript* PresenceMgr;
  const CGameManialinkAnimManager* AnimMgr;
  void SendCustomEvent(wstring Type, array<wstring>& Data);
  void PreloadImage(string ImageUrl);
  void PreloadAll();
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly);
};

// File extension: 'Frame.Gbx'
struct CGameControlFrameInventory : public CControlFrame {
  CGameControlFrameInventory();

  const CGameControlGridCard* GridCards;
  const NodArray FreeCards;
  void InitItems();
};

// File extension: 'Frame.Gbx'
struct CGameControlFrameInventoryManager : public CControlFrame {
  CGameControlFrameInventoryManager();

  CControlToolTipManager* ToolTipManager;
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlScores : public CControlFrame {
  CGamePlaygroundControlScores();

  uint ListLineCount;
  uint ListColumnCount;
  CControlFrame* CardModelPlayer;
  float PlayerScale;
  float HorizontalMargin;
  float VerticalMargin;
  float CenterMargin;
  bool IsCentered;
  uint Page;
  uint PageCount;
  void PrevPage();
  void NextPage();
  bool LabelHelpEnabled;
  bool LabelMessageEnabled;
  bool HidePureSpectators;
  bool Rank;
  bool Avatar;
  bool IsLocalPlayer;
  bool IsSpectator;
  bool Score;
  bool ScoreInc;
  bool LapScore;
  bool LadderRank;
  bool LadderPointsGain;
  bool CupModeResult;
  bool NotPlaying;
};

struct CGameManialinkMediaPlayer : public CGameManialinkControl {
  bool IsInitPlay;
  bool Music;
  bool IsLooping;
  float Volume;
  string Url;
  void Play();
  void Stop();
  void StopAndRewind();
};

struct CGameNetFormPlayground : public CGameNetForm {
  CGameNetFormPlayground();

};

struct CGameCtnArticleNode : public CMwNod {
  string Name;
};

struct CGameSwitcher : public CMwNod {
  int FocusDialogCount;
  const NodArray ModuleStack;
};

struct CGameManialinkOldTable : public CGameManialinkControl {
};

struct CGameCtnMenusManiaPlanet : public CGameCtnMenus {
  const NodArray ChallengeInfosCampaign;
  const CGameCtnCampaign* CurrentCampaign;
  const CGameManialink3dWorld* Manialink3dWorld;
  const CGameManialink3dStyle* Manialink3d_BaseStyle;
  const CGameManiaAppTitle* MenuCustom_CurrentManiaApp;
  const CGameManiaPlanetMenuStations* MenuManiaPlanet_MenuStations;
  const CGameManialink3dStyle* MenuManiaPlanet3d_BrowserManialink3dStyle;
  UnknownType CurFocusedCamLoc;
  vec2 CurFocusedCamFovMaxMinY;
  bool DebugBlockBackground;
};

struct CGameManialinkLabel : public CGameManialinkControl {
  enum EBlendMode {
    Default = 0,
    Add = 1,
  };
  string Style;
  string Substyle;
  wstring TextFont;
  void SetText(wstring NewText);
  wstring Value;
  const uint ValueLineCount;
  int MaxLine;
  float LineSpacing;
  bool AppendEllipsis;
  bool AutoNewLine;
  float Opacity;
  vec3 TextColor;
  float TextSizeReal;
  uint TextSize;
  EBlendMode Blend;
  float ComputeWidth(wstring Text);
  float ComputeWidth2(wstring Text, bool Translated);
  float ComputeHeight(wstring Text);
};

struct CGameYoutube : public CMwNod {
  const string AccessToken;
  void CleanPendingUploads();
};

struct CGameUILayer : public CMwNod {
  enum EUILayerType {
    Normal = 0,
    ScoresTable = 1,
    ScreenIn3d = 2,
    AltMenu = 3,
    Markers = 4,
    CutScene = 5,
    InGameMenu = 6,
    EditorPlugin = 7,
    ManiaplanetPlugin = 8,
    ManiaplanetMenu = 9,
    LoadingScreen = 10,
  };
  enum EUILayerAnimation {
    None = 0,
    DownFast = 1,
    DownSlow = 2,
    LeftFast = 3,
    LeftSlow = 4,
    RightFast = 5,
    RightSlow = 6,
    ScaleFast = 7,
    ScaleSlow = 8,
    UpFast = 9,
    UpSlow = 10,
  };
  bool IsVisible;
  const bool AnimInProgress;
  EUILayerType Type;
  EUILayerAnimation InAnimation;
  EUILayerAnimation OutAnimation;
  EUILayerAnimation InOutAnimation;
  string AttachId;
  wstring ManialinkPage;
  string ManialinkPageUtf8;
  const CGameManialinkPage* LocalPage;
  const bool IsLocalPageScriptRunning;
};

struct CGamePlaygroundCommon : public CGameCtnPlayground {
};

struct CGameCtnAnchoredObject : public CMwNod {
  CGameCtnAnchoredObject();

  enum CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  int3 BlockUnitCoord;
  UnknownType AnchorTreeId;
  vec3 AbsolutePosition;
  float Yaw;
  float Pitch;
  float Roll;
  bool IsFlying;
  float Scale;
  const CGameItemModel* ItemModel;
  bool IsLocationInitialised;
  UnknownType BlockLocation;
  UnknownType LocationInBlock;
  CGameWaypointSpecialProperty* WaypointSpecialProperty;
  const NodArray NeighbourObjects;
  const array<uint> NeighbourObjects_ClipIndex;
};

struct CGameSwitcherModule : public CMwNod {
};

struct CGamePlaygroundUIConfig : public CMwNod {
  enum EUISequence {
    None = 0,
    Playing = 1,
    Intro = 2,
    Outro = 3,
    Podium = 4,
    CustomMTClip = 5,
    EndRound = 6,
    PlayersPresentation = 7,
    UIInteraction = 8,
    RollingBackgroundIntro = 9,
    CustomMTClip_WithUIInteraction = 10,
  };
  enum EUIStatus {
    None = 0,
    Normal = 1,
    Warning = 2,
    Error = 3,
    Official = 4,
  };
  enum EVisibility {
    None = 0,
    Normal = 1,
    Manual = 2,
    ForcedHidden = 3,
    ForcedVisible = 4,
  };
  enum ELabelsVisibility {
    None = 0,
    Never = 1,
    Always = 2,
    WhenInFrustum = 3,
    WhenVisible = 4,
    WhenInMiddleOfScreen = 5,
  };
  enum EAvatarVariant {
    Default = 0,
    Sad = 1,
    Happy = 2,
  };
  enum EUISound {
    Default = 0,
    Silence = 1,
    StartMatch = 2,
    EndMatch = 3,
    StartRound = 4,
    EndRound = 5,
    PhaseChange = 6,
    TieBreakPoint = 7,
    TiePoint = 8,
    VictoryPoint = 9,
    Capture = 10,
    TimeOut = 11,
    Notice = 12,
    Warning = 13,
    PlayerEliminated = 14,
    PlayerHit = 15,
    Checkpoint = 16,
    Finish = 17,
    Record = 18,
    ScoreProgress = 19,
    RankChange = 20,
    Bonus = 21,
    FirstHit = 22,
    Combo = 23,
    PlayersRemaining = 24,
    Custom1 = 25,
    Custom2 = 26,
    Custom3 = 27,
    Custom4 = 28,
  };
  enum ENoticeLevel {
    Default = 0,
    PlayerInfo = 1,
    PlayerWarning = 2,
    MapInfo = 3,
    MapWarning = 4,
    MatchInfo = 5,
    MatchWarning = 6,
  };
  enum EObserverMode {
    Default = 0,
    Forced = 1,
    Forbidden = 2,
    Manual = 3,
  };
  enum EHudVisibility {
    Nothing = 0,
    Everything = 1,
    MarkersOnly = 2,
    Default = 3,
  };
  EUISequence UISequence;
  const bool UISequenceIsCompleted;
  wstring UISequence_CustomMTClip;
  uint UISequence_CustomMTRefTime;
  bool UISequence_CanSkipIntroMT;
  string UISequence_PodiumPlayersWin;
  string UISequence_PodiumPlayersLose;
  wstring ManialinkPage;
  wstring BigMessage;
  string BigMessageAvatarLogin;
  EAvatarVariant BigMessageAvatarVariant;
  EUISound BigMessageSound;
  uint BigMessageSoundVariant;
  wstring StatusMessage;
  wstring GaugeMessage;
  float GaugeRatio;
  uint GaugeClan;
  string Hud3dMarkers;
  string MarkersXML;
  const NodArray UILayers;
  bool OverlayHideAll;
  bool OverlayHideNotices;
  bool OverlayHideMapInfo;
  bool OverlayHideOpponentsInfo;
  bool OverlayHideChat;
  bool OverlayHideCheckPointList;
  bool OverlayHideRoundScores;
  bool OverlayHideCountdown;
  bool OverlayHideCrosshair;
  bool OverlayHideGauges;
  bool OverlayHideConsumables;
  bool OverlayHide321Go;
  bool OverlayHideBackground;
  bool OverlayHideChrono;
  bool OverlayHideSpeedAndDist;
  bool OverlayHidePersonnalBestAndRank;
  bool OverlayHidePosition;
  bool OverlayHideCheckPointTime;
  bool OverlayHideEndMapLadderRecap;
  bool OverlayHideMultilapInfos;
  bool OverlayHideSpectatorControllers;
  bool OverlayHideSpectatorInfos;
  bool OverlayChatHideAvatar;
  UnknownType OverlayChatLineCount;
  vec2 OverlayChatOffset;
  vec2 CountdownCoord;
  bool NoticesFilter_HidePlayerInfo;
  bool NoticesFilter_HidePlayerWarning;
  bool NoticesFilter_HidePlayerInfoIfNotMe;
  bool NoticesFilter_HidePlayerWarningIfNotMe;
  bool NoticesFilter_HideMapInfo;
  bool NoticesFilter_HideMapWarning;
  bool NoticesFilter_HideMatchInfo;
  bool NoticesFilter_HideMatchWarning;
  ENoticeLevel NoticesFilter_LevelToShowAsBigMessage;
  string ScoreTable;
  EVisibility ScoreTableVisibility;
  string SmallScoreTable;
  EVisibility SmallScoreTableVisibility;
  bool ScoreTableOnlyManialink;
  bool AltMenuNoDefaultScores;
  bool AltMenuNoCustomScores;
  bool OverlayScoreSummary;
  UnknownType ScoreSummary_Player1;
  int ScoreSummary_Points1;
  int ScoreSummary_RoundPoints1;
  int ScoreSummary_MatchPoints1;
  float ScoreSummary_Gauge1;
  UnknownType ScoreSummary_Player2;
  int ScoreSummary_Points2;
  int ScoreSummary_RoundPoints2;
  int ScoreSummary_MatchPoints2;
  float ScoreSummary_Gauge2;
  bool ScreenIn3dHideScoreSummary;
  bool ScreenIn3dHideVersus;
  int CountdownEndTime;
  EUIStatus UIStatus;
  EHudVisibility LabelsVisibility;
  ELabelsVisibility AlliesLabelsVisibility;
  EVisibility AlliesLabelsShowGauges;
  EVisibility AlliesLabelsShowNames;
  UnknownType AlliesLabelsMaxCount;
  ELabelsVisibility TeamLabelsVisibility;
  EVisibility TeamLabelsShowGauges;
  EVisibility TeamLabelsShowNames;
  ELabelsVisibility OpposingTeamLabelsVisibility;
  EVisibility OpposingTeamLabelsShowGauges;
  EVisibility OpposingTeamLabelsShowNames;
  bool ForceSpectator;
  uint SpectatorForceCameraType;
  UnknownType SpectatorAutoTarget;
  UnknownType SpectatorForcedTarget;
  int SpectatorForcedClan;
  float SpectatorCamAutoLatitude;
  float SpectatorCamAutoLongitude;
  float SpectatorCamAutoRadius;
  EObserverMode SpectatorObserverMode;
  void SendChat(wstring Text);
  void SendNotice(wstring Text, ENoticeLevel Level, CGamePlayerInfo* Avatar, EAvatarVariant AvatarVariant, EUISound Sound, int SoundVariant);
  wstring GetLayerManialinkAction(CGameUILayer* Layer);
  void ClearLayerManialinkAction(CGameUILayer* Layer);
};

struct CGameManialinkFrame : public CGameManialinkControl {
  enum EControlType {
    Audio = 0,
    Entry = 1,
    FileEntry = 2,
    Frame = 3,
    Label = 4,
    Quad = 5,
    Video = 6,
  };
  const NodArray Controls;
  CGameManialinkControl* GetFirstChild(string ControlId);
  bool ClipWindowActive;
  vec2 ClipWindowRelativePosition;
  vec2 ClipWindowSize;
  bool DisablePreload;
};

struct CGameManialinkPage : public CMwNod {
  const string Url;
  const CGameManialinkScriptHandler* ScriptHandler;
  const string ScriptText;
  const CGameManialinkFrame* MainFrame;
  CGameManialinkControl* GetFirstChild(string ControlId);
  bool LinksInhibited;
  void GetClassChildren(string Class, CGameManialinkFrame* Frame, bool Recursive);
  const NodArray GetClassChildren_Result;
};

struct CGameManialinkControl : public CMwNod {
  enum AlignHorizontal {
    Left = 0,
    HCenter = 1,
    Right = 2,
    None = 3,
  };
  enum AlignVertical {
    Top = 0,
    VCenter = 1,
    Bottom = 2,
    None = 3,
    VCenter2 = 4,
  };
  const CControlBase* Control;
  const CGameManialinkFrame* Parent;
  const string ControlId;
  const array<string> ControlClasses;
  bool HasClass(string Class);
  vec2 Size;
  AlignHorizontal HorizontalAlign;
  AlignVertical VerticalAlign;
  bool Visible;
  vec2 RelativePosition_V3;
  float ZIndex;
  float RelativeScale;
  float RelativeRotation;
  const vec2 AbsolutePosition_V3;
  const vec3 AbsolutePosition;
  const float AbsoluteScale;
  const float AbsoluteRotation;
  bool DataAttributeExists(string DataName);
  string DataAttributeGet(string DataName);
  void DataAttributeSet(string DataName, string DataValue);
  wstring ToolTip;
  void Show();
  void Hide();
  void Unload();
  void Focus();
  const bool IsFocused;
  vec3 RelativePosition;
  float PosnX;
  float PosnY;
  float PosnZ;
  float Scale;
};

// File extension: 'GameCardEventInfo.Gbx'
struct CGameCardEventInfo : public CGameCtnCollector {
  CGameCardEventInfo();

  string EventId;
};

struct CGameManialinkQuad : public CGameManialinkControl {
  enum EKeepRatioMode {
    Inactive = 0,
    Clip = 1,
    Fit = 2,
  };
  enum EBlendMode {
    Default = 0,
    Add = 1,
  };
  void ChangeImageUrl(string fieldName);
  CPlugBitmap* Image;
  string ImageUrl;
  string ImageUrlFocus;
  string Style;
  string Substyle;
  bool StyleSelected;
  const bool DownloadInProgress;
  vec3 Colorize;
  vec3 ModulateColor;
  vec3 BgColor;
  vec3 BgColorFocus;
  float Opacity;
  EKeepRatioMode KeepRatio;
  EBlendMode Blend;
  bool Video_IsPlaying;
  bool Video_IsLooping;
  void Video_Rewind();
};

struct CGameManiaPlanetMenuStations : public CMwNod {
  bool IsActive;
  const CMwCmdFiber* MenuManiaPlanetCmd;
  const CScene2d* OverlayMenuStations;
  const CGameManialinkPage* MainPage;
  const wstring MainPageManialinkViewerStartUrl;
  const CGameManiaTitle* MainStationFullManiaTitle;
  const bool IsBeginnerMenuDisplay;
  bool IsEditingStations;
  const CGameScriptHandlerStation* ScriptHandlerStations;
};

// File extension: 'AnchorPoint.gbx'
struct CGameCtnAnchorPoint : public CMwNod {
  CGameCtnAnchorPoint();

  const UnknownType TreeId;
  UnknownType LocationInBlock;
  const CGameCtnBlock* Block;
};

// File extension: 'MacroBlock.Gbx'
struct CGameCtnMacroBlockInfo : public CGameCtnCollector {
  CGameCtnMacroBlockInfo();

  bool Connected;
  bool Initialized;
  const CGameCtnBlockInfo* GeneratedBlockInfo;
  const bool IsGround;
  const bool HasStart;
  const bool HasFinish;
  const bool HasCheckpoint;
  const bool HasMultilap;
  const CGameCtnBlockInfo* GeneratedBlockModel;
  CScriptTraitsMetadata* ScriptMetadata;
  void ClearScriptMetadata();
  const NodArray TrafficPathSplines;
  const wstring Name;
};

struct CGameCtnEditorCommon : public CGameCtnEditor {
  const CGameCtnChallenge* Challenge;
  const CGameCursorBlock* Cursor;
  const CGameCursorItem* ItemCursor;
  bool GhostBlockForcedGroundElseAir;
  uint GhostBlockForcedVariantIndex;
  CGameCtnEditorCommonInterface* EditorInterface;
  const float MouseMoveDist;
  const CGameCtnBlockInfo* CurrentBlockInfo;
  const CGameCtnBlockInfo* CurrentGhostBlockInfo;
  const CGameItemModel* CurrentItemModel;
  const CGameItemModel* CurrentTrafficItemModel;
  const CGameCtnMacroBlockInfo* CurrentMacroBlockInfo;
  const CGameCtnMacroBlockInfo* CopyPasteMacroBlockInfo;
  CGameCtnBlock* CurrentTerrainBlock;
  CGameCtnBlock* CurrentBlock;
  int PluginOffsetX;
  int PluginOffsetY;
  int PluginOffsetZ;
  const CGameEditorPluginMapMapType* PluginMapType;
  void ReloadPlugins();
  void DeactivateAllPlugins();
  bool HackMixMapping;
  bool UseNewTerraforming;
  bool UseNewPillars;
  bool HackExternalMbIconsHD;
  bool HackInternalMbIconsHD;
  bool HackForceTerrainBulldozeForbidden;
  bool HackPlaceGhostBlocksOnlyIfNecessary;
  bool HackCreateItemGroupFromMb;
  bool EnableGhostMode;
  bool EmbedCustomItems;
  bool HideAlwaysCursorDirectionalArrow;
  uint IterationsRecursive;
  const CGameCtnBlock* PickedBlock;
  CGameCtnBlock* BlockEditor2_Block;
  CGameCtnBlockInfo* BlockEditor2_BlockInfo;
  CPlugSolid* BlockEditor2_BlockSolid;
  const int OldNbAvailableCoppers;
  const uint OldNbMaxCoppers;
  uint CopperPriceThreshhold_WarningHigh;
  uint CopperPriceThreshhold_WarningVeryHigh;
  bool HasCopperPriceDemoLimit;
  uint CopperPriceThreshhold_DemoWarning;
  uint CopperPriceThreshhold_DemoLimit;
  string ColoredCopperPrice;
  wstring SkinText;
  CGameControlCameraEditorOrbital* OrbitalCameraControl;
  const float CameraTargetMinX;
  const float CameraTargetMaxX;
  const float CameraTargetMinZ;
  const float CameraTargetMaxZ;
  const float CameraAngle;
  const CSceneMobil* Grid;
  const CGameOutlineBox* UndergroundBox;
  const CGameOutlineBox* SelectionBox;
  const CGameOutlineBox* ItemSelectionBox;
  const CGameOutlineBox* CustomSelectionBox;
  const CGameOutlineBox* OffZoneSelectionBox;
  UnknownType GridColor;
  UnknownType GridColorAlpha;
  string BlockEditor2_Text;
  wstring MacroDecalsEditor_Text;
  void ButtonComputeShadowsOnClick();
  void ButtonComputeShadowsDialogOnClick();
  void ButtonComputeDecalsOnClick();
  void ButtonHelper1OnClick();
  void SweepBlocksAndSave();
  void SweepTerrainAndSave();
  void SweepOffZoneAndSave();
  void SweepObjectsAndSave();
  void SuperSweepAndSave();
  void SweepSelectionAndSave();
  void SwitchToCameraIconMode();
  void SwitchFromCameraIconMode();
  void BlockViewerOnClick();
  void BlockAddOnClick();
  void BlockSubOnClick();
  void ButtonTestOnClick();
  void ButtonOffZoneOnClick();
  void ButtonBackOnClick();
  void ButtonSaveOnClick();
  void ButtonSaveAsOnClick();
  void ButtonLoadOnClick();
  void ButtonCameraUpOnClick();
  void ButtonCameraDownOnClick();
  void ButtonCameraLeftOnClick();
  void ButtonCameraRightOnClick();
  void ButtonValidateOnClick();
  void ButtonCursorRaiseOnClick();
  void ButtonCursorLowerOnClick();
  void ButtonCursorTurnClockwiseOnClick();
  void ButtonCursorTurnAnticlockwiseOnClick();
  void ButtonCursorUpOnClick();
  void ButtonCursorDownOnClick();
  void ButtonCursorLeftOnClick();
  void ButtonCursorRightOnClick();
  void HackTurbo_ButtonMapStyleOnClick();
  void HackTurbo_ButtonClassicMapEditorOnClick();
  void ButtonUndoOnClick();
  void ButtonRedoOnClick();
  void ButtonZoomInOnClick();
  void ButtonZoomOutOnClick();
  void ButtonEraserModeOnClick();
  void ButtonUndergroundModeOnClick();
  void ButtonAirMappingModeOnClick();
  void ButtonFreelookModeOnClick();
  void ButtonPickerModeOnClick();
  void ButtonSelectionBoxAddModeOnClick();
  void ButtonSelectionBoxSubModeOnClick();
  void ButtonChooseSkinModeOnClick();
  void ButtonSetCardEventModeOnClick();
  void ButtonInventoryDecalsOnClick();
  void ButtonInventoryTrafficOnClick();
  void ButtonInventoryFlyingTrafficOnClick();
  void ButtonInventoryBlocksOnClick();
  void ButtonInventoryGhostBlocksOnClick();
  void ButtonInventoryTerraformOnClick();
  void ButtonInventoryObjectsOnClick();
  void ButtonInventoryPluginsOnClick();
  void ButtonInventoryMacroBlocksOnClick();
  void ButtonCreateDeckOnClick();
  void ButtonMacroDecalsOnClick();
  void ButtonMacroDecalsSave_OnClick();
  void ButtonMacroDecalsScreenshot_OnClick();
  void ButtonMacroDecalApplyScreenshot_OnClick();
  void ButtonBlockPropertyModeOnClick();
  void ButtonBlockStockOnClick();
  void ButtonCopyPasteOnClick();
  void DeleteArticle_OnRemoveInstancesOnly();
  void DeleteArticle_OnRemoveInstancesAndModel();
  void DeleteArticle_OnYes();
  void ButtonItemEditModeOnClick();
  void ButtonItemNewModeOnClick();
  void ButtonItemCreateFromBlockModeOnClick();
  void ButtonBlockItemEditModeOnClick();
  void ButtonBlockItemCreateModeOnClick();
  void ButtonLightOnClick();
  void ButtonChallengeTypeOnClick();
  void ButtonObjectivesOnClick();
  void ButtonHelpOnClick();
  void ButtonShowChallengeDetailsOnClick();
  void ButtonEditToolsOnClick();
  void ButtonAdditionalToolsOnClick();
  void ButtonChooseMapTypeOnClick();
  void ButtonSelectionBoxCopyOnClick();
  void ButtonSelectionBoxCutOnClick();
  void ButtonSelectionBoxSaveNewOnClick();
  void ButtonSelectionBoxResetOnClick();
  void ButtonSelectionBoxSelectAllOnClick();
  void ButtonSelectionBoxSymmetriseOnClick();
  void EditorPluginCreateOnClick();
  void EditorPluginEditOnClick();
  void ButtonMixMapOnClick();
  void ButtonNewTerrainEditorOnClick();
  void ButtonNewPillarsOnClick();
  void ButtonHackExternalMbIconsHDOnClick();
  void ButtonHackInternalMbIconsHDOnClick();
  void ButtonHackCreateItemGroupFromMbOnClick();
  void ButtonEditEndRaceReplay();
  void ButtonBackStepOnClick();
  CGameCtnEditorDecals* EditorDecals;
  CGameCtnEditorTraffic* EditorTraffic;
  bool EnableMapProcX2;
  float Radius;
  int Offset;
  void BlockEditor_OnRotateIcon();
  void BlockEditor_OnCancelIcon();
  void BlockEditor_OnSaveIcon();
  void MacroDecalsEditor_OnSave();
  void MacroDecalsEditor_OnCancel();
  void SaveMacroBlockFromScript_OnSave();
  void SaveMacroBlockFromScript_OnCancel();
  void OnPluginOperationCancelled();
  void OnPluginOperationCancelled_OnYes();
  void OnPluginOperationCancelled_OnNo();
  void SaveChallengeFromScript_OnSave();
  void ComputeShadowsFromScript_OnOk();
  void SetObjectivesFromScript_OnOk();
  void HideInterfaceFromScript_OnOk();
  void HideInterfaceFromScript_OnCancel();
  void SwitchToMTFromScript_OnOk();
  void SwitchToPlaygroundFromScript_OnOk();
  void SwitchToValidationFromScript_OnOk();
  void SwitchToTestWithMapTypeFromScript_OnOk();
  void SwitchToTestWithMapTypeFromScript_OnCancel();
  void QuitFromScript_OnOk();
  void QuickQuitFromScript_OnOk();
  void ChangePlaceModeFromScript_OnOk();
  void PrecalcParticleEditor_Init();
  void PrecalcParticleEditor_Destroy();
  CGameCtnEditChallengePrecalcParticles* PrecalcParticleEditor;
  string DebugShootIconName;
  void OnMapRulesModeSelected();
  void TooManyCoppers_OnOk();
  void TooManyCoppers_OnNeverShowAgain();
  wstring ForcedPluginName;
  string ForcedPluginSettings;
  bool MoodIsDynamicTime;
  UnknownType MoodTimeOfDay01;
  string MoodTimeOfDayStr;
  string MoodDayDurationStr;
};

struct CGameCtnEditorFree : public CGameCtnEditorCommon {
};

struct CGameCtnEditorPuzzle : public CGameCtnEditorFree {
};

struct CGamePlaygroundScore : public CMwNod {
  const CGamePlayerInfo* User;
  const bool IsRegisteredForLadderMatch;
  const float LadderScore;
  int LadderRankSortValue;
  float LadderMatchScoreValue;
  uint LadderClan;
};

struct CGameCtnEditorCommonInterface : public CMwNod {
  CGameCtnEditorCommonInterface();

  const CGameCtnArticleNodeDirectory* BlockIconsRoot;
  const CGameCtnArticleNodeDirectory* TerraformIconsRoot;
  const CGameCtnArticleNodeDirectory* MacroBlockIconsRoot;
  const CGameCtnArticleNodeDirectory* ObjectIconsRoot;
  const CGameCtnArticleNodeDirectory* DecalIconsRoot;
  const CGameCtnArticleNodeDirectory* MacroDecalIconsRoot;
  const CGameCtnArticleNodeDirectory* TrafficObjectIconsRoot;
  const CGameCtnArticleNodeDirectory* PluginsIconsRoot;
  const CScene2d* InterfaceScene;
  const CGameCtnEditorCommon* Editor;
  void ToggleBlockRotation();
  wstring CurrentToolTip;
  const string Allocated;
  const wstring m_LastMacroBlockSelected;
  void EditSnapCamera_OnOk();
  void EditSnapCamera_OnCancel();
  CPlugBitmap* EditSnapCamera_BitmapSnap;
  void HideInterface();
  void ShowInterface();
  void ButtonItemPrevSubMenu();
  void ButtonItemNextSubMenu();
};

struct CGameControlCameraFollowAboveWater : public CGameControlCameraTarget {
};

// File extension: 'MacroDecals.Gbx'
struct CGameCtnMacroDecals : public CGameCtnCollector {
  CGameCtnMacroDecals();

  bool Connected;
};

struct CGameCtnEditorSimple : public CGameCtnEditorPuzzle {
};

struct CGameCtnArticleNodeDirectory : public CGameCtnArticleNode {
  const NodArray ChildNodes;
  void CreateNewDirectory();
};

struct CGameCtnArticleNodeArticle : public CGameCtnArticleNode {
  const CGameCtnArticle* Article;
};

struct CGameCtnDecalsBrush : public CMwNod {
  CGameCtnDecalsBrush();

  const uint NbDecals;
  const uint NbMacroDecals;
  UnknownType DecalProj;
  float GridStepPos;
  float GridStepRoll;
  float GridStepSize;
  float GridStepOpacity;
  float GridStepThickness;
  float Size;
  float EraserSize;
  float Opacity;
  float Thickness;
  void Reset();
  bool RandomizeAtlasId;
  bool RandomizeRoll;
  float RandomRollMin;
  float RandomRollMax;
  bool RandomizeSize;
  float RandomSizeMin;
  float RandomSizeMax;
  bool RandomizeOpacity;
  float RandomOpacityMin;
  float RandomOpacityMax;
};

struct CGameCtnEditChallengePrecalcParticles : public CMwNod {
  CGameCtnEditChallengePrecalcParticles();

  bool ShowHelpers;
  void ResetSimulation();
  void Simulate();
  bool StepByStep;
  void GenerateDecalsFromCurState();
  void GenerateDecalsFromScratch();
};

struct CGameCtnEditorDecals : public CMwNod {
  CGameCtnEditorDecals();

  enum SemanticsEnum {
    Normal = 0,
    Underwater = 1,
    Other = 2,
  };
  CGameCtnDecalsBrush* BrushPlace;
  CGameCtnDecalsBrush* BrushModify;
  uint EffectFlickerFrequency;
  bool ShowHelpers;
  const uint NbDecals;
  const uint NbDecalsInBrush;
  const UnknownType EditedType;
  const UnknownType EditionMode;
  CGameCtnChallenge* MergeFromChallenge;
  void BitmapDecalSetFlipX();
  void BitmapDecalSetFlipY();
  void SnapOnLandscape();
  const CSceneDecalsManager* DecalsMgr;
  CScene* Scene;
  void Undo_Clear();
  float UVDistMax;
  void BitmapDecalSetRemoveTooCloseDecals();
  void BitmapDecalSetRemoveInvalidDecals();
  void BitmapDecalSetRemoveInvalidDecalsAllSets();
  CPlugBitmap* Bitmap;
  SemanticsEnum EnumSemantics;
  const uint BitmapDecalSet;
  CPlugDecalModel* DecalModelMacro;
  const uint DecalModelMacroSet;
  bool TestDensity;
  UnknownType Density;
  void BrushSizeInc();
  void BrushSizeDec();
  void BrushRollInc();
  void BrushRollDec();
  void BrushOpacityInc();
  void BrushOpacityDec();
  void BrushThicknessInc();
  void BrushThicknessDec();
  void BrushModelOrAtlasInc();
  void BrushModelOrAtlasPrev();
  void DecalFillZone();
  void BrushReset();
  void BrushApply();
  void BrushPickSimple();
  void BrushPickMulti();
  void EditionModeModify();
  void EditionModePlace();
  void DecalBoxesShowHide();
  void DecalSnapOnOff();
  void BrushSwitchProj();
  void BrushFlipU();
  void Undo_Rewind();
  void Undo_Forward();
  void DecalSet_Add();
  void DecalSet_Remove();
  void DecalSet_Next();
  void DecalSet_Prev();
  void DecalSet_Duplicate();
  void DecalSets_Save();
  void BitmapEditionPlaneShowHide();
  void BitmapCellGridShowHide();
  void SceneBitmapsDecals_Create();
  void SceneBitmapsDecals_Destroy();
};

// File extension: 'GamePrecalcPartParams.Gbx'
struct CGameCtnPrecalcPartParams : public CMwNod {
  CGameCtnPrecalcPartParams();

  UnknownType EmitLoc;
  vec3 EmitZoneSize;
  uint EmitCount;
  uint IterCount;
  float TimeStep;
  uint RandValSeed;
  float Mass;
  float FluidFriction;
  float Restitution;
  float Friction;
  uint CollGroupFlags;
  bool LeafMotion;
  float LeafMotionScale;
  float LeafMotionFreq;
  CPlugSurface* CollSurf;
  vec3 PhyZoneGravity;
  vec3 PhyZoneWind;
  CPlugDecalModel* DecalModel;
  float DecalSizeBase;
  float DecalSizeVar;
  float DecalBoxDepth;
};

// File extension: 'ZoneGenealogy.Gbx'
struct CGameCtnZoneGenealogy : public CMwNod {
  CGameCtnZoneGenealogy();

  UnknownType CurrentZoneId;
  uint CurrentIndex;
  UnknownType Dir;
  UnknownType ZoneIds;
  const CGameCtnZone* CurrentZone;
  const NodArray Zones;
  const array<int> ZoneHeights;
  const int BaseHeight;
  const int BottomHeight;
  const int TopHeight;
  void RemoveLastZoneId();
  void AddZoneId();
};

struct CGameServerPlugin : public CMwNod {
  CPlugFileTextScript* Script;
  const CGameManiaTitle* LoadedTitle;
  const CGameCtnChallengeInfo* MapInfo;
  CGameConnectedClient* GetClient(string Login);
  const NodArray Clients;
  const NodArray Spectators;
  const NodArray Players;
  const NodArray Scores;
  const NodArray Users;
  const NodArray Teams;
  string NeutralEmblemUrl;
  string ForcedClubLinkUrl1;
  string ForcedClubLinkUrl2;
  void TweakTeamColorsToAvoidHueOverlap();
  const uint Now;
  const NodArray PendingEvents;
  void TriggerModeScriptEvent2(wstring Type, array<wstring>& Data);
  const bool MapLoaded;
  const NodArray MapList;
  const CGamePlaygroundUIConfigMgrScript* UIManager;
  const CGameScriptServerAdmin* ServerAdmin;
  const CXmlScriptManager* Xml;
  const CNetScriptHttpManager* Http;
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly);
};

struct CGameServerPluginEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    PlayerAdded = 1,
    PlayerRemoved = 2,
    MapLoaded = 3,
    MapUnloaded = 4,
    BeginRound = 5,
    EndRound = 6,
    ChatCommand = 7,
    ChatMessage = 8,
    ModeCallback = 9,
  };
  const EType Type;
  const CGameConnectedClient* Client;
  const wstring ChatText;
  const wstring ChatCommandType;
  const array<wstring> ChatCommandData;
  const wstring ModeCallbackType;
  const array<wstring> ModeCallbackData;
};

struct CGameCtnAutoTerrain : public CMwNod {
  CGameCtnAutoTerrain();

  int OffsetX;
  int OffsetY;
  int OffsetZ;
  const CGameCtnZoneGenealogy* Genealogy;
};

struct CGameCtnSolidDecals : public CMwNod {
  CGameCtnSolidDecals();

  string Name;
  UnknownType TypeId;
  uint TypeIntensity;
  uint DecalFrequency;
  const uint DecalsCount;
};

struct CGameCtnBlockInfoMobil : public CMwNod {
  CGameCtnBlockInfoMobil();

  const CSceneMobil* OldMobil;
  CPlugSolid* SolidFid;
  CPlugSolid* SolidAggreg;
  CPlugSolid2Model* Solid2Aggreg;
  const CPlugSolid* SolidCache;
  CPlugPath* RailPath;
  bool RailIsStation;
  const NodArray TextureModifiedSolidsCache;
  const NodArray DynaLinks;
  uint SolidFrequency;
  const NodArray SolidDecals;
  uint NoDecalFrequency;
  vec3 GeomTranslation;
  vec3 GeomRotation;
};

struct CGameConnectedClient : public CMwNod {
  const CGamePlayerInfo* User;
  const CGamePlaygroundUIConfig* UI;
  const bool IsConnectedToMasterServer;
  const string ClientVersion;
  const string ClientTitleVersion;
  const bool IsSpectator;
};

struct CGameControlCameraEditorOrbital : public CGameControlCamera {
  CGameControlCameraEditorOrbital();

  float CameraToTargetDistance;
  float CurrentVAngle;
  float CurrentHAngle;
  float DestinationHAngle;
  vec3 TargetedPosition;
  float MinDistance;
  float MaxDistance;
  float MinVAngle;
  float MaxVAngle;
  float ParamTurnCameraDistance_X;
  float ParamTurnCameraDistance_Y;
  uint ParamScrollHoldTime;
  uint ParamScrollRepeatTime;
  float ParamScrollAreaStart;
  float ParamScrollAreaMax;
  float ParamScrollLowerLimitStart;
  float ParamScrollLowerLimitEnd;
  float ParamScrollSpeed0_OnZoomMin;
  float ParamScrollSpeed0_OnZoomMax;
  float ParamScrollSpeed1_OnZoomMin;
  float ParamScrollSpeed1_OnZoomMax;
  float ParamPanSpeed_OnZoomMin;
  float ParamPanSpeed_OnZoomMax;
  float ParamRotationSpeed;
  float ParamAutopanTime;
  float ParamZoomPower;
  float ParamZoomClosePower;
  float ParamZoomDistanceClose;
  uint ParamCameraBaseRaiseTime;
};

// File extension: 'GameCtnMediaBlockDOF.gbx'
struct CGameCtnMediaBlockDOF : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDOF();

  float FocusZ;
  float LensSize;
};

// File extension: 'GameCtnMediaBlockToneMapping.gbx'
struct CGameCtnMediaBlockToneMapping : public CGameCtnMediaBlock {
  CGameCtnMediaBlockToneMapping();

  float Exposure;
  float MaxHDR;
  UnknownType FilmCurve;
};

// File extension: 'GameCtnMediaBlockBloomHdr.gbx'
struct CGameCtnMediaBlockBloomHdr : public CGameCtnMediaBlock {
  CGameCtnMediaBlockBloomHdr();

  float Intensity;
  float StreaksIntensity;
  float StreaksAttenuation;
};

struct CGameCtnMediaBlockTimeSpeed : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTimeSpeed();

};

// File extension: 'GameCtnMediaBlockManialink.Gbx'
struct CGameCtnMediaBlockManialink : public CGameCtnMediaBlock {
  CGameCtnMediaBlockManialink();

  wstring ManialinkURL;
};

struct CGamePlayerProfileChunk : public CMwNod {
  const string ChunkName;
  const string GameName;
  const string Checksum;
  const uint TimeStamp;
  const bool IsSynchronizedFromMS;
  const bool IsModified;
  const bool IsLoaded;
  const bool IsOnlineSave;
};

struct CGamePlayerProfileChunk_AccountSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_AccountSettings();

  string OnlineLogin;
  string OnlinePassword;
  string OnlineValidationCode;
  string OnlineSupportKey;
  wstring NickName;
  wstring Description;
  string ClubLinkUrl;
  bool LoginValidated;
  bool RememberOnlinePassword;
  bool AutoConnect;
  bool AskForAccountConversion;
  bool ReceiveNews;
  const uint OnlineRemainingNickNamesChangesCount;
  const uint OnlinePlanets;
  string RSAPrivateKey;
  string LastUsedMSAddress;
  string LastUsedMSPath;
  string LastSessionId;
  const wstring OnlinePath;
  CGameLeague* League;
  array<wstring> LeagueSteps;
  wstring AvatarName;
  const NodArray InboxMessages;
  const NodArray ReadMessages;
  const NodArray OutboxMessages;
  bool UnlockAllCheat;
  bool FriendsCheat;
  uint EulaVersion;
  uint PrivacyPolicyVersion;
  uint Age;
  uint FameStars;
};

struct CGamePlayerProfileChunk_GameSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameSettings();

  float RumbleIntensity;
  bool DownloadOfficialRecordReplaysForGroup;
  float StereoscopyStrength01;
  float StereoscopyAdvancedScreenDist;
  CGameCtnMediaShootParams* ShootParamsVideo;
  wstring ServerName;
  wstring ServerComment;
  uint NetworkGameMode;
  uint MaxPlayerCount;
  uint MaxSpectatorCount;
  uint NetStateQuality;
  uint LadderMode;
  bool AdvancedCreate;
  bool AllowDownload;
  bool EnablePlayerSkinGeom;
  bool EnableUnlimitedHorns;
  bool AutoSaveReplayOnMulti;
  bool SaveRoundsSeparately;
  bool ProposeSimpleEditor;
  uint UnlockClickCount;
  bool UnlockTalkedToFriend;
  bool UnlockInvitedBuddy;
  bool UnlockHadBuddy;
  bool UnlockSponsoredBuddy;
  bool UnlockCreatedTrack;
  bool UnlockPlayedHotSeat;
  bool UnlockPlayedOnline;
  bool UnlockSentScore;
  float MouseAccelQuantity;
  float MouseSensitivity_Default;
  float MouseSensitivity_Laser;
};

struct CGamePlayerProfileChunk_InterfaceSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_InterfaceSettings();

  wstring MenuLeagueFilter;
  uint MenuInternetView;
  uint DynamicLoadScreenIndex;
  uint ClickedOnShare;
  uint EditorHelp;
};

struct CGamePlayerProfileChunk_InputBindingsConfig : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_InputBindingsConfig();

  CInputBindingsConfig* Config;
};

struct CGamePlayerProfileChunk_VehiclesSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_VehiclesSettings();

};

struct CGamePlayerProfileChunk_Challenge : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_Challenge();

  wstring ChallengeName;
};

struct CGamePlayerProfileChunk_Campaign : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_Campaign();

  CGameCtnCampaign* Campaign;
};

// File extension: 'GameCtnMediaBlockVehicleLight.gbx'
struct CGameCtnMediaBlockVehicleLight : public CGameCtnMediaBlock {
  CGameCtnMediaBlockVehicleLight();

};

struct CGameCardEventListInfo : public CGameCtnCollector {
};

struct CGamePlaygroundUIConfigMgrScript : public CMwNod {
  void ResetAll();
  const CGamePlaygroundUIConfig* UIAll;
  const NodArray UI;
  CGamePlaygroundUIConfig* GetUI_Player(CGamePlayer* Player);
  CGamePlaygroundUIConfig* GetUI_User(CGamePlayerInfo* User);
  CGamePlaygroundUIConfig* GetUI_ConnectedClient(CGameConnectedClient* Client);
  const NodArray UILayers;
  CGameUILayer* UILayerCreate();
  void UILayerDestroy(CGameUILayer* Layer);
  void UILayerDestroyAll();
  const NodArray UIReplayLayers;
  uint UISequenceMaxDuration;
  bool HoldLoadingScreen;
  const NodArray PendingEvents;
  const CGamePlaygroundUIConfig* LocalPlayerConfig;
  const CGamePlaygroundUIConfig* LocalPlayerConfig1;
  const CGamePlaygroundUIConfig* LocalPlayerConfig2;
  const CGamePlaygroundUIConfig* LocalPlayerConfig3;
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlSmPlayers : public CControlFrame {
  CGamePlaygroundControlSmPlayers();

  uint ListLineCount;
  uint ListColumnCount;
  CControlFrame* CardModelPlayer;
  void EdClean();
};

// File extension: 'Frame.Gbx'
struct CGamePlaygroundControlMessages : public CControlFrame {
  CGamePlaygroundControlMessages();

  CControlContainer* MessageModel;
  uint LineCount;
  float LineHeight;
  uint DisplayDuration;
  uint MinDuration;
  float LastMessageBaseScale;
  uint ShowEffectDuration;
  float ShowEffectScale;
  uint HideEffectDuration;
  float HideEffectScale;
  float RatioElimination;
};

struct CGamePlaygroundScript : public CMwNod {
  enum EMedal {
    None = 0,
    Finished = 1,
    Bronze = 2,
    Silver = 3,
    Gold = 4,
    Author = 5,
  };
  enum ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  CPlugFileTextScript* Script;
  wstring ModeStatusMessage;
  const CGameManiaTitle* LoadedTitle;
  const string ServerLogin;
  const wstring ServerName;
  const wstring ServerModeName;
  const wstring MapName;
  const CGameCtnChallenge* Map;
  const wstring MapPlayerModelName;
  const NodArray Users;
  const NodArray Teams;
  string NeutralEmblemUrl;
  const string ForcedClubLinkUrl1;
  const string ForcedClubLinkUrl2;
  void TweakTeamColorsToAvoidHueOverlap();
  string ClientManiaAppUrl;
  const uint Now;
  const uint Period;
  bool MatchEndRequested;
  const bool ServerShutdownRequested;
  const bool MapLoaded;
  void RequestLoadMap();
  void RequestUnloadMap();
  const NodArray MapList;
  uint NextMapIndex;
  const CGamePlaygroundUIConfigMgrScript* UIManager;
  void Hud_Load(wstring ModuleName);
  const CGamePlaygroundModuleServerHud* Hud;
  void PassOnModuleEvent(CGamePlaygroundUIConfigEvent* EventToPassOn);
  void DiscardModuleEvent(CGamePlaygroundUIConfigEvent* EventToDiscard);
  void Ladder_OpenMatch_Request();
  void Ladder_AddPlayer(CGamePlaygroundScore* PlayerScore);
  void Ladder_OpenMatch_BeginRequest();
  void Ladder_OpenMatch_AddPlayer(CGamePlaygroundScore* PlayerScore);
  void Ladder_OpenMatch_EndRequest();
  void Ladder_CloseMatchRequest();
  void Ladder_CancelMatchRequest();
  const bool Ladder_RequestInProgress;
  void Ladder_SetResultsVersion(uint Version);
  void Ladder_SetMatchMakingMatchId(uint MatchId);
  void Ladder_EnableChallengeMode(bool Enable);
  bool Admin_KickUser(CGamePlayerInfo* User, wstring Reason);
  void Admin_SetLobbyInfo(bool IsLobby, int LobbyPlayerCount, int LobbyMaxPlayerCount, float LobbyPlayersLevel);
  const CGameScriptServerAdmin* ServerAdmin;
  void AutoTeamBalance();
  void Solo_SetNewRecord(CGamePlaygroundScore* PlayerScore, EMedal PlayerScore);
  const bool Solo_NewRecordSequenceInProgress;
  const CGamePlaygroundScriptXmlRpc* XmlRpc;
  const CXmlScriptManager* Xml;
  const CNetScriptHttpManager* Http;
  const CInputScriptManager* Input;
  const CGameDataFileManagerScript* DataFileMgr;
  const CGameScoreAndLeaderBoardManagerScript* ScoreMgr;
  const ESystemPlatform SystemPlatform;
  const ESystemSkuIdentifier SystemSkuIdentifier;
  int Synchro_AddBarrier();
  bool Synchro_BarrierReached(int Barrier);
  bool Users_AreAllies(CGamePlayerInfo* User1, CGamePlayerInfo* User2);
  void Users_RequestSwitchToSpectator(CGamePlayerInfo* User);
  CGamePlayerInfo* Users_CreateFake(wstring NickName, int RequestedTeam);
  void Users_DestroyFake(CGamePlayerInfo* User);
  void Users_SetNbFakeUsers(int NbTeam1, int NbTeam2);
  void Users_DestroyAllFakes();
  uint Users_EdNbFakeUsers;
  void ItemList_Begin();
  bool ItemList_Begin2();
  UnknownType ItemList_Add(wstring ModelName);
  UnknownType ItemList_AddWithSkin(wstring ModelName, wstring SkinNameOrUrl);
  void ItemList_End();
  void DemoToken_StartUsingToken();
  void DemoToken_StopUsingToken();
  void DemoToken_GetAndUseToken(CGamePlayerInfo* User);
  void ActionList_Begin();
  bool ActionList_Begin2();
  UnknownType ActionList_Add(wstring ActionName);
  void ActionList_End();
  bool UseMinimap;
  bool Replay_AutoStart;
  void Replay_Start();
  void Replay_Stop();
  const CGameAchievementScriptManager* AchievementsManager;
  const CGameScriptMgrTurret* TurretsManager;
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly);
};

// File extension: 'GameCtnMediaBlockFxCameraMap.gbx'
struct CGameCtnMediaBlockFxCameraMap : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFxCameraMap();

  wstring FileName;
};

struct CGamePodium : public CMwNod {
  const CSceneCamera* PodiumCamera;
};

struct CGameControlCameraTrackManiaRace : public CGameControlCamera {
  CGameControlCameraTrackManiaRace();

};

struct CGamePlaygroundBasic : public CGamePlayground {
};

struct CGameScriptHandlerManiaPlanetPlugin : public CGameManialinkScriptHandler {
  const CGameManiaPlanetScriptAPI* ManiaPlanet;
  const CGameManiaplanetPlugin* ParentApp;
  const CGamePluginInterfacesScript* Plugins;
};

struct CGamePlayerProfileChunk_PackagesInfos : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_PackagesInfos();

  const uint PackagesInfosCount;
};

struct CGameCtnMediaBlockShoot : public CGameCtnMediaBlock {
  CGameCtnMediaBlockShoot();

};

struct CGamePlayerProfileChunk_GameScores : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameScores();

  const uint GlobalSkillPoints;
  const NodArray ChallengesScoresChunks;
};

struct CGamePlayerProfileChunk_GameStats : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GameStats();

  const uint TotalTimePlay;
  const uint TotalTimeInSolo;
  const uint TotalTimeInSoloRace;
  const uint TotalTimeInSoloPuzzle;
  const uint TotalTimeInSoloPlatform;
  const uint TotalTimeInSoloScript;
  const uint TotalTimeInSplitScreen;
  const uint TotalTimeInHotSeat;
  const uint TotalTimeInNetwork;
  const uint TotalTimeInNetworkTimeAttack;
  const uint TotalTimeInNetworkRounds;
  const uint TotalTimeInNetworkLaps;
  const uint TotalTimeInNetworkStunts;
  const uint TotalTimeInNetworkCup;
  const uint TotalTimeInNetworkScript;
  const uint TotalTimeInEditChallenge;
  const uint TotalTimeInEditReplay;
  const uint TotalTimeInEditSkin;
  const uint TotalTimeInManiaLink;
  const uint TotalNbReset;
  const uint TotalNbFinish;
  const uint TotalNbChallenges;
  const uint AverageTimePlay;
  const uint AverageTimeInSolo;
  const uint AverageTimeInSoloRace;
  const uint AverageTimeInSoloPuzzle;
  const uint AverageTimeInSoloPlatform;
  const uint AverageTimeInSoloScript;
  const uint AverageTimeInSplitScreen;
  const uint AverageTimeInHotSeat;
  const uint AverageTimeInNetwork;
  const uint AverageTimeInNetworkTimeAttack;
  const uint AverageTimeInNetworkRounds;
  const uint AverageTimeInNetworkLaps;
  const uint AverageTimeInNetworkStunts;
  const uint AverageTimeInNetworkCup;
  const uint AverageTimeInNetworkScript;
  const uint AverageTimeInEditChallenge;
  const uint AverageNbReset;
  const uint AverageNbFinish;
  const uint MaxTimePlay;
  const uint MaxTimeInSolo;
  const uint MaxTimeInSoloRace;
  const uint MaxTimeInSoloPuzzle;
  const uint MaxTimeInSoloPlatform;
  const uint MaxTimeInSoloScript;
  const uint MaxTimeInSplitScreen;
  const uint MaxTimeInHotSeat;
  const uint MaxTimeInNetwork;
  const uint MaxTimeInNetworkTimeAttack;
  const uint MaxTimeInNetworkRounds;
  const uint MaxTimeInNetworkLaps;
  const uint MaxTimeInNetworkStunts;
  const uint MaxTimeInNetworkCup;
  const uint MaxTimeInNetworkScript;
  const uint MaxTimeInEditChallenge;
  const uint MaxNbReset;
  const uint MaxNbFinish;
  const wstring MostPlayed;
  const wstring MostRaced;
  const wstring MostEdited;
  const wstring MostNetted;
  const NodArray ChallengesStatsChunks;
};

struct CGamePlayerProfileChunk_ChallengesStats : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ChallengesStats();

  const uint ChallengesStatsCount;
};

struct CGamePlayerProfileChunk_ChallengesScores : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ChallengesScores();

  const uint ChallengesScoresCount;
};

struct CGameCtnMediaBlockSkel : public CGameCtnMediaBlock {
  CGameCtnMediaBlockSkel();

};

struct CGameEditorAnimClip : public CMwNod {
  const CGameEditorAnimChar_Interface* CharEditorInterface;
  const CGameEditorAnimChar* CharEditor;
  float ParticlesPosX;
  float ParticlesPosY;
  float ParticlesPosZ;
  float ParticlesVelX;
  float ParticlesVelY;
  float ParticlesVelZ;
  float ParticlesAnglesYaw;
  float ParticlesAnglesPitch;
  float ParticlesAnglesRoll;
  bool ParticlesOnMesh;
  bool UseCustomColor;
  UnknownType ParticlesScale;
  bool CustomKeyLinearHue;
  bool CustomKeyPos;
  bool CustomKeyAngles;
  bool CustomKeyVel;
  bool KeyVelInLocal;
  bool CustomKeyVolume;
  bool CustomKeyPitch;
  uint SoundVariant;
  UnknownType SoundVolume;
  UnknownType Pitch;
  bool Preview;
  float SoundPosX;
  float SoundPosY;
  float SoundPosZ;
  const wstring SpriteTextureFid;
  float SpritesPosX;
  float SpritesPosY;
  float SpritesPosZ;
  UnknownType SpritesSize;
  bool SpritesIsFree;
  bool UseRandomSoundVar;
  const string SoundVarName;
  wstring ActionDescription;
};

// File extension: 'EDTransition.Gbx'
struct CGameCtnBlockInfoTransition : public CGameCtnBlockInfo {
  CGameCtnBlockInfoTransition();

};

// File extension: 'ZoneTransition.Gbx'
struct CGameCtnZoneTransition : public CGameCtnZone {
  CGameCtnZoneTransition();

  enum ZoneTransitionType {
    Custom = 0,
    TriZone = 1,
    Overlap = 2,
  };
  CGameCtnBlockInfoTransition* BlockInfoTransition;
  ZoneTransitionType TransitionType;
  UnknownType FrontierId_0To1;
  UnknownType FrontierId_0To2;
  UnknownType FrontierId_1To2;
  UnknownType FrontierId_Base;
  UnknownType FrontierId_Overlap;
  UnknownType FrontierId_BaseToOverlap;
  UnknownType ReplacementZoneId;
  UnknownType Border_North;
  const CGameCtnZoneGenealogy* Genealogy_North;
  UnknownType Border_East;
  const CGameCtnZoneGenealogy* Genealogy_East;
  UnknownType Border_South;
  const CGameCtnZoneGenealogy* Genealogy_South;
  UnknownType Border_West;
  const CGameCtnZoneGenealogy* Genealogy_West;
};

struct CGameMenuSkinChooser : public CMwNod {
  CScene3d* SceneProfile;
  CPlugCamControlModel* CamModel;
};

struct CGameEditorTrigger : public CMwNod {
  CGameEditorTrigger();

};

// File extension: ''
struct CGameCtnZoneFusionInfo : public CMwNod {
  CGameCtnZoneFusionInfo();

  UnknownType CompatibleZoneId;
  UnknownType MergedZoneId;
  UnknownType FusionType;
};

// File extension: 'Frame.Gbx'
struct CGameControlCardBuddy : public CGameControlCard {
  CGameControlCardBuddy();

  const wstring StrLoginOrNickName;
  const wstring StrStatus;
  CPlugBitmap* AvatarOrLeague;
};

struct CGameBuddy : public CMwNod {
  CGameBuddy();

  string Login;
  wstring NickName;
  wstring Path;
  uint SkillsRank;
  uint SkillsPoints;
  uint LadderRank;
  uint LadderPoints;
  bool Invited;
  bool WaitingConfirmation;
  bool CanReceiveMessages;
  bool IsUsed;
  bool IsOnline;
  CGameNetServerInfo* Server;
  CGameAvatar* Avatar;
  CGameLeague* League;
};

struct CGameEditorPluginMapMapType : public CGameEditorPluginMap {
  enum ValidationStatus {
    NotValidable = 0,
    Validable = 1,
    Validated = 2,
  };
  bool CustomEditAnchorData;
  void ClearMapMetadata();
  ValidationStatus ValidationStatus;
  wstring ValidabilityRequirementsMessage;
  bool ValidationEndRequested;
  bool ValidationEndNoConfirm;
  void RequestEnterPlayground();
  void RequestLeavePlayground();
  const bool IsSwitchedToPlayground;
  const CGamePlaygroundUIConfigMgrScript* UIManager;
  const NodArray Users;
};

struct CGameCursorItem : public CMwNod {
  CGameCursorItem();

  const CSceneMobil* HelperMobil;
};

struct CGameCtnMacroBlockJunction : public CMwNod {
  CGameCtnMacroBlockJunction();

  enum ECardDir {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  int OffsetX;
  int OffsetY;
  int OffsetZ;
  ECardDir Dir;
  bool CanBeEntry;
  bool CanBeExit;
};

struct CGameActionMaker : public CGameEditorAsset {
  void Undo();
  void Redo();
  void Exit();
  void ModelLoad();
  void ActionNew();
  void ActionOpen();
  void ActionSaveAs();
  void SwitchFullScreen();
  void BlockSoundInsert();
  void BlockParticleInsert();
  void BlockSpriteInsert();
  void BlockRemove();
  void AdditionalTools();
  void SwitchToBlockMode();
  void SwitchToAnimMode();
  void SwitchToScriptMode();
  void AnimEdit();
  void AnimValidate();
  void BlocAnimValidate();
  void ScriptParamProjAdd();
  void ScriptParamProjSuppr();
  void ScriptParamProjEdit();
  void ScriptParamAnimEdit();
  void ScriptParamProjNext();
  void ScriptParamProjPrev();
  void ScriptParamUpdate();
  void ScriptParamCompil();
  void ScriptAdvancedParamCompil();
  void SoundTypePrev();
  void SoundTypeNext();
  void SoundVarPrev();
  void SoundVarNext();
  void ImportBullet();
  void ExportBullet();
  void Help();
  void ScriptAddAnimEffect();
  void ScriptAddProjEffect();
  void ScriptAddBuffEffect();
  void ScriptAddAoeEffect();
  void ScriptAddShieldEffect();
  void CreateResources();
  void ImportResources();
  void LibraryValidate();
  void ActionIsCustom();
  void ShowBulletEditor();
  void TestMode();
  void SwitchBulletState();
  void SubModelShowList();
  void SwitchSubModelVisibility();
  void SoloMode();
  void ModelValidate();
  void NextBulletPattern();
  void PrevBulletPattern();
  void NextBulletType();
  void PrevBulletType();
  void NextLaserType();
  void PrevLaserType();
  void EditModeBullet();
  void EditModeExplosion();
  void EditModeSound();
  void EditModeGameplay();
  void EditModeGauge();
  void SubModelTypeCore();
  void SubModelTypeTrail();
  void SubModelTypePower();
  void SubModelTypeSmokeDebris();
  void ProjectileSoundModeShooting();
  void ProjectileSoundModeExplosion();
  void ProjectileSoundModeProjectile();
  void ProjectileSoundModeRebound();
  void ProjectileSoundModeHoming();
  void ParamGameplayModeBullet();
  void ParamGameplayModeExplosion();
  void ParamLoadMesh();
  void DrawHelp();
  void SpriteTextureImport();
  const CGameEditorAnimClip* ClipEditor;
  const CGameEditorBullet* BulletEditor;
  const CPlugAnimFile* AnimFile;
  uint ClipIndex;
  CGameActionModel* Action;
};

struct CGameCtnEditorTraffic : public CMwNod {
  bool IsInsertionMode;
  bool DrawClipsPassingPoints;
  bool EnableClipsMagnetization;
  float MagnetizationRadius;
  float AirClipYIncr;
  bool EnableSplinesBoundariesEdition;
  void CycleCurrentLane();
  const uint CurrentGraphSplineBaseIndex;
  uint CursorNumberOfLanes;
  float CursorVerticalOffset;
  float CursorYaw;
  vec3 CursorCenterWorldPos;
  vec3 MagnetCursorYawPitchRoll;
  float PickKeyRadius;
  float CursorVerticalOffsetMin;
  float CursorVerticalStep;
  float CursorRotationStep;
  float CursorLanesSpacing;
  void NewCurrentLanes();
  void DeleteCurrentLanes();
  void StartTrafficPreview();
  void StopTrafficPreview();
  float PhyPeriod;
  CPlugTrafficGraph* TrafficGraph;
};

struct CGameCtnEditorScriptAnchoredObject : public CMwNod {
  enum CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  const vec3 Position;
};

struct CGameCtnEditorScriptSpecialProperty : public CMwNod {
  const string DefaultTag;
  const uint DefaultOrder;
  string Tag;
  uint Order;
  const CGameCtnBlock* Block;
  const CGameCtnEditorScriptAnchoredObject* Item;
};

struct CGameCtnBlockInfoVariant : public CMwNod {
  enum CardinalDirEnum {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum MultiDirEnum {
    SameDir = 0,
    SymmetricalDirs = 1,
    AllDir = 2,
    OpposedDirOnly = 3,
    PerpendicularDirsOnly = 4,
    NextDirOnly = 5,
    PreviousDirOnly = 6,
  };
  enum VariantBaseTypeEnum {
    Inherit = 0,
    None = 1,
    Conductor = 2,
    Generator = 3,
  };
  NodArray BlockUnitInfos;
  const UnknownType BlockInfoIdForLog;
  string Name;
  const bool IsAllUnderground;
  const bool IsPartUnderground;
  const int3 Size;
  CPlugSolid* HelperSolidFid;
  CPlugSolid* FacultativeHelperSolidFid;
  CMwNod* WayPointTriggerSolid;
  CMwNod* ScreenInteractionTriggerSolid;
  CGameGateModel* Gate;
  CGameTeleporterModel* Teleporter;
  CGameTurbineModel* Turbine;
  CPlugFlockModel* FlockModel;
  NodArray EntitySpawners;
  float FlockEmitterRadius;
  float FlockEmitterPower;
  uint FlockEmitterSpawnCount;
  bool FlockEmitterIsRepulsor;
  bool FlockEmitterIsLandingArea;
  UnknownType FlockEmitterLoc;
  CGameSpawnModel* SpawnModel;
  CPlugProbe* Probe;
  bool HasManualSymmetryH;
  bool HasManualSymmetryV;
  bool HasManualSymmetryD1;
  bool HasManualSymmetryD2;
  const bool HasVolumeSymmetryH;
  const bool HasVolumeSymmetryV;
  const bool HasVolumeSymmetryD1;
  const bool HasVolumeSymmetryD2;
  const bool HasFreeClips;
  uint SymmetricalVariantIndex;
  CardinalDirEnum CardinalDir;
  uint NoPillarBelowIndex;
  bool IsObsoleteVariant;
  bool IsFakeReplacement;
  bool AutoChangeVariantOff;
  bool DontPlaySound1;
  bool DontPlaySound2;
  bool IsNoPillarBelowVariant;
  MultiDirEnum MultiDir;
  vec3 SpawnTrans;
  UnknownType SpawnYaw;
  UnknownType SpawnPitch;
  const int2 OffsetBoundingBoxMin;
  const int2 OffsetBoundingBoxMax;
  NodArray Mobils00;
  NodArray Mobils01;
  NodArray Mobils02;
  NodArray Mobils03;
  NodArray Mobils04;
  NodArray Mobils05;
  NodArray Mobils06;
  NodArray Mobils07;
  NodArray Mobils08;
  NodArray Mobils09;
  NodArray Mobils10;
  NodArray Mobils11;
  NodArray Mobils12;
  NodArray Mobils13;
  NodArray Mobils14;
  VariantBaseTypeEnum VariantBaseType;
  void AddNewReplacedPillar();
  NodArray ReplacedPillarBlockInfo_List;
  array<int3> ReplacedPillarOffset2D_List;
  UnknownType ReplacedPillarMultiDir_List;
  array<bool> ReplacedPillarIsOnFlyingBase_List;
  const array<bool> IsNewPillarPlacedBelow_List;
  void AddNewPlacedPillar();
  NodArray PlacedPillarBlockInfo_List;
  array<int3> PlacedPillarOffset_List;
  UnknownType PlacedPillarDir_List;
  const NodArray BlockUnitModels;
};

struct CGameCtnBlockInfoVariantGround : public CGameCtnBlockInfoVariant {
  CGameCtnBlockInfoVariantGround();

  enum EnumAutoTerrainPlaceType {
    Auto = 0,
    Force = 1,
    DoNotPlace = 2,
    DoNotDestroy = 3,
  };
  const NodArray AutoTerrains;
  bool AutoTerrainWithFrontiers;
  int AutoTerrainHeightOffset;
  EnumAutoTerrainPlaceType AutoTerrainPlaceType;
};

struct CGameCtnBlockInfoVariantAir : public CGameCtnBlockInfoVariant {
  CGameCtnBlockInfoVariantAir();

  CGameCtnBlockInfo* PillarsForCompatibility;
};

struct CGameTeamProfile : public CMwNod {
  wstring Name;
  wstring ZonePath;
  wstring City;
  string EmblemUrl;
  string PresentationManialinkUrl;
  string ClubLinkUrl;
  UnknownType ColorLinearHuePrimary;
  const UnknownType ColorPrimaryAsColor;
  vec3 ColorPrimary;
  UnknownType ColorLinearHueSecondary;
  const UnknownType ColorSecondaryAsColor;
  vec3 ColorSecondary;
  const wstring ColorText;
  const wstring ColorizedName;
  void UpdateCache();
};

struct CGameManialinkScriptEvent : public CMwNod {
  enum Type {
    KeyPress = 0,
    MouseClick = 1,
    MouseOver = 2,
    MouseOut = 3,
    EntrySubmit = 4,
    MenuNavigation = 5,
    PluginCustomEvent = 6,
  };
  enum EMenuNavAction {
    Up = 0,
    Right = 1,
    Left = 2,
    Down = 3,
    Select = 4,
    Cancel = 5,
    PageUp = 6,
    PageDown = 7,
    AppMenu = 8,
    Action1 = 9,
    Action2 = 10,
  };
  const Type Type;
  const uint KeyCode;
  const string KeyName;
  const string CharPressed;
  const string ControlId;
  const CGameManialinkControl* Control;
  const EMenuNavAction MenuNavAction;
  const bool IsActionAutoRepeat;
  const wstring CustomEventType;
  const array<wstring> CustomEventData;
  const wstring PluginCustomEventType;
  const array<wstring> PluginCustomEventData;
};

struct CGameEditorPluginMap : public CGameManiaApp {
  enum CardinalDirections {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
  };
  enum PlaceMode {
    Unknown = 0,
    Terraform = 1,
    Block = 2,
    Macroblock = 3,
    Skin = 4,
    CopyPaste = 5,
    Test = 6,
    Plugin = 7,
    CustomSelection = 8,
    OffZone = 9,
    BlockProperty = 10,
    Path = 11,
    GhostBlock = 12,
    Item = 13,
    Light = 14,
  };
  enum EditMode {
    Unknown = 0,
    Place = 1,
    FreeLook = 2,
    Erase = 3,
    Pick = 4,
    SelectionAdd = 5,
    SelectionRemove = 6,
  };
  enum ShadowsQuality {
    NotComputed = 0,
    VeryFast = 1,
    Fast = 2,
    Default = 3,
    High = 4,
    Ultra = 5,
  };
  enum ValidationStatus {
    NotValidable = 0,
    Validable = 1,
    Validated = 2,
  };
  const NodArray PendingEvents;
  const CGameCtnChallenge* Map;
  const wstring MapName;
  const bool IsEditorReadyForRequest;
  bool HoldLoadingScreen;
  void ComputeShadows();
  void ComputeShadows1(ShadowsQuality ShadowsQuality);
  const ShadowsQuality CurrentShadowsQuality;
  const bool IsUltraShadowsQualityAvailable;
  void DisplayDefaultSetObjectivesDialog();
  void Undo();
  void Redo();
  void Help();
  void Validate();
  void AutoSave();
  void Quit();
  void QuickQuit();
  void QuitAndSetResult(wstring Type, array<wstring>& Data);
  void QuickQuitAndSetResult(wstring Type, array<wstring>& Data);
  void TestMapFromStart();
  void TestMapFromCoord(int2 Coord, CardinalDirections Dir);
  void TestMapWithMode(wstring RulesModeName);
  void StartTestMapWithMode(wstring RulesModeName);
  void SaveMap(wstring FileName);
  void SaveMapCompat(wstring FileName, wstring Path);
  PlaceMode PlaceMode;
  EditMode EditMode;
  bool UndergroundMode;
  bool BlockStockMode;
  int3 CursorCoord;
  CardinalDirections CursorDir;
  CGameCtnBlockInfo* CursorBlockModel;
  CGameCtnBlockInfo* CursorTerrainBlockModel;
  CGameCtnMacroBlockInfo* CursorMacroblockModel;
  float CameraVAngle;
  float CameraHAngle;
  float CameraToTargetDistance;
  vec3 CameraTargetPosition;
  const vec3 CameraPosition;
  vec3 TargetedPosition;
  float ThumbnailCameraVAngle;
  float ThumbnailCameraHAngle;
  float ThumbnailCameraRoll;
  float ThumbnailCameraFovY;
  vec3 ThumbnailCameraPosition;
  bool GetRaceCamera(vec3 Position, float Yaw, float Pitch, float Roll, float FovY);
  bool EnableAirMapping;
  bool EnableMixMapping;
  void RemoveAllBlocks();
  void RemoveAllTerrain();
  void RemoveAllOffZone();
  void RemoveAllObjects();
  void RemoveAll();
  void RemoveAllBlocksAndTerrain();
  void ShowCustomSelection();
  void HideCustomSelection();
  void CopyPaste_Copy();
  void CopyPaste_Cut();
  void CopyPaste_Remove();
  void CopyPaste_SelectAll();
  void CopyPaste_ResetSelection();
  void OpenToolsMenu();
  void EditMediatrackIngame();
  void PreloadAllBlocks();
  void PreloadAllItems();
  bool CanPlaceBlock(CGameCtnBlockInfo* BlockModel, int2 Coord, CardinalDirections Dir, bool OnGround, uint VariantIndex);
  bool PlaceBlock(CGameCtnBlockInfo* BlockModel, int2 Coord, CardinalDirections Dir);
  bool CanPlaceBlock_NoDestruction(CGameCtnBlockInfo* BlockModel, int2 Coord, CardinalDirections Dir, bool OnGround, uint VariantIndex);
  bool PlaceBlock_NoDestruction(CGameCtnBlockInfo* BlockModel, int2 Coord, CardinalDirections Dir);
  bool CanPlaceRoadBlocks(CGameCtnBlockInfo* BlockModel, int2 StartCoord, int2 EndCoord);
  bool PlaceRoadBlocks(CGameCtnBlockInfo* BlockModel, int2 StartCoord, int2 EndCoord);
  bool CanPlaceTerrainBlocks(CGameCtnBlockInfo* BlockModel, int2 StartCoord, int2 EndCoord);
  bool PlaceTerrainBlocks(CGameCtnBlockInfo* BlockModel, int2 StartCoord, int2 EndCoord);
  bool PlaceTerrainBlocks_NoDestruction(CGameCtnBlockInfo* BlockModel, int2 StartCoord, int2 EndCoord);
  bool CanPlaceMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool PlaceMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool CanPlaceMacroblock_NoDestruction(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool PlaceMacroblock_NoDestruction(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool CanPlaceMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool PlaceMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool RemoveMacroblock(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  bool RemoveMacroblock_NoTerrain(CGameCtnMacroBlockInfo* MacroblockModel, int2 Coord, CardinalDirections Dir);
  CGameCtnBlock* GetBlock(int2 Coord);
  bool IsBlockModelSkinnable(CGameCtnBlockInfo* BlockModel);
  uint GetNbBlockModelSkins(CGameCtnBlockInfo* BlockModel);
  wstring GetBlockModelSkin(CGameCtnBlockInfo* BlockModel, uint SkinIndex);
  wstring GetSkinDisplayName(wstring SkinFileName);
  wstring GetBlockSkin(CGameCtnBlock* Block);
  void SetBlockSkin(CGameCtnBlock* Block, wstring SkinFileName);
  bool OpenBlockSkinDialog(CGameCtnBlock* Block);
  bool RemoveBlock(int2 Coord);
  bool RemoveTerrainBlocks(int2 StartCoord, int2 EndCoord);
  uint GetBlockGroundHeight(CGameCtnBlockInfo* BlockModel, int CoordX, int CoordZ, CardinalDirections Dir);
  uint GetGroundHeight(int CoordX, int CoordZ);
  int2 GetMouseCoordOnGround();
  int2 GetMouseCoordAtHeight(uint CoordY);
  CGameCtnBlock* GetStartLineBlock();
  bool RemoveItem(CGameCtnEditorScriptSpecialProperty* Item);
  void CopyPaste_AddOrSubSelection(int2 StartCoord, int2 EndCoord);
  bool CopyPaste_Symmetrize();
  void SaveMacroblock(CGameCtnMacroBlockInfo* MacroblockModel);
  CGameCtnMacroBlockInfo* GetMacroblockModelFromName(wstring MacroblockModelName);
  CGameCtnMacroBlockInfo* GetMacroblockModelFromFilePath(wstring MacroblockModelFilePath);
  CGameCtnBlockInfo* GetTerrainBlockModelFromName(wstring TerrainBlockModelName);
  CGameCtnBlockInfo* GetBlockModelFromName(wstring BlockModelName);
  wstring GetMapStyle();
  void SetMapStyle(wstring MapStyle);
  const NodArray Items;
  const array<wstring> MediatrackIngameClips;
  const array<wstring> MediatrackIngameIsScriptClips;
  uint MediatrackIngameEditedClipIndex;
  const NodArray Blocks;
  const NodArray BlockModels;
  const NodArray TerrainBlockModels;
  const NodArray MacroblockModels;
  const NodArray AnchorData;
  array<int3> CustomSelectionCoords;
  vec3 CustomSelectionRGB;
  bool EnableEditorInputsCustomProcessing;
  bool EnableCursorShowingWhenInterfaceIsFocused;
  bool HideEditorInterface;
  bool HideBlockHelpers;
  bool ShowPlacementGrid;
  float CursorBrightnessFactor;
  const bool EditorInputIsDown_Menu;
  const bool EditorInputIsDown_SwitchToRace;
  const bool EditorInputIsDown_Undo;
  const bool EditorInputIsDown_Redo;
  const bool EditorInputIsDown_CursorUp;
  const bool EditorInputIsDown_CursorRight;
  const bool EditorInputIsDown_CursorDown;
  const bool EditorInputIsDown_CursorLeft;
  const bool EditorInputIsDown_CursorRaise;
  const bool EditorInputIsDown_CursorLower;
  const bool EditorInputIsDown_CursorTurn;
  const bool EditorInputIsDown_CursorPick;
  const bool EditorInputIsDown_CursorPlace;
  const bool EditorInputIsDown_CursorDelete;
  const bool EditorInputIsDown_CameraUp;
  const bool EditorInputIsDown_CameraRight;
  const bool EditorInputIsDown_CameraDown;
  const bool EditorInputIsDown_CameraLeft;
  const bool EditorInputIsDown_CameraZoomNext;
  const bool EditorInputIsDown_Camera0;
  const bool EditorInputIsDown_Camera1;
  const bool EditorInputIsDown_Camera3;
  const bool EditorInputIsDown_Camera7;
  const bool EditorInputIsDown_Camera9;
  const bool EditorInputIsDown_PivotChange;
  const bool EditorInputIsDown_CursorTurnSlightly;
  const bool EditorInputIsDown_CursorTurnSlightlyAntiClockwise;
  const bool EditorInputIsDown_IconUp;
  const bool EditorInputIsDown_IconRight;
  const bool EditorInputIsDown_IconDown;
  const bool EditorInputIsDown_IconLeft;
  const bool EditorInputIsDown_RemoveAll;
  const bool EditorInputIsDown_Save;
  const bool EditorInputIsDown_SaveAs;
  const bool EditorInputIsDown_MapStyle;
  const bool EditorInputIsDown_ClassicMapEditor;
  const float CollectionSquareSize;
  const float CollectionSquareHeight;
  const uint CollectionGroundY;
  const ValidationStatus ValidationStatus;
  string ManialinkText;
  const CGameManialinkPage* ManialinkPage;
  uint GetInterfaceNumber(CGameCtnCollector* Collector);
  void SetInterfaceNumber(CGameCtnCollector* Collector, uint NewValue);
};

struct CGameCtnMediaBlockCameraEffectScript : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectScript();

  const float Now;
  const float A;
  const float B;
  const float C;
  vec3 OffsetPos;
  vec3 OffsetRot;
};

struct CGameScriptServerAdmin : public CMwNod {
  const CGameCtnNetServerInfo* ServerInfo;
  void AutoTeamBalance();
  bool Kick1(CGamePlayerInfo* User, wstring Reason);
  bool Kick2(CGameConnectedClient* Client, wstring Reason);
  bool KickUser(CGamePlayerInfo* User, wstring Reason);
  bool Ban1(CGamePlayerInfo* User, wstring Reason);
  bool Ban2(CGameConnectedClient* Client, wstring Reason);
  bool RequestSwitchToSpectator1(CGamePlayerInfo* User);
  bool RequestSwitchToSpectator2(CGameConnectedClient* Client);
  void SetLobbyInfo(bool IsLobby, int LobbyPlayerCount, int LobbyMaxPlayerCount, float LobbyPlayersLevel);
  void SendToServerAfterMatch(string ServerUrl);
  void CustomizeQuitDialog(string ManialinkPage, string SendToServerUrl, bool ProposeAddToFavorites, uint ForceDelay);
};

struct CGamePlayerProfileChunk_EditorSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_EditorSettings();

  wstring EditorSettingsName;
};

struct CGameEditorPluginMapScriptEvent : public CGameManiaAppScriptEvent {
  enum Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    CursorSelectionBegin = 4,
    CursorSelectionEnd = 5,
    CursorChange = 6,
    MapModified = 7,
    EditorInput = 8,
    EditAnchor = 9,
    EditObjectives = 10,
    StartValidation = 11,
    StartTest = 12,
  };
  enum EInput {
    Unknown = 0,
    Menu = 1,
    SwitchToRace = 2,
    Undo = 3,
    Redo = 4,
    CursorUp = 5,
    CursorRight = 6,
    CursorDown = 7,
    CursorLeft = 8,
    CursorRaise = 9,
    CursorLower = 10,
    CursorTurn = 11,
    CursorPick = 12,
    CursorPlace = 13,
    CursorDelete = 14,
    CameraUp = 15,
    CameraRight = 16,
    CameraDown = 17,
    CameraLeft = 18,
    CameraZoomNext = 19,
    Camera0 = 20,
    Camera1 = 21,
    Camera3 = 22,
    Camera7 = 23,
    Camera9 = 24,
    PivotChange = 25,
    CursorTurnSlightly = 26,
    CursorTurnSlightlyAntiClockwise = 27,
    IconUp = 28,
    IconRight = 29,
    IconDown = 30,
    IconLeft = 31,
    RemoveAll = 32,
    Save = 33,
    SaveAs = 34,
    MapStyle = 35,
    ClassicMapEditor = 36,
  };
  const Type Type;
  const EInput Input;
  const UnknownType EditedAnchorDataId;
  const bool IsFromPad;
  const bool IsFromMouse;
  const bool IsFromKeyboard;
  const bool OnlyScriptMetadataModified;
};

// File extension: 'GameCtnMediaBlockDirtyLens.gbx'
struct CGameCtnMediaBlockDirtyLens : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDirtyLens();

  void SwitchOn();
};

struct CGameCtnMediaBlockCameraEffectInertialTracking : public CGameCtnMediaBlockCameraEffect {
  CGameCtnMediaBlockCameraEffectInertialTracking();

  bool TrackingEnabled;
  bool AutoFocusEnabled;
  bool AutoZoomEnabled;
  float AutoZoomMinDist;
  float AutoZoomMaxDist;
  float AutoZoomMinFov;
  float AutoZoomMaxFov;
};

struct CGameEditorPacks : public CMwNod {
  const bool PackInfo_IsTitlePack;
  bool PackInfo_IsCreditedPack;
  uint PackInfo_Price;
  const uint PackInfo_PriceIncluded;
  const uint PackInfo_PriceTotal;
  string PackInfo_Url;
  wstring PackInfo_PackName;
  wstring PackInfo_Comment;
  void PackInfo_EditTitle();
  void PackInfo_EditTitle_OnOk();
  void PackInfo_EditContents();
  void PackInfo_TestTitle();
  const wstring Contents_Contents;
  const wstring Contents_IncludedContents;
  void Contents_OnAdd();
  void Contents_OnClear();
  const wstring Title_BaseTitle;
  void Title_ChooseBaseTitle();
  const UnknownType Title_PlayerModel;
  void Title_OnOpenInExplorer();
  void Title_OnButtonPreview();
  const wstring Title_MusicFolder;
  void Title_ChooseMusicFolder();
  void Title_ClearMusicFolder();
  string Title_CollectionGroup;
  int Title_SortOrder;
  string Title_StationManialinkUrl;
  void Title_ChooseStationManialinkUrl();
  void Title_ClearStationManialinkUrl();
  string Title_BoxCaseManialinkUrl;
  void Title_ChooseBoxCaseManialinkUrl();
  void Title_ClearBoxCaseManialinkUrl();
  const wstring Title_Mod;
  void Title_ChooseMod();
  void Title_ClearMod();
  const wstring Title_Hud3dFontFileName;
  const wstring TitleMenu_ReplayName;
  void TitleMenu_ChooseReplayName();
  void TitleMenu_ClearReplayName();
  const wstring TitleMenu_MusicName;
  void TitleMenu_ChooseMusicName();
  void TitleMenu_ClearMusicName();
  string TitleMenu_ManialinkUrl;
  void TitleMenu_ChooseManialinkUrl();
  void TitleMenu_ClearManialinkUrl();
  UnknownType TitleMenu_Color;
  const wstring TitleEditor_MapType;
  void TitleEditor_ChooseMapType();
  void TitleEditor_ClearMapType();
  const wstring TitleEditor_SimpleEditorMap;
  void TitleEditor_ChooseSimpleEditorMap();
  void TitleEditor_ClearSimpleEditorMap();
  const wstring TitleSolo_Mode;
  void TitleSolo_ChooseMode();
  void TitleSolo_ClearMode();
  const wstring TitleSolo_CampaignName;
  void TitleSolo_ChooseCampaignName();
  void TitleSolo_ClearCampaignName();
  const wstring TitleSolo_PlaylistFileName;
  void TitleSolo_ChoosePlaylistFileName();
  void TitleSolo_ClearPlaylistFileName();
  const wstring TitleNet_Mode;
  void TitleNet_ChooseMode();
  void TitleNet_ClearMode();
  const wstring TitleNet_PlaylistFileName;
  void TitleNet_ChoosePlaylistFileName();
  void TitleNet_ClearPlaylistFileName();
  void OpenDialogChooseName_Yes();
  void OpenDialogChooseFolder_Yes();
};

// File extension: 'GamePodiumInfo.Gbx'
struct CGamePodiumInfo : public CMwNod {
  CGamePodiumInfo();

  const NodArray MediaClipFids;
};

struct CGameCtnMediaBlockBulletFx_Deprecated : public CGameCtnMediaBlock {
  CGameCtnMediaBlockBulletFx_Deprecated();

};

struct CGameCtnMediaBlockCharVis_Deprecated : public CGameCtnMediaBlock {
  CGameCtnMediaBlockCharVis_Deprecated();

};

struct CGamePlaygroundScriptXmlRpc : public CMwNod {
  const NodArray PendingEvents;
  void SendCallback(wstring Param1, wstring Param2);
  void SendCallbackArray(wstring Type, array<wstring>& Data);
  void SendCallback_BeginRound();
  void SendCallback_EndRound();
};

// File extension: 'GameCtnMediaBlockColoringCapturable.gbx'
struct CGameCtnMediaBlockColoringCapturable : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColoringCapturable();

  uint CapturableIndex;
};

// File extension: 'GameCtnMediaBlockFxCameraBlend.gbx'
struct CGameCtnMediaBlockFxCameraBlend : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFxCameraBlend();

  float Intensity;
};

struct CGameCtnChallengeTrafficElemDesc : public CMwNod {
  CGameCtnChallengeTrafficElemDesc();

  UnknownType ElemId;
  UnknownType PathId;
  const string Name;
  CPlugTrafficObjectParams* Model;
  uint Faction;
  uint TimeOffset;
  CSystemPackDesc* PackDesc;
  UnknownType TrafficObjectId;
  UnknownType TrafficObjectAuthor;
  UnknownType TrafficObjectCollection;
};

// File extension: 'GameCoverFlow.Gbx'
struct CGameCoverFlowDesc : public CMwNod {
  CGameCoverFlowDesc();

  CScene3d* SceneFid;
  CPlugGameSkin* GameSkin;
  CSystemFidsFolder* GameSkinFolder;
  float TimeRemapped;
  CGameManialink3dStyle* Style;
  float SpeedChangeGroup;
  float SpeedZ;
  float TransitionRotateAngleDegPrev;
  float TransitionRotateAngleDegNext;
  const NodArray CameraLocs;
  UnknownType BoxesGroup_RelLoc;
  UnknownType StationsGroup_HomeManialinkRelLoc;
  UnknownType StationsGroup_MainRelLoc;
  UnknownType StationsGroup_ListRelLoc;
  const string LinearSeparator0;
  float LinearOffsetX;
  float LinearOffsetY;
  float LinearOffsetZ;
  float LinearStepX;
  float LinearStepY;
  float LinearStepZ0;
  float LinearStepZ1;
  float LinearAngleMax0;
  float LinearAngleMax1;
  float LinearSpeedMove;
  float LinearSpeedFocus;
  float LinearBumpY;
  float LinearZoomDistance;
  uint LinearTransitionDuration0;
  uint LinearTransitionDuration1;
  uint LinearTransitionDuration2;
  const string GridSeparator0;
  float GridOffsetX;
  float GridOffsetY;
  float GridOffsetZ;
  float GridStepX;
  float GridStepY;
  float GridStepZ0;
  float GridStepZ1;
  float GridAngleMax0;
  float GridAngleMax1;
  float GridSpeedMove;
  float GridSpeedFocus;
  float GridBumpY;
  float GridZoomDistance;
  uint GridTransitionDuration0;
  uint GridTransitionDuration1;
  uint GridTransitionDuration2;
  const string FreeSeparator0;
  float FreeOffsetX;
  float FreeOffsetY;
  float FreeOffsetZ;
  float FreeStepX;
  float FreeStepY;
  float FreeStepZ0;
  float FreeStepZ1;
  float FreeAngleMax0;
  float FreeAngleMax1;
  float FreeSpeedMove;
  float FreeSpeedFocus;
  float FreeBumpY;
  float FreeZoomDistance;
  uint FreeTransitionDuration0;
  uint FreeTransitionDuration1;
  uint FreeTransitionDuration2;
  const string LinearSeparator1;
  CPlugSound* LinearSound_FocusGained;
  CPlugSound* LinearSound_FocusLoop;
  CPlugSound* LinearSound_FocusLost;
  CPlugSound* LinearSound_Select;
  CPlugSound* LinearSound_Edit;
  CPlugSound* LinearSound_Clear;
  CPlugSound* LinearSound_GroupEnter;
  CPlugSound* LinearSound_GroupLoop;
  CPlugSound* LinearSound_GroupLeave;
  CPlugSound* LinearSound_TransitionBump;
  CPlugSound* LinearSound_TransitionZoomIn;
  CPlugSound* LinearSound_TransitionZoomOut;
  const string GridSeparator1;
  CPlugSound* GridSound_FocusGained;
  CPlugSound* GridSound_FocusLoop;
  CPlugSound* GridSound_FocusLost;
  CPlugSound* GridSound_Select;
  CPlugSound* GridSound_Edit;
  CPlugSound* GridSound_Clear;
  CPlugSound* GridSound_GroupEnter;
  CPlugSound* GridSound_GroupLoop;
  CPlugSound* GridSound_GroupLeave;
  CPlugSound* GridSound_TransitionBump;
  CPlugSound* GridSound_TransitionZoomIn;
  CPlugSound* GridSound_TransitionZoomOut;
  const string FreeSeparator1;
  CPlugSound* FreeSound_FocusGained;
  CPlugSound* FreeSound_FocusLoop;
  CPlugSound* FreeSound_FocusLost;
  CPlugSound* FreeSound_Select;
  CPlugSound* FreeSound_Edit;
  CPlugSound* FreeSound_Clear;
  CPlugSound* FreeSound_GroupEnter;
  CPlugSound* FreeSound_GroupLoop;
  CPlugSound* FreeSound_GroupLeave;
  CPlugSound* FreeSound_TransitionBump;
  CPlugSound* FreeSound_TransitionZoomIn;
  CPlugSound* FreeSound_TransitionZoomOut;
};

struct CGamePlayerProfileChunk_ScriptPersistentTraits : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ScriptPersistentTraits();

  CScriptTraitsPersistent* ScriptPersistentTraits;
};

struct CGamePlayerProfileCompatibilityChunk : public CMwNod {
  CGamePlayerProfileCompatibilityChunk();

  const uint ClassId;
  const string ChunkName;
  const string GameName;
  const string Checksum;
  const uint TimeStamp;
};

// File extension: 'GameCtnMediaBlockColoringBase.gbx'
struct CGameCtnMediaBlockColoringBase : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColoringBase();

  uint BaseIndex;
};

struct CGameCtnMediaClipConfigScriptContext : public CMwNod {
  float SmShieldSizeScale;
};

struct CGamePlaygroundScriptXmlRpcEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    Callback = 1,
    CallbackArray = 2,
  };
  const EType Type;
  const wstring Param1;
  const wstring Param2;
  const wstring ParamArray1;
  const array<wstring> ParamArray2;
};

struct CGameScriptHandlerBrowser : public CGameManialinkScriptHandler {
  enum EBuddyAction {
    Add = 0,
    Invite = 1,
    Remove = 2,
  };
  enum EBuddyResult {
    Ok = 0,
    Error = 1,
    NotFinished = 2,
  };
  const CGameManiaPlanetScriptAPI* ManiaPlanet;
  const CGameManiaAppBrowser* ParentApp;
  const CGameCtnChallenge* CurMap;
  void ShowCurMapCard();
  void BuddyDo(EBuddyAction Action, string BuddyLogin, bool IsSilent);
  const EBuddyResult BuddyDoResult;
  const wstring BuddyDoErrorMessage;
  const bool IsInBrowser;
  void BrowserBack();
  void BrowserQuit();
  void BrowserHome();
  void BrowserReload();
  wstring BrowserFocusedFrameId;
  void SetLocalUserClubLink(string ClubLink);
};

struct CGameCtnEditorBody : public CMwNod {
  void StartBodiesPreview();
  void StopBodiesPreview();
  void SwitchToGhostPathMode();
  void SwitchToStraightPathMode();
  void SwitchToRemoveMode();
  void SwitchToPathSpotsMode();
  void SwitchMarkersVisible();
  float BotSpeed;
  uint GhostSamplingPeriod;
  float ShootmanSpeed;
  void SweepPathsAndSave();
  string BotPathFrameTag;
  uint BotPathFrameOrder;
  uint BotPathFrameKind;
  bool BotPathFrameIsAutonomous;
};

struct CGameManialinkPlayerList : public CGameManialinkControl {
};

struct CGamePlayerProfileChunk_GlobalInterfaceSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_GlobalInterfaceSettings();

  uint WarnUserForAvatars;
  bool EnableAvatars;
  bool EnableChat;
  bool OpenWebLinksInSteamOverlay;
  bool SynchonizeSteamWorkshopFiles;
  bool PreferSteamScreenshots;
};

struct CGameAnimSet : public CMwNod {
  CGameAnimSet();

  const string ZipName;
  CGameAnimClipNod* Idle;
  CGameAnimClipNod* RunF;
  CGameAnimClipNod* RunB;
  CGameAnimClipNod* TurnR_90;
  CGameAnimClipNod* TurnL_90;
  CGameAnimClipNod* Jump;
  CGameAnimClipNod* FrontFlip;
  CGameAnimClipNod* BackFlip;
  CGameAnimClipNod* Air;
  CGameAnimClipNod* AirToIdle;
  CGameAnimClipNod* AirToRunF;
  CGameAnimClipNod* AirToRunB;
  CGameAnimClipNod* Slide;
  CGameAnimClipNod* Glide;
  CGameAnimClipNod* SwimI;
  CGameAnimClipNod* SwimF;
  CGameAnimClipNod* SwimB;
  CGameAnimClipNod* SneakF;
  CGameAnimClipNod* SneakI;
  CGameAnimClipNod* SneakB;
  CGameAnimClipNod* Sneak_TurnR_90;
  CGameAnimClipNod* Sneak_TurnL_90;
  CGameAnimClipNod* Fire;
  CGameAnimClipNod* Gesture;
};

struct CGameScriptChatManager : public CMwNod {
  enum EConnectionStatus {
    Offline = 0,
    Online = 1,
    Connecting = 2,
  };
  enum EDesiredConnectionStatus {
    Offline = 0,
    Online = 1,
  };
  enum EPresenceShow {
    Available = 0,
    WantToChat = 1,
    DoNotDisturb = 2,
    Away = 3,
    ExtendedAway = 4,
  };
  const NodArray DebugContacts;
  const EConnectionStatus CurrentConnectionStatus;
  EDesiredConnectionStatus DesiredConnectionStatus;
  const bool SteamIsEnabled;
  void SendMessage(CGameScriptChatContact* Buddy, wstring Body);
  void SendMessage_Deprecated(CGameScriptChatContact* Buddy, wstring Type, wstring Body);
  void OpenSteamChat(CGameScriptChatContact* Buddy);
  void ChangePresence(EPresenceShow Show, wstring Status);
  void PresenceSet(EPresenceShow Show, wstring Status);
  const wstring Presence;
  const string CurrentServerLogin;
  const wstring CurrentServerName;
  const string CurrentServerJoinLink;
  const wstring CurrentServerModeName;
  const wstring CurrentServerModeStatus;
  const uint CurrentServerPlayerCount;
  const uint CurrentServerPlayerCountMax;
  const bool CurrentServer_IsFull;
  const bool CurrentServer_IsFullSpec;
  const bool CurrentServer_IsPrivate;
  const bool CurrentServer_IsPrivateSpec;
  const bool CurrentServer_IsHidden;
  const bool CurrentServer_IsLobby;
  const bool CurrentServer_IsRelay;
  const bool CurrentServer_IsFavourite;
  const bool CurrentServer_IsWarmUp;
  CGameScriptChatContact* GetBuddyFromLogin(string Login);
  CGameScriptChatContact* GetContactFromLogin(string Login);
  wstring Filter_SearchText;
  bool Filter_PlayingOnline;
  const NodArray Contacts;
  const NodArray Buddies;
  const NodArray FilteredBuddies;
  const NodArray OnlineBuddies;
  const NodArray PlayingOnlineBuddies;
  const NodArray OfflineBuddies;
  const NodArray XmppBuddies;
  const NodArray XmppOnlineBuddies;
  const NodArray XmppOfflineBuddies;
  const NodArray SteamBuddies;
  const NodArray SteamOnlineBuddies;
  const NodArray SteamOfflineBuddies;
  const NodArray IncomingBuddyRequests;
  const NodArray OutgoingBuddyRequests;
  const NodArray PendingEvents;
  void AddBuddy(string Login);
  void RemoveBuddy(CGameScriptChatContact* Buddy);
  void AcceptBuddy(CGameScriptChatContact* Buddy);
  const NodArray Histories;
  CGameScriptChatHistory* History_Create();
  void History_Destroy(CGameScriptChatHistory* History);
  void History_DestroyAll();
  const NodArray PendingRequestBuddies;
  void GetContactsVCards();
  const NodArray Rooms;
  void Room_Join(string RoomName);
  void Room_Leave(CGameScriptChatRoom* Room);
  void Room_SendMessage(CGameScriptChatRoom* Room, wstring Body);
};

struct CGameScriptChatContact : public CMwNod {
  enum ESubscriptionStatus {
    None = 0,
    RequestFrom = 1,
    RequestTo = 2,
    Both = 3,
  };
  enum ESubscription {
    None = 0,
    Pending = 1,
    Accepted = 2,
  };
  enum EPresenceShow {
    Offline = 0,
    Available = 1,
    WantToChat = 2,
    DoNotDisturb = 3,
    Away = 4,
    ExtendedAway = 5,
  };
  const string BuddyId;
  const string ContactId;
  const string Login;
  const wstring Name;
  const wstring Description;
  const wstring ZonePath;
  const EPresenceShow PresenceShow;
  const wstring PresenceStatus;
  const ESubscriptionStatus SubscriptionStatus;
  const ESubscription Subscription_From;
  const ESubscription Subscription_To;
  const bool IsXmpp;
  const bool IsSteam;
  const bool IsLegacy;
  const bool IsOnline;
  const bool IsOnlineInLegacy;
  const bool IsOnlineInXmpp;
  const bool IsOnlineInSteam;
  const bool IsBuddyInManiaPlanet;
  bool IsAlly;
  const string CurrentServerLogin;
  const wstring CurrentServerName;
  const string CurrentServerJoinLink;
  const wstring CurrentServerModeName;
  const wstring CurrentServerModeStatus;
  const uint CurrentServerPlayerCount;
  const uint CurrentServerPlayerCountMax;
  const bool CurrentServer_IsFull;
  const bool CurrentServer_IsFullSpec;
  const bool CurrentServer_IsPrivate;
  const bool CurrentServer_IsPrivateSpec;
  const bool CurrentServer_IsHidden;
  const bool CurrentServer_IsLobby;
  const bool CurrentServer_IsRelay;
  const bool CurrentServer_IsFavourite;
  const bool CurrentServer_IsWarmUp;
  void NotifyInteraction();
};

struct CGameScriptChatEvent : public CMwNod {
  enum EType {
    Message = 0,
    ChatRoomMessage = 1,
    PresenceChange = 2,
    BuddyChange = 3,
    AddBuddyResult = 4,
    RemoveBuddyResult = 5,
    JoinRoomResult = 6,
    ConnectionStatusUpdate = 7,
    HistoryUpdate = 8,
    ContactListChange = 9,
  };
  enum ESubscriptionStatus {
    None = 0,
    RequestFrom = 1,
    RequestTo = 2,
    Both = 3,
  };
  enum ESubscription {
    None = 0,
    Pending = 1,
    Accepted = 2,
  };
  enum EPresenceShow {
    Offline = 0,
    Available = 1,
    WantToChat = 2,
    DoNotDisturb = 3,
    Away = 4,
    ExtendedAway = 5,
  };
  const EType Type;
  const CGameScriptChatContact* Sender;
  const string SenderResource;
  const wstring MessageBody;
  const CGameScriptChatRoom* ChatRoom;
  const wstring SenderNickname;
  const CGameScriptChatContact* Buddy;
  const bool PreviousIsOnline;
  const EPresenceShow PreviousShow;
  const wstring PreviousStatus;
  const string PreviousServerLogin;
  const wstring PreviousServerName;
  const string PreviousServerJoinLink;
  const wstring PreviousServerModeName;
  const wstring PreviousServerModeStatus;
  const uint PreviousServerPlayerCount;
  const uint PreviousServerPlayerCountMax;
  const ESubscriptionStatus PreviousSubscriptionStatus;
  const ESubscription PreviousSubscription_From;
  const ESubscription PreviousSubscription_To;
  const wstring PreviousNickname;
  const wstring PreviousDescription;
  const bool ContactList;
  const bool ContactListBuddies;
  const bool ContactListPlayingOnlineBuddies;
  const bool ContactListOnlineBuddies;
  const bool ContactListOfflineBuddies;
  const bool ContactListXmppBuddies;
  const bool ContactListXmppOnlineBuddies;
  const bool ContactListXmppOfflineBuddies;
  const bool ContactListSteamBuddies;
  const bool ContactListSteamOnlineBuddies;
  const bool ContactListSteamOfflineBuddies;
  const bool ContactListIncomingBuddyRequest;
  const bool ContactListOutgoingBuddyRequest;
  const string BuddyLogin;
  const string RoomName;
  const bool Success;
  const wstring ErrorMessage;
  const CGameScriptChatHistory* History;
};

struct CGameManialink3dMood : public CMwNod {
  CGameManialink3dMood();

  UnknownType LAmbient_LinearRgb;
  UnknownType LDir0_LinearRgb;
  float LDir0_Intens;
  UnknownType LDir0_DirTheta;
  UnknownType LDir0_DirPhi;
  UnknownType LDir1_LinearRgb;
  float LDir1_Intens;
  UnknownType LDir1_DirTheta;
  UnknownType LDir1_DirPhi;
  UnknownType LBall_LinearRgb;
  float LBall_Intens;
  float LBall_Radius;
  UnknownType CloudsRgbMinLinear;
  float CloudsRgbMinScale;
  UnknownType CloudsRgbMaxLinear;
  float CloudsRgbMaxScale;
  UnknownType FogColorSrgb;
  float SkyGradientV_Scale;
  CPlugFileImg* FidImageSkyGradientV;
  CPlugFileImg* FidImageCloudsMinMaxDayTime;
  UnknownType SelfIllumColor;
};

struct CGameManialink3dWorld : public CMwNod {
  CGameManialink3dWorld();

  CGameManialink3dStyle* Style;
};

struct CGamePlayerProfileChunk_ManiaPlanetStations : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_ManiaPlanetStations();

  bool IsFirstLaunch;
  bool HasSeenWelcomePage;
  UnknownType LatestTitleIdLoaded;
  uint StationsCount;
};

struct CGameManialink3dStyle : public CMwNod {
  CGameManialink3dStyle();

  CGameManialink3dMood* Mood;
};

struct CGameManiaplanetPlugin : public CGameManiaApp {
  enum EContext {
    MenuStartUp = 0,
    MenuManiaPlanet = 1,
    MenuManiaTitleMain = 2,
    MenuProfile = 3,
    MenuSolo = 4,
    MenuLocal = 5,
    MenuMulti = 6,
    MenuEditors = 7,
    EditorPainter = 8,
    EditorTrack = 9,
    EditorMediaTracker = 10,
    Solo = 11,
    SoloLoadScreen = 12,
    Multi = 13,
    MultiLoadScreen = 14,
    MenuCustom = 15,
    Unknown = 16,
  };
  enum EBuyTitleMode {
    OpenStore = 0,
    BuyIfNeeded = 1,
    Ask = 2,
  };
  enum EUISound {
    Alert = 0,
    ShowDialog = 1,
    HideDialog = 2,
  };
  const NodArray PendingEvents;
  const NodArray TitlesAvailable;
  const NodArray TitlesBases;
  const array<string> TitleIdsInstalled;
  const array<string> TitleIdsPayed;
  const uint CurrentAppId;
  const string CurrentServerLogin;
  const wstring CurrentServerName;
  const wstring CurrentServerModeName;
  const string CurrentServerJoinLink;
  const NodArray CurrentServerPlayers;
  const CGameCtnChallenge* CurrentMap;
  const EContext ActiveContext;
  const string ActiveContext_MenuFrame;
  const string ActiveContext_DialogFrame;
  const string ActiveContext_SystemDialogFrame;
  const bool ActiveContext_ClassicDialogDisplayed;
  const uint ActiveContext_GameWill;
  const bool ActiveContext_ManialinkBrowserDisplayed;
  bool PrivateSession;
  const CGameScriptChatManager* ChatManager;
  const CGameScriptChatManager* BuddiesManager;
  const CGamePlaygroundClientScriptAPI* Playground;
  const CGameAchievementScriptManager* AchievementsManager;
  const CGameScriptNotificationsProducer* NotificationsProducer;
  const CGameScriptNotificationsConsumer* Notifications;
  const CGameMasterServerOnlineSignalsManager* OnlineSignalsManager;
  bool ToolBarForceShow;
  const bool ToolBarIsActive;
  bool ToolBarClockVisible;
  bool ToolBarPlanetsVisible;
  bool ToolBarBrowserVisible;
  UnknownType MusicVolume;
  void HackSetCurMenuControlVisible(string ControlId, bool Visible);
  bool HackIsCurMenuControlVisible(string ControlId);
  bool RequestStartUpFreeze;
  void ClipboardSet(wstring ClipboardText);
  void QuitGameAndOpenLink(string Url);
  void ShowTitle(string TitleId, bool ShowStation);
  void EnterTitle(string TitleId);
  void ShowCurMapCard();
  const CGameDialogs* SystemDialogs;
  void Dialog_EnterGameKey();
  void Dialog_BuyTitleDialog(string TitleId, string OverrideBuyUrl, int OverrideActionAfterBuy);
  void Dialog_BuyTitleEx(string TitleId, EBuyTitleMode Mode, string OverrideBuyUrl, int OverrideActionAfterBuy);
  void Dialog_GenerateGameKeys(string TitleId, uint FeaturesLevel, uint NbToGenerate, bool AddBuddyOnRegistration);
  const bool Dialog_IsFinished;
  const bool Dialog_Success;
  const bool Dialog_Aborted;
  const bool UseAllies;
  const uint TotalTimePlay;
  bool LoadingScreenRequireKeyPressed;
  void SetLocalUserClubLink(string ClubLink);
  void SetLocalUserNickName(wstring NickName);
  void FlashWindow();
  const uint Messenger_MessagesCount;
  void PlaySound(EUISound Sound, uint SoundVariant);
  const CGameManialinkBrowser* ManialinkBrowser;
  const CGameManiaplanetPluginInterface* Interface;
  void CustomEvent(wstring Type, array<wstring>& Data);
  void SendExternalCustomEvent(wstring Type, array<wstring>& Data);
  const CGamePluginInterfacesScript* Plugins;
  void Dialog_ShowEnterGameKeyDialog();
  void Dialog_ShowBuyTitleDialog();
  void Dialog_ShowGenerateGameKeysDialog();
};

struct CGameCtnInterfaceViewer : public CMwNod {
  bool Hit;
  bool Elimination;
  uint Score;
};

struct CGameManialinkGauge : public CGameManialinkControl {
  string Style;
  void SetRatio(float NewRatio);
  void SetClan(uint NewClan);
  UnknownType Ratio;
  UnknownType GradingRatio;
  uint Clan;
  vec3 Color;
  bool DrawBackground;
  bool DrawBlockBackground;
  bool CenteredBar;
};

// File extension: 'GameCtnMediaBlockColorGrading.gbx'
struct CGameCtnMediaBlockColorGrading : public CGameCtnMediaBlock {
  CGameCtnMediaBlockColorGrading();

  CPlugFileImg* Image;
};

struct CGamePlaygroundClientScriptAPI : public CMwNod {
  const CGameCtnChallenge* Map;
  const int GameTime;
  const CGamePlayerInfo* LocalUser;
  const CGamePlaygroundUIConfig* UI;
  const CGameCtnNetServerInfo* ServerInfo;
  const bool IsSpectator;
  const bool IsSpectatorClient;
  const bool UseClans;
  const bool UseForcedClans;
  const bool IsLoadingScreen;
  void QuitServer(bool Silent);
  void QuitServerAndSetResult(bool Silent, wstring Type, array<wstring>& Data);
  const bool IsInGameMenuDisplayed;
  void JoinTeam1();
  void JoinTeam2();
  const NodArray Teams;
  void RequestSpectatorClient(bool Spectator);
  void SetSpectateTarget(string Player);
  void ShowProfile(string Player);
  bool DisablePlayingStateTracking;
};

struct CGameCtnMediaBlockScenery : public CGameCtnMediaBlock {
  CGameCtnMediaBlockScenery();

};

struct CGameControlCameraVehicleInternal : public CGameControlCamera {
};

struct CGameMgrObjectVis : public CSceneMgrVis {
  const uint cObjectVis;
};

struct CGamePlaygroundResources : public CMwNod {
  const NodArray ItemLibAll;
  const NodArray ItemLibSkins;
  const NodArray PickUpPhyLib;
  const NodArray PickUpVisLib;
  const NodArray CharLib;
  const CPlugAnimFile* CinematicLib;
  const NodArray ActionsModels;
};

struct CGameMgrObjectPhy : public CMwNod {
};

struct CGameMgrActionFxVis : public CMwNod {
  const uint cActionFxVis;
};

struct CGameEditorAsset : public CGameCtnEditor {
};

struct CGameManialinkGraph : public CGameManialinkControl {
  vec2 CoordsMin;
  vec2 CoordsMax;
  CGameManialinkGraphCurve* AddCurve();
  void RemoveCurve(CGameManialinkGraphCurve* Curve);
  NodArray Curves;
};

struct CGameManialinkGraphCurve : public CMwNod {
  array<vec2> Points;
  vec3 Color;
  void SortPoints();
  string Style;
  UnknownType Width;
};

struct CGameCtnBlockInfoMobilLink : public CMwNod {
  CGameCtnBlockInfoMobilLink();

  UnknownType SocketId;
  CGameObjectPhyModel* PhyModel;
  CGameObjectVisModel* VisModel;
};

struct CGameManiaplanetPluginInterface : public CMwNod {
  const wstring Name;
  void CustomEvent(wstring Type, array<wstring>& Data);
  const NodArray PendingEvents;
};

struct CGameManiaplanetPluginInterfaceEvent : public CMwNod {
  enum EType {
    PluginCustomEvent = 0,
  };
  const EType Type;
  const wstring EventType;
  const array<wstring> EventData;
};

// File extension: 'GameCtnMediaBlockInterface.gbx'
struct CGameCtnMediaBlockInterface : public CGameCtnMediaBlock {
  CGameCtnMediaBlockInterface();

  const bool ShowInterface;
};

// File extension: 'GameCtnMediaBlockObject.gbx'
struct CGameCtnMediaBlockObject : public CGameCtnMediaBlock {
  CGameCtnMediaBlockObject();

  const bool ShowObjects;
};

struct CGameScriptCloudManager : public CMwNod {
};

struct CGameEditorBullet : public CMwNod {
  CPlugParticleEmitterModel* ParticleEmitterModel;
  CPlugBeamEmitterModel* BeamEmitterModel;
  CPlugBeamEmitterSubModel* BaseSubModel;
  float SubModelSphereRadMax;
  float SubModelSphereThickness;
  float SubModelViscosity;
  float SubModelFriction;
  float SubModelLength;
  float SubModelLengthVar;
  float SubModelRotation;
  float SubModelRotationVar;
  float SubModelLife;
  float SubModelLifeVar;
  float SubModelParticlesCount;
  float SubModelSize;
  UnknownType SubModelSizeSlider;
  float SubModelSizeVar;
  float SubModelSizeEndScale;
  float SubModelIntensVar;
  float SubModelIntens;
  UnknownType SubModelIntensSlider;
  float SubModelWeight;
  float SubModelPersistence;
  float SubModelEmitterCoef;
  float SubModelDiscMaxZ;
  float SubModelDiscVelRad;
  float SubModelDiscVelLong;
  float SubModelDiscRadMax;
  float SubModelDiscThickness;
  uint SubModelParticlesCountSplash;
  float SubModelLengthPitchMin;
  float SubModelLengthPitchMax;
  float SubModelIntensFadeIn;
  float SubModelIntensFadeOut;
  bool SubModelUseCustomColor;
  bool SubModelCameraSpace;
  string BulletName;
  float BulletScale;
  string BulletSubModelName;
  float BulletSpeed;
  float BulletMass;
  UnknownType BulletFluidFriction;
  float BulletHitboxRadius;
  float BulletLifeTime;
  float BulletLifeTimeAfterFirstImpact;
  wstring BulletPattern;
  bool BulletExplodeOnEndLife;
  uint BulletRebounds;
  bool BulletBounceOnTechWall;
  float BulletImpactBouncingN;
  float BulletImpactBouncingT;
  wstring BulletType;
  float BulletHomingDist;
  float BulletHomingPeriod;
  float BulletHomingAngularSpeed;
  uint BulletHomingLockDuration;
  float BulletGuidedAngularSpeed;
  uint BulletGuidedMinLifeTime;
  bool BulletShowPlayerExplosion;
  bool BulletShowDebris;
  bool BulletShowPlayerLaserExplosion;
  bool BulletShowLaserDebris;
  bool BulletLaserModifyFOV;
  bool BulletModifyFOV;
  uint PatternBulletCount;
  float PatternBulletRadius;
  float PatternBulletSpinSecond;
  float PatternBulletBlendDuration;
  uint NoPatternBulletCount;
  float NoPatternBulletDispersionAngle;
  float NoPatternBulletSpeedCoef;
  float PatternBulletMinApexTime;
  bool PatternBulletApexRegroup;
  bool PatternBulletRandomRotations;
  float BulletEDRResting;
  float BulletEDRFlying;
  float BulletBlowRadius;
  float BulletBlowStrength;
  float BulletBlowVerticalScale;
  float BulletDamageRadius;
  UnknownType BulletBlowAttenuation;
  uint BulletDamage;
  UnknownType BulletDamageAttenuation;
  bool BulletExplosionOnAllPlayers;
  bool BulletIsFlare;
  float BulletFlareAttractionRadius;
  float BulletFlareExplosionRadius;
  bool BulletIsWard;
  float BulletWardRadius;
  const wstring IsLaser;
  const wstring LaserType;
  float LaserUVScale;
  float LaserUSpeed;
  float LaserVSpeed;
  uint LaserCylinderSideCount;
  bool LaserBackface;
  uint LaserDuration;
  float LaserRadius;
  float LaserRadiusAtOneMeter0;
  float LaserRadiusAtOneMeter1;
  uint LaserDamage;
  uint HelixVerticesCountPerTurn;
  float HelixTurnLength;
  float HelixOutterRadius;
  float HelixInnerRadius;
  float HelixStartAngle;
  uint HelixMaxHelixCount;
  bool HelixClockWise;
  float DoubleHelixStartAngle;
  bool DoubleHelixClockWise;
  uint BWSNbRadialSubDiv;
  uint BWSNbVerticalSubDiv;
  uint BWSNbSpheresPerMeter;
  float BWSRadius;
  float BWSStartDistance;
  float BWSStepAngle;
  float BWSEndDistance;
  float BWSSpeed;
  uint BWCNbSubDiv;
  float BWCStepSize;
  float BWCOutterRadius;
  float BWCInnerRadius;
  float BWCHalfWidth;
  float BWCTimeStartFade;
  float BWCFadeSpeed;
  uint LightningcBeam;
  float LightningDistStep;
  float LightningMaxJitterDistPerStep;
  float LightningJitterRadius;
  float LightningLenMax;
  float LightningFadeTimeScale;
  float LightningFadeTimeOffset;
  UnknownType SoundParamVolume;
  void ParamModePoint();
  void ParamModeSphereFull();
  void ParamModeSphereEmpty();
  void ParamModeDisc();
  void ParamModeCircle();
  const NodArray BulletModels;
};

// File extension: 'GameCtnMediaBlockFog.gbx'
struct CGameCtnMediaBlockFog : public CGameCtnMediaBlock {
  CGameCtnMediaBlockFog();

  void SwitchOn();
};

struct CGameEditorActionScript : public CMwNod {
  wstring EditorActionScript;
  uint ScriptCooldown;
  float ScriptReloadTime;
  uint ScriptEnergyNbBullets;
  bool ScriptAdvancedMode;
  float ScriptEffectOffset;
  bool ScriptAnimOnPlayer;
  float ScriptAnimPosX;
  float ScriptAnimPosY;
  float ScriptAnimPosZ;
  float ScriptAnimDirX;
  float ScriptAnimDirY;
  float ScriptAnimDirZ;
  bool ScriptProjByPlayer;
  float ScriptProjPosX;
  float ScriptProjPosY;
  float ScriptProjPosZ;
  float ScriptProjDirX;
  float ScriptProjDirY;
  float ScriptProjDirZ;
  bool ScriptEffectIsArea;
  bool ScriptAoeIsArea;
  float ScriptBuffDuration;
  string ScriptBuffName;
  bool ScriptAoeOnPlayer;
  float ScriptAoePosX;
  float ScriptAoePosY;
  float ScriptAoePosZ;
  string ScriptAoeName;
  float ScriptAoeDuration;
  float ScriptAoeTickTime;
  uint ScriptAoeTickValue;
  float ScriptAoeRadius;
  bool ScriptAoeOnlyAllies;
  bool ScriptAoeOnlyEnemies;
  bool ScriptAoeAffectsOwner;
  string ScriptProjName;
};

struct CGameEditorItem : public CGameEditorAsset {
  void Exit();
  void FileOpen();
  void FileSaveAs();
  void FileNew();
  void Help();
  void SwitchFullScreen();
  void EditCapsuleTrigger();
  void EditDiscTrigger();
  void EditCylinderObjectTrigger();
  void EditTimeTrigger();
  void EditMeshTrigger();
  void EditCapsuleObjectTrigger();
  void CreateAABBShape();
  void CreateSphereShape();
  void CreateCylinderShape();
  void ImportResources();
  void CreateResources();
  void TriggerValidate();
  void SwitchActionMaker();
  void SwitchParticleModel();
  void SwitchVehicleEditor();
  void SwitchMeshModeler();
  void CenterCamera();
  void PrevInput();
  void NextInput();
  void PrevLinkedAction();
  void NextLinkedAction();
  void AddEmptyMesh();
  const CGameCtnApp* Game;
  float TimeTriggerPeriod;
  const string TriggerInput;
  const string LinkedAction;
  float SpritePosX;
  float SpritePosY;
  float SpritePosZ;
  UnknownType SpriteSize;
  bool SpriteIsFree;
  float ShapeAABBWidth;
  float ShapeAABBHeight;
  float ShapeAABBDepth;
  float ShapeSphereRadius;
  float ShapeCylinderHeight;
  float ShapeCylinderRadius;
  bool PlacementParamSwitchPivotManually;
  float PlacementParamFlyStep;
  float PlacementParamFlyOffset;
  float PlacementParamGridHorizontalSize;
  float PlacementParamGridHorizontalOffset;
  float PlacementParamGridVerticalSize;
  float PlacementParamGridVerticalOffset;
  float PlacementParamCubeSize;
  float PlacementParamCubeCenterX;
  float PlacementParamCubeCenterY;
  float PlacementParamCubeCenterZ;
  bool PlacementParamYawOnly;
  bool PlacementParamNotOnObject;
  bool PlacementParamAutoRotation;
  float PlacementParamPivotSnapDistance;
  CGameItemModel* ItemModel;
};

struct CGameManialinkMiniMap : public CGameManialinkControl {
  vec3 WorldPosition;
  vec2 MapPosition;
  float MapYaw;
  UnknownType ZoomFactor;
  bool Underground;
  void Fog_SetAll(float Value);
  void Fog_ClearDisk(vec3 WorldCenter, float Radius, float FadeSize);
};

struct CGameMgrGatePhy : public CSceneMgrPhy {
};

struct CGameMgrGateVis : public CSceneMgrVis {
  uint ArmorAnimTime;
  float ArmorAnimExp;
};

struct CGameEditorManialink : public CGameEditorBase {
  CGameEditorManialink();

  void GenerateMetadataTree();
  void ButExit();
  void ButAddQuad();
  void ButAddFrame();
  void ButAddFrameModel();
  void ButAddFrameInstance();
  void ButAddFormat();
  void ButAddLabel();
  void ButAddAudio();
  void ButAddEntry();
  void ButAddTextEdit();
  void ButAddFileEntry();
  void ButAddVideo();
  void ButAddGauge();
  void ButAddGraph();
  void ButDeleteTag();
  void ButLockControl();
  void ButUnlockControl();
  void ButIndent();
  void ButHelp();
  void ButAdvancedOptions();
  void ButUndo();
  void ButRedo();
  void ButToggleStyles();
  void ButTogglePreview();
  void ButReloadResources();
  void ButQuadImage();
  void ButQuadImageFocus();
  void ButQuadStyle();
  void ButTextStyle();
  void ButTextTextFont();
  void ButGaugeStyle();
  void ButMediaData();
  void OnTextFontChoosen();
  void OnMediaChoosen();
  void OnImageChoosen();
  void ButQuadColor();
  void ButTextColorColor();
  void ButBgColorColor();
  void ButColorHelperOk();
  void ButFocusAreaColor1Color();
  void ButFocusAreaColor2Color();
  void ButGaugeColorColor();
  void ButColorHelperCancel();
  wstring Params;
  wstring PosnX;
  wstring PosnY;
  wstring PosnZ;
  wstring Scale;
  wstring Rot;
  wstring Id;
  wstring Class;
  bool ButtonHidden;
  wstring SizenWidth;
  wstring SizenHeight;
  wstring Halign;
  wstring Valign;
  wstring FrameModelId;
  wstring ModelId;
  wstring Image;
  wstring ImageFocus;
  wstring Style;
  wstring Substyle;
  wstring Colorize;
  wstring ModulateColor;
  wstring KeepRatio;
  bool ButtonStyleSelected;
  bool ButtonAutoscale;
  bool ButtonAutoscaleFixedWidth;
  wstring StyleText;
  wstring TextColor;
  wstring TextSize;
  wstring TextFont;
  wstring FocusAreaColor1;
  wstring FocusAreaColor2;
  wstring Url;
  wstring Manialink;
  wstring Text;
  wstring TextId;
  wstring Action;
  wstring TextPrefix;
  wstring MaxLine;
  wstring Opacity;
  wstring LineSpacing;
  bool ButtonTextEmboss;
  bool ButtonTranslate;
  wstring Default;
  wstring Name;
  bool ButtonSelectText;
  wstring TextEditDefault;
  wstring TextEditMaxLine;
  bool ButtonShowLineNumbers;
  wstring TextFormat;
  wstring Data;
  wstring Volume;
  bool ButtonLooping;
  bool ButtonPlay;
  bool ButtonMusic;
  bool ButtonScriptEvents;
  wstring BgColor;
  bool ButtonAutoNewLine;
  wstring Folder;
  wstring Type;
  wstring Style3d;
  wstring Grading;
  wstring Ratio;
  wstring StyleGauge;
  wstring GaugeColor;
  wstring Clan;
  bool ButtonCentered;
  bool ButtonDrawBg;
  bool ButtonDrawBlockBg;
  void ButHalignNextInput();
  void ButHalignPrevInput();
  void ButValignNextInput();
  void ButValignPrevInput();
  void ButKeepRatioNextInput();
  void ButKeepRatioPrevInput();
  void ButClanNextInput();
  void ButClanPrevInput();
  void ButTypeNextInput();
  void ButTypePrevInput();
  void ButXmlTypeNextInput();
  void ButXmlTypePrevInput();
  void ButTextFormatNextInput();
  void ButTextFormatPrevInput();
  void ButActionNext();
  void ButActionPrev();
  void ButUIBaseChoose();
  void ButUIBaseUp();
  void ButUIBaseDown();
  void ButUIBaseDelete();
  void OnUIBaseChoosen();
  void ToggleScriptEditorSize();
  bool ButtonGrid;
  bool ButtonSnap;
  wstring Step;
  wstring RotationStep;
  UnknownType ColorHelperOpacity;
  const CControlFrame* FrameLayoutEditor;
};

struct CGameManiaTitleEditionScriptAPI : public CMwNod {
  enum EDrive {
    TitleReadable = 0,
    Title = 1,
    User = 2,
  };
  const CGameManiaTitle* TitleMaker;
  const CGamePackCreatorScript* PackCreator;
  const string EditedTitleId;
  const CGamePackCreator_TitleInfoScript* EditedTitleInfo;
  void File_ImportFromUser(wstring FileName);
  void File_Move(wstring OrigName, wstring DestNameOrFolder, bool KeepOriginalCopy);
  bool File_Exists(wstring FileName, EDrive InDrive);
  void File_Delete(wstring Name);
  void File_WriteText(wstring FileName, wstring Text);
  wstring File_ReadText(wstring FileName);
  void Dialog_ImportFiles();
  const bool Dialog_IsFinished;
  const bool Dialog_Success;
  const bool Dialog_Aborted;
  void OpenTitleFolderInExplorer();
  void ReloadTitleDesc();
  void SaveTitleDesc();
  void SetTitleCampaign(uint CampaignNum, string ScoreContext, wstring MapsFolderNameOrPlayListName, bool OfficialRecordEnabled);
};

struct CGameEditorBase : public CMwNod {
};

struct CGameEditorPropertyList : public CMwNod {
};

struct CGameEditorFileToolBar : public CMwNod {
};

struct CGameManiaApp : public CMwNod {
  enum ELinkType {
    ExternalBrowser = 0,
    ManialinkBrowser = 1,
  };
  enum EAnimManagerEasing {
    Linear = 0,
    QuadIn = 1,
    QuadOut = 2,
    QuadInOut = 3,
    CubicIn = 4,
    CubicOut = 5,
    CubicInOut = 6,
    QuartIn = 7,
    QuartOut = 8,
    QuartInOut = 9,
    QuintIn = 10,
    QuintOut = 11,
    QuintInOut = 12,
    SineIn = 13,
    SineOut = 14,
    SineInOut = 15,
    ExpIn = 16,
    ExpOut = 17,
    ExpInOut = 18,
    CircIn = 19,
    CircOut = 20,
    CircInOut = 21,
    BackIn = 22,
    BackOut = 23,
    BackInOut = 24,
    ElasticIn = 25,
    ElasticOut = 26,
    ElasticInOut = 27,
    ElasticIn2 = 28,
    ElasticOut2 = 29,
    ElasticInOut2 = 30,
    BounceIn = 31,
    BounceOut = 32,
    BounceInOut = 33,
  };
  enum ESystemPlatform {
    None = 0,
    Steam = 1,
    UPlay = 2,
    PS4 = 3,
    XBoxOne = 4,
  };
  enum ESystemSkuIdentifier {
    Unknown = 0,
    EU = 1,
    US = 2,
    JP = 3,
  };
  const string ManiaAppUrl;
  const string ManiaAppBaseUrl;
  const int Now;
  const bool IsVisible;
  const uint CurrentDate;
  const string CurrentLocalDateText;
  const wstring CurrentTimezone;
  uint LayersDefaultManialinkVersion;
  const CGamePlayerInfo* LocalUser;
  const CGameManiaTitle* LoadedTitle;
  const ESystemPlatform SystemPlatform;
  const ESystemSkuIdentifier SystemSkuIdentifier;
  bool EnableMenuNavigationInputs;
  const float MouseX;
  const float MouseY;
  const NodArray UILayers;
  CGameUILayer* UILayerCreate();
  void UILayerDestroy(CGameUILayer* Layer);
  void UILayerDestroyAll();
  void LayerCustomEvent(CGameUILayer* Layer, wstring Type, array<wstring>& Data);
  void OpenLink(string Url, ELinkType LinkType);
  bool OpenFileInExplorer(wstring FileName);
  void Dialog_Message(wstring Message);
  const CXmlScriptManager* Xml;
  const CNetScriptHttpManager* Http;
  const CGameVideoScriptManager* Video;
  const CAudioScriptManager* Audio;
  const CInputScriptManager* Input;
  const CGameDataFileManagerScript* DataFileMgr;
  const CGameScoreAndLeaderBoardManagerScript* ScoreMgr;
  const CGameUserPrivilegesManagerScript* PrivilegeMgr;
  const CGameMasterServerRichPresenceManagerScript* PresenceMgr;
  const CGameUserManagerScript* UserMgr;
  const CGameManiaPlanetScriptAPI* ManiaPlanet;
  wstring Dbg_DumpDeclareForVariables(CMwNod* Nod, bool StatsOnly);
};

struct CGameManiaAppScriptEvent : public CMwNod {
  enum EType {
    LayerCustomEvent = 0,
    KeyPress = 1,
    ExternalCustomEvent = 2,
    MenuNavigation = 3,
  };
  enum EMenuNavAction {
    Up = 0,
    Right = 1,
    Left = 2,
    Down = 3,
    Select = 4,
    Cancel = 5,
    PageUp = 6,
    PageDown = 7,
    AppMenu = 8,
    Action1 = 9,
    Action2 = 10,
  };
  const EType Type;
  const CGameUILayer* CustomEventLayer;
  const wstring CustomEventType;
  const array<wstring> CustomEventData;
  const wstring ExternalEventType;
  const array<wstring> ExternalEventData;
  const EMenuNavAction MenuNavAction;
  const bool IsActionAutoRepeat;
  const uint KeyCode;
  const string KeyName;
};

struct CGameManiaAppPlaygroundCommon : public CGameManiaApp {
  const NodArray PendingEvents;
  const CGamePlaygroundClientScriptAPI* Playground;
  const CGameCtnChallenge* Map;
  CGamePlaygroundUIConfig* UI;
  CGamePlaygroundUIConfig* ClientUI;
};

struct CGameManialinkCamera : public CGameManialinkControl {
};

struct CGameReplayObjectVisData : public CMwNod {
  CGameReplayObjectVisData();

};

struct CGameManiaAppTitle : public CGameManiaApp {
  const NodArray PendingEvents;
  void Menu_Quit();
  void Menu_Home();
  void Menu_Solo();
  void Menu_Local();
  void Menu_Internet();
  void Menu_Editor();
  void Menu_Profile();
  void PlayMap(wstring Map);
  bool LoadingScreenRequireKeyPressed;
  bool DontScaleMainMenuForHMD;
  const CGameManiaTitleControlScriptAPI* TitleFlow;
  const CGameManiaTitleControlScriptAPI* TitleControl;
  const CGameManiaTitleEditionScriptAPI* TitleEdition;
  const CGameScriptNotificationsConsumer* Notifications;
  const wstring ExternalRequest_Type;
  const array<wstring> ExternalRequest_Data;
  void ExternalRequest_Clear();
  const CGameAchievementScriptManager* AchievementsManager;
  CGameManagerBadgeScript* BadgeManager;
  CGameMatchSettingsManagerScript* MatchSettingsManager;
  void Authentication_GetToken(UnknownType UserId, string AppLogin);
  const bool Authentication_GetTokenResponseReceived;
  const uint Authentication_ErrorCode;
  const string Authentication_Token;
};

// File extension: 'GameCtnMediaBlockDecal2d.gbx'
struct CGameCtnMediaBlockDecal2d : public CGameCtnMediaBlock {
  CGameCtnMediaBlockDecal2d();

};

struct CGameCtnMediaBlockEditorDecal2d : public CGameCtnMediaBlockEditor {
  CGameCtnMediaBlockEditorDecal2d();

  void ChooseImage();
  const wstring ImgDiffuseA;
  UnknownType Depth;
  UnknownType Opacity;
  bool FlipU;
  bool ForcePreview;
  CPlugDecalModel* DecalModel;
  CControlFrame* Frame;
};

struct CGameManiaAppBrowser : public CGameManiaApp {
  const NodArray PendingEvents;
  void BrowserBack();
  void BrowserQuit();
  void BrowserHome();
  void BrowserReload();
  wstring BrowserFocusedFrameId;
};

struct CGameManiaTitleControlScriptAPI : public CMwNod {
  enum ESplitScreenLayout {
    Horizontal = 0,
    Vertical = 1,
    Four = 2,
  };
  enum EResult {
    Success = 0,
    Error_Internal = 1,
    Error_DataMgr = 2,
    Error_Net_ServerNotFound = 3,
    Error_Net_ServerUnreachable = 4,
    Error_Net_Disconnected = 5,
    Error_Net_WrongPassword = 6,
    Error_Network_OnlineExpired = 7,
    Error_Network_ServerFull = 8,
    Error_Abort = 9,
  };
  enum EEditorType {
    ActionMaker = 0,
    ChallengeEditor = 1,
    ItemEditor = 2,
    InterfaceDesigner = 3,
    MeshModeler = 4,
    ModuleStudio = 5,
    PixelArt = 6,
    EditorEditor = 7,
    VehicleAssembler = 8,
  };
  void Dbg_GetServerInfoObj();
  void Dbg_Join_GetServerInfo_Result();
  void Dbg_PlayMatchSettingsObject();
  void Dbg_PlaySplitScreenObj();
  void Dbg_PlayMultiOnSameScreenObj();
  const bool IsReady;
  const EResult LatestResult;
  const wstring CustomResultType;
  const array<wstring> CustomResultData;
  void PlayMap(wstring Map, wstring Mode, string SettingsXml);
  void PlayCampaign(CGameCtnCampaign* Campaign, CGameCtnChallengeInfo* MapInfo, wstring Mode, string SettingsXml);
  void PlayMapList(array<wstring>& MapList, wstring Mode, string SettingsXml);
  void PlayPlaylist(wstring Playlist, wstring OverrideMode, string OverrideSettingsXml);
  void PlayMatchSettingsFile(wstring MatchSettingsFilePath, wstring OverrideMode, string OverrideSettingsXml);
  void PlayMatchSettingsObject(CGameMatchSettingsScript* MatchSettings, wstring OverrideMode, string OverrideSettingsXml);
  void PlaySplitScreen(ESplitScreenLayout LayoutType, array<wstring>& MapList, wstring Mode, string SettingsXml);
  void PlayMultiOnSameScreen(ESplitScreenLayout LayoutType, array<wstring>& MapList, wstring Mode, string SettingsXml);
  void PlaySplitScreenObj(ESplitScreenLayout LayoutType, CGameMatchSettingsScript* MatchSettings);
  void PlayMultiOnSameScreenObj(ESplitScreenLayout LayoutType, CGameMatchSettingsScript* MatchSettings);
  void ViewReplay(wstring Replay);
  void OpenEditor(wstring EditorName, string MainPluginSettings);
  void OpenEditor2(EEditorType EditorType);
  void EditSkins();
  void EditReplay(array<wstring>& ReplayList);
  void EditGhosts(wstring Map);
  void EditAsset(wstring EditorName, string MainPluginSettingsXml, wstring RelativeFileName);
  void EditMap(wstring Map, wstring EditorPluginScript, string EditorPluginArgument);
  void EditNewMap1(string Environment, string Decoration, wstring ModNameOrUrl, wstring PlayerModel, wstring MapType, wstring EditorPluginScript, string EditorPluginArgument);
  void EditNewMap2(string Environment, string Decoration, wstring ModNameOrUrl, wstring PlayerModel, wstring MapType, bool UseSimpleEditor, wstring EditorPluginScript, string EditorPluginArgument);
  void EditBadges();
  void EditBadgesOld(UnknownType UserId DEPRECATED);
  const bool CanPublishFiles;
  void PublishFile(wstring FileName);
  const NodArray LocalServers;
  const NodArray LocalServers_CurrentTitle;
  void DiscoverLocalServers();
  void CreateServer1(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, array<wstring>& MapList, wstring Mode, string ScriptsSettingsXml);
  void CreateServer2(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, wstring MatchSettingsFileName);
  void CreateServer2Obj(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, CGameMatchSettingsScript* MatchSettings, string PasswordSpectators);
  void CreateServer3(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, bool LocalOnly, array<wstring>& MapList, wstring Mode, string ScriptsSettingsXml);
  void CreateServer4(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, bool LocalOnly, wstring MatchSettingsFileName);
  void CreateServer4Obj(wstring ServerName, wstring ServerComment, uint MaxPlayerCount, string Password, string PasswordSpectators, CGameMatchSettingsScript* MatchSettings, bool LocalOnly);
  void GetServerInfo(string ServerLogin);
  void GetServerInfoObj(CGameCtnNetServerInfo* LocalServer);
  void GetServerInfo_Abort();
  const CGameCtnNetServerInfo* GetServerInfo_Result;
  void Join_GetServerInfo_Result(bool AsSpectator, string Password);
  void JoinServer(string ServerLogin, bool AsSpectator, string Password);
  void JoinServer_Abort();
  const CGameCtnNetServerInfo* JoinServer_ServerInfo;
  void JoinServer_GetInfo(string ServerLogin);
  void JoinServer_GetInfoPwd(string ServerLogin, string ServerPassword);
  void JoinServer_GetInfoObj(CGameCtnNetServerInfo* Server);
  void JoinServer_GetInfoObjPwd(CGameCtnNetServerInfo* Server, string ServerPassword);
  void JoinServer_Join(bool AsSpectator);
  void Quit();
};

struct CGameManiaAppTitleLayerScriptHandler : public CGameManialinkScriptHandler {
  const CGameManiaAppTitle* ParentApp;
  const CGameManiaTitleControlScriptAPI* TitleControl;
  const CGameManiaTitleControlScriptAPI* TitleFlow;
};

struct CGameEditorPluginMapLayerScriptHandler : public CGameManialinkScriptHandler {
  const CGameEditorPluginMap* Editor;
};

struct CGameScriptNotificationsConsumerNotification : public CMwNod {
  enum ENotificationPriority {
    Memo = 0,
    Notice = 1,
    Alarm = 2,
  };
  const wstring Title;
  const wstring Description;
  const wstring ImageUrl;
  const ENotificationPriority Priority;
  const bool HasBeenRead;
  const bool HasBeenActivated;
  void SetRead();
  void SetActivated();
};

struct CGameScriptNotificationsProducer : public CMwNod {
  enum ENotificationLifeSpan {
    Game = 0,
    Session = 1,
    NeverEnding = 2,
  };
  enum ENotificationPriority {
    Memo = 0,
    Notice = 1,
    Alarm = 2,
  };
  const NodArray Events;
  void SendNotification(array<wstring>& CallbackParams, wstring Title, wstring Description, wstring ImageUrl, ENotificationLifeSpan LifeSpan, ENotificationPriority Priority);
};

struct CGameScriptNotificationsConsumer : public CMwNod {
  enum EFilterPriority {
    All = 0,
    MoreThanMemo = 1,
    MoreThanNotice = 2,
  };
  const NodArray Events;
  const NodArray Notifications;
  const NodArray FilteredNotifications;
  EFilterPriority Filter_Priority;
};

struct CGameScriptNotificationsProducerEvent : public CMwNod {
  enum EType {
    NotificationHasBeenActivated = 0,
  };
  const EType Type;
};

struct CGameScriptNotificationsConsumerEvent : public CMwNod {
  enum EType {
    NewNotification = 0,
    NotificationChanged = 1,
  };
  const EType Type;
  const CGameScriptNotificationsConsumerNotification* Notification;
};

struct CGameManialinkTextEdit : public CGameManialinkControl {
  enum EControlScriptEditorTextFormat {
    Basic = 0,
    Script = 1,
    Password = 2,
    Newpassword = 3,
  };
  wstring Value;
  void StartEdition();
  int MaxLine;
  bool AutoNewLine;
  bool ShowLineNumbers;
  float LineSpacing;
  const uint ValueLineCount;
  float Opacity;
  vec3 TextColor;
  float TextSizeReal;
  uint TextSize;
  EControlScriptEditorTextFormat TextFormat;
};

struct CGameUserFileList : public CMwNod {
  CGameUserFileList();

};

struct CGameManialinkStylesheet : public CMwNod {
  CGameManialinkStylesheet();

};

struct CGameMasterServerOnlineSignalsManager : public CMwNod {
  const NodArray UsersOnlineSignals;
  CGameMasterServerUserOnlineSignals* GetUserOnlineSignals(UnknownType UserId);
};

struct CGameMasterServerOnlineSignal : public CMwNod {
  const uint OnlineSignalId;
  const string SenderLogin;
  const string SenderDisplayName;
  const uint TimeStamp;
};

struct CGameMasterServerOnlineSignal_RecordBeaten : public CGameMasterServerOnlineSignal {
  const string BeatenLogin;
  const wstring BeatenDisplayName;
  const string Context;
  const string ChallengeUid;
  const wstring ChallengeName;
  const uint RecordScore;
  const uint RecordScoreBeaten;
};

struct CGameManiaAppMinimal : public CGameManiaApp {
  const NodArray PendingEvents;
};

struct CGameVideoScriptManager : public CMwNod {
  CGameVideoScriptVideo* CreateVideo(string Url, bool IsLooping, bool AutoProcessing);
  void DestroyVideo(CGameVideoScriptVideo* Video);
  const NodArray Videos;
};

struct CGameGhostScript : public CMwNod {
  const UnknownType Id;
  const CTmRaceResultNod* Result;
  wstring Nickname;
};

struct CTmRaceResultNod : public CMwNod {
  enum ETmRaceResultCriteria {
    Time = 0,
    Stunts = 1,
    NbRespawns = 2,
    CheckpointsProgress = 3,
    None = 4,
  };
  int Time;
  int Score;
  int StuntsScore;
  int NbRespawns;
  array<int> Checkpoints;
  int Compare(CTmRaceResultNod* Other, ETmRaceResultCriteria Criteria);
};

struct CGameEditorModule : public CGameCtnEditor {
  enum EModuleType {
    Undefined = 0,
    Hud = 1,
    Inventory = 2,
    Store = 3,
    ScoresTable = 4,
    Equipment = 5,
    MenuBase = 6,
    MenuPage = 7,
  };
  void Exit();
  void FileNew();
  void FileOpen();
  void FileSave();
  void FileSaveAs();
  void SwitchToPreview();
  void SwitchFromPreview();
  void AdvancedParameters();
  void CustomMode();
  void ActionIsPowerup();
  void SwitchInterfaceDesigner();
  const CGameCtnApp* Game;
  void EditHudModule_OnBack();
  void EditSubpart_OnBack();
  void EditScoresTableColumn_OnNextTextHalign();
  void EditScoresTableColumn_OnPrevTextHalign();
  void EditMenuLadderRankings_OnNextMode();
  void EditMenuLadderRankings_OnPrevMode();
  void EditInventoryCategory_LoadIconUrl();
  float EditHudModulePosX;
  float EditHudModulePosY;
  float EditHudModuleZIndex;
  float EditHudModuleScale;
  string EditActionName;
  string EditActionDesc;
  uint EditActionMaxLevel;
  uint EditActionPrice;
  uint EditActionPrice1;
  uint EditActionPrice2;
  uint EditActionPrice3;
  uint EditActionPrice4;
  uint EditActionPrice5;
  string EditItemName;
  string EditItemDesc;
  uint EditItemPrice;
  string EditCategoryName;
  string EditCategoryDesc;
  wstring EditCategoryIconUrl;
  string EditColumnName;
  string EditColumnId;
  string EditColumnDefaultValue;
  float EditColumnWidth;
  string EditColumnTextStyle;
  float EditColumnTextSize;
  string EditPageName;
  array<string> EditedPageButtonsValues;
  void NewModule(EModuleType ModuleType);
  void OpenModule(wstring Url);
  void Save();
  void SaveAs(wstring Url);
  void SaveCopyAs(wstring Url);
  void ForceExit();
  const CGameModuleMenuModel* EditedMenu;
  const CGameModuleMenuPageModel* EditedMenuPage;
  const NodArray PendingEvents;
};

struct CGameMgrItem : public CMwNod {
};

struct CGameHighScoreList : public CMwNod {
  const NodArray HighScores;
  const bool IsReady;
  const bool ErrorOccured;
};

struct CGameAchievementScriptManager : public CMwNod {
  const NodArray PendingEvents;
  const NodArray Achievements;
  const NodArray Stats;
  const NodArray AchievementDescriptions;
  const NodArray StatDescriptions;
  void SendEvent(UnknownType UserId, string Mnemo, array<int>& Params);
  CWebServicesTaskResult* MasterServer_UplayCompleteAction(UnknownType UserId, string ActionId);
  CWebServicesTaskResult* MasterServer_UplayCompleteActions(UnknownType UserId, array<wstring>& ActionIds);
  CGameAchievementScriptUplayAction* MasterServer_GetUplayAction(UnknownType UserId, string ActionId);
  bool MasterServer_IsUplayActionCompleted(UnknownType UserId, string ActionId);
  CWebServicesTaskResult* MasterServer_UplayPurchaseReward(UnknownType UserId, string RewardId);
  bool MasterServer_IsUplayRewardPurchased(UnknownType UserId, string RewardId);
  const NodArray MasterServer_MSTaskResults;
  void MasterServer_ReleaseMSTaskResult(UnknownType TaskId);
  const NodArray MasterServer_UplayActions;
};

struct CGameAchievementScriptEvent : public CMwNod {
  enum EType {
    NewAchievement = 0,
  };
  const EType Type;
  const CGameAchievementScriptAchievement* Achievement;
};

struct CGameAchievementScriptAchievement : public CMwNod {
  const UnknownType UserId;
  const CGameAchievementScriptAchievementDesc* AchievementDesc;
};

struct CGameAchievementScriptStat : public CMwNod {
  const UnknownType UserId;
  const CGameAchievementScriptStatDesc* StatDesc;
  const uint Value;
};

struct CGamePlaygroundModuleClientInventory : public CGamePlaygroundModuleClient {
  const CGameUILayer* InventoryLayer;
};

struct CGamePlaygroundModuleClientScoresTable : public CGamePlaygroundModuleClient {
};

struct CGamePlaygroundModuleManagerClient : public CMwNod {
};

struct CGameManiaAppPlaygroundScriptEvent : public CGameManiaAppScriptEvent {
  enum Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    PlaygroundScriptEvent = 4,
  };
  const wstring PlaygroundScriptEventType;
  const array<wstring> PlaygroundScriptEventData;
};

struct CGameBadgeScript : public CMwNod {
  vec3 PrimaryColor;
  wstring SkinName;
  wstring StickerSlot_Get(string Slot);
  void StickerSlot_Set(string Slot, wstring Sticker);
  void StickerSlot_Clear();
  array<wstring> Layers;
};

struct CGameUserProfile : public CMwNod {
  CGameUserProfile();

  ECamName CamName;
};

struct CGameUIAnimManager : public CMwNod {
};

// File extension: 'CtrlCamTmRace3.gbx'
struct CGameControlCameraTrackManiaRace3 : public CGameControlCameraTarget {
  CGameControlCameraTrackManiaRace3();

  CPlugVehicleCameraRace3Model* Model;
};

// File extension: 'CtrlCamTmRace2.gbx'
struct CGameControlCameraTrackManiaRace2 : public CGameControlCameraTarget {
  CGameControlCameraTrackManiaRace2();

  const CPlugVehicleCameraRace2Model* Model;
};

struct CGameEditorBadge : public CGameEditorBase {
  const CGameEditorBadgeScript* ScriptAPI;
  UnknownType DisplayTextureSize_Log2;
};

struct CGameEditorBadgeScript : public CGameManiaAppMinimal {
  const CGameEditorBadge* Game;
  void Leave();
  CGameBadgeScript* DisplayCurrentBadge;
  vec2 DisplayPosN;
  vec2 DisplaySize;
  float DisplayFoV;
  UnknownType CameraTransitionDuration;
  UnknownType MeshRotation_MaxSpeed;
  UnknownType MeshRotation_Acceleration;
  UnknownType DisplayCurrentMeshId;
  const UnknownType MeshIds;
  void MeshId_Next();
  void MeshId_Previous();
  const NodArray Badges;
  CGameBadgeScript* BadgeCreate();
  void BadgeDestroy(CGameBadgeScript* Badge);
  void BadgeCopy(CGameBadgeScript* Source, CGameBadgeScript* Destination);
  void BadgeReadFromProfile(CGameBadgeScript* Badge, UnknownType UserId);
  void BadgeWriteToProfile(CGameBadgeScript* Badge, UnknownType UserId);
};

struct CGamePlaygroundModuleClientStore : public CGamePlaygroundModuleClient {
  const CGameUILayer* StoreLayer;
};

struct CGamePlaygroundModuleConfig : public CMwNod {
};

struct CGameMasterServerUserInfo : public CNetMasterServerUserInfo {
  const bool NeedToChangeZone;
  const uint ZoneLevelCount;
  wstring GetZone(uint ZoneLevel);
  void SetSubscriptionZone(wstring Zone);
  const uint MultiInternetPlayTimeLeft;
};

// File extension: 'StickerSlots.Gbx'
struct CGameBadgeStickerSlots : public CMwNod {
  CGameBadgeStickerSlots();

  const uint MeshCount;
};

struct CGamePlaygroundModuleClient : public CGameManiaAppPlaygroundCommon {
};

struct CGameManiaAppPlayground : public CGameManiaAppPlaygroundCommon {
};

struct CGameVideoScriptVideo : public CMwNod {
  enum ETextureFilter {
    Default = 0,
    Point = 1,
  };
  const CPlugBitmap* Image;
  bool IsLooping;
  const bool DownloadInProgress;
  const float PlayLength;
  void BeginProcessing();
  void EndProcessing();
  const bool IsProcessing;
  bool AutoProcessing;
  void Play();
  void Pause();
  void Stop();
  const bool IsPlaying;
  float PlayCursor;
  ETextureFilter TextureFilter;
};

struct CGameUserScript : public CMwNod {
  const string SystemName;
  const wstring DisplayName;
  const vec3 Color;
  const bool PersistentIsReady;
  void PersistentSave();
  void SavePersistent();
  const CGameUserProfileWrapper* Config;
};

struct CGameUserManagerScript : public CMwNod {
  const NodArray TaskResults;
  void TaskResult_Release(UnknownType TaskId);
  void RequestMainUserChange();
  const NodArray Users;
  const CInputScriptPad* MainUserPad;
  const bool MainUserLogged;
  const CGameUserScript* MainUser;
  const bool Intro;
  bool CanSkipIntro;
  void SetSkipIntro();
  void DevSetSkipIntro();
  const bool MainUser_CanUseVoiceChat;
  bool VoiceChat_MuteAll;
  CWebServicesTaskResult_StringIntList* GetGroups(UnknownType UserId);
  void ShowProfile(UnknownType UserId, string ProfileLogin);
};

struct CWebServicesTaskResult_BuddiesChallengeRecordsComparison : public CWebServicesTaskResult {
  const string Login;
  const NodArray BuddiesComparison;
  void SortByPlayerCount();
  void SortByOpponentLogin();
  void SortByOpponentCount();
  void SortByOpponentDate();
  void SortByOpponentDisplayName();
};

struct CGameCtnMasterServerTask_GetChallengeRecordsComparisonSummaries : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_BuddyChallengeRecordsComparison : public CWebServicesTaskResult {
  const string Login;
  const string BuddyLogin;
  const NodArray PlayerBestRecordsComparison;
  const NodArray BuddyBestRecordsComparison;
  void SortByMapName();
  void SortByRecordTime();
  void SortByRecordTimeDiff();
  void SortByRecordDate();
};

struct CGameCtnMasterServerTask_ChallengeRecords_GetBuddyRecordComparison : public CNetMasterServerRequestTask {
};

struct CGameHighScoreComparison : public CMwNod {
  const CGameCtnChallengeInfo* MapInfo;
  const string Login;
  const uint RecordScore;
  const uint RecordTime;
  const uint RecordRespawnCount;
  const uint RecordDate;
  const string RecordDateString;
  const uint RecordElapsedTime;
  const uint RecordCount;
  const string OpponentLogin;
  const wstring OpponentDisplayName;
  const string OpponentRecordUrl;
  const uint OpponentRecordScore;
  const uint OpponentRecordTime;
  const uint OpponentRecordRespawnCount;
  const uint OpponentRecordDate;
  const string OpponentRecordDateString;
  const uint OpponentRecordElapsedTime;
  const uint OpponentRecordCount;
};

struct CGameHighScoreComparisonSummary : public CMwNod {
  const string Login;
  const uint BestRecordCount;
  const uint BestRecordLastDate;
  const string BestRecordLastDateString;
  const uint BestRecordElapsedTime;
  const string OpponentLogin;
  const wstring OpponentDisplayName;
  const uint OpponentBestRecordCount;
  const uint OpponentBestRecordLastDate;
  const string OpponentBestRecordLastDateString;
  const uint OpponentBestRecordElapsedTime;
};

struct CGameModuleMenuBase : public CGameManiaAppTitle {
  CGameModuleMenuPage* GetFirstPage(wstring PageId);
  void Menu_Goto(wstring PageId);
  void Menu_Back();
  void Menu_Previous();
  void Menu_Quit();
};

struct CGameModuleMenuBrowser : public CGameModuleMenuComponent {
  enum EFileType {
    Maps = 0,
    Skins = 1,
    Items = 2,
    Blocks = 3,
    Scripts = 4,
    Images = 5,
    Manialinks = 6,
    Packs = 7,
    Actions = 8,
    Modules = 9,
    Meshes = 10,
    Replays = 11,
  };
  enum EFileAction {
    Select = 0,
    Save = 1,
    MultiSelect = 2,
  };
  const bool HasFinished;
  const array<wstring> Selection;
  void SetFileType(EFileType FileType);
  void SetFileAction(EFileAction FileAction);
};

struct CGameHapticDevice : public CMwNod {
};

struct CGamePluginInterfacesScript : public CMwNod {
  CGameManiaplanetPluginInterface* GetInterface(wstring Name);
  const NodArray Interfaces;
};

struct CGameModuleMenuComponent : public CMwNod {
  const CGameUILayer* ComponentLayer;
  void Hide();
  void Show();
};

struct CGameScoreAndLeaderBoardManager : public CMwNod {
};

struct CGameCampaignScoreManager : public CMwNod {
};

struct CGameCampaignScoreManager_MapRecord : public CGameCampaignScoreManager {
};

struct CGameCampaignScoreManager_MultiAsyncLevel : public CGameCampaignScoreManager {
};

struct CGameScoreComputer_MultiAsyncLevel : public CMwNod {
  CGameScoreComputer_MultiAsyncLevel();

};

struct CGameMultiplayerScoreManager : public CMwNod {
};

struct CGameGlobalScoreManager : public CMwNod {
};

struct CGameLeaderBoard : public CMwNod {
};

struct CGameNaturalLeaderBoard : public CGameLeaderBoard {
};

struct CGameRealLeaderBoard : public CGameLeaderBoard {
};

struct CGameCampaignLeaderBoard : public CGameNaturalLeaderBoard {
};

struct CGameMapLeaderBoard : public CGameNaturalLeaderBoard {
};

struct CGameMultiplayerLeaderBoard : public CGameRealLeaderBoard {
};

struct CGameGlobalLeaderBoard : public CGameRealLeaderBoard {
};

struct CGameScoreTask_UpdateData : public CWebServicesTaskSequence {
};

struct CGameScoreTask_UpdateMultiAsyncLevelComputer : public CGameScoreTask_UpdateData {
};

struct CGameScoreTask_LoadPlayerScores : public CWebServicesTaskSequence {
};

struct CGameScoreTask_SynchronizePlayerScore : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_MapBestRecords : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetCampaignMapRecords : public CNetMasterServerRequestTask {
};

struct CGameEditorPluginModuleScriptEvent : public CGameManiaAppScriptEvent {
  enum Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    Exit = 4,
    FileNew = 5,
    FileOpen = 6,
    FileSave = 7,
    FileSaveAs = 8,
  };
  const Type Type;
  void Eat();
};

struct CWebServicesTaskResult_PlayerMapRecords : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetCampaignPlayerRecords : public CNetMasterServerRequestTask {
};

struct CGameModuleMenuLadderRankings : public CGameModuleMenuComponent {
};

struct CGameScriptHandlerPlaygroundModuleStore : public CGameManialinkScriptHandler {
  const uint CurrentMoney;
  const NodArray StoreContent;
  void SetCategory(uint CategoryIndex);
  void SelectItem(uint ItemIndex);
  void BuySelectedItem();
  void ClearItemSelection();
  void Quit();
  const array<wstring> BlockedItemsUrls;
};

struct CGameModuleMenuServerBrowser : public CGameModuleMenuComponent {
};

struct CGamePlaygroundModuleClientHud : public CGameManiaAppPlaygroundCommon {
  void ToggleStore();
  void ToggleInventory();
};

struct CGamePlaygroundModuleServer : public CMwNod {
  void Hide();
  void Hide2(CGamePlaygroundUIConfig* UIConfig);
  void Show();
  void Show2(CGamePlaygroundUIConfig* UIConfig);
  bool IsVisible(CGamePlaygroundUIConfig* UIConfig);
};

struct CGameMasterServerOnlineSignalTask_GetPlayerOnlineSignals : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_OnlineSignals : public CWebServicesTaskResult {
};

struct CGameScriptHandlerTitleModuleMenu : public CGameManiaAppTitleLayerScriptHandler {
  const NodArray Components;
  CGameModuleMenuComponent* GetFirstComponent(string Name);
};

struct CGameEditorAnimChar : public CMwNod {
  bool DbgDrawJointCurves;
  bool DbgIKs;
  bool DbgTestIK;
  float DbgIKTolerance;
  int DbgJoint;
  int DbgSkel;
  bool DrawBoneInfos;
  bool DrawRefBox;
  bool Collisions;
  bool DrawJointWeights;
  uint IKChainLength;
};

struct CGameScriptHandlerPlaygroundModuleInventory : public CGameManialinkScriptHandler {
  const NodArray InventoryContent;
  void Quit();
  void DropSelectedSlot();
  void EquipSelectedSlot();
  void ClearSlotSelection();
  void SetCategory(uint CategoryIndex);
  void SelectSlot(uint SlotIndex);
};

struct CGameModuleInventoryCategory : public CMwNod {
  const string Name;
  const string Description;
  const uint ItemClass;
  const wstring IconUrl;
  const NodArray SlotsItems;
  const array<uint> SlotsItemsQuantity;
};

struct CGameModuleScriptItem : public CMwNod {
  const wstring Url;
  const string IconUrl;
  const string Name;
  const string Description;
  const uint Occupation;
  void IsItem();
  void HasAction();
};

struct CGameMasterServerTask_SetBuddies : public CNetMasterServerRequestTask {
};

struct CGameCtnMasterServerTask_GetRealLeaderBoard : public CNetMasterServerRequestTask {
};

struct CGameCtnMasterServerTask_UploadPlayerRecord : public CNetMasterServerRequestTask {
};

struct CGameScoreTask_SetNewMapRecord : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Timestamp : public CWebServicesTaskResult {
};

struct CGamePlaygroundModuleServerStore : public CGamePlaygroundModuleServer {
  void Reset();
  void Reset2(CGamePlayer* Player);
  void SetMoney(CGamePlayer* Player, uint Amount);
  uint GetMoney(CGamePlayer* Player);
  bool AddMoney(CGamePlayer* Player, uint Amount);
  bool SubMoney(CGamePlayer* Player, uint Amount);
  void SetActionLevel(CGamePlayer* Player, wstring ActionUrl, uint ActionLevel);
  uint GetActionLevel(CGamePlayer* Player, wstring ActionUrl);
  bool SetPlayerData(CGamePlayer* Player, string Data);
  string GetPlayerData(CGamePlayer* Player);
  void SetItemCanBeBought(CGamePlayer* Player, wstring ActionUrl, bool CanBeBought);
  bool GetItemCanBeBought(CGamePlayer* Player, wstring ActionUrl);
  array<wstring>& Hack_GetAllItemsUrls();
};

struct CGamePlaygroundModuleServerHud : public CMwNod {
  CGamePlaygroundModuleServerInventory* Inventory;
  CGamePlaygroundModuleServerStore* Store;
  CGamePlaygroundModuleServerScoresTable* ScoresTable;
};

struct CGamePlaygroundModuleManagerServer : public CMwNod {
};

struct CGamePlaygroundModuleServerInventory : public CGamePlaygroundModuleServer {
  uint AddItem(CGamePlayer* Player, wstring Url, uint Quantity);
  bool AddAction(CGamePlayer* Player, wstring Url);
  uint RemoveInventoryItem(CGamePlayer* Player, wstring Url, uint Quantity);
  uint GetInventoryItemQuantity(CGamePlayer* Player, wstring Url);
  bool IsInventoryItemStored(CGamePlayer* Player, wstring Url);
  array<wstring>& GetStoredItemsList(CGamePlayer* Player);
  array<wstring>& GetStoredActionsList(CGamePlayer* Player);
};

struct CGamePlaygroundModuleServerScoresTable : public CGamePlaygroundModuleServer {
  enum EColumnType {
    CustomString = 0,
    CustomNatural = 1,
    CustomInteger = 2,
    CustomReal = 3,
    CustomTime = 4,
    Avatar = 5,
    Name = 6,
    ManiaStars = 7,
    Tools = 8,
    Tags = 9,
    TMBestTime = 10,
    TMPrevTime = 11,
    TMBestLapTime = 12,
    TMStunts = 13,
    TMRespawns = 14,
    TMCheckpoints = 15,
    TMPoints = 16,
    TMPrevRaceDeltaPoints = 17,
    SMPoints = 18,
    SMRoundPoints = 19,
  };
  enum EScoreSortOrder {
    Default = 0,
    Name = 1,
    LadderRanking = 2,
    TMPoints = 3,
    TMBestTime = 4,
    TMStunts = 5,
    TMRespawns = 6,
    TMCheckpoints = 7,
    TMPrevTime = 8,
    SMPoints = 9,
    SMRoundPoints = 10,
  };
  void SetFooterText(wstring FooterText);
  void ResetTargetCustomColumns(CGamePlaygroundScore* Score);
  void ResetCustomColumns();
  void Scores_Sort(EScoreSortOrder SortOrder);
  void SetColumnValueString(CGamePlaygroundScore* Score, string ColumnId, string ColumnValue);
  void SetColumnValueInteger(CGamePlaygroundScore* Score, string ColumnId, int ColumnValue);
  void SetColumnValueReal(CGamePlaygroundScore* Score, string ColumnId, float ColumnValue);
  void SetColumnVisibility(EColumnType Type, bool Visibility);
  void SetCustomColumnVisibility(string ColumnId, bool Visibility);
};

struct CWebServicesTaskResult_RealLeaderBoardInfoList : public CWebServicesTaskResult {
};

struct CGameRealLeaderBoardInfoScript : public CMwNod {
  const uint Rank;
  const UnknownType UserId;
  const string Login;
  const wstring DisplayName;
  const float Score;
  const wstring FileName;
  const string ReplayUrl;
};

struct CGameScoreTask_GetRealLeaderBoardPlayerList : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Ghost : public CWebServicesTaskResult {
};

struct CGameScoreTask_GetCampaignMapRecordGhost : public CWebServicesTaskSequence {
};

struct CGameScoreAndLeaderBoardManagerScript : public CMwNod {
  enum ELocalScoreStatus {
    None = 0,
    Loading = 1,
    NotLoaded = 2,
    Loaded = 3,
  };
  enum EMasterServerScoreStatus {
    None = 0,
    Synchronizing = 1,
    NotSynchronized = 2,
    Synchronized = 3,
  };
  const NodArray TaskResults;
  void TaskResult_Release(UnknownType TaskId);
  void ReleaseTaskResult(UnknownType TaskId);
  ELocalScoreStatus ScoreStatus_GetLocalStatus(UnknownType UserId);
  EMasterServerScoreStatus ScoreStatus_GetMasterServerStatus(UnknownType UserId);
  void ReleaseGhost(UnknownType GhostId);
  CGameGhostScript* Playground_GetPlayerGhost(CGamePlayer* GamePlayer);
  CWebServicesTaskResult* Map_SetNewRecord(UnknownType UserId, string MapUid, string Context, CGameGhostScript* Ghost);
  uint Map_GetRecord(UnknownType UserId, string MapUid, string Context);
  CWebServicesTaskResult_GhostScript* Map_GetRecordGhost(UnknownType UserId, string MapUid, string Context);
  uint Map_GetMultiAsyncLevel(UnknownType UserId, string MapUid, string Context);
  uint Map_GetMultiAsyncLevelRecord(string MapUid, string Context, uint MultiAsyncLevel);
  CWebServicesTaskResult_GhostScript* Map_GetMultiAsyncLevelRecordGhost(string MapUid, string Context, uint MultiAsyncLevel);
  uint Map_GetSkillPoints(UnknownType UserId, string MapUid, string Context);
  uint MapLeaderBoard_GetPlayerRanking(UnknownType UserId, string MapUid, string Context, wstring Zone);
  uint MapLeaderBoard_GetPlayerCount(string MapUid, string Context, wstring Zone);
  CWebServicesTaskResult_NaturalLeaderBoardInfoListScript* MapLeaderBoard_GetPlayerList(UnknownType UserId, string MapUid, string Context, wstring Zone, uint FromIndex, uint Count);
  uint Campaign_GetMultiAsyncLevel(UnknownType UserId, string CampaignId);
  uint Campaign_GetMultiAsyncLevelCount(UnknownType UserId, string CampaignId, uint MultiAsyncLevel);
  uint Campaign_GetSkillPoints(UnknownType UserId, string CampaignId);
  CWebServicesTaskResult_MapRecordListScript* Campaign_GetOpponentRecords(UnknownType UserId, string CampaignId, string OpponentLogin);
  CWebServicesTaskResult_BuddiesChallengeRecord* Campaign_GetBuddiesMapRecord(UnknownType UserId, string CampaignId, string MapUid);
  bool Campaign_IsBuddiesMapRecordDirty(UnknownType UserId, string CampaignId, string MapUid);
  CWebServicesTaskResult_BuddiesChallengeRecordsComparison* Campaign_GetBuddiesMapRecordsComparison(UnknownType UserId, string CampaignId);
  CWebServicesTaskResult_BuddyChallengeRecordsComparison* Campaign_GetBuddyMapRecordsComparison(UnknownType UserId, string OpponentLogin, string CampaignId);
  uint CampaignLeaderBoard_GetPlayerRanking(UnknownType UserId, string CampaignId, wstring Zone, bool UseSkillPoints);
  uint CampaignLeaderBoard_GetPlayerCount(string CampaignId, wstring Zone, bool UseSkillPoints);
  CWebServicesTaskResult_NaturalLeaderBoardInfoListScript* CampaignLeaderBoard_GetPlayerList(UnknownType UserId, string CampaignId, wstring Zone, bool UseSkillPoints, uint FromIndex, uint Count);
  void Multiplayer_AddToScore(UnknownType UserId, float ScoreDiff, uint Timestamp);
  uint MultiplayerLeaderBoard_GetPlayerRanking(UnknownType UserId, wstring Zone);
  uint MultiplayerLeaderBoard_GetPlayerCount(wstring Zone);
  uint GlobalLeaderBoard_GetPlayerRanking(UnknownType UserId, wstring Zone);
  uint GlobalLeaderBoard_GetPlayerCount(wstring Zone);
  CWebServicesTaskResult_RealLeaderBoardInfoListScript* GlobalLeaderBoard_GetPlayerList(UnknownType UserId, wstring Zone, uint FromIndex, uint Count);
};

struct CGameCtnMasterServerTask_GetDisplayNameScript : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_GetDisplayNameScriptResult : public CWebServicesTaskResult {
  void AddLogin(string Login);
  void StartTask();
  wstring GetDisplayName(string Login);
};

struct CGameEditorTimeLine : public CMwNod {
  const uint Time;
  void TimeStop();
  void TimeSlowForward();
  void TimeNormalForward();
  void TimeFirstFrame();
  void TimeLastFrame();
  void TimePlayStop();
  void TimeLineShowFull();
  void KeyInsert();
  void KeyRemove();
  void KeysSelectAll();
  void KeyPrev();
  void KeyNext();
  void Copy();
  void KeyCut();
  void Paste();
  void TimeLineNext();
  void TimeLinePrev();
  void KeysRemoveAll();
};

struct CGameEditorAnimChar_Interface : public CMwNod {
  const CScene2d* Scene2d;
  float EntryParamTransitionDuration;
  const float Duration;
};

struct CGameMasterServerOnlineSignalTask_NotifyBuddiesAboutNewOnlineSignals : public CWebServicesTaskSequence {
};

struct CGameMasterServerUserOnlineSignals : public CMwNod {
  const UnknownType Id;
  const NodArray OnlineSignals;
  void RemoveOnlineSignal(uint OnlineId);
};

struct CGameEditorAnimSet : public CGameEditorBase {
  const CGameAnimSet* AnimSet;
};

struct CGameAnimClipNod : public CMwNod {
  CGameAnimClipNod();

};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerMode : public CWebServicesTaskSequence {
};

struct CGameAchievementScriptStatDesc : public CMwNod {
  const string TitleId;
  const wstring DisplayName;
  const wstring Description;
};

struct CGameAchievementScriptAchievementDesc : public CMwNod {
  const string TitleId;
  const wstring DisplayName;
  const wstring Description;
  const wstring IconUrl;
};

struct CGameEditorVehicle : public CGameEditorParent {
};

struct CGameEditorParent : public CGameSwitcherModule {
  CGameEditorParent();

  const CGameScene* GameScene;
  const CGameCamera* GameCamera;
};

struct CWebServicesTaskResult_ZoneList : public CWebServicesTaskResult {
  const wstring Path;
  const uint ZoneCount;
  const NodArray Zones;
};

struct CGameCtnMasterServerTask_ZoneGetChilds : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_GetLeagues : public CNetMasterServerRequestTask {
};

struct CGameLeagueScript : public CMwNod {
  const wstring Name;
  const wstring Path;
  const wstring FullPath;
  const string FlagUrl;
};

struct CGameMasterServerTask_Connect : public CNetMasterServerTask_Connect {
};

struct CGameAchievementScriptUplayAction : public CMwNod {
  const string ActionId;
  const wstring Name;
  const wstring Description;
  const uint Value;
};

struct CGameMasterServerPlayerOnlinePresence : public CMwNod {
  const string Login;
  const wstring DisplayName;
  const string ServerLogin;
  const bool IsOnline;
};

struct CWebServicesTaskResult_OnlinePresenceList : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetOnlinePresenceForPlayers : public CNetMasterServerRequestTask {
};

struct CGameMasterServerRichPresenceTaskResult_GetOnlinePresenceForPlayersScript : public CGameMasterServerRichPresenceTaskResult_PlayerOnlinePresenceList {
  const NodArray OnlinePresences;
  void AddLogin(string Login);
  void StartTask();
};

struct CGameMasterServerRichPresenceManager : public CMwNod {
};

struct CGameMasterServerRichPresenceTask_UpdatePresence : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegesManagerScript : public CMwNod {
  enum EPrivilege {
    PlayMultiplayerMode = 0,
    PlayMultiplayerSession = 1,
    UploadUserCreatedContent = 2,
    ViewOnlinePresence = 3,
    ViewUserCreatedContent = 4,
    ViewUserCreatedContentRequired = 5,
    ViewUserGameHistory = 6,
    VoiceChat = 7,
    PlayMultiplayerAsync = 8,
    DownloadUserCreatedContent = 9,
  };
  const NodArray TaskResults;
  void ReleaseTaskResult(UnknownType TaskId);
  CWebServicesTaskResult* CheckPrivilege(UnknownType UserId, EPrivilege Privilege);
  CWebServicesTaskResult* CheckPrivilegeForAllUsers(EPrivilege Privilege);
  CWebServicesTaskResult_CheckTargetedPrivilegeResultScript* CheckTargetedPrivilege(UnknownType UserId, EPrivilege Privilege);
  CWebServicesTaskResult_CheckTargetedPrivilegeResultScript* CheckTargetedPrivilegeForAllUsers(EPrivilege Privilege);
};

struct CGameUserPrivilegeTask_CheckUploadUserCreatedContent : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_CheckTargetedPrivilegeResult : public CWebServicesTaskResult {
};

struct CGameUserPrivilegeTask_CheckViewOnlinePresence : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_CheckTargetedPrivilegeResultScript : public CWebServicesTaskResult_CheckTargetedPrivilegeResult {
  void AddLogin(string Login);
  void StartTask();
  bool HasPrivilege(string Login);
  wstring GetDenyReason(string Login);
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameMasterServerRichPresenceTask_GetOnlinePresence : public CWebServicesTaskSequence {
};

struct CGameMasterServerRichPresenceTaskResult_PlayerOnlinePresenceList : public CWebServicesTaskResult {
};

struct CGameMasterServerRichPresenceManagerScript : public CMwNod {
  enum ERichPresence {
    Undefined = 0,
    MainMenu = 1,
    Solo = 2,
    Multi = 3,
    Party = 4,
    Create = 5,
  };
  const NodArray TaskResults;
  void ReleaseTaskResult(UnknownType TaskId);
  void SetPresence(UnknownType UserId, ERichPresence UplayFlow);
  CGameMasterServerRichPresenceTaskResult_GetOnlinePresenceForPlayersScript* GetOnlinePresenceForPlayers(UnknownType UserId);
};

struct CGameUserPrivilegeTask_CheckViewUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameManagerBadgeScript : public CMwNod {
  const NodArray Badges;
  CGameBadgeScript* BadgeCreate();
  void BadgeDestroy(CGameBadgeScript* Badge);
  void BadgeCopy(CGameBadgeScript* Source, CGameBadgeScript* Destination);
  void BadgeReadFromProfile(CGameBadgeScript* Badge, UnknownType UserId);
  void BadgeWriteToProfile(CGameBadgeScript* Badge, UnknownType UserId);
  bool ProfileIsReady(UnknownType UserId);
};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerSession : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_BuyFullGame : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckVoiceChat : public CWebServicesTaskSequence {
};

struct CGameNetFormVoiceChat : public CGameNetForm {
  CGameNetFormVoiceChat();

};

struct CGameMasterServerTask_ChangeZone : public CNetMasterServerRequestTask {
};

struct CGameUserPrivilegeTask_CheckPlayMultiplayerAsync : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_LaunchUplay : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckDownloadUserCreatedContent : public CWebServicesTaskSequence {
};

struct CGameScoreTask_UploadNewMapRecord : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserGameHistory : public CWebServicesTaskSequence {
};

struct CGameScoreTask_BuddiesChallengeRecordsComparison : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_ChallengeRecordsComparisonSummaries : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_LaunchUplayScriptResult : public CWebServicesTaskResult {
  void AddActionToComplete(string ActionId);
  void StartTask();
};

struct CGameUserPrivilegeTask_CheckTargetedViewUserCreatedContentForAllUsers : public CWebServicesTaskSequence {
};

struct CGameUserPrivilegeTask_CheckPrivilegeForAllUsers : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_ChallengeRecords_GetBuddiesRecord : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_ChallengeRecords_BuddiesRecord : public CWebServicesTaskResult {
};

struct CGameScoreTask_BuddiesChallengeRecordsForMap : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_BuddiesChallengeRecord : public CWebServicesTaskResult {
  const string Login;
  const NodArray BuddiesChallengeRecord;
  void SortByOpponentCount();
  void SortByOpponentDisplayName();
  void SortByOpponentLogin();
  void SortByOpponentRecordDate();
  void SortByOpponentRecordTime();
};

struct CGameScoreTask_BuddyChallengeRecordsComparison : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_ChallengeRecords_BuddyRecordComparison : public CWebServicesTaskResult {
};

struct CGameCtnMediaBlockCheatEmptyCars : public CGameCtnMediaBlock {
  CGameCtnMediaBlockCheatEmptyCars();

};

struct CGameModuleScriptStoreItem : public CGameModuleScriptItem {
  const string StoreName;
  const string StoreDesc;
  const uint CurrentLevel;
  const array<uint> Prices;
};

struct CGameModuleScriptStoreCategory : public CMwNod {
  const string Name;
  const NodArray Items;
};

struct CWebServicesTaskResult_NaturalLeaderBoardSummaries : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetNaturalLeaderBoardSummaries : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_RealLeaderBoardSummaries : public CWebServicesTaskResult {
};

struct CGameCtnMasterServerTask_GetRealLeaderBoardSummaries : public CNetMasterServerRequestTask {
};

struct CGameEditorMainPlugin : public CGameEditorPlugin {
  enum EMeshEditorAPI {
    Materials = 0,
    Interactions = 1,
    Display = 2,
    Global = 3,
    Sets = 4,
    Voxel = 5,
    PickInfo = 6,
    UndoRedo = 7,
  };
  void Help_Open();
  void Help_Close();
  CGameEditorPluginHandle* GetPluginHandle(string Name);
  void SendPluginEvent(CGameEditorPluginHandle* Handle, wstring Type, array<wstring>& Data);
  void Context_SetActive(wstring ContextName, bool IsActive);
  bool Context_IsActive(wstring ContextName);
  bool Binding_IsActive(wstring BindingName);
  void Plugin_SetClearance_MeshEditor(CGameEditorPluginHandle* Handle, EMeshEditorAPI API, bool IsAllowed);
  const NodArray Plugins;
};

struct CGamePlaygroundUIConfigEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    OnModuleCustomEvent = 1,
    OnModuleShowRequest = 2,
    OnModuleHideRequest = 3,
    OnModuleStorePurchase = 4,
    OnModuleInventoryDrop = 5,
    OnModuleInventoryEquip = 6,
    OnLayerCustomEvent = 7,
  };
  enum EModuleType {
    Undefined = 0,
    Hud = 1,
    Inventory = 2,
    Store = 3,
    ScoresTable = 4,
    Equipment = 5,
    MenuBase = 6,
    MenuPage = 7,
  };
  const EType Type;
  const CGamePlaygroundUIConfig* UI;
  const CGamePlaygroundUIConfig* UIConfig;
  const EModuleType ModuleType;
  const wstring Param1;
  const array<wstring> Param2;
  const CGameUILayer* CustomEventLayer;
  const wstring CustomEventType;
  const array<wstring> CustomEventData;
  const wstring ItemUrl;
  const uint Quantity;
};

struct CGameMgrShieldPhy : public CSceneMgrPhy {
};

struct CGameMgrShieldVis : public CSceneMgrVis {
  const CSceneMgrParticle* MgrParticle;
  const NodArray ShieldModels;
};

struct CGamePackCreatorScript : public CMwNod {
  void RegisterPackForEditedTitle();
  const bool RegisterPack_IsInProgess;
  const CGamePackCreator_PackScript* CurrentPack;
  UnknownType Build_Begin(CGamePackCreator_PackScript* Pack, CGamePackCreator_TitleInfoScript* TitleInfo);
  void Build_AddFile(UnknownType BuildId, wstring FileName);
  void Build_AddFolder(UnknownType BuildId, wstring FolderName);
  void Build_AddFile_Ex(UnknownType BuildId, wstring FileName, bool IsPublic, bool IsInternal, bool NoAutomaticDeps);
  void Build_AddFolder_Ex(UnknownType BuildId, wstring FolderName, bool IsPublic, bool IsInternal, bool NoRecursion, bool NoAutomaticDeps);
  void Build_Generate(UnknownType BuildId, bool Upload);
  bool Build_IsGenerated(UnknownType BuildId);
  wstring Build_ErrorMessage(UnknownType BuildId);
  void Build_End(UnknownType BuildId);
};

struct CGamePackCreator_PackScript : public CMwNod {
  const UnknownType PackId;
  const UnknownType CreatorId;
  const bool IsTitlePack;
  void Recipients_Add(string Login, uint UseCost, uint GetCost);
  void Recipients_Remove(string Login);
  const NodArray Recipients;
};

struct CGamePackCreator_TitleInfoScript : public CMwNod {
  const UnknownType TitleId;
  const UnknownType MakerTitleId;
  wstring DisplayName;
  wstring Description;
  string InfoUrl;
  string DownloadUrl;
  string TitleVersion;
  string AllowedClientTitleVersion;
  string BaseTitleIds;
  wstring ForcedPlayerModel;
  wstring Packaging_ImageFileName;
  wstring Packaging_LogosFileName;
  wstring Packaging_Group;
  string Station_ManialinkUrl;
  wstring Menus_BgReplayFileName;
  string Menus_ManiaAppFileName;
  wstring Menus_MusicFileName;
  const bool Solo_HasCampaign;
  wstring Hud3dFontFileName;
  wstring MusicFolder;
};

struct CGamePackCreator_RecipientScript : public CMwNod {
  const string Login;
  const uint GetCost;
  const uint UseCost;
};

// File extension: 'DecorationMaterialModifiers.Gbx'
struct CGameCtnDecorationMaterialModifiers : public CMwNod {
  CGameCtnDecorationMaterialModifiers();

  CGameCtnDecorationTerrainModifier* LowHeightMaterialModifier;
  array<float> Rules_MinHeights;
  NodArray Rules_MaterialModifiers;
};

struct CGameModuleMenuPage : public CMwNod {
  const wstring Name;
  const NodArray Components;
};

struct CGameEditorPlugin : public CGameManiaApp {
  enum EInteractionStatus {
    Active = 0,
    Closed = 1,
    Aborted = 2,
  };
  const NodArray PendingEvents;
  const CGameEditorModule* ModuleEditor;
  const CGameEditorMesh* MeshEditor;
  const CGameEditorPixel* PixelEditor;
  const CGameEditorEditor* EditorEditor;
  const EInteractionStatus InteractionStatus;
};

struct CGameManialinkAnimManager : public CMwNod {
  enum EAnimManagerEasing {
    Linear = 0,
    QuadIn = 1,
    QuadOut = 2,
    QuadInOut = 3,
    CubicIn = 4,
    CubicOut = 5,
    CubicInOut = 6,
    QuartIn = 7,
    QuartOut = 8,
    QuartInOut = 9,
    QuintIn = 10,
    QuintOut = 11,
    QuintInOut = 12,
    SineIn = 13,
    SineOut = 14,
    SineInOut = 15,
    ExpIn = 16,
    ExpOut = 17,
    ExpInOut = 18,
    CircIn = 19,
    CircOut = 20,
    CircInOut = 21,
    BackIn = 22,
    BackOut = 23,
    BackInOut = 24,
    ElasticIn = 25,
    ElasticOut = 26,
    ElasticInOut = 27,
    ElasticIn2 = 28,
    ElasticOut2 = 29,
    ElasticInOut2 = 30,
    BounceIn = 31,
    BounceOut = 32,
    BounceInOut = 33,
  };
  void AddFromXml(CGameManialinkControl* Control, string XmlTarget, uint StartTime, uint Duration, EAnimManagerEasing EasingFunc);
  void AddChainFromXml(CGameManialinkControl* Control, string XmlTarget, uint Duration, EAnimManagerEasing EasingFunc);
  void FlushAndAddFromXml(CGameManialinkControl* Control, string XmlTarget, uint Duration, EAnimManagerEasing EasingFunc);
};

struct CGameEditorEditor : public CGameCtnEditor {
  const CControlFrame* UIRoot;
  const CMwNod* EditedNod;
  const CGameEditorModel* EditedEditor;
  void FlushBindings();
  void Bindings_AddContext(wstring ContextName);
  void Bindings_AddBinding(wstring ContextName, wstring BindingScriptId, wstring BindingDisplayName);
  void Bindings_RemoveContext(wstring ContextName);
  void Bindings_RemoveBinding(wstring BindingName);
  void Bindings_RequestInput(wstring BindingName);
  const bool Bindings_RequestInput_Done;
  void Bindings_SetBindingScriptId(wstring BindingScriptId, wstring NewBindingScriptId);
  void Bindings_SetBindingDisplayName(wstring BindingScriptId, wstring BindingDisplayName);
  void Bindings_SetContextName(wstring ContextName, wstring NewContextName);
  const array<wstring> BindingContexts;
  void Bindings_GetContextBindings(wstring ContextName);
  const array<wstring> RequestedContextBindings;
  wstring Bindings_GetBindingActionName(wstring BindingName);
  wstring Bindings_GetBindingDisplayName(wstring BindingName);
  const NodArray PendingEvents;
};

struct CGameControlCameraHmdExternal : public CGameControlCameraTarget {
};

struct CGameMgrCamera : public CMwNod {
};

struct CGameCampaignScoreManager_SkillPoint : public CGameCampaignScoreManager {
};

struct CGameScriptChatRoom : public CMwNod {
  const string RoomId;
  const NodArray Members;
};

struct CGameItem : public CMwNod {
};

struct CGameGate : public CMwNod {
};

struct CGameTriggerGate : public CMwNod {
};

struct CGameTriggerTeleport : public CMwNod {
};

struct CGameShield : public CMwNod {
};

struct CGameTriggerScreen : public CMwNod {
};

struct CGameScriptChatHistory : public CMwNod {
  wstring Filter;
  const bool Filter_IsValid;
  const NodArray Entries;
};

struct CGameScriptChatHistoryEntry : public CMwNod {
  enum EDirection {
    Sent = 0,
    Recieved = 1,
  };
  const EDirection Direction;
  const bool InRoom;
  const wstring Date;
  const wstring Nickname;
  const wstring Message;
};

struct CGameEditorCanvas : public CMwNod {
  CGameEditorCanvas();

  UnknownType Layer_Create();
  void Layer_Destroy(UnknownType Handle);
  void Layer_Rename(UnknownType Handle, string Name);
  string Layer_GetName(UnknownType Handle);
  void Layer_SetSelected(UnknownType Handle);
  UnknownType Layer_GetSelectedLayer();
  void Layer_SwapLayersPriorities(UnknownType Handle1, UnknownType Handle2);
  void Layer_IncreasePriority(UnknownType Handle);
  void Layer_DecreasePriority(UnknownType Handle);
  UnknownType Layer_GetLayers();
  void Layer_SetVisibility(UnknownType Handle, bool Visible);
  bool Layer_IsVisible(UnknownType Handle);
};

struct CGameEditorPixel : public CGameCtnEditor {
  CGameEditorPixel();

  const CControlFrame* UIRoot;
  const CMwNod* EditedNod;
  float PixelsMargin;
  const bool MouseInGrid;
  const UnknownType MousePos;
  vec3 CurrentColor;
  const int GridSize;
  bool GetColorAt(UnknownType Pos);
  const vec3 GetColorAt_Result;
  const bool GetColorAt_HasColor;
  void SetColorAt(UnknownType Pos, vec3 Color);
  void ClearPixelAt(UnknownType Pos);
  void DrawRect(UnknownType Pos1, UnknownType Pos2, vec3 Color);
  void ClearRect(UnknownType Pos1, UnknownType Pos2);
  void DrawLine(UnknownType Pos1, UnknownType Pos2, vec3 Color);
  void PaintBucket(UnknownType Pos, vec3 Color);
  void SetSelectionColor(vec3 Color, float Opacity);
  void SetSelection_Rect(UnknownType Pos1, UnknownType Pos2);
  void SetSelection_Line(UnknownType Pos1, UnknownType Pos2);
  void ClearSelection();
  void EraseSelection();
  void DrawSelection(vec3 Color);
  void Undo();
  void Redo();
  void Copy();
  void Cut();
  void Paste();
  void AddUndoState();
  void MergeLayers(UnknownType Handle1, UnknownType Handle2);
  void SelectedLayer_Move(UnknownType Offset);
  void SelectedLayer_OffsetPreview(UnknownType Offset);
  const CGameEditorCanvas* Layers;
  const NodArray PendingEvents;
};

struct CGameEditorPixelEvent : public CGameManiaAppScriptEvent {
  enum Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    FileNew = 4,
    FileOpen = 5,
    OnCopy = 6,
    OnPaste = 7,
    OnUndo = 8,
    OnRedo = 9,
    MouseOverPixels = 10,
    MouseDown = 11,
    MouseReleased = 12,
  };
  const Type Type;
  const UnknownType MousePos;
  const UnknownType MousePath;
};

struct CGameEditorPluginMapManager : public CMwNod {
  const NodArray ActivePluginsCache;
};

struct CGameEditorMesh : public CGameEditorAsset {
  CGameEditorMesh();

  enum EEdgesDisplay {
    Any = 0,
    Borders = 1,
    None = 2,
  };
  enum EEdgesConstraint {
    Any = 0,
    Adjacent = 1,
    Closed = 2,
  };
  enum EElemType {
    Vertex = 0,
    Edge = 1,
    Face = 2,
    Any = 3,
  };
  enum EInteraction {
    Creation = 0,
    Pick = 1,
    PickJoint = 2,
    Selection = 3,
    Translation = 4,
    PickTranslation = 5,
    Rotation = 6,
    PickRotation = 7,
    Scale = 8,
    Curve2D = 9,
    Merge = 10,
    Split = 11,
    Mirror = 12,
    Paste = 13,
    PasteMaterial = 14,
    BlocTransformation = 15,
    None = 16,
  };
  enum ETexCoordLayer {
    Lightmap = 0,
  };
  enum EMaterialFilterCriterion {
    IsAutomatic = 0,
    IsBadForHorizontalFaces = 1,
    IsBadForVerticalFaces = 2,
  };
  enum EFilterKind {
    NoFilter = 0,
    PassIfMatches = 1,
    CutIfMatches = 2,
  };
  enum EUVEditorMode {
    UV = 0,
    Atlas_ApplyOnClic = 1,
    Atlas_SelectOnClic = 2,
  };
  enum EUVEditorProjectionType {
    Planar = 0,
    Curve2D = 1,
    Cylindrical2D = 2,
    Cubic = 3,
    Polyedric = 4,
    Cylindrical = 5,
    ApplyOnlyMaterial = 6,
  };
  void UVEditor_UVMode();
  void UVEditor_AtlasMode();
  const bool Tmp_UseParts;
  const CControlFrame* UIRoot;
  const CMwNod* EditedNod;
  CPlugMaterialUserInst* MatUserInstToEdit;
  const uint VertexCount;
  const uint EdgeCount;
  const uint FaceCount;
  void EditionBox_SetScale(float Scale);
  void EditionBox_OrientPlane(UnknownType SetHandle);
  const bool EditionBox_IsPlaneOriented;
  const float Scale;
  const float Step;
  const float Size;
  const int RotationStep;
  const float RotationValue;
  const float ScalingStep;
  const float ScalingRatio;
  bool DisplayVertices;
  bool DisplayFaces;
  bool DisplayJoints;
  EEdgesDisplay DisplayEdges;
  void EditedMesh_Clear();
  void EditedMesh_Simplify();
  void UVUnwrap(UnknownType SetHandle, ETexCoordLayer ETexCoordLayer);
  void Undo();
  void Redo();
  void SwitchPlane();
  void GridSnap_SetActive(bool IsActive);
  const bool GridSnap_IsActive;
  vec3 PickInfo_GetNormal();
  vec3 PickInfo_GetPosition();
  float PickInfo_GetEdgeLength();
  vec3 PickInfo_GetNextVertexPosition();
  UnknownType PickInfo_GetMaterial();
  wstring PickInfo_GetError();
  void Part_SetAnchorPos(vec3 Position);
  void Part_SetIsJoint(bool IsJoint);
  void Part_ClearAnchor();
  const int MaterialsUpdateId;
  const NodArray AllBitmaps;
  const UnknownType MaterialIds;
  UnknownType Material_GetMaterialIdSelected();
  void Material_SetMaterialIdSelected(UnknownType MaterialEditorId);
  uint Material_GetSubTexIndexSelected();
  void Material_SetDefault(UnknownType MaterialId);
  UnknownType Material_GetDefault();
  CPlugBitmap* Material_GetBitmapBase(UnknownType MaterialId);
  CPlugBitmap* Material_GetBitmap(UnknownType MaterialId);
  bool Material_MatchesCriterion(UnknownType MaterialId, EMaterialFilterCriterion ResultSetHandle);
  void Material_SetFilter(EMaterialFilterCriterion Criterion, EFilterKind FilterKind);
  EFilterKind Material_GetFilter(EMaterialFilterCriterion Criterion);
  void Material_ClearFilters();
  void Material_UVEditor_SetIsRotation(bool IsRotation);
  void Material_UVEditor_SetIsScale(bool IsScale);
  void Material_UVEditor_SetIsScale1D(bool IsScale);
  void Material_UVEditor_Open(UnknownType MaterialId, CGameManialinkQuad* LocationQuad);
  void Material_UVEditor_Close();
  void Material_UVEditor_SetMode(EUVEditorMode Mode);
  EUVEditorMode Material_UVEditor_GetMode();
  void Material_UVEditor_SetProjectionType(EUVEditorProjectionType ProjectionType);
  void Material_UVEditor_Apply();
  void Material_PasteMaterial(UnknownType SetHandle);
  const uint Material_Atlas_SelectedSubTexIndex;
  const EInteraction CurrentInteraction;
  void Interaction_Abort();
  void Interaction_SetPreview(UnknownType SetToPreview);
  const uint CreationElemsCount;
  void Interaction_StartCreation(UnknownType CreationSetHandle, EElemType ElemType, UnknownType SetToPickFromHandle);
  void Interaction_Creation_GetElems(UnknownType ResultSetHandle);
  void Interaction_CloseCreation();
  void Interaction_Creation_ClearParams();
  void Interaction_Creation_SetEdgesConstraint(EEdgesConstraint EdgesConstraint);
  void Interaction_Creation_SetAutoMerge(bool AutoMerge);
  void Interaction_StartPaste();
  void Interaction_StartBlocTransformation(UnknownType TransformationSetHandle);
  void Interaction_StartCurve2D(UnknownType BordersSetHandle);
  void Interaction_CloseCurve2D(bool CanDoCurve2D);
  void Interaction_StartPick(EElemType ElemType, UnknownType SetToPickFrom);
  void Interaction_StartPickJoint();
  void Interaction_StartMerge(UnknownType MergeSetHandle);
  void Interaction_StartMirror(UnknownType SetHandle);
  void Interaction_Selection_ClearParams();
  void Interaction_Selection_SetUseParts(bool UseParts);
  void Interaction_Selection_SetCanEnterLeaf(bool CanEnterLeaf);
  void Interaction_StartSelection(UnknownType SelectionSetHandle, EElemType ElemType, UnknownType SelectionSetToPickFrom);
  void Interaction_CloseSelection();
  void Interaction_StartTranslation(UnknownType TranslationSetHandle);
  void Interaction_StartPickTranslation(UnknownType TranslationSetHandle);
  void Interaction_StartRotation(UnknownType RotationSetHandle);
  void Interaction_StartPickRotation(UnknownType RotationSetHandle);
  void Interaction_Rotation_SetStep(int RotationStep);
  void Interaction_StartPickScale(UnknownType ScalingSetHandle);
  void Interaction_Scale_SetStep(float ScalingStep);
  void Interaction_StartSplit();
  void Display_HighlightSet(UnknownType SetHandle);
  void Display_ClearHighlighting();
  void Display_AtlasSelectionsSet(bool DisplayAtlasSelection);
  bool Display_AtlasSelectionsGet();
  const bool Display_HideElemsByDistance_IsActive;
  uint Display_HideElemsByDistance_Distance;
  float Display_HideElemsByDistance_Opacity;
  void Display_HideElemsByDistance_Start(UnknownType SetHandle);
  void Display_HideElemsByDistance_Stop();
  void Display_HideMap();
  void Display_ShowMap();
  void MergeAllSuperposedElements(UnknownType SetHandle);
  const UnknownType SelectionSet;
  void Selection_Undo();
  void Selection_Redo();
  UnknownType SetOfElements_Create();
  void SetOfElements_CopyFrom(UnknownType DestinationSet, UnknownType SourceSet);
  void SetOfElements_Append(UnknownType DestinationSet, UnknownType SourceSet);
  void SetOfElements_Destroy(UnknownType SetHandle);
  void SetOfElements_Empty(UnknownType SetHandle);
  void SetOfElements_SetAllElements(UnknownType SetHandle);
  void SetOfElements_SetAllFaces(UnknownType SetHandle);
  void SetOfElements_DeleteElements(UnknownType SetHandle);
  bool SetOfElements_HasHorizontalFaces(UnknownType SetHandle);
  bool SetOfElements_HasVerticalFaces(UnknownType SetHandle);
  uint SetOfElements_GetElemsCount(UnknownType SetHandle);
  uint SetOfElements_GetVerticesCount(UnknownType SetHandle);
  uint SetOfElements_GetEdgesCount(UnknownType SetHandle);
  uint SetOfElements_GetFacesCount(UnknownType SetHandle);
  void ExtendSelectedSet(UnknownType SetHandle);
  void GetBordersSet(UnknownType SetHandle, UnknownType SetBordersHandle);
  void GetBordersVertexs(UnknownType SetHandle, UnknownType SetVertexHandle);
  void SelectionSet_SelectAll();
  void Curve2DPolygon(UnknownType FourVertexSetHandle, UnknownType Sethandle, uint SubTexIndex);
  UnknownType AtlasSelection_Create();
  void AtlasSelection_GetAtlasSelectionHandleFromSet(UnknownType SetHandle);
  void AtlasSelections_AddAtlasSelectionFromSet(UnknownType SetHandle, UnknownType FourPointsHandle);
  void AtlasSelections_SubAtlasSelection(UnknownType SetHandle);
  void AtlasSelections_TextureAtlasSelection(UnknownType SetHandle, uint SubTexIndex);
  void AtlasSelections_GetAtlasSelectionAfterSelection(UnknownType Sethandle);
  void Preview_Clear();
  bool BlocTransformation_Start(UnknownType SetHandle);
  void BlocTransformation_Translate(vec3 Translation);
  void BlocTransformation_Twist(float Angle);
  void BlocTransformation_Bend(int Axis, float Radius, float Angle, bool Direction);
  void BlocTransformation_Abort();
  void BlocTransformation_Close();
  void VoxelSpace_Init(uint Size, bool UseColors);
  void VoxelSpace_Destroy();
  bool VoxelSpace_Get(int3 Pos);
  void VoxelSpace_Set(int3 Pos);
  void VoxelSpace_SetVec3(vec3 Pos);
  void VoxelSpace_SetColor(int3 Pos, vec3 Color);
  void VoxelSpace_Unset(int3 Pos);
  void VoxelSpace_GenerateMesh();
  void SetOfElements_ProjectOnPlane(UnknownType SetHandle);
  void SetOfElements_ProjectOnGround(UnknownType SetHandle, float Height);
  void SetOfElements_SplitEdgeWithVertex(UnknownType SetHandle);
  void SetOfElements_CollapseEdgeWithVertex(UnknownType SetHandle);
  void SetOfElements_Subdivide(UnknownType SetHandle);
  void SetOfElements_Subdivide_Interpolation(UnknownType SetHandle);
  void SetOfVertices_DrawCircle(UnknownType InputSetHandle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawDisc(UnknownType InputSetHandle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawCircle2(UnknownType CenterSetHandle, vec3 PointOnCircle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawIcosahedron(UnknownType InputSetHandle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawIcosahedron2(UnknownType CenterSetHandle, vec3 PointOnCircle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawIcosahedricSphere(UnknownType InputSetHandle, UnknownType ResultSetHandle);
  void SetOfVertices_DrawPoly(UnknownType InputSetHandle, UnknownType ResultSetHandle, int VerticesCount);
  void SetOfVertices_DrawPoly2(UnknownType CenterSetHandle, vec3 PointOnPoly, UnknownType ResultSetHandle, int VerticesCount);
  void SetOfVertices_DrawSpline(UnknownType ControlSetHandle, UnknownType ResultSetHandle);
  void SetOfVertices_Weld(UnknownType VerticesSetHandle);
  void SetOfVertices_DrawBox(UnknownType ControlSetHandle, UnknownType ResultSetHandle);
  void SetOfEdges_Fill(UnknownType SetHandle);
  void SetOfEdges_Flip(UnknownType SetHandle, UnknownType ResultSetHandle);
  void SetOfEdges_BorderExpand(UnknownType SetHandle);
  void SetOfOneEdge_FaceLoopExpand(UnknownType SetHandle);
  void SetOfOneEdge_EdgeLoopExpand(UnknownType SetHandle);
  void SetOfOneFace_CutHole(UnknownType FaceSetHandle, UnknownType EdgesSetHandle);
  void SetOfFaces_Extrude(UnknownType SetHandle, UnknownType ResultSetHandle);
  void SetOfFaces_QuadsToTriangles(UnknownType SetHandle, UnknownType ResultSetHandle);
  void SetOfFaces_ApplyMaterial(UnknownType SetHandle, UnknownType MaterialId);
  void SetOfFaces_PlanarExpand(UnknownType FacesSetHandle);
  void SetOfFaces_ChangeOrientation(UnknownType FacesSetHandle);
  const array<wstring> PrefabNames;
  const int PrefabNamesUpdateId;
  void Prefab_Export();
  void Prefab_Import(uint PrefabIndex);
  void Parts_MergeSelectedParts();
  void Parts_Group();
  void Parts_UngroupSelectedParts();
  void Cut();
  void Copy();
  void SetBaseUndoState();
  void AddUndoState();
  void AutoSave(wstring FileName);
  const NodArray PendingEvents;
  const bool IsExperimental;
};

struct CGameEditorEvent : public CGameManiaAppScriptEvent {
  enum Type {
    LayerCustomEvent = 0,
    KeyPress = 1,
    MenuNavigation = 3,
    FileChanged = 4,
    OnUndo = 5,
    OnRedo = 6,
  };
  const Type Type;
};

struct CGameMgrTurretPhy : public CSceneMgrPhy {
};

struct CGameTurretPhy : public CMwNod {
};

struct CGameScenePhy : public CScenePhy {
};

struct CGameMgrTurretVis : public CSceneMgrVis {
};

// userName: 'Turret'
struct CGameTurretVis : public CMwNod {
};

struct CGameEditorPluginHandle : public CMwNod {
};

struct CGameCtnMediaBlockTurret : public CGameCtnMediaBlock {
  CGameCtnMediaBlockTurret();

};

struct CGameEditorPluginLayerScriptHandler : public CGameManialinkScriptHandler {
  const CGameEditorModule* ModuleEditor;
  const CGameEditorMesh* MeshEditor;
  const CGameEditorPixel* PixelEditor;
  const CGameEditorEditor* EditorEditor;
};

struct CGameMgrMapPhy : public CSceneMgrPhy {
  CGameMgrMapPhy();

};

struct CGameDataFileManager : public CMwNod {
};

struct CGameDataFileTask_GhostStoreUserRecord_Maniaplanet : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GhostLoadUserRecord_Maniaplanet : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GhostDownload : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_GhostScript : public CWebServicesTaskResult_Ghost {
  const CGameGhostScript* Ghost;
};

struct CGameDataFileTask_GhostLoadMedal : public CWebServicesTaskSequence {
};

struct CGameCtnMediaBlockEntity : public CGameCtnMediaBlock {
  CGameCtnMediaBlockEntity();

};

struct CWebServicesTaskResult_NaturalLeaderBoardInfoList : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_MapListScript : public CWebServicesTaskResult_GameFidList {
  const wstring ParentPath;
  const wstring Path;
  const NodArray MapInfos;
  const array<wstring> SubFolders;
};

struct CGameDataFileTask_MapGetUserList : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_GameFidGetGameList : public CWebServicesTaskSequence {
};

struct CGameDataFileTask_UserDataCacheUpdate : public CWebServicesTaskSequence {
};

struct CGameDataFileManagerScript : public CMwNod {
  enum EMediaType {
    Image = 0,
    Sound = 1,
    Script = 2,
    MatchSettings = 3,
    Module = 4,
    Skins = 5,
  };
  const NodArray TaskResults;
  void TaskResult_Release(UnknownType TaskId);
  void ReleaseTaskResult(UnknownType TaskId);
  const NodArray Campaigns;
  CGameCtnCampaign* Campaign_Get(string CampaignId);
  void Map_RefreshFromDisk();
  CWebServicesTaskResult_MapListScript* Map_GetUserList(UnknownType UserId);
  CWebServicesTaskResult_MapListScript* Map_GetGameList(wstring Path, bool Flatten);
  CWebServicesTaskResult_MapListScript* Map_GetFilteredGameList(uint Scope, wstring Path, bool Flatten);
  const NodArray Ghosts;
  void Ghost_Release(UnknownType GhostId);
  CWebServicesTaskResult_GhostScript* Ghost_Download(wstring FileName, string Url);
  void Replay_RefreshFromDisk();
  CWebServicesTaskResult_ReplayListScript* Replay_GetGameList(wstring Path, bool Flatten);
  CWebServicesTaskResult_ReplayListScript* Replay_GetFilteredGameList(uint Scope, wstring Path, bool Flatten);
  CWebServicesTaskResult_GhostListScript* Replay_Load(wstring Path);
  CWebServicesTaskResult* Replay_Save(wstring Path, CGameCtnChallenge* Map, CGameGhostScript* Ghost);
  CWebServicesTaskResult_FileListScript* Media_GetGameList(EMediaType Type, wstring Path, bool Flatten);
  CWebServicesTaskResult_FileListScript* Media_GetFilteredGameList(EMediaType Type, uint Scope, wstring Path, bool Flatten);
  CWebServicesTaskResult_GameModeListScript* GameMode_GetGameList(uint Scope, wstring Path, bool Flatten);
  CWebServicesTaskResult* Pack_DownloadOrUpdate(wstring DisplayName, string Url);
};

struct CGameDataUserFileManager : public CMwNod {
};

struct CWebServicesTaskResult_GameFidList : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_ReplayListScript : public CWebServicesTaskResult_GameFidList {
  const wstring ParentPath;
  const wstring Path;
  const NodArray ReplayInfos;
  const array<wstring> SubFolders;
};

struct CWebServicesTaskResult_FileList : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_FileListScript : public CWebServicesTaskResult_FileList {
  const wstring ParentPath;
  const wstring Path;
  const array<wstring> Files;
  const array<wstring> SubFolders;
};

struct CGameDataFileTask_FileGetGameList : public CWebServicesTaskSequence {
};

// userName: 'Object'
struct CGameObjectVis : public CMwNod {
};

struct CGameMapScoreManager : public CMwNod {
};

struct CGameMapScoreManager_MapRecord : public CGameMapScoreManager {
};

struct CGameMapScoreManager_MultiAsyncLevel : public CGameMapScoreManager {
};

struct CGameMapScoreManager_SkillPoint : public CGameMapScoreManager {
};

struct CGameScriptMgrTurret : public CMwNod {
  void MapTurrets_Reset();
  CGameScriptTurret* Turret_Create(UnknownType ModelId, vec3 Position, vec3 Direction, uint Clan, CGamePlayer* Owner);
  void Turret_Destroy(CGameScriptTurret* Turret);
  NodArray Turrets;
};

struct CGameScriptTurret : public CMwNod {
  uint Armor;
  uint ArmorMax;
  const CGameScriptTurret* Owner;
};

struct CWebServicesTaskResult_GhostList : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_GhostListScript : public CWebServicesTaskResult_GhostList {
  const NodArray Ghosts;
};

struct CGameMasterServerTask_SetTitlePaid : public CNetMasterServerRequestTask {
};

struct CGameScoreTask_GetNaturalLeaderBoardPlayerList : public CWebServicesTaskSequence {
};

struct CGameCtnMasterServerTask_GetNaturalLeaderBoard : public CNetMasterServerRequestTask {
};

struct CGameNaturalLeaderBoardInfoScript : public CMwNod {
  const uint Rank;
  const UnknownType UserId;
  const string Login;
  const wstring DisplayName;
  const uint Score;
  const wstring FileName;
  const string ReplayUrl;
};

struct CWebServicesTaskResult_NaturalLeaderBoardInfoListScript : public CWebServicesTaskResult_NaturalLeaderBoardInfoList {
  const uint FromIndex;
  const uint Count;
  const NodArray LeaderBoardInfo;
};

struct CWebServicesTaskResult_RealLeaderBoardInfoListScript : public CWebServicesTaskResult_RealLeaderBoardInfoList {
  const uint FromIndex;
  const uint Count;
  const NodArray LeaderBoardInfo;
};

struct CGameMatchSettingsManagerScript : public CMwNod {
  void Debug_MatchSettings_New();
  void Debug_MatchSettings_Save();
  void Debug_MatchSettings_SaveAs();
  void Debug_MatchSettings_EditScriptSettings();
  void MatchSettings_Refresh();
  CGameMatchSettingsScript* MatchSettings_Create(wstring FilePath);
  void MatchSettings_Save(CGameMatchSettingsScript* MatchSettings);
  CGameMatchSettingsScript* MatchSettings_SaveAs(wstring FilePath, CGameMatchSettingsScript* MatchSettings);
  void MatchSettings_EditScriptSettings(CGameMatchSettingsScript* MatchSettings);
  const bool MatchSettings_EditScriptSettings_Ongoing;
  const NodArray MatchSettings;
};

struct CGameMatchSettingsScript : public CMwNod {
  const wstring Name;
  const wstring FileName;
  wstring ScriptModeName;
  bool ScriptModeName_Check(wstring ScriptModeName);
  void ScriptModeName_Set(wstring ScriptModeName);
  const NodArray Playlist;
  bool Playlist_FileExists(wstring File);
  bool Playlist_FileMatchesMode(wstring File);
  void Playlist_Add(wstring File);
  void Playlist_Remove(uint Index);
  void Playlist_SwapUp(uint Index);
  void Playlist_SwapDown(uint Index);
};

struct CGameDataFileTask_PackDownloadOrUpdate : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Title : public CWebServicesTaskResult {
};

struct CGameMatchSettingsPlaylistItemScript : public CMwNod {
  const wstring Name;
  const bool FileExists;
};

struct CGameScoreTask_GetCampaignOpponentRecords : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_MapRecordListScript : public CWebServicesTaskResult_PlayerMapRecords {
  const NodArray MapRecordList;
};

struct CGamePlayerMapRecordScript : public CMwNod {
  const string Context;
  const string MapUid;
  const wstring MapName;
  const uint Score;
  const uint Time;
  const uint RespawnCount;
  const uint Timestamp;
  const uint MultiAsyncLevel;
  const uint SkillPoints;
  const wstring FileName;
  const string ReplayUrl;
};

struct CGameDataFileTask_GameModeGetGameList : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_GameModeListScript : public CWebServicesTaskResult {
  const NodArray GameModes;
};

struct CGameGameModeInfoScript : public CMwNod {
  const wstring Name;
  const wstring Path;
  const wstring Description;
  const wstring Version;
  const array<wstring> CompatibleMapTypes;
};

struct CGameUserProfileWrapper : public CMwNod {
  enum EMapEditorMode {
    Ask = 0,
    Advanced = 1,
  };
  EMapEditorMode MapEditorMode;
};

struct CGameEditorPluginAPI : public CMwNod {
  CGameEditorPluginAPI();

  void Undo();
  void Redo();
};

struct CGameEditorVehiclePluginAPI : public CGameEditorPluginAPI {
  CGameEditorVehiclePluginAPI();

};

struct CGameBlockItemVariantChooser : public CMwNod {
  const CGameItemModel* ItemModelToView;
  const CGameCtnBlockInfo* ArchetypeBlockInfo;
  bool ShowOriginalVariant;
  wstring VariantType;
  uint VariantGroupCurrent;
  const uint VariantGroupMax;
  uint RandomVariantCurrent;
  const uint RandomVariantMax;
  void NextVariantType();
  void PreviousVariantType();
  void NextVariantGroup();
  void PreviousVariantGroup();
  void NextRandomVariant();
  void PreviousRandomVariant();
};

struct CGameArenaPlayer : public CMwNod {
};

} // namespace Game

namespace Graphic {

struct GxLight : public CMwNod {
  GxLight();

  UnknownType Color;
  UnknownType Intensity;
  UnknownType DiffuseIntensity;
  float SpecularIntens;
  float SpecularPower;
  UnknownType ShadowIntensity;
  UnknownType ShadowRGB;
  bool DoLighting;
  bool LightMapOnly;
  bool IsInversed;
  bool IsShadowGen;
  bool DoSpecular;
  bool HasLensFlare;
  UnknownType FlareIntensity;
  bool HasSprite;
  bool IgnoreLocalScale;
  bool EnableGroup0;
  bool EnableGroup1;
  bool EnableGroup2;
  bool EnableGroup3;
  const CMwNod* PlugLight;
};

struct GxLightBall : public GxLightPoint {
  GxLightBall();

  UnknownType AmbientRGB;
  UnknownType Radius;
  bool CustomRadiusSpecular;
  UnknownType RadiusSpecular;
  bool CustomRadiusIndex;
  UnknownType RadiusIndex;
  bool CustomRadiusShadow;
  UnknownType RadiusShadow;
  bool CustomRadiusFlare;
  UnknownType RadiusFlare;
  float EmittingRadius;
  float EmittingCylinderLenZ;
  UnknownType AttenuationType;
  UnknownType TweakHN2;
  const UnknownType AttHTnLR;
  const UnknownType AttHTnLR2;
  UnknownType AttHyper2DerivAt0;
  UnknownType AttHyper2Tension;
};

struct GxLightPoint : public GxLightNotAmbient {
  GxLightPoint();

  float FlareSize;
  float FlareBiasZ;
};

struct CGxFog : public CMwNod {
  CGxFog();

};

struct GxLightAmbient : public GxLight {
  GxLightAmbient();

  float ShadeMinY;
  float ShadeMaxY;
};

struct GxLightNotAmbient : public GxLight {
  GxLightNotAmbient();

};

struct GxLightDirectional : public GxLightNotAmbient {
  GxLightDirectional();

  UnknownType DblSidedRGB;
  UnknownType ReverseRGB;
  UnknownType ReverseIntens;
  float EmittAngularSize;
  float FlareAngularSize;
  UnknownType FlareIntensPower;
  bool UseBoundaryHint;
  vec3 BoundaryHintPos;
  float DazzleAngleMax;
  UnknownType DazzleIntensity;
};

struct GxFogBlender : public CMwNod {
  GxFogBlender();

};

struct GxLightFrustum : public GxLightBall {
  GxLightFrustum();

  bool IsOrtho;
  float NearZ;
  float FarZ;
  float FovY;
  float RatioXY;
  float SizeX;
  float SizeY;
  bool DoAttenuation;
  _EEApply Apply;
  _EETechnique Technique;
  uint iShadowGroup;
  bool DoFadeZ;
  UnknownType RatioFadeZ;
  bool UseFacePosX;
  bool UseFaceNegX;
  bool UseFacePosY;
  bool UseFaceNegY;
  bool UseFacePosZ;
  bool UseFaceNegZ;
};

struct GxLightSpot : public GxLightBall {
  GxLightSpot();

  UnknownType AngleInner;
  UnknownType AngleOuter;
  bool CustomAngleFlare;
  UnknownType AngleFlare;
  bool CustomAngleShadow;
  UnknownType AngleInnerShadow;
  UnknownType AngleOuterShadow;
};

} // namespace Graphic

namespace Function {

// File extension: 'FuncKey.Gbx'
struct CFuncKeys : public CFunc {
  array<float> Xs;
  void Reset();
};

struct CFuncKeysTrans : public CFuncKeys {
  CFuncKeysTrans();

  array<vec3> Trans;
};

// File extension: 'KeysTransQuat.Gbx'
struct CFuncKeysTransQuat : public CFuncKeysTrans {
  CFuncKeysTransQuat();

  void AddTransQuatKey(float X, vec3 Pos, vec3 Dir, vec3 Up);
};

// File extension: 'KeysPath.Gbx'
struct CFuncKeysPath : public CFuncKeysTransQuat {
  CFuncKeysPath();

  _ECFuncKeysPath__EPathDrawMode DrawMode;
  UnknownType BSplineTension;
  UnknownType BSplineBias;
  UnknownType BetaSplineTension;
  UnknownType BetaSplineSkew;
  bool UseTangentOrientation;
};

struct CFuncPlug : public CFunc {
  float Period;
  float Phase;
  bool AutoCreateMotion;
  bool RandomizePhase;
  UnknownType InputValId;
};

struct CFuncLightIntensity : public CFuncLight {
  CFuncLightIntensity();

  float Intensity0;
  float Intensity1;
  float FlickerDuration;
};

struct CFuncTreeTranslate : public CFuncTree {
  CFuncTreeTranslate();

  vec3 StartPoint;
  vec3 EndPoint;
  bool IsPingPong;
  bool IsSmooth;
};

struct CFuncEnum : public CFunc {
  CFuncEnum();

};

// File extension: 'Func.Gbx'
struct CFunc : public CMwNod {
};

struct CFuncShader : public CFuncPlug {
};

struct CFuncKeysVisual : public CFuncKeys {
  CFuncKeysVisual();

};

// File extension: 'FuncShader.Gbx'
struct CFuncShaders : public CFuncShader {
  CFuncShaders();

  NodArray FuncShaders;
};

// File extension: 'FuncShader.Gbx'
struct CFuncShaderLayerUV : public CFuncShader {
  CFuncShaderLayerUV();

  string LayerName;
  UnknownType LayerEnum;
  _ESignalType SignalType;
  vec2 Base;
  vec2 Amplitude;
  vec2 Offset;
  vec2 Scale;
  UnknownType Angle;
  UnknownType AngleStart;
  UnknownType AngleEnd;
  uint NbSubTexture;
  uint NbSubTexturePerLine;
  uint NbSubTexturePerColumn;
  bool TopToBottom;
  bool WriteX;
  bool WriteY;
  bool WriteZ;
  bool WriteW;
  bool EnablePingPong;
  bool EnableSmooth;
  bool EnableMipMapping;
  bool EnableBlending;
  bool EnableSmoothBlend;
  CPlugBitmap* BitmapCopy;
};

struct CFuncShaderFxFactor : public CFuncShader {
  CFuncShaderFxFactor();

  _ECFuncShaderFxFactor__EMapFx MapFx;
  _ECFuncShaderFxFactor__EFctType Type;
  float Base;
  float Amplitude;
  float Offset;
};

struct CFuncLight : public CFuncPlug {
  _ECFuncLight__EFctType FctType;
  float FlickPeriod;
  uint FlickCount;
};

struct CFuncLightColor : public CFuncLight {
  CFuncLightColor();

  UnknownType Color0;
  UnknownType Color1;
  CPlugFileImg* Image;
};

// File extension: 'FuncKeysReals.Gbx'
struct CFuncKeysReal : public CFuncKeys {
  CFuncKeysReal();

  _EERealInterp RealInterp;
  bool ForceTangentMinX;
  float ForcedTangentMinX;
  bool ForceTangentMaxX;
  float ForcedTangentMaxX;
  array<float> Ys;
};

struct CFuncVisual : public CFuncPlug {
};

struct CFuncTree : public CFuncPlug {
};

struct CFuncVisualShiver : public CFuncVisual {
  CFuncVisualShiver();

  float Amplitude;
  vec3 OffsetPlane;
  _EEShiverType ShiverType;
  vec3 Axis;
  bool UsePlane;
  vec3 PlanePoint;
  vec3 PlaneNormal;
  float PlaneMinDist;
  bool UsePlane2;
  vec3 Plane2Point;
  vec3 Plane2Normal;
  float Plane2MinDist;
};

// File extension: 'FuncTree.Gbx'
struct CFuncTreeRotate : public CFuncTree {
  CFuncTreeRotate();

  float AngleMin;
  float AngleMax;
};

struct CFuncTreeBend : public CFuncTree {
  CFuncTreeBend();

  float Amplitude;
};

// File extension: 'PathMesh.Gbx'
struct CFuncPathMesh : public CFunc {
  CFuncPathMesh();

  CPlugVisual3D* Visual;
  vec3 OffsetVisualPos;
  NodArray Locations;
};

struct CFuncPathMeshLocation : public CFunc {
  CFuncPathMeshLocation();

  string Name;
  UnknownType Location;
};

struct CFuncKeysReals : public CFuncKeys {
  CFuncKeysReals();

};

// File extension: 'KeysBlendShape.Gbx'
struct CFuncVisualBlendShapeSequence : public CFuncVisual {
  CFuncVisualBlendShapeSequence();

};

struct CFuncKeysNatural : public CFuncKeys {
  CFuncKeysNatural();

  array<uint> Naturals;
};

struct CFuncTreeSubVisualSequence : public CFuncTree {
  CFuncTreeSubVisualSequence();

  CFuncKeysNatural* SubKeys;
  bool SimpleModeIsLooping;
  uint SimpleModeStartIndex;
  uint SimpleModeEndIndex;
};

struct CFuncShaderTweakKeysTranss : public CFuncShader {
  CFuncShaderTweakKeysTranss();

};

// File extension: 'FuncWeather.Gbx'
struct CFuncWeather : public CFunc {
  CFuncWeather();

  CFuncClouds* FuncClouds;
  CPlugMaterial* MaterialSky_Night;
  CPlugMaterial* MaterialSky_SunRise;
  CPlugMaterial* MaterialSky_Day;
  CPlugMaterial* MaterialSky_SunFall;
  CPlugMaterial* MaterialSea0;
  CPlugMaterial* MaterialSea1;
  CPlugFileImg* ImageLightAmb;
  CPlugFileImg* ImageLightDirSun;
  CPlugFileImg* ImageLightDirMoon;
  CPlugFileImg* ImageLightDirDblSided;
  CPlugBitmap* BitmapFlareSun;
  float FlareAngularSizeSun;
  CPlugBitmap* BitmapFlareMoon;
  float FlareAngularSizeMoon;
  CPlugBitmap* BitmapSkyGradV;
  CPlugFileImg* ImageFogColor;
  CPlugFileImg* ImageSeaColor;
  CPlugBitmap* BitmapRainFid;
  CMwNod* SceneFxFid;
  float CameraFarZ;
  bool FogByVertex;
  UnknownType FogRGB;
  _EEGxFogFormula FogFormula;
  _EEGxFogSpace FogSpace;
  float FogLinearStart;
  float FogLinearEnd;
  float FogExpDensity;
  UnknownType DayFogColor;
  float DayFogStart;
  float DayFogEnd;
  float DayFogDensity;
  GxFogBlender* FogBlender;
  void SeaTwkResetToShaderDefaults();
  vec2 LDirSpecIntens;
  vec2 LDirSpecPower;
  UnknownType SeaTwkReflecIntensNight;
  UnknownType SeaTwkReflecIntensDay;
  UnknownType SeaTwkReflecIntensMidNight;
  UnknownType SeaTwkReflecIntensMidDay;
  UnknownType SeaTwkReflecIntensTMNight;
  UnknownType SeaTwkReflecIntensTMDay;
  UnknownType SeaTwkReflecIntensTMmidNight;
  UnknownType SeaTwkReflecIntensTMmidDay;
  UnknownType SeaTwkWaterColor_Night;
  UnknownType SeaTwkWaterColor_Day;
};

// File extension: 'FuncPuffLull.Gbx'
struct CFuncPuffLull : public CFunc {
  CFuncPuffLull();

  float TileSizeInWorld;
  UnknownType PuffWDMax;
  UnknownType LullWDMax;
  uint GenCount;
  UnknownType GenPuffRatio;
  vec2 GenSize;
  UnknownType GenPuffWDMin;
  UnknownType GenPuffWDMax;
  UnknownType GenLullWDMin;
  UnknownType GenLullWDMax;
  string GenLifeTimeMin;
  string GenLifeTimeMax;
  UnknownType BlendPuff;
  UnknownType BlendLull;
  UnknownType Combine2nd8th;
  CPlugMaterial* MaterialPuff;
  CPlugMaterial* MaterialLull;
};

struct CFuncEnvelope : public CFunc {
  CFuncEnvelope();

  float KeyFrameValue0;
  float KeyFrameValue1;
  float KeyFrameValue2;
  float KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
  float Frequency;
  float Amplitude;
  _EModulation ModFunc;
};

struct CFuncSegment : public CFunc {
  CFuncSegment();

  const uint KeyCount;
};

// File extension: 'FuncColorGradient.Gbx'
struct CFuncColorGradient : public CFunc {
  CFuncColorGradient();

  UnknownType ColorSpace;
  UnknownType KeyFrameValue0;
  UnknownType KeyFrameValue1;
  UnknownType KeyFrameValue2;
  UnknownType KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
};

// File extension: 'FuncFullColorGradient.Gbx'
struct CFuncFullColorGradient : public CFunc {
  CFuncFullColorGradient();

  UnknownType KeyFrameValue0;
  UnknownType KeyFrameValue1;
  UnknownType KeyFrameValue2;
  UnknownType KeyFrameValue3;
  float KeyFramePos1;
  float KeyFramePos2;
};

// File extension: 'FuncClouds.Gbx'
struct CFuncClouds : public CFunc {
  CFuncClouds();

  CFuncCloudsSolids* Solids;
  CPlugFileImg* ImageColorMin;
  CPlugFileImg* ImageColorMax;
  CPlugMaterial* MaterialModelToForce;
  CFuncCloudsParam* CloudsParam;
};

struct CFuncCurvesReal : public CMwNod {
  CFuncCurvesReal();

  UnknownType Id;
  array<float> Xs;
  NodArray Curves;
};

struct CFuncCurves2Real : public CMwNod {
  CFuncCurves2Real();

  UnknownType Id;
  array<float> Xs;
  NodArray Curves2;
};

struct CFuncNoise : public CFunc {
  CFuncNoise();

  float ScaleX;
  float ScaleY;
  float ScaleZ;
  float ScaleT;
  float PeriodX;
  float PeriodY;
  float PeriodZ;
  float PeriodT;
  float ValMin;
  float ValMax;
};

struct CFuncDayTime : public CFunc {
  CFuncDayTime();

};

// File extension: 'FuncCloudsParam.Gbx'
struct CFuncCloudsParam : public CFunc {
  CFuncCloudsParam();

  UnknownType HeightCenter;
  vec2 HeightCenterXZ;
  float BottomNearZ;
  array<float> PointDists;
  array<float> PointHeights;
  float BottomFarZ;
  float SpeedScale;
  UnknownType Lighting;
  bool MaterialUseT3b;
};

// File extension: 'FuncCloudsSolids.Gbx'
struct CFuncCloudsSolids : public CFunc {
  CFuncCloudsSolids();

  vec2 GridSizeXZ;
  const NodArray SolidFids;
};

} // namespace Function

namespace Hms {

struct CHmsCamera : public CHmsPoc {
  CHmsCamera();

  bool PickEnable;
  bool UseViewDependantRendering;
  UnknownType ViewportRatio;
  UnknownType iPrecalcRender;
  UnknownType NextLocation;
  void ResetLocation();
  bool IsOverlay3d;
  bool ClearColorEnable;
  UnknownType ClearColor;
  bool UseZBuffer;
  bool ScissorEnable;
  bool FovRectEnable;
  bool ClearZBuffer;
  vec2 DrawRectMin;
  vec2 DrawRectMax;
  vec2 ScissorRectMin;
  vec2 ScissorRectMax;
  vec2 FovRectMin;
  vec2 FovRectMax;
  float NearZ;
  float FarZ;
  float Fov;
  float ClampFovX;
  float ClampFovY;
  bool ClampFovAuto;
  float ClampAutoRatioXy;
  float RatioXY;
  const CHmsPicker* Picker;
  const uint GroupIndex;
  float DofFocusZ;
  UnknownType DofLensMode;
  float DofLensFocal;
  float DofLensSize;
  float StereoScreenDist;
  UnknownType Desaturate01;
  UnknownType FadeToBlack01;
  float AsyncPrevDeltaTimeMax;
  UnknownType AsyncPrevDeltaRotationScale;
  float AlphaClipFarZ;
  bool ZClipEnable;
  float ZClipValue;
  float ZClipMargin;
  UnknownType ZClipZBuffer1End;
  UnknownType ZClipZBuffer2Start;
  bool TargetFpsEnable;
  UnknownType TargetFpsZClipSpeed;
  float TargetFpsZClipMinValue;
};

struct CHmsCorpus : public CHmsZoneElem {
  CHmsCorpus();

  const CHmsItem* Item;
};

struct CHmsItem : public CMwNod {
  CHmsItem();

  CPlugSolid* Solid;
  const CHmsCorpus* Corpus;
  const CMwNod* SceneMobil;
  bool IsVisionStatic;
  bool IsStatic;
  bool IsBackground;
  bool CopyCameraTranslationXZ;
  bool BackgroundZClipCullBefore;
  bool UseAccurateBBoxTest;
  bool IsForcePointDynamicCollisionResponse;
  uint CountShadowTexCasted;
  bool CanSelfShadow;
  bool CanFakeShadow;
  bool CastShadowGrp0;
  bool CastShadowGrp1;
  bool CastShadowGrp2;
  bool CastShadowGrp3;
  bool RecvShadowGrp0;
  bool RecvShadowGrp1;
  bool RecvShadowGrp2;
  bool RecvShadowGrp3;
  CHmsItemShadow* ItemShadow;
  bool LightLensFlareEnable;
  bool LightEGroup0;
  bool LightEGroup1;
  bool LightEGroup2;
  bool LightEGroup3;
  bool VIdReflected;
  bool VIdReflectMirror;
  bool VIdRefracted;
  bool VIdViewDepBump;
  bool VIdViewDepOcclusion;
  bool VIdOnlyRefracted;
  bool VIdHideWhenUnderground;
  bool VIdFoilage;
  bool VIdHideAlways;
  bool VIdHideButPick;
  bool VIdBackground;
  bool VIdGrassRGB;
  bool VIdLightGenP;
  bool VIdVehicle;
  bool VIdHideOnlyDirect;
  bool VIdInvisibleStopBounce;
  bool IsVisible;
};

struct CHmsZone : public CMwNod {
  CHmsZone();

  bool IsVisible;
  UnknownType CorpusCats;
  bool FogByVertex;
  UnknownType FogRGB;
  _EEGxFogFormula FogFormula;
  _EEGxFogSpace FogSpace;
  float FogLinearStart;
  float FogLinearEnd;
  float FogExpDensity;
  NodArray PrecalcRenders;
  const UnknownType CorpusLights;
  const NodArray CorpusLightsDyna;
  const NodArray DynamicLightArrays;
  const NodArray DynamicDecalArrays;
  const NodArray StaticDecalArrays;
  bool MRMaskWater;
  float MRTileH;
  vec3 MRPoint;
  vec3 MRNormal;
  bool IVIdMaskReflected;
  bool IVIdMaskReflectMirror;
  bool IVIdMaskRefracted;
  bool IVIdMaskViewDepBump;
  bool IVIdMaskViewDepOcclusion;
  bool IVIdMaskOnlyRefracted;
  bool IVIdMaskHideWhenUnderground;
  bool IVIdMaskFoilage;
  bool IVIdMaskHideAlways;
  bool IVIdMaskHideButPick;
  bool IVIdMaskBackground;
  bool IVIdMaskGrassRGB;
  bool IVIdMaskLightGenP;
  bool IVIdMaskVehicle;
  bool IVIdMaskHideOnlyDirect;
  bool IVIdMaskInvisibleStopBounce;
  bool IVIdRefReflected;
  bool IVIdRefReflectMirror;
  bool IVIdRefRefracted;
  bool IVIdRefViewDepBump;
  bool IVIdRefViewDepOcclusion;
  bool IVIdRefOnlyRefracted;
  bool IVIdRefHideWhenUnderground;
  bool IVIdRefFoilage;
  bool IVIdRefHideAlways;
  bool IVIdRefHideButPick;
  bool IVIdRefBackground;
  bool IVIdRefGrassRGB;
  bool IVIdRefLightGenP;
  bool IVIdRefVehicle;
  bool IVIdRefHideOnlyDirect;
  bool IVIdRefInvisibleStopBounce;
  bool SVIdMaskReflected;
  bool SVIdMaskReflectMirror;
  bool SVIdMaskRefracted;
  bool SVIdMaskViewDepBump;
  bool SVIdMaskViewDepOcclusion;
  bool SVIdMaskOnlyRefracted;
  bool SVIdMaskHideWhenUnderground;
  bool SVIdMaskFoilage;
  bool SVIdMaskHideAlways;
  bool SVIdMaskHideButPick;
  bool SVIdMaskBackground;
  bool SVIdMaskGrassRGB;
  bool SVIdMaskLightGenP;
  bool SVIdMaskVehicle;
  bool SVIdMaskHideOnlyDirect;
  bool SVIdMaskInvisibleStopBounce;
  bool SVIdRefReflected;
  bool SVIdRefReflectMirror;
  bool SVIdRefRefracted;
  bool SVIdRefViewDepBump;
  bool SVIdRefViewDepOcclusion;
  bool SVIdRefOnlyRefracted;
  bool SVIdRefHideWhenUnderground;
  bool SVIdRefFoilage;
  bool SVIdRefHideAlways;
  bool SVIdRefHideButPick;
  bool SVIdRefBackground;
  bool SVIdRefGrassRGB;
  bool SVIdRefLightGenP;
  bool SVIdRefVehicle;
  bool SVIdRefHideOnlyDirect;
  bool SVIdRefInvisibleStopBounce;
  uint VPackerC3CellX;
  uint VPackerC3CellY;
  uint VPackerC3CellZ;
  const float VPackerPercentCellUsed;
  const float VPackerAverageObjectPerCell;
  const float VPackerAveragePackPerCell;
  const float VPackerAverageKVertPerPack;
  const float VPackerPercentObjectOutside;
  const uint VPackerObjectInside;
  const uint VPackerObjectOutside;
  const uint VPackerNbUnpackableVSpace;
  void VPackerForceBBoxUpdate();
  void VPackerLogUsageStats();
  void ForceUpdate_ReflectLQ();
  void TestDynaSpriteMgr();
  CPlugBitmap* BitmapWaterFog;
  CPlugBitmap* BitmapCubeReflectHardSpecA;
  CPlugBitmap* BitmapCubeReflectHdrAlpha2;
  const CMwNod* UserData;
};

struct CHmsPortal : public CMwNod {
  CHmsPortal();

  bool IsActive;
  bool NeedClipping2D;
  bool NeedClipping3D;
  bool CanSeeThrough;
  UnknownType SeeThroughOpacity;
  bool IsVisualVisible;
  bool IsPickingPossible;
  bool CanPassThrough;
  bool SoundCanPassThrough;
  bool IsDirectPathSet;
  int DirectOcclusion;
  float DirectOcclusionSpectralRatio;
  float DirectOcclusionRatio;
  int IndirectOcclusion;
  float IndirectOcclusionSpectralRatio;
  float IndirectOcclusionRatio;
  int IndirectObstruction;
  float IndirectObstructionSpectralRatio;
};

struct CHmsPoc : public CHmsZoneElem {
  CHmsPoc();

  bool IsActive;
};

struct CHmsZoneElem : public CMwNod {
  CHmsZoneElem();

  const CHmsZone* Zone;
  UnknownType Location;
  vec3 Vel;
};

struct CHmsZoneOverlay : public CHmsZone {
  CHmsZoneOverlay();

  _EEnablePick PickEnableMode;
  const uint SortOrder;
  UnknownType AdaptRatio;
  bool UseZBuffer;
  vec2 DrawRectMin;
  vec2 DrawRectMax;
  vec3 FrustumCenter;
  vec3 FurstrumHfDiag;
  bool DescIsClearColorEnable;
  bool DescIsClearDepthEnable;
  bool DescIsClearStencilEnable;
  UnknownType DescClearColor;
  NodArray CorpusVisibles;
  CHmsCamera* In3d_Camera;
  bool StickToHmd;
};

struct CHmsLight : public CHmsPoc {
  CHmsLight();

  UnknownType UpdateType;
  const GxLight* MainGxLight;
  CPlugBitmap* BitmapFlare;
  CPlugBitmap* BitmapSprite;
  CPlugBitmap* BitmapProjector;
  CHmsCorpusLight* CorpusLight;
  const CHmsItem* ItemContainer;
  bool ForceShadowGroup;
  uint ForceShadowGroupIndex;
  bool NeverSkipShadow;
};

struct CHmsPortalProperty : public CMwNod {
  CHmsPortalProperty();

  const CHmsPortal* Portal1;
  const CHmsPortal* Portal2;
  bool Visibility;
  bool Audibility;
};

struct CHmsCorpusLight : public CHmsZoneElem {
  CHmsCorpusLight();

  CHmsLight* Light;
};

struct CHmsViewport : public CMwNod {
  const wstring DisplayName;
  const uint PixelCountX;
  const uint PixelCountY;
  _ECPlugShaderWrapper__ERenderDevice DeviceKind;
  uint iSubDevice;
  UnknownType PC3_Quality;
  _ECPlugBitmap BitmapQuality;
  UnknownType MultiSampleType;
  UnknownType DeferredAA;
  UnknownType MaxFiltering;
  uint AnisotropicLevel;
  uint DisplaySyncIntervalCount;
  bool EnableTripleBuffer;
  bool ArePortalsActive;
  uint PortalMaxRecur;
  bool IsPickingPossible;
  const uint TimeTickToPresent;
  const uint TimeQueryIssueToFinish;
  bool TargetFpsEnable;
  uint TargetFps;
  UnknownType TargetFpsMinScaleZ;
  UnknownType TargetFpsMaxScaleZ;
  UnknownType TargetFpsSpeed;
  const float AverageFps;
  float MipScaleZ_SysConfig;
  float MipScaleZ_Production;
  const float MipScaleZ;
  UnknownType TextureRender;
  bool ShadowCastBack;
  UnknownType RenderShadows;
  UnknownType RenderProjectors;
  bool PreLoadProjectors;
  bool EnableLightFlares;
  bool RenderZoneVPacker;
  bool EnableTessellation;
  bool IsPureDevice;
  UnknownType FullScreenBrightness;
  UnknownType FullScreenContrast;
  UnknownType FullScreenGamma;
  const array<wstring> DisplayNames;
  const wstring ScreenShotFullName;
  bool ScreenShotForceRes;
  uint ScreenShotWidth;
  uint ScreenShotHeight;
  bool ScreenShotUseAlpha;
  uint ScreenShotTileX;
  uint ScreenShotTileY;
  UnknownType PixelOutput;
  void ScreenShotDoCaptureWebp();
  void ScreenShotDoCaptureTga();
  void ScreenShotDoCaptureJpg();
  void ScreenShotDoCaptureDDS();
  void ShaderConstantLogBindedValues();
  NodArray Underlays;
  NodArray Cameras;
  NodArray Overlays;
  CSystemConfig* SystemConfig;
  const CSystemWindow* SystemWindow;
  const CHmsPicker* Picker;
  CHmsConfig* Config;
  CHmsAmbientOcc* HmsAmbientOcc;
  UnknownType AmbientOcc;
  bool MgrParticle_UseCameraMotion;
  bool MgrParticle_PauseKeepCameraMotion;
};

struct CHmsPrecalcRender : public CMwNod {
  CHmsPrecalcRender();

  CPlugBitmap* BitmapRGB;
  CPlugBitmap* BitmapDepth;
  _EEBitmapDepth BitmapDepthMode;
  string TreeIdDepthGen;
  const bool IsTreeDepthGenFound;
  float ZoomFactor;
  UnknownType ScrollPosX;
  UnknownType ScrollPosY;
};

struct CHmsShadowGroup : public CMwNod {
  CHmsShadowGroup();

  uint TexelCountX;
  uint TexelCountY;
  uint MaxShadowCountGrp0;
  float MappingQuality;
  float MaxTexelPerMeter;
  bool Enable;
  bool EnableLightDir;
  bool EnableLightPos;
  bool GameAllowLightDir;
  bool GameAllowLightPos;
  UnknownType LocalIntensity;
  bool NeedSelfShadow;
  bool ForceShadowMask;
  bool DepthNeed32b;
  bool IsStatic;
  bool IsStaticDirty;
  bool ForceWorldAlign;
  bool UseHqCasterBBox;
  bool AllStaticItemAreCaster;
  bool ShadowInShader;
  bool TmBackgroundReceives;
  bool TmBackgroundCast;
  bool DepthTestMaskRender;
  UnknownType DepthBiasScale;
  uint DepthBiasConst;
  float DepthBiasSlope;
  float DepthBiasConstShaderExtra;
  UnknownType ShadeSlope;
  UnknownType Soft2dSlope;
  vec2 SoftSizeInW;
  float OpacityMipMapLodBias;
  uint MaskBlurTexelCount;
  uint PssmTexelCountX;
  uint PssmTexCount;
  const uint PssmTexCountActive;
  UnknownType PssmOverlapIn01;
  float PssmDistNF0;
  float PssmDistNF1;
  float PssmDistNF2;
  float PssmDistNF3;
  float PssmDistNF4;
  float PssmDistScale;
  float PssmSkipCmpStaticScale;
};

struct CHmsViewportPerfDbg : public CMwNod {
  bool UseAverage;
  bool ShowMem;
  bool ForceOcclusion;
  UnknownType ShowFps;
  UnknownType Profile;
  UnknownType SumUp;
  UnknownType VisionSkip;
  bool SmallShader;
  bool SmallScissor;
  bool DebugParticle;
  UnknownType FillForced;
  bool IsFillRateEnable;
  bool IsFillRateZTestEnable;
  bool IsFillRateStencilTestEnable;
  bool IsFillRateNoMipMapEnable;
  bool IsFillRateLegendEnable;
};

struct CHmsMgrVisDyna : public CMwNod {
};

struct CHmsFogPlane : public CHmsZoneElem {
  CHmsFogPlane();

};

struct CHmsPicker : public CMwNod {
  CHmsPicker();

  bool IsEnable;
  const vec2 InputPos;
  const CHmsCamera* Camera;
  const CHmsZoneOverlay* Overlay;
  const vec2 PosRect;
  const vec3 RayDir;
  const vec3 RayPos;
  const uint In3dQuadIndex;
  const CMwNod* PickedUserData;
  const CHmsCorpus* Corpus;
  const CPlugTree* Tree;
  const CPlugSolid2Model* Solid2Model;
  const uint VisDynaHandle;
  const vec3 PickPosV;
  const vec3 PickPosZ;
  const vec3 PickNormalV;
  const vec3 PickNormalZ;
  const float PickZ;
  const float PickZNoBiasZ;
  const float Depth;
};

struct CHmsConfig : public CMwNod {
  CHmsConfig();

  bool FreezeViewportRun;
  uint ViewportRunFrameCount;
  const uint ViewportRunFrameRemaining;
  const NodArray ShadowGroups;
};

struct CHmsItemShadow : public CMwNod {
  CHmsItemShadow();

  UnknownType Intensity;
  float FallOffStart;
  float FallOffEnd;
  float VolumeMaxZ;
  CHmsShadowGroup* GroupOverride;
};

// File extension: 'LightMap.Gbx'
struct CHmsLightMap : public CMwNod {
  CHmsLightMap();

};

struct CHmsLightMapCache : public CMwNod {
  CHmsLightMapCache();

};

// File extension: 'LightMapMood.Gbx'
struct CHmsLightMapMood : public CMwNod {
  CHmsLightMapMood();

};

struct CHmsLightMapAlloc : public CMwNod {
  CHmsLightMapAlloc();

};

struct CHmsCorpus2d : public CHmsCorpus {
  CHmsCorpus2d();

  uint ClipRectIndex;
  uint In3dQuadIndex;
};

struct CHmsAmbientOcc : public CMwNod {
  CHmsAmbientOcc();

};

struct CHmsLightProbeGrid : public CMwNod {
};

struct CHmsLightMapCacheSH : public CMwNod {
  CHmsLightMapCacheSH();

};

struct CHmsDynaZone : public CMwNod {
  const uint AllocatedByteCount;
  const uint UsedByteCount;
  const uint cDynaItem;
};

struct CHmsCollZone : public CMwNod {
  void UpdateStatic();
  const uint AllocatedByteCount;
  const uint UsedByteCount;
  const uint cItemStatic;
  const uint cItemContinuous;
  const uint cItemDiscrete;
  const uint cSurfaceStatic;
  const uint cSurfaceContinuous;
  const uint cSurfaceDiscrete;
  vec3 WarpExclusionBoxCenter;
  vec3 WarpExclusionBoxHalf;
  float CellSize;
  float CellHeight;
  float AgentHeight;
  float AgentRadius;
  float AgentMaxClimb;
  float RegionMinSize;
  float RegionMergeSize;
  float EdgeMaxLen;
  float EdgeMaxError;
  float DetailSampleDist;
  float DetailSampleMaxError;
  float AgentMaxSlope;
  int VertsPerPoly;
  bool MonotonePartitioning;
  uint TileCountX;
  uint TileCountZ;
  bool PartialNavMesh;
  vec3 PartialNavMeshBBMin;
  vec3 PartialNavMeshBBMax;
};

struct CHmsLightMapParam : public CMwNod {
  CHmsLightMapParam();

};

struct CHmsLightArray : public CMwNod {
  CHmsLightArray();

};

struct CHmsDecalArray : public CMwNod {
  CHmsDecalArray();

};

struct CHmsLightProbePartition : public CMwNod {
};

struct CHmsMgrVisEnvMap : public CMwNod {
};

struct CHmsMgrVisDynaDecal2d : public CMwNod {
};

struct CHmsMgrVisParticle : public CMwNod {
};

struct CHmsVisMiniMap : public CMwNod {
};

struct CHmsCollType_Warp : public CMwNod {
};

struct CHmsCollType_VehicleVisForBodyPart : public CMwNod {
};

struct CHmsMoodBlender : public CMwNod {
};

} // namespace Hms

namespace Control {

struct CControlBase : public CSceneToy {
  void Draw();
  void Clean();
  UnknownType AlignHorizontal;
  UnknownType AlignVertical;
  CControlStyle* Style;
  bool IsReadOnly;
  bool AddFocusArea;
  bool DrawBackground;
  bool InheritVisualStyle;
  bool KeepFocusWeak;
  const uint ClipRectAllocatedIndex;
  const uint ClipRectCurrentIndex;
  bool DisableI18n;
  const bool HasSolid;
  bool IsSubSolid;
  bool IsDynamic;
  bool IsFocused;
  bool IsSelected;
  bool IsHiddenExternal;
  const bool IsVisualFocus;
  const bool IsVisualSelect;
  const CControlContainer* Parent;
  CMwNod* Nod;
  string StackText;
  wstring ToolTip;
  const bool IsHiddenInternal;
  const bool IsFocusCaptured;
  const bool IsUpdateNodNeeded;
  bool IsCreatedByScript;
  CPlugTree* ControlDisplayTree;
  CPlugTree* ControlDrawTree;
  vec2 BoxMin;
  vec2 BoxMax;
  CControlLayout* Layout;
  const float ClipLength;
  void OnAction();
};

struct CControlContainer : public CControlBase {
  NodArray Childs;
  bool IsClippingContainer;
  CMwCmdBlockMain* CreateScript;
  bool UseScript;
  bool AcceptOwnControls;
  CControlBase* AddControl(string Id, vec3 Position, string Label, CMwNod* Nod, string Stack, string Type, CControlStyle* Style);
  CControlBase* AddInstance(CControlBase* Model, string Id, vec3 Position);
  CControlLabel* AddLabel(string Id, vec3 Position, string Label, CControlStyle* Style);
  CControlButton* AddButtonScript(string Id, vec3 Position, string Label, CMwCmdBlockMain* Script, CControlStyle* Style);
  void RemoveControl(CControlBase* Control);
};

struct CControlEffectSwitchStyle : public CControlEffect {
  CControlEffectSwitchStyle();

  CControlStyle* FocusedStyle;
};

// File extension: 'UiElement.gbx'
struct CControlUiElement : public CControlForm {
  CControlUiElement();

  const CMwRefBuffer* Resources;
};

struct CControlEffect : public CMwNod {
};

struct CControlLabel : public CControlText {
  CControlLabel();

  wstring Label;
  CPlugBitmap* Bitmap;
  CPlugShaderApply* ExternalShader;
  UnknownType ImageColor;
  UnknownType ImageAlpha;
  bool DontDrawText;
};

struct CControlButton : public CControlText {
  CControlButton();

  wstring Label;
  CPlugSound* ActionSound;
  CFuncEnum* Icons;
  UnknownType DisplayType;
  CMwCmdBlockMain* ActionScript;
  uint SubIconIndexOff;
  uint SubIconIndexOn;
  string IconId;
};

struct CControlEntry : public CControlText {
  CControlEntry();

  wstring String;
  uint MaxLength;
  UnknownType Type;
  bool IsPassword;
  bool IsNewPassword;
  bool SetValueOnFocusLost;
  bool SelectAllOnFocusGained;
};

struct CControlEnum : public CControlText {
  CControlEnum();

  CFuncEnum* FuncEnum;
  bool IsLooping;
  UnknownType DisplayType;
  void Incr();
  void Decr();
  uint EnumIndex;
  const string EnumString;
};

struct CControlSlider : public CControlBase {
  CControlSlider();

  _EAxis Axis;
  float Ratio;
  UnknownType IconIdBar;
  UnknownType IconIdCursor;
  bool AutoSize;
};

// File extension: 'ControlLayout.Gbx'
struct CControlLayout : public CMwNod {
  CControlLayout();

  UnknownType AlignHorizontal;
  UnknownType AlignVertical;
  float RatioHorizontal;
  float RatioVertical;
  float PaddingHorizontal;
  float PaddingVertical;
};

// File extension: 'ListItem.Gbx'
struct CControlListItem : public CMwNod {
  CControlListItem();

  const string Str1;
  const string Str2;
  const string Str3;
  const string Str4;
  const string Str5;
  const string Str6;
  const string Str7;
  const wstring StrInt1;
  const wstring StrInt2;
  const wstring StrInt3;
  const wstring StrInt4;
  const uint Nat1;
  const uint Nat2;
  const uint Nat3;
  const uint Nat4;
  const uint Nat5;
  const uint Nat6;
  const uint Time1;
  const uint Time2;
  const uint Time3;
  const float Real1;
  const float Real2;
  const float Real3;
  vec2 MapCoordOrigin;
  vec2 MapCoordTarget;
  const CMwNod* Nod1;
  const CMwNod* Nod2;
  const CMwNod* Nod3;
  bool IsSelected;
};

// File extension: 'UiElement.gbx'
struct CControlUiDockable : public CControlUiElement {
  CControlUiDockable();

  void Close();
  void Open();
  void Switch();
  bool IsClosed;
  bool IsOpened;
  const NodArray Screens;
  void NextScreen();
  void PrevScreen();
  uint CurScreen;
  void CreateRotate(vec3 Axis, float MinAngle, float MaxAngle);
  void CreateTranslate(vec3 StartPoint, vec3 EndPoint);
  CControlForm* AddScreen(string Id);
};

struct CControlList : public CControlFrame {
  CControlList();

};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectSimi : public CControlEffect {
  CControlEffectSimi();

  bool IsInterpolated;
  bool Centered;
  UnknownType ColorBlendMode;
  bool IsContinousEffect;
  const uint KeyCount;
  uint CurrentKey;
  void InsertKey();
  void RemoveKey();
  float Time;
  float Rot;
  vec2 Pos;
  vec2 Scale;
  float Depth;
  float Opacity;
  float ColorBlend;
  UnknownType Color;
};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectMotion : public CControlEffect {
  CControlEffectMotion();

  CPlugParticleEmitterModel* ParticleEmitterModel;
  UnknownType ParticleEmitterId;
  float Period;
  CFuncEnvelope* Envelope;
  float EnveloppePosStart;
  float EnveloppePosCharged;
  float IntensityStart;
  float IntensityCharged;
  float SpeedStart;
  float SpeedCharged;
  vec3 SpeedDirection;
  float ChargeTime;
  vec3 EmitterPosOffset;
};

struct CControlForm : public CControlContainer {
  CControlForm();

  void ClearCache();
};

struct CControlOverlay : public CControlBase {
  CControlOverlay();

  CScene3d* Scene;
  const CSceneCamera* Camera;
};

struct CControlUiRange : public CControlBase {
  CControlUiRange();

  UnknownType BlockOverlapRatio;
  UnknownType BackgroundMargin;
  bool DrawBackground;
  bool DrawBlockBackground;
  UnknownType IconId;
  bool CenteredBar;
  UnknownType Color;
  UnknownType ColorAlpha;
  UnknownType Color2;
  UnknownType Color2Alpha;
  UnknownType Ratio;
  uint UnitMax;
  uint Unit1;
  uint Unit2;
  float GradingRatio;
  UnknownType Scaling;
  bool LastGradingIsGhostlike;
  void CreateTranslate(vec3 StartPoint, vec3 EndPoint);
  void CreateRotate(vec3 Axis, float MinAngle, float MaxAngle);
};

struct CControlGrid : public CControlContainer {
  CControlGrid();

  array<vec2> ChildsSquares;
  array<string> ChildsSquaresParam;
  CControlLayout* MainLayout;
  bool PackEmptyRows;
  float ForceColumnsUniformWidth;
  float ForceRowsUniformHeight;
  array<float> ForceColumnsWidths;
  float HorizontalSkewOffset;
  float VerticalSkewOffset;
  bool PagedGrid_Enable;
  uint PagedGrid_NbLinesPerPage;
  uint PagedGrid_FastPageStep;
  uint CurrentPage;
  uint PageCount;
  void OnNextPage();
  void OnPrevPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
};

// File extension: 'Frame.Gbx'
struct CControlFrame : public CControlContainer {
  CControlFrame();

  UnknownType ChildsRelativeLocations;
};

// File extension: 'ControlStyle.Gbx'
struct CControlStyle : public CPlug {
  CControlStyle();

  CPlugFont* Font;
  float FontHeight;
  float FontRatioXY;
  UnknownType LabelColorFromPalette;
  UnknownType LabelColor;
  UnknownType LabelColorAlpha;
  bool LabelForceEmbossed;
  bool LabelDisableSqueeze;
  wstring LabelCharAttributes;
  UnknownType EditableColorFromPalette;
  UnknownType EditableColor;
  UnknownType EditableColorAlpha;
  bool EditableForceEmbossed;
  bool EditableDisableSqueeze;
  wstring EditableCharAttributes;
  UnknownType GrayedColorFromPalette;
  UnknownType GrayedColor;
  UnknownType GrayedColorAlpha;
  bool GrayedForceEmbossed;
  bool GrayedDisableSqueeze;
  wstring GrayedCharAttributes;
  bool FitTextSize;
  UnknownType Skew;
  CPlugShader* DefaultShader;
  CMwCmdBlockMain* FocusGainedScript;
  CMwCmdBlockMain* FocusLostScript;
  CPlugSound* FocusSound;
  CPlugSound* ActionSound;
  CPlugSound* ActionBackSound;
  CFuncEnum* ButtonDefaultIcons;
  UnknownType ButtonDefaultIconId;
  float ButtonIconWidth;
  float ButtonIconHeight;
  CPlugShader* EnumSound;
  CPlugShader* EnumListShader;
  uint EnumMaxElemCount;
  float EnumIconWidth;
  float EnumIconHeight;
  UnknownType EnumForceDisplayType;
  CFuncEnum* EnumForceIcons;
  float QuadZ;
  bool QuadIsLines;
  bool QuadIsFill;
  float QuadZLines;
  UnknownType QuadGradientColor0;
  UnknownType QuadGradientColor0Alpha;
  UnknownType QuadGradientColor1;
  UnknownType QuadGradientColor1Alpha;
  UnknownType LineGradientColor0;
  UnknownType LineGradientColor0Alpha;
  UnknownType LineGradientColor1;
  UnknownType LineGradientColor1Alpha;
  UnknownType QuadLinesColor;
  UnknownType QuadLinesColorAlpha;
  vec2 Quad_UvTopLeft;
  vec2 Quad_UvBottomRight;
  float SliderBarWidth;
  float SliderBarHeight;
  float SliderCursorWidth;
  float SliderCursorHeight;
  CFuncEnum* SliderBarIcons;
  CFuncEnum* SliderCursorIcons;
  CPlugSound* SliderSound;
  bool FocusAreaEnable;
  CPlugMaterial* FocusAreaMaterial;
  CPlugMaterial* FocusAreaMaterialReadOnly;
  CPlugMaterial* FocusAreaMaterialSelected;
  CPlugMaterial* FocusAreaMaterialFocused;
  float FocusAreaMinWidth;
  float FocusAreaMinHeight;
  float FocusAreaXMargin;
  float FocusAreaYMargin;
  float FocusAreaZOffset;
  CPlugSolid* FocusAreaSolid;
  CControlEffectMaster* EffectMaster;
};

struct CControlField2 : public CControlBase {
  CControlField2();

  UnknownType ControlMode;
  UnknownType DisplayMode;
  UnknownType RenderMode;
  UnknownType ArrowRatio;
  float DisplaySize;
  UnknownType IntensityPaintMode;
  UnknownType DirectionPaintMode;
  UnknownType BrushSize;
  UnknownType BrushIntensity;
  UnknownType BrushDirection;
  vec2 DeltaDebug;
  float RotationModifSpeed;
  float ScaleModifSpeed;
  bool IsInterpolate;
  bool IsIntensityInArrowSize;
  UnknownType ArrowColor;
  UnknownType ArrowColorMin;
  UnknownType ArrowColorMax;
  bool IsDisplayFieldRect;
  bool IsDisplayDrawRect;
  uint DisplaySkipLevel;
  bool IsAutoDisplaySkipLevel;
};

// File extension: 'ControlUrlLinks.Gbx'
struct CControlUrlLinks : public CControlBase {
  CControlUrlLinks();

  void ForceDirty();
  uint CurFocusedLink;
};

struct CControlTimeLine : public CControlBase {
  CControlTimeLine();

};

struct CControlQuad : public CControlBase {
  CControlQuad();

  bool IsLines;
  bool IsFill;
  UnknownType GradientDir;
  UnknownType IconId;
  UnknownType IconVertexColors;
  UnknownType IconVertexAlpha;
};

// File extension: 'ControlEffectMaster.Gbx'
struct CControlEffectMaster : public CMwNod {
  CControlEffectMaster();

  CControlEffect* FocusEffect;
  CControlEffect* FocusGainedEffect;
  CControlEffect* FocusLostEffect;
  CControlEffect* FocusGainedByAnotherEffect;
  CControlEffect* FocusLostByAnotherEffect;
  CControlEffect* SleepingEffect;
  CControlEffect* ShowingEffect;
  CControlEffect* HidingEffect;
  CControlEffect* ActionEffect;
  CControlEffect* ManagedEffect;
  bool UseRefBBox;
  bool ShowActivated;
  bool HideActivated;
  CMwRefBuffer* SpecialEffect;
};

struct CControlColorChooser : public CControlFrame {
  CControlColorChooser();

  UnknownType StyleType;
  vec2 ColorChooserSize;
  UnknownType Color;
  const UnknownType Hue;
  CPlugShader* ColorChooserShader;
};

struct CControlColorChooser2 : public CControlFrame {
  CControlColorChooser2();

  UnknownType Color;
  const CControlColorChooser* ColorChooserHue;
  const CControlColorChooser* ColorChooserSV;
};

struct CControlSimi2 : public CMwNod {
  CControlSimi2();

  float PosX;
  float PosY;
  float Rot;
  float ScaleX;
  float ScaleY;
};

struct CControlTimeLine2 : public CControlBase {
  CControlTimeLine2();

  uint TrackCount;
  uint TrackStart;
  float TimeMin;
  float TimeMax;
  float RulerLength;
  float Width;
  float Height;
  float TrackHeight;
  float BlockHeight;
  float RulerHeight;
  float TimeCursorWidth;
  float TimeCursorHeight;
  float KeyHeight;
  float KeyWidth;
  float KeyHighLightHeight;
  float KeyHighLightWidth;
  UnknownType RulerLinesColorBig;
  UnknownType RulerLinesColorSmall;
  UnknownType TrackSeparationColor;
  UnknownType BlockColor;
  UnknownType TimeCursorLineColor;
  UnknownType BgColor;
  UnknownType RulerBgColor;
  UnknownType BlockHighLightColor;
  UnknownType KeyColor;
  UnknownType KeyHighLightColor;
  UnknownType KeyFocusColor;
  UnknownType DeadZoneColor;
  void CreateSampleData();
  float Time;
};

// File extension: 'ControlEffect.Gbx'
struct CControlEffectCombined : public CControlEffect {
  CControlEffectCombined();

  CMwRefBuffer* Effects;
};

// File extension: 'ControlEffectMoveFrame.Gbx'
struct CControlEffectMoveFrame : public CControlEffect {
  CControlEffectMoveFrame();

  vec2 DefaultShift;
  float Period;
  void AddChildShift();
  void RemoveChildShift();
  bool IsInverse;
  vec3 AngleFrom;
};

// File extension: 'FrameStyled.Gbx'
struct CControlFrameStyled : public CControlFrame {
  CControlFrameStyled();

  CControlStyleSheet* StyleSheet;
};

// File extension: 'StyleSheet.Gbx'
struct CControlStyleSheet : public CPlug {
  CControlStyleSheet();

  CMwRefBuffer* Buffer;
  CControlStyle* MasterStyle;
  NodArray Overrides;
  CControlStyle* PagerIconStyle;
  CControlStyle* PagerTextStyle;
  CControlStyle* PagerTextBackgroundStyle;
  UnknownType Colors;
  array<float> ColorsAlpha;
};

struct CControlListMap : public CControlList {
  CControlListMap();

  CPlugBitmap* Bitmap;
  string StackTextTargetCoord;
  string StackTextOriginCoord;
  vec2 MapRectMin;
  vec2 MapRectMax;
};

struct CControlListMap2 : public CControlFrame {
  CControlListMap2();

  CPlugBitmap* Bitmap;
  CPlugMaterial* Material;
  vec2 MapRectMin;
  vec2 MapRectMax;
  CControlStyle* StyleElem;
  CControlStyle* StyleHelper1;
  CControlStyle* StyleHelper1Elem;
  CControlStyle* StyleHelper2;
  CControlStyle* SpecialStyleElem;
  CControlStyle* SpecialStyleHelper1;
  CControlStyle* SpecialStyleHelper1Elem;
  CControlStyle* SpecialStyleHelper2;
  string StackTextElem;
  string StackTextElemCoord;
  string StackTextHelper1;
  string StackTextHelper1Coord;
  string StackTextHelper1Elem;
  string StackTextHelper1ElemCoord;
  string StackTextHelper2;
  string StackTextHelper2Coord;
  string SpecialElemName;
  uint Helper1EnableIconIndex;
  uint Helper1DisableIconIndex;
};

struct CControlMediaPlayer : public CControlFrame {
  CControlMediaPlayer();

  const CPlugFileSnd* MediaAudio;
  const CPlugFileVideo* MediaVideo;
};

struct CControlRadar : public CControlBase {
  CControlRadar();

  CMwRefBuffer* Resources;
  const CScene2d* Overlay;
  const CSceneMobil* Screen;
  float Scale;
  bool FollowOnlyPosition;
  void AddDummyMobil();
};

// File extension: 'MediaItem.Gbx'
struct CControlMediaItem : public CMwNod {
  CControlMediaItem();

  CPlugBitmap* BitmapFid;
};

struct CControlGraph : public CControlBase {
  CControlGraph();

  vec2 ValuesMin;
  vec2 ValuesMax;
  uint SampleCount;
  bool SampleKeys;
  NodArray Curves;
};

// File extension: 'Pager.Gbx'
struct CControlPager : public CControlFrame {
  CControlPager();

  string StackPageCountText;
  bool UseCounter;
  bool UseCounterQuadBackground;
  bool UseUpDown;
  bool UseFastPrevNext;
  bool UseFirstLast;
  uint FastPrevNextIncrement;
  CControlLabel* LabelPageCounter;
  CControlQuad* QuadPageCounter;
  CControlButton* ButtonPrevPage;
  CControlButton* ButtonNextPage;
  CControlButton* ButtonFastPrevPage;
  CControlButton* ButtonFastNextPage;
  CControlButton* ButtonFirstPage;
  CControlButton* ButtonLastPage;
  void OnPrevPage();
  void OnNextPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
};

struct CControlText : public CControlBase {
  float ClipLength;
  int MaxLine;
  UnknownType TextMode;
  const CPlugTree* TextTree;
};

// File extension: 'FrameAnimated.Gbx'
struct CControlFrameAnimated : public CControlFrame {
  CControlFrameAnimated();

  float ScrollVerticalDistance;
  float ScrollHorizontalDistance;
  float ScrollPeriod;
  float ScrollCycleTime;
  bool DoScrolling;
  float ScrolledVerticalDistance;
  float ScrolledHorizontalDistance;
  float ScrollVerticalHistory;
  float ScrollHorizontalHistory;
};

struct CControlToolTipManager : public CMwNod {
};

struct CControlScriptEditor : public CControlBase {
  CControlScriptEditor();

  wstring Text;
  bool ShowLineNumbers;
  UnknownType ShowLineNuKeywordColormbers;
  UnknownType OperatorColor;
  UnknownType ConstantColor;
  UnknownType CommentColor;
  UnknownType ClassNameColor;
  UnknownType IdentColor;
  UnknownType OthersColor;
  UnknownType DirectiveColor;
  UnknownType UnexpectedColor;
  string Colors;
};

struct CControlScriptConsole : public CControlBase {
  CControlScriptConsole();

  const wstring HistoryText;
};

struct CControlListCard : public CControlFrame {
  CControlListCard();

  uint NbLinesPerPage;
  uint NbColumnsPerPage;
  uint FastPageStep;
  vec2 GridSize;
  bool Transpose;
  bool AllowMultipleSelection;
  uint CurrentPage;
  uint PageCount;
  void OnNextPage();
  void OnPrevPage();
  void OnFastPrevPage();
  void OnFastNextPage();
  void OnFirstPage();
  void OnLastPage();
  NodArray CardsModels;
  const NodArray ListCards;
};

struct CControlMiniMap : public CControlBase {
};

struct CControlCamera : public CControlBase {
};

} // namespace Control

namespace Motion {

struct CMotion : public CMwNod {
};

struct CMotionFunc : public CMotionTrack {
  CMotionFunc();

  CMwNod* Func;
};

struct CMotions : public CMotion {
  CMotions();

  const NodArray Motions;
};

struct CMotionCmdBase : public CMwCmd {
  CMotionCmdBase();

  float Period;
  float Phase;
  const float Value;
  _EEWave WaveType;
  bool IsOnce;
  const float NormedValue;
  bool IsAbsolutePhase;
  const uint LoopCount;
  CMotionCmdBaseParams* CmdBaseParams;
};

// File extension: 'MotionTrackShader.Gbx'
struct CMotionShader : public CMotionTrack {
  CMotionShader();

};

// File extension: 'MotionBase.Gbx'
struct CMotionCmdBaseParams : public CMwNod {
  CMotionCmdBaseParams();

  _EETimeUnit TimeUnit;
  float Period;
  float Phase;
};

struct CMotionTrack : public CMwCmdContainer {
  CMotionTrack();

  const CMwNod* Owner;
};

struct CMotionPlayer : public CMotion {
  CMotionPlayer();

  void Play();
  void Pause();
  void Stop();
  const bool IsPlaying;
  CMotionCmdBase* Base;
  float BaseValue;
  _EEPlayState SavePlayState;
  const NodArray Tracks;
  bool IsPhysics;
};

// File extension: 'MotionTrackMobilRotate.Gbx'
struct CMotionTrackMobilRotate : public CMotionTrack {
  CMotionTrackMobilRotate();

  float LoopAngle;
  vec3 Axe;
  bool IsLeftMult;
  vec3 RotationCenter;
};

struct CMotionLight : public CMotionTrack {
  CMotionLight();

  CFuncLight* FuncLight;
};

struct CMotionTrackMobilMove : public CMotionTrack {
  CMotionTrackMobilMove();

  CFuncKeysTrans* KeysTrans;
  bool IsAbsolute;
  void BuildChordLengthParametrization();
  float ParametrizationDistMax;
};

struct CMotionTrackVisual : public CMotionTrack {
  CMotionTrackVisual();

  const CPlugVisual* Visual;
  CFuncVisual* FuncVisual;
};

struct CMotionTrackMobilPitchin : public CMotionTrack {
  CMotionTrackMobilPitchin();

  UnknownType PitchinMode;
  const CSceneToySea* Sea;
  float Flottaison;
  float Tangage;
  float Roulis;
  float OffsetHauteur;
  float PeriodDelta;
  float MaxAngle;
};

struct CMotionTrackTree : public CMotionTrack {
  CMotionTrackTree();

  const CPlugTree* Tree;
  CFuncTree* FuncTree;
};

struct CMotionTeamActionInfo : public CMotionTrack {
  CMotionTeamActionInfo();

  UnknownType TeamMateName;
  UnknownType Destination;
  UnknownType AnimAtDest;
  float AnimAtDestDuration;
  float TeamMateSpeed;
};

struct CMotionTeamManager : public CMotionTrack {
  CMotionTeamManager();

  CFuncPathMesh* FuncPathMesh;
  const NodArray TeamTrees;
  const NodArray AnimList;
  uint WalkAnimIndex;
  void AddAction();
  const NodArray Actions;
};

struct CMotionTeamAction : public CMotionTrack {
  CMotionTeamAction();

  void AddTeamMate();
  const NodArray TeamMates;
};

// File extension: 'MotionTrackMobilScale.Gbx'
struct CMotionTrackMobilScale : public CMotionTrack {
  CMotionTrackMobilScale();

  float ScaleValue;
};

struct CMotionManager : public CMwNod {
};

struct CMotionEmitterLeaves : public CMotionManaged {
  CMotionEmitterLeaves();

  CMotionManagerLeaves* ManagerModel;
  vec3 Pos;
  vec3 Radius;
};

struct CMotionManagerLeaves : public CMotionManager {
  CMotionManagerLeaves();

  const CSceneMobilLeaves* MobilLeaves;
  bool IsActive;
};

struct CMotionManaged : public CMotion {
};

// File extension: 'MotionEmitterFlock.Gbx'
struct CMotionEmitterFlock : public CMotionManaged {
  CMotionEmitterFlock();

  CPlugFlockModel* FlockModel;
  float Radius;
  float Power;
  uint SpawnCount;
  bool IsRepulsor;
  bool IsLandingArea;
  void UpdateParams();
};

// File extension: 'WindBlocker.Gbx'
struct CMotionWindBlocker : public CMotionManaged {
  CMotionWindBlocker();

  bool UseNewWindShadowing;
  vec2 Pos0;
  vec2 Pos1;
  float Height;
  float BlockerCoeffX;
  float BlockerCoeffY;
  float BlockerCoeffYMax;
  float BlockerValXCoeff;
  float BlockerOffsetX;
  float BlockerBase;
  float BlockerBaseXCenter;
  float BlockerBaseXCenterVal;
  float BlockerBaseXMult;
  float TurbulenceCoeffX;
  float TurbulenceCoeffY;
  float TurbulenceBase;
  float TurbulenceBaseXCenter;
  float TurbulenceBaseXCenterVal;
  float TurbulenceBaseXMult;
  float TurbulenceAngleDeviationMult;
  float SillageCoeffX;
  float SillageCoeffY;
  float SillageBase;
  float SillageOffsetMult;
  float SizeF7F3Ratio;
  float TurbulenceMaxAwa;
  float TurbulenceFadderAwa;
  float TurbulencePosRatio;
  float BlockerPosRatio;
  float SillageMaxAwa;
  float SillageFadderAwa;
  float SillageCoeffYRot;
  float SillageRotAwa;
  float SillageAngleDeviationDiv;
  float SecondSegmentCenterRatio;
  float SecondSegmentLength;
  float WindDirDevCoef;
  float WindDirDevMax;
};

struct CMotionManagerMeteo : public CMotionManager {
  CMotionManagerMeteo();

  NodArray WindBlockers;
  UnknownType WindGlobalDirection;
  float WindGlobalIntensity;
  float StreamGlobalIntensity;
  float BlockerDist;
  UnknownType TideIn01;
  const UnknownType TideBlend;
  const CMotionManagerMeteoPuffLull* MeteoPuffLull;
  float VariationsAmp;
  float VariationsTimeFactor;
  CFuncKeysReal* TideBlendFunc;
};

// File extension: 'MotionManagerWeathers.Gbx'
struct CMotionManagerWeathers : public CMotionManager {
  CMotionManagerWeathers();

  void SaveInModelFid();
  UnknownType SiteLatitude;
  NodArray FuncWeathers;
  CPlugMoodSetting* MoodSetting;
  CFuncDayTime* FuncDayTime;
  UnknownType TimeRemapped;
  CPlugBitmap* BitmapSpecularDir;
  CPlugBitmap* BitmapWaterFog;
  _EEClearMode ClearMode;
  UnknownType ClearColor;
  float SunIntensity;
  float MoonIntensity;
  bool EnableUpdate;
  bool EnableMoodArray;
};

// File extension: 'MotionWeather.Gbx'
struct CMotionWeather : public CMotionManaged {
  CMotionWeather();

  const CMotionManagerWeathers* Manager;
};

struct CMotionDayTime : public CMotionManaged {
  CMotionDayTime();

};

struct CMotionTimerLoop : public CMwNod {
  CMotionTimerLoop();

  void Stop();
  uint RealTimePhase;
  UnknownType TimeIn01;
};

struct CMotionManagerMeteoPuffLull : public CMwNod {
  CMotionManagerMeteoPuffLull();

  CFuncPuffLull* FuncPuffLull;
  bool IsVisible;
};

struct CMotionEmitterParticles : public CMotionManaged {
  CMotionEmitterParticles();

  CPlugParticleEmitterModel* EmitterModel;
  bool IsActive;
  bool IsEventMode;
  bool UseOwnerLoc;
  UnknownType EmitLoc;
  vec3 EmitHalfSize;
  vec3 EmitVel;
  float EmitIntensity;
  UnknownType EmitColor;
};

} // namespace Motion

namespace Plug {

struct CPlugAudio : public CPlug {
};

struct CPlugShader : public CPlug {
};

// File extension: 'Crystal.Gbx'
struct CPlugCrystal : public CPlugTreeGenerator {
  CPlugCrystal();

  const uint CrystalVertexCount;
  const uint CrystalEdgeCount;
  const uint CrystalFaceCount;
};

struct CPlugShaderGeneric : public CPlugShader {
};

struct CPlugSolid : public CPlug {
  CPlugSolid();

};

// File extension: 'Visual.Gbx'
struct CPlugVisual : public CPlug {
  void Inverse();
  bool IsGeometryStatic;
  const bool IsGeometryDynaPart;
  bool IsIndexationStatic;
  bool OptimizeInVision;
  bool UseVertexNormal;
  bool UseVertexColor;
  const bool UseUvGroup;
  CFuncVisual* FuncVisual;
  const uint cBone;
};

struct CPlugBitmapHighLevel : public CSystemNodWrapper {
  CPlugBitmapHighLevel();

  UnknownType Mode;
  uint BlurTexelCount;
  uint Width;
  uint Height;
  UnknownType CameraToWorld;
  float CameraFovY;
  float CameraRatioXY;
  float CameraNearZ;
  float CameraFarZ;
};

struct CPlugVisualIndexedLines : public CPlugVisualIndexed {
  CPlugVisualIndexedLines();

};

struct CPlugVisualOctree : public CMwNod {
};

struct CPlugBitmapRenderShadow : public CPlugBitmapRender {
  CPlugBitmapRenderShadow();

};

// File extension: 'Shape.Gbx'
struct CPlugSurface : public CPlug {
  CPlugSurface();

  NodArray Materials;
  CPlugSkel* Skel;
  void UpdateSurfMaterialIdsFromMaterialIndexs();
  UnknownType Surf;
  _EGmSurfType GmSurfType;
  float Radius;
  vec3 Radii;
  vec3 AABBCenter;
  vec3 AABBHalfSize;
};

// File extension: 'PlugModelShading.Gbx'
struct CPlugModelShading : public CMwNod {
  CPlugModelShading();

  CPlugFileImg* DefaultImage_Diffuse;
  CPlugFileImg* DefaultImage_DiffuseOpacity;
  CPlugFileImg* DefaultImage_Specular;
  CPlugFileImg* DefaultImage_Normal;
  CPlugFileImg* DefaultImage_Energy;
  CPlugFileImg* DefaultImage_TeamMask;
  CPlugFileImg* DefaultImage_SelfIllum;
  CPlugFileImg* DefaultImage_Damage;
  CPlugFileImg* DefaultImage_Dirt;
  CPlugFileImg* DefaultImage_Shield;
  CPlugMaterial* MaterialDyna0_TDSNI;
  CPlugMaterial* MaterialDyna0_TI;
  CPlugMaterial* MaterialDyna0_TI_AddModCV;
  CPlugMaterial* MaterialDyna0_TDSNE;
  CPlugMaterial* MaterialDyna0_TE;
  CPlugMaterial* MaterialDyna0_TIce;
  CPlugMaterial* MaterialDyna0_TShield;
  CPlugMaterial* MaterialStatic_TDSN;
  CPlugMaterial* MaterialStatic_TDOSN;
  CPlugMaterial* MaterialStatic_TDOBSN;
  CPlugMaterial* MaterialStatic_TDSNE;
  CPlugMaterial* MaterialStatic_TDSNI;
  CPlugMaterial* MaterialStatic_TDSNI_Night;
  CPlugMaterial* MaterialStatic_TIAdd;
  CPlugMaterial* MaterialChar_TDSNEM;
  CPlugMaterial* MaterialChar_TE;
  CPlugMaterial* MaterialChar_TDOSNEM;
  CPlugMaterial* MaterialChar_TDOSN;
  CPlugMaterial* MaterialChar_TDOS;
  CPlugMaterial* MaterialFid_Char_Shield;
  CPlugMaterial* MaterialFid_Char_Teleport;
  CPlugMaterial* MaterialFid_Char_ActionMakerOtherFrames;
  CPlugMaterial* MaterialFid_Char_ShowEnergy;
  CPlugLight* LightFid_Char_FakeShadowProj;
  CPlugMaterial* MaterialFid_Vehicle_Teleport;
  CMwNod* MaterialRemapFid;
  CPlugMaterial* MaterialVehicle_Skin;
  CPlugMaterial* MaterialVehicle_Details;
  CPlugMaterial* MaterialVehicle_Glass;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dStation;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dBoxCase;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dMetal;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dGlass;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dLight;
  CPlugMaterial* MenuBox3dMaterial_MenuBox3dTransp;
};

struct CPlugSurfaceGeomDeprecated : public CPlug {
  CPlugSurfaceGeomDeprecated();

};

struct CPlugVisualSprite : public CPlugVisual3D {
  CPlugVisualSprite();

  const bool UseTextureAtlas;
  const bool SpriteIndexTC1;
  const CPlugSpriteParam* SpriteParam;
  const CPlugBitmapAtlas* BitmapAtlas;
};

// File extension: 'Texture.Gbx'
struct CPlugBitmap : public CPlug {
  CPlugBitmap();

  enum ERenderTech {
    Unknown = 0,
    Tech3 = 1,
  };
  enum ETexFilter {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    Anisotropic = 3,
    AnisoPoint = 4,
  };
  enum ETexAddress {
    Wrap = 0,
    Mirror = 1,
    Clamp = 2,
    BorderSM3 = 3,
  };
  enum EColorSpace {
    Linear = 0,
    sRGB = 1,
  };
  enum EVideoTimer {
    Game = 0,
    Human = 1,
    Scene = 3,
    Default = 4,
  };
  enum EGenerateUV {
    NoGenerate = 0,
    CameraVertex = 1,
    WorldVertex = 2,
    WorldVertexXY = 3,
    WorldVertexXZ = 4,
    WorldVertexYZ = 5,
    CameraNormal = 6,
    WorldNormal = 7,
    CameraReflectionVector = 8,
    WorldReflectionVector = 9,
    WorldNormalNeg = 10,
    WaterReflectionVector = 11,
    Hack1Vertex = 12,
    MapTexel_DEPRECATED = 13,
    FogPlane0 = 14,
    Vsk3SeaFoam = 15,
    ImageSpace = 16,
    LightDir0Reflect = 17,
    EyeNormal = 18,
    ShadowB1Pw01 = 19,
    Tex3AsPosPrCamera = 20,
    FlatWaterReflect = 21,
    FlatWaterRefract = 22,
    FlatWaterFresnel = 23,
    WorldPosXYblendZY = 24,
    DisableVshOutput = 25,
  };
  enum EUsage {
    Color = 0,
    Light = 1,
    HeightN_DuDv = 2,
    Render = 3,
    HN_DuDvLumi = 4,
    HN_NormXYZ = 5,
    HN_NormXY = 6,
    DepthCmp = 7,
    DispH01 = 8,
    HN_NormPal8b = 9,
    NormXYZ = 10,
    NormXY = 11,
    NormPal8b = 12,
    NormPal16b = 13,
    ColorFloat = 14,
    RenderFloat = 15,
    HN_DuDv1 = 16,
    Alpha = 17,
    LightAlpha = 18,
    HN_NormX0ZY = 19,
    NormX0ZY = 20,
    TexCoord = 21,
    Render16b = 22,
    Vertex = 23,
    HN_BumpTxTy = 24,
    BumpTxTy = 25,
    HN_Norm0YZX = 26,
    Norm0YZX = 27,
    Norm_XYZN_0YZX = 28,
    Depth = 29,
    SrgbL8N_LinearL16 = 30,
    NormATI2N = 31,
    NormXYZN_ATI2N = 32,
    Color16b = 33,
    SpecFIEN_FI0E = 34,
    SpecFI0E = 35,
    MetalRough = 36,
  };
  enum EColorDepth {
    DefaultColorDepth = 0,
    Color16b = 1,
    Color32b = 2,
  };
  enum ECubeMapFace {
    None = 0,
    XPos = 1,
    XNeg = 2,
    YPos = 3,
    YNeg = 4,
    ZPos = 5,
    ZNeg = 6,
  };
  enum EBumpCompressMode {
    None = 0,
    Pal8b = 1,
    DXT1 = 2,
    Pal16b = 3,
  };
  enum EPixelUpdate {
    None = 0,
    Render = 1,
    Shader = 2,
    DynaSpecular = 3,
    Clear = 4,
    RenderVideo = 5,
  };
  enum EDynamic {
    Off = 0,
    On = 1,
    On_2_Buffers = 2,
  };
  enum ENormalRotate {
    None = 0,
    Px_Pz_Ny = 1,
  };
  enum EEdCustomSaveOp {
    None = 0,
    Conv_Diffuse = 1,
    ShootCubeHdrScaleA2_DXT5 = 2,
    ShootCubeHdr = 3,
  };
  enum ECompressor {
    NVidia = 0,
    DirectX = 1,
  };
  enum EForceBorderSize {
    _1_texel = 0,
    _2_texels = 1,
    _3_texels = 2,
    _4_texels = 3,
  };
  enum EMipMapAlpha01 {
    HalfBinary = 0,
    ForceBinary = 1,
    ShadeOfGray = 2,
  };
  ERenderTech RenderTech;
  EUsage Usage;
  EColorDepth WantedColorDepth;
  bool AllowR11G11B10F;
  bool IsOneBitAlpha;
  const bool IgnoreImageAlpha01;
  bool NoShaderSetBlendMap;
  bool ShadowCasterIgnoreAlpha;
  bool AlphaToCoverage;
  const bool IsNonPow2Conditional;
  const bool IsCubeMap;
  const bool IsOriginTop;
  ETexFilter TexFilter;
  ETexAddress TexAddressU;
  ETexAddress TexAddressV;
  ETexAddress TexAddressW;
  EColorSpace LdrColorSpace;
  ECubeMapFace CubeMapAuto2dFace;
  float MipMapLodBiasDefault;
  float DefaultTexCoordSizeXm;
  float DefaultTexCoordSizeYm;
  float DefaultTexCoordTransXm;
  float DefaultTexCoordTransYm;
  vec2 DefaultTexCoordScale;
  vec2 DefaultTexCoordTrans;
  UnknownType DefaultTexCoordRotate;
  EVideoTimer DefaultVideoTimer;
  const uint DefaultMaxMipLevel;
  float HeightInMeters;
  bool Force1stPixelAlpha0;
  bool ForceBorderRGB;
  UnknownType BorderRGB;
  bool ForceBorderAlpha;
  UnknownType BorderAlpha;
  EForceBorderSize ForceBorderSize;
  bool BorderLeft;
  bool BorderRight;
  bool BorderTop;
  bool BorderBottom;
  bool WantMipMapping;
  bool IsMipMapLowerAlphaEnable;
  UnknownType MipMapLowerAlpha;
  array<float> MipMapFadeAlphas;
  EMipMapAlpha01 MipMapAlpha01;
  bool CanBeDeletedFromSystemMemory;
  bool RenderTexelsMustPersist;
  bool CanBeCompressedInVideoMemory;
  bool CompressInterpolatedAlpha;
  bool CompressSkipDXT1;
  bool CompressUseDithering;
  ECompressor Compressor;
  EBumpCompressMode BumpCompressMode;
  float BumpScaleFactor;
  float BumpScaleMipLevel;
  ENormalRotate NormalRotate;
  bool NormalAreSigned;
  bool NoMipNormalize;
  CPlugFileImg* Image;
  CPlugBitmapAtlas* Atlas;
  const CPlugSpriteParam* SpriteParam;
  CPlugBitmapDecals* Decals;
  bool MipLevelSkipFromQuality;
  uint MipLevelSkipCountMax;
  int LDExportSkipMip_Racing;
  bool FloatRequireFiltering;
  bool RenderAutoFitSize;
  bool RenderAutoFitSS;
  uint RenderSizeMul;
  uint RenderSizeDiv;
  bool RenderRequireBlending;
  uint MultiSampleCount;
  bool RenderExplicitMip;
  bool RenderCreateClear;
  UnknownType DefaultRenderClearRGB;
  UnknownType DefaultRenderClearAlpha;
  bool DepthUseStencil;
  bool DepthCanSwap;
  bool UseUAV;
  EPixelUpdate PixelUpdate;
  EDynamic Dynamic;
  UnknownType SpecularRGB;
  UnknownType SpecularExp;
  UnknownType ClearRGB;
  UnknownType ClearAlpha;
  CPlugBitmapRender* Render;
  CPlugBitmapShader* Shader;
  bool ForceShaderBitmapTc;
  bool ForceShaderGenerateUV;
  EGenerateUV GenerateUV;
};

struct CPlugVisualLines : public CPlugVisual3D {
  CPlugVisualLines();

};

struct CPlugVisualLines2D : public CPlugVisual2D {
  CPlugVisualLines2D();

};

struct CPlugTreeVisualMip : public CPlugTree {
  CPlugTreeVisualMip();

  array<float> LevelsFarZ;
  NodArray LevelsTree;
};

struct CPlugVisualStrip : public CPlugVisual3D {
  CPlugVisualStrip();

};

struct CPlugVisualVertexs : public CPlugVisual3D {
  CPlugVisualVertexs();

};

struct CPlugFilePack : public CPlugFileFidContainer {
  CPlugFilePack();

  const uint Version;
  const string CreationBuildInfo;
  const string AuthorLogin;
  const wstring AuthorNickName;
  const wstring AuthorZonePath;
  const string InfoManialinkUrl;
  const string DownloadUrl;
  const wstring Comment;
  const string XmlHeader;
  const string TitleId;
  const string UsageSubDir;
};

// File extension: 'Sound.Gbx'
struct CPlugSound : public CPlugAudio {
  CPlugSound();

  enum EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  enum EAudioRoomFx {
    None = 0,
    Low = 1,
    Mid = 2,
    High = 3,
    Music = 4,
    UI = 5,
  };
  enum EAudioPitchFromDistMode {
    Auto = 0,
    CurvePlayer = 1,
    CurveGun = 2,
    Disabled = 3,
  };
  enum EAudioIgnoreSourceProperties {
    None = 0,
    Ignore_All = 1,
    Ignore_Pitch = 2,
    Ignore_Volume = 3,
  };
  CPlugFileSnd* PlugFile;
  UnknownType Mode;
  UnknownType VolumedB;
  float Priority;
  int MaxDuplicates;
  UnknownType GroupDuplicate;
  EAudioBalanceGroup BalanceGroup;
  float RefDistance;
  float MaxDistance;
  UnknownType RolloffFactor;
  CFuncKeysReal* VolumeFromDistance;
  CFuncKeysReal* PitchFromDistance;
  CFuncKeysReal* VolumeFromSpeedKmh;
  UnknownType Pitch;
  float DopplerFactor;
  bool EnableDoppler;
  CPlugSound* BackingSound;
  CPlugSound* FocusedSound;
  UnknownType AirAbsorptionFactor;
  EAudioRoomFx RoomFxSend;
  UnknownType RoomRolloffFactor;
  UnknownType LfeSenddB;
  float FadeStopDuration;
  float FadePlayDuration;
  bool IsLooping;
  UnknownType SoundKind;
  UnknownType InsideConeAngle;
  UnknownType OutsideConeAngle;
  UnknownType ConeOutsideAttenuation;
  float Radius;
  UnknownType PanAngleDeg;
  EAudioPitchFromDistMode PitchFromDistMode;
  EAudioIgnoreSourceProperties IgnoreSourceProperties;
  bool IsContinuous;
  bool UseLowPassFilter;
  int DuplicatesIntervalMin;
  void SetDirty();
};

// File extension: 'SoundMood.Gbx'
struct CPlugSoundMood : public CPlugSound {
  CPlugSoundMood();

  CPlugFileSnd* InsideFileSnd;
  const NodArray EventSounds;
  const array<float> EventPeriods;
};

// File extension: 'Music.Gbx'
struct CPlugMusic : public CPlugMusicType {
  CPlugMusic();

  CSystemFidsFolder* RootFolder;
  CPlugFileText* Settings;
};

struct CPlugLight : public CPlug {
  CPlugLight();

};

struct CPlugVisualIndexedTriangles : public CPlugVisualIndexed {
  CPlugVisualIndexedTriangles();

};

struct CPlugFile : public CPlug {
  void ReGenerate();
};

struct CPlugBitmapRenderLightFromMap : public CPlugBitmapRender {
  CPlugBitmapRenderLightFromMap();

  uint SampledWidthPerObject;
  uint ObjectCountPerAxisMin;
  uint ObjectCountPerAxisMax;
  const uint ObjectCountPerAxisVision;
  UnknownType CameraNearZ_FactorInObject;
  float CameraFarZ_ToAdd;
  UnknownType StartFadeToWhite;
  UnknownType RemapMin_Night;
  UnknownType RemapMax_Night;
  UnknownType RemapMin_DayAmb;
  UnknownType RemapMax_DayAmb;
  UnknownType RemapMin_DayDir;
  UnknownType RemapMax_DayDir;
  UnknownType CameraDovWorldY_MaxDot;
  CPlugBitmap* BitmapLightHistory;
  uint RayCastHalfTimeMs;
};

struct CPlugFileJpg : public CPlugFileImg {
  CPlugFileJpg();

};

// File extension: 'tga'
struct CPlugFileTga : public CPlugFileImg {
  CPlugFileTga();

};

// File extension: 'dds'
struct CPlugFileDds : public CPlugFileImg {
  CPlugFileDds();

};

struct CPlugFileImg : public CPlugFile {
  const _ECPlugFileImg__EDimension Dimension;
  const uint Width;
  const uint Height;
  const uint Depth;
  const uint ArraySize;
  const uint NbComp;
  const _EEPlugImageFormat Format;
  const _EEPlugChannelType ChannelType;
  const uint cMipLevel;
  const uint cMipLevelSkipAtLoad;
  const bool IsInSystemMemory;
  const uint SystemKb;
  void ScaleToPowerOfTwo(bool Shrink, uint TexFilter);
  const float LdrToHdrScale;
  const UnknownType MipMapFilter;
};

struct CPlugShaderApply : public CPlugShaderGeneric {
  CPlugShaderApply();

};

struct CPlugVisualQuads : public CPlugVisual3D {
  CPlugVisualQuads();

};

struct CPlugVisualTriangles : public CPlugVisual3D {
  CPlugVisualTriangles();

};

// File extension: 'SoundEngine.Gbx'
struct CPlugSoundEngine2 : public CPlugSound {
  CPlugSoundEngine2();

  CPlugFileAudioMotors* AudioMotors_Exhaust_Throttle;
  CPlugFileAudioMotors* AudioMotors_Exhaust_Release;
  CPlugFileAudioMotors* AudioMotors_Engine_Throttle;
  CPlugFileAudioMotors* AudioMotors_Engine_Release;
  CPlugFileSnd* AudioMotors_IdleLoop_Exhaust;
  CPlugFileSnd* AudioMotors_LimiterLoop_Exhaust;
  CPlugFileSnd* AudioMotors_IdleLoop_Engine;
  CPlugFileSnd* AudioMotors_LimiterLoop_Engine;
  UnknownType AudioMotors_LPF_CutoffRatio_Exhaust;
  UnknownType AudioMotors_LPF_CutoffRatio_Engine;
  const CFuncKeysReal* AudioMotors_PitchRandomize_Rpm;
  const CFuncKeysReal* AudioMotors_PitchRandomize_Throttle;
  float AudioMotors_IdleVolumedB;
  float AudioMotors_LimiterVolumedB;
  CSystemFidsFolder* Loops_Folder;
  bool Loops_UseVolumeCorrection;
  bool Loops_RpmClamp;
  float RpmMaxFromEngine;
  float RpmGamma;
  const CFuncKeysReal* Volume_Speed;
  const CFuncKeysReal* Volume_Distance;
  const CFuncKeysReal* Volume_Rpm;
  const CFuncKeysReal* Volume_Throttle;
  const CFuncKeysReal* Volume_Gear;
  const CFuncKeysReal* RpmFactor_Gear;
  const CFuncKeysReal* VolPersp_Rpm_Exhaust;
  const CFuncKeysReal* VolPersp_Throttle_Exhaust;
  const CFuncKeysReal* VolPersp_Rpm_Engine;
  const CFuncKeysReal* VolPersp_Throttle_Engine;
  const CFuncKeysReal* VolPersp_Rpm_Interior;
  const CFuncKeysReal* VolPersp_Throttle_Interior;
  float Mix_FrontBackSpread;
  UnknownType MixFront;
  UnknownType MixBack;
  void UpdateSubEmitters();
  float SubEmitter_Vol_Exhaust;
  float SubEmitter_RelSize_Exhaust;
  vec3 SubEmitter_RelPos_Exhaust;
  vec3 SubEmitter_RelDir_Exhaust;
  float SubEmitter_ConeAttenuation_Exhaust;
  float SubEmitter_ConeAngle_Exhaust;
  float SubEmitter_Vol_Engine;
  float SubEmitter_RelSize_Engine;
  vec3 SubEmitter_RelPos_Engine;
  vec3 SubEmitter_RelDir_Engine;
  float SubEmitter_ConeAttenuation_Engine;
  float SubEmitter_ConeAngle_Engine;
  float SubEmitter_Vol_Interior;
  float SubEmitter_RelSize_Interior;
  vec3 SubEmitter_RelPos_Interior;
  vec3 SubEmitter_RelDir_Interior;
  float SubEmitter_ConeAttenuation_Int;
  float SubEmitter_ConeAngle_Int;
  void Loops_LoadAndParseFileSnd();
  const float Loops_MinRpmAll;
  const float Loops_MaxRpmAll;
};

struct CPlugVisualIndexedStrip : public CPlugVisualIndexed {
  CPlugVisualIndexedStrip();

};

struct CPlug : public CMwNod {
  CPlug();

};

struct CPlugVisual3D : public CPlugVisual {
  bool UseTgtU;
  bool UseTgtV;
  const CPlugBlendShapes* BlendShapes;
  void NegNormals();
  void ComputeFaceCull();
  void ComputeOccBox();
};

struct CPlugFileFont : public CPlugFile {
  CPlugFileFont();

};

struct CPlugFileGen : public CPlugFileImg {
  CPlugFileGen();

  const _ECPlugFileGen__EGenKind GenKind;
};

struct CPlugFileSnd : public CPlugFile {
};

struct CPlugFileWav : public CPlugFileSnd {
  CPlugFileWav();

};

// File extension: 'AudioBalance.Gbx'
struct CPlugAudioBalance : public CPlugAudio {
  CPlugAudioBalance();

  bool IsAbsolute;
  float AttackDuration;
  float MinimumDuration;
  float ReleaseDuration;
  void SetDefaultValues();
  void ApplySceneVolume();
  UnknownType SceneVolumedB;
  UnknownType UiVolumedB;
  UnknownType SceneLfeSenddB;
  UnknownType MusicLfeSenddB;
  UnknownType GlobalLfeSenddB;
  CFuncKeysReal* RolloffFromMusicVolume;
  UnknownType RolloffFactor;
  UnknownType RefDistanceFactor;
  UnknownType AutoRadiusFactor;
  float MaxDistFade_Ratio_Others;
  float MaxDistFade_Rolloff_Others;
  CFuncKeysReal* PitchFromDistance_Player_Others;
  CFuncKeysReal* PitchFromDistance_BengsGuns_Others;
  float MaxDistFade_Ratio_Focused;
  float MaxDistFade_Rolloff_Focused;
  CFuncKeysReal* PitchFromDistance_Player_Focused;
  CFuncKeysReal* PitchFromDistance_BengsGuns_Focused;
};

struct CPlugFileFidContainer : public CPlugFile {
  const CSystemFids* Location;
  void UiInstallFidsInSubFolder();
  void UiInstallFids();
  void UninstallAndDeleteFids();
  void EdDumpStatistics();
  void DumpContents();
  const uint NbFolders;
  const uint NbFiles;
  void DbgBenchExpand();
  void DbgExpandToDisk();
};

// File extension: 'TexturePack.Gbx'
struct CPlugBitmapPacker : public CPlug {
  CPlugBitmapPacker();

  uint BitmapSizeMax;
  const NodArray Packs;
  CSystemFidsFolder* FidsBrowseMaterials;
  CSystemFidsFolder* FidsBrowseSolids;
  void FindPackListFromPath();
  void PackBitmaps();
  void AddPackInput();
  const NodArray PackInputs;
  void FindTextureTiling();
  void FidParametersPush();
};

struct CPlugMusicType : public CPlugSound {
};

// File extension: 'AudioEnvironment.Gbx'
struct CPlugAudioEnvironment : public CPlugAudio {
  CPlugAudioEnvironment();

  UnknownType DopplerFactor;
  UnknownType RoomFxLowGain;
  UnknownType RoomFxLowGainHF;
  UnknownType RoomFxMidGain;
  UnknownType RoomFxMidGainHF;
  UnknownType RoomFxHighGain;
  UnknownType RoomFxHighGainHF;
  UnknownType RoomFxUIGain;
  UnknownType RoomFxUIGainHF;
  UnknownType RoomFxMusicGain;
  UnknownType RoomFxMusicGainHF;
  UnknownType LowPassGain;
  UnknownType LowPassGainHF;
  const float Gain;
  const float ReflectionsGain;
  const float LateReverbGain;
};

struct CPlugMaterialCustom : public CPlug {
  CPlugMaterialCustom();

};

struct CPlugVisualGrid : public CPlugVisual3D {
  CPlugVisualGrid();

  uint NbPointX;
  uint NbPointZ;
  float RangeX;
  float RangeZ;
  void Courbificateur();
  float Courbifiant;
  float Courbifiant2;
};

struct CPlugVisualPath : public CPlugVisualGrid {
  CPlugVisualPath();

};

// File extension: 'png'
struct CPlugFilePng : public CPlugFileImg {
  CPlugFilePng();

};

struct CPlugBlendShapes : public CPlug {
  CPlugBlendShapes();

  array<float> BlendVals;
  bool NormalizeNormals;
  bool BlendNormals;
};

// File extension: 'Text.Gbx'
struct CPlugTreeGenText : public CPlugTreeGenerator {
  CPlugTreeGenText();

  wstring Text;
  CPlugFont* Font;
  UnknownType Color;
  float Height;
  float RatioXY;
  UnknownType AlignHorizontal;
  UnknownType AlignVertical;
  float ClipLength;
  uint MaxLine;
  uint ClipLineMin;
  uint ClipLineMax;
};

struct CPlugFileGPU : public CPlugFile {
  CPlugFileGPU();

  const UnknownType GpuStage;
  const uint GpuVersionMajor;
  const uint GpuVersionMajorReq;
  const uint CodeSize;
  const CSystemFid* GeneratedCombination_Fid0;
  const CSystemFid* GeneratedCombination_Fid1;
};

// File extension: 'txt'
struct CPlugFileText : public CPlugFile {
  CPlugFileText();

  string Text;
};

struct CPlugBitmapPack : public CPlug {
  CPlugBitmapPack();

  uint SizeX;
  uint SizeY;
  UnknownType Format;
  uint NbComp;
  _EEGxTexAddress TexAdrU;
  CPlugBitmap* Bitmap;
  const NodArray PackElems;
  void LoadBitmap();
};

struct CPlugBitmapPackElem : public CPlug {
  CPlugBitmapPackElem();

  CPlugBitmap* FidBitmapSrc;
  uint TexelStartX;
  uint TexelStartY;
  const uint TexelCountX;
  const uint TexelCountY;
};

struct CPlugBitmapAddress : public CPlugBitmapSampler {
  CPlugBitmapAddress();

  bool UseBitmapTcScale;
  bool DirectTransfo;
  _EEGxUVGenerate GenerateUV;
  bool UVTransfoIso3;
  bool UVTransfoMat4;
  uint TexCoordIndex;
  UnknownType TransfoIso3;
  vec4 TransfoMat4U;
  vec4 TransfoMat4V;
  vec4 TransfoMat4W;
};

struct CPlugBitmapPackInput : public CPlug {
  CPlugBitmapPackInput();

  uint LayerCount;
  const NodArray FidBitmaps;
};

// File extension: 'ScanCache.Gbx'
struct CPlugFileFidCache : public CPlugFileFidContainer {
  CPlugFileFidCache();

  CSystemFids* FidsToCreateCacheFrom;
  uint Version;
  const wstring RootEnumFullName;
};

struct CPlugVisual2D : public CPlugVisual {
};

struct CPlugVisualQuads2D : public CPlugVisual2D {
  CPlugVisualQuads2D();

};

// File extension: 'Font.Gbx'
struct CPlugFont : public CPlug {
};

// File extension: 'Font.Gbx'
struct CPlugFontBitmap : public CPlugFont {
  CPlugFontBitmap();

  CPlugFontBitmap* FallbackFont;
  uint NbPages;
  NodArray PageShaders;
  uint FontHeight;
  uint FontAscent;
  vec2 BBoxCapitalMin;
  vec2 BBoxCapitalMax;
  void LoadAllPages();
  void CreateCharRemap();
  const uint NbCharRemapPages;
  CPlugMaterial* CustomMaterialModel;
  const NodArray PageTextureFids;
  array<wstring> PageTextureDataRefs;
};

struct CPlugTree : public CPlug {
  CPlugTree();

  const NodArray Childs;
  bool IsVisible;
  bool IsCollidable;
  bool IsRooted;
  bool IsLightVolume;
  bool IsLightVolumeVisible;
  bool UseLocation;
  bool IsShadowCaster;
  bool IsFixedRatio2D;
  bool IsPickable;
  bool IsPickableVisual;
  bool IsPortal;
  const bool HasModel;
  bool TestBBoxVisibility;
  const bool IsCustomBBox;
  bool UseRenderBefore;
  UnknownType Location;
  vec3 Translation;
  CPlugVisual* Visual;
  uint SubVisualIndex1;
  uint SubVisualIndex2;
  UnknownType SubVisualIndexB;
  uint SplitVisualIndex;
  uint SplitVisualCount;
  CPlugTreeGenerator* Generator;
  CPlugMaterial* Material;
  CPlug* Shader;
  CPlugSurface* Surface;
  void UpdateBBox();
  void Generate();
  CFuncTree* FuncTree;
  const vec3 BoundingBoxCenter;
  const vec3 BoundingBoxHalfDiag;
  const vec3 BoundingBoxMin;
  const vec3 BoundingBoxMax;
};

struct CPlugTreeGenerator : public CPlug {
  bool IsSaveGenerated;
  bool IsToKeepInSaveAsRelease;
};

// File extension: 'SoundGauge.Gbx'
struct CPlugSoundGauge : public CPlugSound {
  CPlugSoundGauge();

  CPlugFileSnd* FileSndFilling;
  CPlugFileSnd* FileSndEmptying;
  CPlugFileSnd* FileSndFillingFast;
  CPlugFileSnd* FileSndEmptyingFast;
  CPlugFileSnd* FileSndOnStopFilling;
  CPlugFileSnd* FileSndOnStopEmptying;
  CPlugFileSnd* FileSndOnStartFilling;
  CPlugFileSnd* FileSndOnStartEmptying;
  CPlugFileSnd* FileSndOnFull;
  CPlugFileSnd* FileSndOnEmpty;
  CPlugFileSnd* FileSndOnGradFull;
  CPlugFileSnd* FileSndOnGradEmpty;
  float FastRate;
  float FadeInDuration;
  float FadeOutDuration;
  float RestartLoopOnChange;
  CFuncKeysReal* PitchFromRateFilling;
  CFuncKeysReal* PitchFromRateEmptying;
  CFuncKeysReal* PitchFromRateOnStopFilling;
  CFuncKeysReal* PitchFromRateOnStopEmptying;
  CFuncKeysReal* PitchFromRateOnStartFilling;
  CFuncKeysReal* PitchFromRateOnStartEmptying;
  CFuncKeysReal* PitchFromRateOnFullOrEmpty;
  CFuncKeysReal* PitchFromRateOnGradFull;
  CFuncKeysReal* PitchFromRateOnGradEmpty;
  CFuncKeysReal* PitchFromRatioFilling;
  CFuncKeysReal* PitchFromRatioEmptying;
  CFuncKeysReal* PitchFromRatioOnStopFilling;
  CFuncKeysReal* PitchFromRatioOnStopEmptying;
  CFuncKeysReal* PitchFromRatioOnStartFilling;
  CFuncKeysReal* PitchFromRatioOnStartEmptying;
  CFuncKeysReal* PitchFromRatioOnFullOrEmpty;
  CFuncKeysReal* PitchFromRatioOnGradFull;
  CFuncKeysReal* PitchFromRatioOnGradEmpty;
  CFuncKeysReal* VolumeFromRateFilling;
  CFuncKeysReal* VolumeFromRateEmptying;
  CFuncKeysReal* VolumeFromRateOnStopFilling;
  CFuncKeysReal* VolumeFromRateOnStopEmptying;
  CFuncKeysReal* VolumeFromRateOnStartFilling;
  CFuncKeysReal* VolumeFromRateOnStartEmptying;
  CFuncKeysReal* VolumeFromRateOnFullOrEmpty;
  CFuncKeysReal* VolumeFromRateOnGradFull;
  CFuncKeysReal* VolumeFromRateOnGradEmpty;
  CFuncKeysReal* VolumeFromRatioFilling;
  CFuncKeysReal* VolumeFromRatioEmptying;
  CFuncKeysReal* VolumeFromRatioOnStopFilling;
  CFuncKeysReal* VolumeFromRatioOnStopEmptying;
  CFuncKeysReal* VolumeFromRatioOnStartFilling;
  CFuncKeysReal* VolumeFromRatioOnStartEmptying;
  CFuncKeysReal* VolumeFromRatioOnFullOrEmpty;
  CFuncKeysReal* VolumeFromRatioOnGradFull;
  CFuncKeysReal* VolumeFromRatioOnGradEmpty;
};

// File extension: 'GpuCache.Gbx'
struct CPlugGpuCompileCache : public CPlug {
  CPlugGpuCompileCache();

};

// File extension: 'Script.txt'
struct CPlugFileTextScript : public CPlugFileText {
  CPlugFileTextScript();

};

struct CPlugFileI18n : public CPlugFile {
  CPlugFileI18n();

};

struct CPlugVertexStream : public CPlug {
  CPlugVertexStream();

  bool IsStatic;
  const bool SkipVision;
  bool DirtyVision;
  const CPlugVisualOctree* Octree;
};

struct CPlugIndexBuffer : public CPlug {
  CPlugIndexBuffer();

  const bool IsStatic;
  const UnknownType IndexType;
  const uint IndexCount;
};

struct CPlugBitmapRenderHemisphere : public CPlugBitmapRender {
  CPlugBitmapRenderHemisphere();

  float SpecularPower0;
  float SpecularPower1;
  bool AutoScaleWithPower;
  bool m_UseLightDir;
  UnknownType HemiLayout;
};

struct CPlugFileOggVorbis : public CPlugFileSnd {
  CPlugFileOggVorbis();

};

struct CPlugBitmapRenderPortal : public CPlugBitmapRender {
  CPlugBitmapRenderPortal();

  float DepthFadeOutStart;
  float DepthFadeOutEnd;
};

struct CPlugBitmapRenderPlaneR : public CPlugBitmapRender {
  CPlugBitmapRenderPlaneR();

  UnknownType Plane;
  bool IsPlaneEqValid;
  string TreeId;
  vec4 PlaneEq;
};

struct CPlugSimuDump : public CMwNod {
  CPlugSimuDump();

};

// File extension: 'SoundSurface.Gbx'
struct CPlugSoundSurface : public CPlugSound {
  CPlugSoundSurface();

  float EdMaxSpeedKmh;
  NodArray Texture;
  NodArray Skid;
  const CFuncKeysReal* SkidVolumeFromIntensity;
};

struct CPlugFileBink : public CPlugFile {
  CPlugFileBink();

};

struct CPlugFileVideo : public CPlugFileImg {
  void Play();
  void Pause();
  void Stop();
  void Rewind();
  UnknownType TimeMode;
  bool IsLooping;
  const bool HasSound;
};

struct CPlugLocatedSound : public CMwNod {
  CPlugLocatedSound();

  CPlugSound* Sound;
  UnknownType Loc;
};

struct CPlugTreeLight : public CPlugTree {
  CPlugTreeLight();

  CPlugLight* PlugLight;
  const GxLight* Light;
};

// File extension: 'Sound.Gbx'
struct CPlugSoundMulti : public CPlugSound {
  CPlugSoundMulti();

  enum ESoundInputMapping {
    Direct = 0,
    ForceRandom = 1,
    Distance = 2,
    Scale = 3,
  };
  NodArray AdditionalSounds;
  ESoundInputMapping InputMapping;
  array<vec3> PreferedDistances;
  CFuncKeysReal* VolumeFromInput;
  bool AvoidDuplicates;
  bool AlternateParity;
  UnknownType PitchVarianceNeg;
  UnknownType PitchVariancePos;
  UnknownType VolumeVariance;
};

struct CPlugSoundVideo : public CPlugSound {
  CPlugSoundVideo();

  const CPlugFileVideo* Video;
  const CPlugFileImg* ImageNonVideo;
};

// File extension: 'PointsInSphere.Gbx'
struct CPlugPointsInSphereOpt : public CPlug {
  CPlugPointsInSphereOpt();

};

struct CPlugShaderPass : public CPlug {
  CPlugShaderPass();

  const uint iPass;
  _EEGxBlendFactor BlendSrc;
  _EEGxBlendFactor BlendDst;
  _EECullMode CullMode;
  bool WriteZ;
  const bool IsValid;
  CPlugFileGPUV* VertexShader;
  CPlugFileGPUP* PixelShader;
  CPlugFileGPU* DomainShader;
  CPlugFileGPU* GeometryShader;
  const NodArray VertexTextures;
};

// File extension: 'Shader.Gbx'
struct CPlugShaderSprite : public CPlugShaderApply {
  CPlugShaderSprite();

};

// File extension: 'Shader.Gbx'
struct CPlugShaderSpritePath : public CPlugShaderSprite {
  CPlugShaderSpritePath();

  CFuncKeysPath* FuncKeysPath;
};

struct CPlugVisualIndexed : public CPlugVisual3D {
};

struct CPlugTreeFrustum : public CPlugTree {
  CPlugTreeFrustum();

  bool Update;
  void ResetGrid();
  float FarZ;
  uint NbVisualX;
  uint NbVisualZ;
  uint NbPointX;
  uint NbPointZ;
};

// File extension: '.Svg'
struct CPlugFileSvg : public CPlugFile {
  CPlugFileSvg();

};

struct CPlugModelTree : public CMwNod {
  CPlugModelTree();

  const NodArray Childs;
  const NodArray LodMeshes;
  UnknownType LodMeshesLocs;
  const NodArray Surfaces;
  const UnknownType SurfaceLocs;
  vec3 RotationPivot;
  vec3 ScalePivot;
  UnknownType Location;
  const NodArray ChildGens;
  const UnknownType ChildGensLocs;
  const UnknownType ChildGensIds;
  const array<bool> ChildGensDisableSurface;
  bool OptimIsKeepTree;
};

struct CPlugModelMesh : public CMwNod {
  CPlugModelMesh();

  const uint VertexCount;
  const uint InfluenceCount;
  const uint MorphCount;
  const uint FrameCount;
  const uint VertexInfluenceCount;
  const uint PolyCount;
  const uint TriCount;
  const uint QuadCount;
  const bool PolyIsMaterialIndex;
  const bool PolyIsSmoothingGroup;
  const bool PolyIsVertexNormal;
  const bool PolyIsVertexColor;
  const uint PolyVertexUvLayerCount;
  const bool PolyIsVertexTangent;
  bool PolyIsDoubleSide;
  const uint SpriteCount;
  const bool SpriteIsMaterialIndex;
  const bool SpriteIsDiameter;
  const bool SpriteIsColor;
  const bool SpriteIsRotAngle;
  const bool SpriteIsXYRatio;
  const bool SpriteIsTextureAtlas;
  const bool SpriteIsTextureSubId;
  const NodArray Exts;
};

// File extension: 'VHlsl.Txt'
struct CPlugFileVHlsl : public CPlugFileGPUV {
  CPlugFileVHlsl();

};

struct CPlugFileGPUV : public CPlugFileGPU {
};

struct CPlugFileGPUP : public CPlugFileGPU {
};

// File extension: 'PHlsl.Txt'
struct CPlugFilePHlsl : public CPlugFileGPUP {
  CPlugFilePHlsl();

};

// File extension: 'BitmapDecals.Gbx'
struct CPlugBitmapDecals : public CPlug {
  CPlugBitmapDecals();

  const NodArray DecalModels;
  const uint DecalSetCount;
  uint CellSizeX;
  uint CellSizeY;
  uint CellSizeZ;
};

// File extension: 'Material.Gbx'
struct CPlugMaterial : public CPlug {
  CPlugMaterial();

};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFx : public CPlug {
};

struct CPlugMaterialFxFlags : public CPlugMaterialFx {
  CPlugMaterialFxFlags();

};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxFur : public CPlugMaterialFx {
  CPlugMaterialFxFur();

  uint ShellCount;
  float ShellThick;
  UnknownType ShellLowRGB;
  float ShellLowAlpha;
  UnknownType ShellHighRGB;
  float ShellHighAlpha;
  uint FenceCount;
  float FenceHeight;
  CPlugBitmap* FenceBitmap;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxs : public CPlugMaterialFx {
  CPlugMaterialFxs();

  NodArray MaterialFxs;
};

struct CPlugBitmapSampler : public CPlug {
  CPlugBitmapSampler();

  bool IsInternal;
  uint NbCompRequired;
  _EEAlphaReq AlphaRequired;
  bool IsSharedByDevices;
  bool SrgbToLinear;
  bool UseBitmapDefaults;
  _EEGxTexFilter WantedFiltering;
  _EEGxTexAddress TexAddressU;
  _EEGxTexAddress TexAddressV;
  _EEGxTexAddress TexAddressW;
  UnknownType BorderRGB;
  UnknownType BorderAlpha;
  const bool SynchNameWithShader;
  float MipMapLodBias;
  uint MaxMipLevel;
  const uint MaxAnisoRatio;
  CPlugBitmap* Bitmap;
};

struct CPlugBitmapShader : public CPlug {
  CPlugBitmapShader();

  CPlugShader* Shader;
  CPlugBitmap* BitmapToSwap;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxDynaBump : public CPlugMaterialFx {
  CPlugMaterialFxDynaBump();

  bool IsCollidable;
  float SpeedMaxIntens;
  float MaxIntens;
  float Inter1SizeX;
  float Inter1SizeZ;
};

// File extension: 'MaterialFx.Gbx'
struct CPlugMaterialFxDynaMobil : public CPlugMaterialFx {
  CPlugMaterialFxDynaMobil();

};

struct CPlugScriptWithSettings : public CMwNod {
  CPlugScriptWithSettings();

  CPlugFileTextScript* Script;
  const NodArray Settings;
  void UpdateSettingsFromScript();
};

// File extension: 'zip'
struct CPlugFileZip : public CPlugFileFidContainer {
  CPlugFileZip();

  bool DisableCrc32Check;
};

struct CPlugFileAudioMotors : public CPlugFile {
  CPlugFileAudioMotors();

};

struct CPlugBitmapRender : public CPlug {
  _ECPlugBitmapRender__ETrigger TriggerRender;
  uint cFrameToSkip;
  UnknownType RenderPath;
  _EERenderPathFails RenderPathFails;
  bool IVIdMaskReflected;
  bool IVIdMaskReflectMirror;
  bool IVIdMaskRefracted;
  bool IVIdMaskViewDepBump;
  bool IVIdMaskViewDepOcclusion;
  bool IVIdMaskOnlyRefracted;
  bool IVIdMaskHideWhenUnderground;
  bool IVIdMaskFoilage;
  bool IVIdMaskHideAlways;
  bool IVIdMaskHideButPick;
  bool IVIdMaskBackground;
  bool IVIdMaskGrassRGB;
  bool IVIdMaskLightGenP;
  bool IVIdMaskVehicle;
  bool IVIdMaskHideOnlyDirect;
  bool IVIdMaskInvisibleStopBounce;
  bool IVIdRefReflected;
  bool IVIdRefReflectMirror;
  bool IVIdRefRefracted;
  bool IVIdRefViewDepBump;
  bool IVIdRefViewDepOcclusion;
  bool IVIdRefOnlyRefracted;
  bool IVIdRefHideWhenUnderground;
  bool IVIdRefFoilage;
  bool IVIdRefHideAlways;
  bool IVIdRefHideButPick;
  bool IVIdRefBackground;
  bool IVIdRefGrassRGB;
  bool IVIdRefLightGenP;
  bool IVIdRefVehicle;
  bool IVIdRefHideOnlyDirect;
  bool IVIdRefInvisibleStopBounce;
  bool SVIdMaskReflected;
  bool SVIdMaskReflectMirror;
  bool SVIdMaskRefracted;
  bool SVIdMaskViewDepBump;
  bool SVIdMaskViewDepOcclusion;
  bool SVIdMaskOnlyRefracted;
  bool SVIdMaskHideWhenUnderground;
  bool SVIdMaskFoilage;
  bool SVIdMaskHideAlways;
  bool SVIdMaskHideButPick;
  bool SVIdMaskBackground;
  bool SVIdMaskGrassRGB;
  bool SVIdMaskLightGenP;
  bool SVIdMaskVehicle;
  bool SVIdMaskHideOnlyDirect;
  bool SVIdMaskInvisibleStopBounce;
  bool SVIdRefReflected;
  bool SVIdRefReflectMirror;
  bool SVIdRefRefracted;
  bool SVIdRefViewDepBump;
  bool SVIdRefViewDepOcclusion;
  bool SVIdRefOnlyRefracted;
  bool SVIdRefHideWhenUnderground;
  bool SVIdRefFoilage;
  bool SVIdRefHideAlways;
  bool SVIdRefHideButPick;
  bool SVIdRefBackground;
  bool SVIdRefGrassRGB;
  bool SVIdRefLightGenP;
  bool SVIdRefVehicle;
  bool SVIdRefHideOnlyDirect;
  bool SVIdRefInvisibleStopBounce;
  bool CustomFog;
  float FogCustomFarZ;
  bool TreeMipForceLowQ;
  bool RenderShadows;
  bool NoShadowMPass;
  bool RenderProjectors;
  bool RenderZoneFogG;
  bool RenderLightFlares;
  bool InvertY;
  bool OnePixBorder;
  bool UseZBuffer;
  _ECPlugBitmapRender__ETrigger TriggerClearRGBA;
  UnknownType ClearRGB;
  UnknownType ClearAlpha;
  UnknownType ClearFogColor;
  bool IgnoreClearBitmap;
  bool HideSun;
  bool WriteRed;
  bool WriteGreen;
  bool WriteBlue;
  bool WriteAlpha;
  bool WriteTranslAlpha;
  bool ForceAlphaToOne;
  bool ForceAlphaToWrittenZ;
  CPlugBitmap* BitmapClear;
  UnknownType BitmapClearMode;
  vec2 BitmapClearUV;
  uint SuperSampleLevel;
  uint BlurTexelCount;
  bool BlurWRed;
  bool BlurWGreen;
  bool BlurWBlue;
  bool BlurWAlpha;
  uint GutterTexelCount;
  bool HdrToneMap;
  bool RenderMultiLight;
  bool UpdateForEachCamera;
  CPlugBitmapRenderSub* RenderSub;
  void CleanRenderCache();
};

struct CPlugBitmapRenderWater : public CPlugBitmapRender {
  CPlugBitmapRenderWater();

  _ECPlugBitmap____ WaterType;
  float FogMaxDepth;
  float FogClampAboveDist;
  float MaxDistPlaneToAlpha;
  bool MirrorGeom;
  UnknownType MirrorScaleY;
  bool UseClipPlane;
  float ClipPlaneHeight;
  bool UseFMargin;
  bool FrustumUseHorizon;
  float FMargin;
  float FHMargin;
  bool RndLDirSpecInA;
  bool MaskWater2d;
  bool UseCameraZClip;
  bool AddWaterFog;
  bool NoSubWaterOptim;
  bool BlitCubeAtFarZ;
  bool DisableGeomOptim;
  UnknownType ReflectNoGeom;
  UnknownType QualityTech3;
  bool DisableConfigQuality;
  bool HqSplitSkyOutDepth;
  bool FogUseSharedParams;
  UnknownType WaterHeight;
  float m_WaterHeightInW;
  bool UseBufferRefract;
  uint DisableRenderSkipOptims;
  float InvisibleRatio;
  uint InvisibleSleepPeriod;
  const UnknownType TmpWaterVisibilityRatio;
  uint MaxUpdatePeriod;
  float MaxCameraDeltaPos;
  float MinCameraDeltaCos;
  const float FrameRenderRatio;
  CPlugBitmap* BitmapSplitSky;
  CPlugBitmap* BitmapDepth;
};

struct CPlugBitmapRenderCubeMap : public CPlugBitmapRender {
  CPlugBitmapRenderCubeMap();

  void SaveInTga();
  uint CubeFaceCount;
  vec3 CenterPos;
  float NearZ;
  float FarZ;
  UnknownType eFarZ;
  float MinDistToUpdate;
  bool AverageReceiverCenters;
  UnknownType Discard;
  bool UseItemShaderFilter;
  CPlugBitmap* BitmapImageSpace;
  float BitmapImageSpaceDistToCenter;
  float BitmapImageSpaceScaleHeight;
};

struct CPlugBitmapRenderCamera : public CPlugBitmapRender {
  CPlugBitmapRenderCamera();

  bool UseCameraDrawRect;
  bool UseCameraScissor;
  UnknownType CameraMode;
  UnknownType CameraToVisual;
  float ScaleZRange;
  CMwNod* Camera;
  float DepthBias;
  float DepthBiasSlope;
  float PlaneY_Offset;
};

struct CPlugBitmapRenderVDepPlaneY : public CPlugBitmapRender {
  CPlugBitmapRenderVDepPlaneY();

  CPlugViewDepLocator* ViewDepLocator;
};

struct CPlugFileSndGen : public CPlugFileSnd {
  CPlugFileSndGen();

};

struct CPlugMaterialFxGenCV : public CPlugMaterialFx {
  CPlugMaterialFxGenCV();

  float DeltaYMax;
  float DeltaYMin;
  NodArray MaterialToRayCasts;
};

// File extension: 'SoundEngine.Gbx'
struct CPlugSoundEngine : public CPlugSound {
  CPlugSoundEngine();

  NodArray Components;
  float MaxRpm;
  const CFuncKeysReal* Volume_Speed;
  const CFuncKeysReal* Volume_Distance;
  const CFuncKeysReal* Volume_Rpm;
  const CFuncKeysReal* Volume_Accel;
  const CFuncKeysReal* Alpha_Speed;
  const CFuncKeysReal* Alpha_Distance;
  const CFuncKeysReal* Alpha_Rpm;
  const CFuncKeysReal* Alpha_Accel;
};

struct CPlugSoundComponent : public CMwNod {
  CPlugSoundComponent();

  CPlugFileSnd* PlugFile;
  float MinVolume;
  float MaxVolume;
  float FadeInStartSpeedKmh;
  float FadeInEndSpeedKmh;
  float FadeOutStartSpeedKmh;
  float FadeOutEndSpeedKmh;
  float MinPitch;
  float MaxPitch;
  float PitchShiftStartSpeedKmh;
  float PitchShiftEndSpeedKmh;
};

struct CPlugBitmapRenderSolid : public CPlugBitmapRender {
  CPlugBitmapRenderSolid();

  UnknownType TriggerBitmap;
  UnknownType TriggerShader;
  UnknownType TriggerSolid;
  UnknownType BitmapFilter;
  CPlugBitmap* Bitmap;
  CPlugShader* Shader;
  const NodArray Solids;
  UnknownType Locations;
};

struct CPlugBitmapRenderSub : public CPlugBitmapRender {
  CPlugBitmapRenderSub();

  CPlugShader* ShaderToForce;
};

// File extension: 'Model.Gbx'
struct CPlugModel : public CPlugTreeGenerator {
  CPlugModel();

  string Origin;
  float ExportScale;
  const CPlugModelTree* ModelTree;
  const CPlugSkel* Skel;
  const CPlugPath* Path;
  float VertexPositionsQuantize;
};

struct CPlugIconIndex : public CMwNod {
  CPlugIconIndex();

};

struct CPlugFileModel : public CPlugFile {
};

struct CPlugFileModelObj : public CPlugFileModel {
  CPlugFileModelObj();

};

// File extension: 'GenSolid.Gbx'
struct CPlugTreeGenSolid : public CPlugTreeGenerator {
  CPlugTreeGenSolid();

  bool MergeInstances;
  CPlugSolid* Solid;
  CPlugMaterial* SolidReplaceMaterial;
  bool UseCustomFuncTree;
  float CustomFuncTreePhase;
  float CustomFuncTreePeriodScale;
};

struct CPlugFileModel3ds : public CPlugFileModel {
  CPlugFileModel3ds();

};

struct CPlugModelLodMesh : public CMwNod {
  CPlugModelLodMesh();

  const bool OptimSplitGridIsUse;
  vec3 OptimSplitGridCellSize;
  vec3 OptimSplitGridOrigin;
  string OptimGroupId;
  bool OptimIsCreateSubInfluences;
};

// File extension: 'ModelFur.Gbx'
struct CPlugModelFur : public CMwNod {
  CPlugModelFur();

  uint RandSeed;
  bool Enabled;
  string MaterialName;
  CPlugMaterial* Material;
  CMwNod* DiffuseMap;
  CMwNod* SpecularMap;
  CMwNod* DensityMap;
  CMwNod* DirAlphaMap;
  CMwNod* DirBetaMap;
  CMwNod* WidthMap;
  CMwNod* LengthMap;
  CMwNod* CurvatureMap;
  uint MapAtlasX;
  uint MapAtlasY;
  bool RandomUDir;
  float DirAlphaDeg;
  float DirAlphaVarDeg;
  float DirBetaDeg;
  float DirBetaVarDeg;
  float CurvatureDeg;
  float CurvatureVarDeg;
  float HelixDeg;
  float HelixVarDeg;
  float Width;
  UnknownType WidthVar;
  float Length;
  UnknownType LengthVar;
  float NormalBendAngleX;
  float NormalBendAngleY;
  bool Debug;
  bool DoubleLayer;
  bool ModulateWidthByTriSurf;
  uint DensityMax;
  bool DensityInAtlasY;
  float DensityRandom;
  uint DensitySampling;
  float FluffPosRandom;
  bool DynaEnabled;
  float DynaK1;
  float DynaK1Var;
  float DynaK2;
  float DynaK2Var;
  float DynaAccel;
  float DynaAccelVar;
  bool DynaZeroBeta;
  float DynaAlphaMin;
  float DynaAlphaMax;
  float DynaBetaMin;
  float DynaBetaMax;
  uint FluffChunkCount;
  uint ChunkVertCount;
  bool FluffShapeCircular;
  float FluffShapeEndWidthCoef;
  uint HairMaxCount;
};

struct CPlugBitmapRenderOverlay : public CPlugBitmapRender {
  CPlugBitmapRenderOverlay();

  bool IsOverlaySelfBlur;
  float TexelByPixel;
  bool CanRenderInSubRect;
};

struct CPlugBitmapRenderLightOcc : public CPlugBitmapRender {
  CPlugBitmapRenderLightOcc();

  float FovY;
  UnknownType OpacityLightThrough;
  UnknownType OpacityLensFlare;
  UnknownType FlareThreshold;
  CPlugBitmap* BitmapToModulate;
};

// File extension: 'ViewDepLocator.Gbx'
struct CPlugViewDepLocator : public CMwNod {
  CPlugViewDepLocator();

  float MinY;
  float MaxY;
  bool UseWaterY;
};

struct CPlugTreeViewDep : public CPlugTree {
};

// File extension: 'DecoTree.Gbx'
struct CPlugDecoratorTree : public CMwNod {
  CPlugDecoratorTree();

  UnknownType TreeId;
  CPlugMaterial* Material;
  CPlugTreeLight* TreeLight;
  _EEBoolCond ExistCond;
  _EEBoolCond VisibleCond;
  bool VisibleApplyOnChilds;
  _EEBoolCond ShadowCasterCond;
  bool ShadowCasterApplyOnChilds;
  bool TransformVisualToSurface;
  _EEBoolCond CollidableCond;
  bool NoLocation;
};

// File extension: 'DecoSolid.Gbx'
struct CPlugDecoratorSolid : public CMwNod {
  CPlugDecoratorSolid();

  const NodArray TreeDecorators;
};

// File extension: 'ModelFences.Gbx'
struct CPlugModelFences : public CMwNod {
  CPlugModelFences();

  float BlockSizeXZ;
  uint BlockFenceCountXZ;
  vec2 FenceRangeY;
  float LodMaxDist;
  uint RandSeed;
  CPlugMaterial* MaterialFences;
  bool IsOrthos;
  bool IsDiags;
  bool OnlyOnePlaneY;
  const bool UseSkinShader;
  bool Debug;
  bool DebugRand;
  bool DebugEdges;
};

struct CPlugFileModelFbx : public CPlugFileModel {
  CPlugFileModelFbx();

};

// File extension: 'FurWind.Gbx'
struct CPlugFurWind : public CMwNod {
  CPlugFurWind();

  vec3 WorldDir;
  float Intensity;
  CFuncNoise* NoiseFunc;
};

// File extension: 'Decal.Gbx'
struct CPlugDecalModel : public CPlug {
  CPlugDecalModel();

  bool IsObsolete;
  CPlugBitmap* Icon;
  float TexelByMeter;
  UnknownType MaxAngleN;
  bool FadeNormalAndZ;
  CPlugBitmap* DiffuseA;
  CPlugBitmap* Specular;
  CPlugBitmap* Normal;
  float ImpactSize;
  UnknownType Svg;
  float SvgSize;
  float SvgAlpha;
  CPlugSolid* Solid;
  CPlugBitmap* _3dSpriteBitmap;
  UnknownType _3dSpriteGroupId;
  bool RandomInstances;
  UnknownType MaxAngleN3d;
  UnknownType MinAngleN3d;
};

struct CPlugBitmapAtlas : public CPlug {
  CPlugBitmapAtlas();

};

// File extension: 'SphericalHarmonics.Gbx'
struct CPlugSphericalHarmonics : public CPlug {
  CPlugSphericalHarmonics();

};

struct CPlugBitmapArray : public CPlug {
  CPlugBitmapArray();

};

struct CPlugSpriteParam : public CPlug {
  CPlugSpriteParam();

  _ECPlugVisualSprite__ERenderMode RenderMode;
  UnknownType Usage;
  bool RadiusInScreen;
  bool UseGlobalDir;
  bool SortBackToFront;
  vec3 GlobalDirection;
  vec2 PivotPoint;
  UnknownType GlobalDirTiltFactor;
  UnknownType ZBiasFactor;
  float TextureHeightInWorld;
  float VisibleMaxDistAtFov90;
  float VisibleMinScreenHeight01;
};

// File extension: 'exr'
struct CPlugFileExr : public CPlugFileImg {
  CPlugFileExr();

};

// File extension: 'PoissonDiscDistribution.Gbx'
struct CPlugPoissonDiscDistribution : public CPlug {
  CPlugPoissonDiscDistribution();

};

// File extension: 'hdr'
struct CPlugFileHdr : public CPlugFileImg {
  CPlugFileHdr();

};

struct CPlugAnimFile : public CMwNod {
  CPlugAnimFile();

};

struct CPlugVisualCelEdge : public CPlugVisual {
  CPlugVisualCelEdge();

};

// File extension: 'ParticleEmitterSubModel.Gbx'
struct CPlugParticleEmitterSubModel : public CMwNod {
  CPlugParticleEmitterSubModel();

  bool IsActive;
  bool IsSolo;
  _EParticleEmitterSubModel ParticleEmitterSubModel;
  uint MaxParticleCount;
  bool MultiState_IsAsyncLink;
  uint PartChain_MaxCount;
  uint PartChain_MaxPartPerChain;
  bool PartChain_AddLinkOnDestroy;
  CPlugParticleGpuSpawn* GpuSpawn;
  CPlugParticleGpuModel* GpuModel;
  CPlugParticleSplashModel* SplashModel;
  uint SpawnStartTime;
  uint SpawnEndTime;
  void SpawnEndTimeNull();
  _EESpawnCond SpawnCond;
  float SpawnPeriod;
  float SpawnMinDist;
  UnknownType SpawnLocOffset;
  CFuncEnvelope* SpawnIntensityFromSpawnNormLife;
  float Life;
  float LifeVariation;
  uint LifePeriodMs_OnePart;
  _EMultiStateRenderMode MultiStateRenderMode;
  _EStandardRenderMode StandardRenderMode;
  bool SortSprites;
  float ViewDistMax;
  CPlugMaterial* Material;
  CPlugShader* Shader;
  CPlugSolid2Model* Mesh;
  wstring MeshRef;
  bool MeshUseInstancing;
  _EMeshInstanceType MeshInstanceType;
  CFuncKeysReal* ScaleOverLife;
  CFuncKeysReal* RampMinOverLife;
  CFuncKeysReal* RampMaxOverLife;
  UnknownType MeshLocOffset;
  bool MeshLocUseScale;
  bool MeshLocScaleFromIntensity;
  uint CircularTrailVertPerPartCount;
  bool LightTrail_Hack_ImmobileEmitter;
  float SizeBirthRatioXY;
  vec2 SpritePivotPoint;
  _ETextureAtlas TextureAtlas;
  uint TextureAtlasDimX;
  uint TextureAtlasDimY;
  uint TextureAtlasCount;
  bool TextureAtlasTopToBottom;
  uint TextureAtlasFixedIndex;
  uint TextureAtlasAnimationPeriodMs;
  bool TextureAtlasAnimationRandomPhase;
  CFuncEnvelope* IntensityFilter;
  float SizeBirth;
  float SizeBirthVariation;
  bool SizeBirthUseEmissionZone;
  float SizeBirthEmissionZoneScale;
  bool SizeBirthUseIntensity;
  CFuncEnvelope* SizeOverLife;
  bool SizeUseSizeX;
  CFuncEnvelope* SizeXOverLife;
  float BeamLengthSpeedScale;
  float BeamLengthMax;
  float RollSpeedBirth;
  float RollSpeedBirthVariation;
  CFuncColorGradient* ColorGradient;
  _EColorGradientUse ColorGradientUse;
  bool ColorModulateWithTransparency;
  UnknownType ColorType;
  bool ColorBirthUseIntensity;
  float TransparencyBirth;
  float TransparencyBirthVariation;
  bool TransparencyBirthUseIntensity;
  CFuncEnvelope* TransparencyOverLife;
  float UScaleDist;
  float VScaleDist;
  float WaterSplashVelY;
  GxLightBall* Light;
  CFuncEnvelope* LightRadiusOverLife;
  CFuncColorGradient* LightColorOverLife;
  bool LightUseEmitterHue;
  bool LightColorModulateWithTransparency;
  float WeightBirth;
  float WeightBirthVariation;
  float FluidFrictionBirth;
  float FluidFrictionBirthVariation;
  bool FluidFrictionBirthUseIntensity;
  UnknownType FluidFrictionBirthIntensityBase;
  bool RelativeToEmitter;
  bool CollisionEnabled;
  float CollisionBounce;
  float CollisionDamper;
  float CollisionRadius;
  bool PrecalcEnabled;
  uint PrecalcPartCount;
  uint PrecalcSampleRate;
  uint SimulatedSmokeLifeSpanMs;
  float SimulatedSmokeInfluenceRadius;
  UnknownType SimulatedSmokeGravity;
  CFuncKeysReal* SimulatedSmokeParticleSizeOverLife;
  CFuncKeysReal* SimulatedSmokeParticleAlphaOverLife;
  float SimulatedSmokeParticleBaseSize;
  float SimulatedSmokeParticleSizeRandomness;
  float SimulatedSmokeParticlePositionRandomRadius;
  float SimulatedSmokeParticlePositionRandomness;
  float SimulatedSmokeParticleLifeDistance;
  UnknownType SimulatedSmokeParticleBaseColor;
  CFuncKeysReal* SimulatedSmokeFilamentStrengthOverLife;
  float SimulatedSmokeFilamentBaseStrength;
  float SimulatedSmokeFilamentPositionRandomRadius;
  float SimulatedSmokeFilamentPositionRandomness;
  float EmitStateFromImpactDirNormalCoef;
  float EmitStateFromImpactDirTangentialCoef;
  UnknownType Length;
  UnknownType Radius;
  UnknownType ColorCenter;
  UnknownType ColorBorder;
  UnknownType ColorLerpPow;
  float ColorCenterMultiplier;
  float ColorBorderMultiplier;
};

// File extension: 'ParticleModel.Gbx'
struct CPlugParticleEmitterModel : public CMwNod {
  CPlugParticleEmitterModel();

  bool IsSplashMode;
  NodArray ParticleEmitterSubModels;
  NodArray ParticleEmitterSubModelsInLibrary;
  float ShadowMapTexelSize;
  bool EnableVortexEmitter;
  uint VortexCountPerCircle;
  float Randomness;
  float Radius;
  uint EmitPeriod;
  float Strength;
  uint LifeTime;
  float Coef;
  bool IsRelativeToEmitter;
};

// File extension: 'BeamModel.Gbx'
struct CPlugBeamEmitterModel : public CMwNod {
  CPlugBeamEmitterModel();

  NodArray SubModels;
};

struct CPlugParticleSplashModel : public CMwNod {
  CPlugParticleSplashModel();

};

struct CPlugParticleImpactModel : public CMwNod {
  CPlugParticleImpactModel();

};

struct CPlugParticleMaterialImpactModel : public CMwNod {
  CPlugParticleMaterialImpactModel();

};

struct CPlugBitmapApplyArray : public CPlug {
  CPlugBitmapApplyArray();

};

struct CPlugOpModel : public CMwNod {
  CPlugOpModel();

};

struct CPlugSkel : public CMwNod {
  CPlugSkel();

};

struct CPlugSolid2Model : public CMwNod {
  CPlugSolid2Model();

};

struct CPlugFileModelCollada : public CPlugFileModel {
  CPlugFileModelCollada();

};

struct CPlugTimedPixelArray : public CPlug {
  CPlugTimedPixelArray();

};

struct CPlugResource : public CMwNod {
  CPlugResource();

};

struct CPlugFileGenScriptCtx : public CPlug {
  CPlugFileGenScriptCtx();

  uint TexelCountX;
  uint TexelCountY;
  uint TexelIndexX;
  uint TexelIndexY;
  uint LevelIndex;
  float TexelValueR;
  float TexelValueG;
  float TexelValueB;
  float TexelValueA;
};

struct CPlugFxLensFlareArray : public CPlug {
  CPlugFxLensFlareArray();

};

struct CPlugParticleEmitterSubModelGpu : public CMwNod {
  CPlugParticleEmitterSubModelGpu();

};

struct CPlugParticleGpuSpawn : public CMwNod {
  CPlugParticleGpuSpawn();

};

struct CPlugParticleGpuModel : public CMwNod {
  CPlugParticleGpuModel();

};

struct CPlugCharVisModel : public CMwNod {
  CPlugCharVisModel();

};

struct CPlugSkelSetup : public CMwNod {
  CPlugSkelSetup();

};

struct CPlugCharPhyModel : public CMwNod {
  CPlugCharPhyModel();

};

struct CPlugCharPhyMaterial : public CMwNod {
  CPlugCharPhyMaterial();

};

struct CPlugFxLensDirtGen : public CMwNod {
  CPlugFxLensDirtGen();

  UnknownType AtlasId;
  uint Count;
  UnknownType ScreenSizeYMin;
  UnknownType ScreenSizeYMax;
  UnknownType Intens_Min;
  UnknownType Intens_Max;
};

struct CPlugShieldEmitterModel : public CMwNod {
  CPlugShieldEmitterModel();

};

// File extension: 'Bullet.Gbx'
struct CPlugBulletModel : public CMwNod {
  CPlugBulletModel();

  enum EBulletType {
    Projectile = 0,
    Laser = 1,
    Beam = 2,
    TriLaser = 3,
    ProjectileHoming = 4,
    Spear = 5,
    ProjectileGuidedMouse = 6,
    ProjectileGuidedKeyboard = 7,
  };
  enum EExplosionOccultationTest {
    Binary = 0,
    Smoother = 1,
  };
  enum EFireBulletPatternMode {
    NoPattern = 0,
    GrowingOffset = 1,
    Spiral = 2,
    Hatchet = 3,
    Net = 4,
    ChaosSpiral = 5,
  };
  EBulletType BulletType;
  float BulletRadius;
  float BulletVsRadiusMargin;
  uint BulletVsMinAgeMs;
  float Speed;
  CFuncKeysReal* SpeedFromHorizonAngle;
  float GunSpeedCoef;
  float GunSpeedCoefRatioMin;
  float GunSpeedCoefRatioMax;
  float RestSpeed;
  float LifeTime;
  float LifeTimeAfterFirstImpact;
  float Mass;
  float FluidFriction;
  float TrajectoryUTurnDistance;
  float ImpactBouncingN;
  float ImpactBouncingT;
  float TriLaserRadiusAtOneMeter_Zoom0;
  float TriLaserRadiusAtOneMeter_Zoom1;
  float TriLaserNearMissDist;
  float ProjectileNearMissDist;
  float ProjectileNearMissDelay;
  uint ChargeDurationFull;
  uint ChargeDurationStop;
  float SpearLockDist;
  float BeamMaxLength;
  uint ExplosionOnImpactCount;
  UnknownType ExplosionOnImpactCountOnlyOnMaterialId;
  bool ExplosionOnEndLife;
  UnknownType ExplosionOnSurfaceMaterialId;
  float ExplosionDetectionRadius_Resting;
  float ExplosionDetectionRadius_Flying;
  float ExplosionOnAllPlayers;
  int ExplosionDamageValue;
  float ExplosionDamageRadius;
  UnknownType ExplosionDamageRadiusAttenuation;
  float ExplosionBlowValue;
  float ExplosionBlowRadius;
  UnknownType ExplosionBlowRadiusAttenuation;
  float ExplosionElectroPulseValue;
  CFuncKeysReal* ExplosionRadiusCoefFromLifeTime;
  float ExplosionBlowVerticalScale;
  UnknownType EndLifeWithoutExplosionOnMaterialId;
  EExplosionOccultationTest ExplosionOccultationTest;
  UnknownType ExplosionEnergyWhenOccluded;
  CFuncKeysReal* ExplosionEnergyFromLifeTime;
  UnknownType HomingDist;
  UnknownType HomingPeriod;
  UnknownType HomingMaxAnglularSpeed;
  uint HomingLockDuration;
  UnknownType GuidedAngularSpeed;
  uint GuidedMinLifeTime;
  UnknownType GuidedRollAngleMax;
  bool IsFlare;
  float FlareAttractionRadius;
  float FlareExplosionRadius;
  bool IsWard;
  float WardRadius;
  bool MultiSphereDetection;
  bool Sm_AutoAim;
  float Sm_AimIntertia;
  uint Sm_ThisHitOtherBulletBonusDuration;
  float Sm_ThisHitOtherBulletBonusAmmoCount;
  uint Sm_OtherHitThisBulletBonusDuration;
  float Sm_OtherHitThisBulletBonusAmmoCount;
  bool HoldTriggerToPower;
  CFuncKeysReal* SpeedFromTriggerDuration;
  uint AmmoCostDuringTriggerDuration;
  CFuncKeysReal* SpreadCoefFormChargeDuration;
  uint FirePeriod;
  uint FireEnergyCost;
  uint FireMaxEnergyStorage;
  uint EnergyGainDelay;
  uint DefuserFirePeriod;
  uint DefuserMissAmmoLoss;
  uint FireBulletCount;
  float FireBulletDispersionAngleDeg;
  float FireBulletCountSpeedCoef;
  array<vec3> FireBulletSpreads;
  EFireBulletPatternMode FireBulletPattern_Mode;
  bool FireBulletPattern_OnlyVisual;
  array<vec3> FireBulletPattern_GrowingOffset_Offsets;
  UnknownType FireBulletPattern_InitialBlendDuration;
  UnknownType FireBulletPattern_SpiralHatchetNet_BulletCount;
  UnknownType FireBulletPattern_SpiralHatchetNet_Radius;
  UnknownType FireBulletPattern_SpiralHatchetNet_SpinPerSecond;
  bool FireBulletPattern_RotateOddBulletsCounterClockwise;
  bool FireBulletPattern_ApexRegroup;
  UnknownType FireBulletPattern_ApexRegroup_MinApexTime;
  bool FireBulletPattern_ChaosSpiral_Spin;
  array<float> FireBulletPattern_ChaosSpiral_Offsets;
  CPlugSound* SoundFire;
  CPlugSound* SoundAlive;
  CPlugSound* SoundReloading;
  CPlugSound* SoundGauge;
  CPlugSound* SoundIsHoming;
  vec3 SoundFireOffset;
  CFuncKeysReal* SoundAliveVolumeFromRemainingLifeTime;
  CFuncKeysReal* SoundAlivePitchFromRemainingLifeTime;
  CFuncKeysReal* SoundFireVolumeFromRemainingAmmo;
  CFuncKeysReal* SoundFirePitchFromRemainingAmmo;
  CPlugParticleEmitterModel* ParticleModelFire;
  CPlugParticleEmitterModel* ParticleModelAlive;
  CPlugParticleMaterialImpactModel* ImpactBounce;
  CPlugParticleMaterialImpactModel* ExplosionBullet;
  CPlugParticleMaterialImpactModel* ExplosionSurface;
  CPlugBeamEmitterModel* BeamVisualModel;
  float HiddenDist;
  vec3 VisualOffsetFirstPerson;
  float VisualOffsetDuration;
  float VisualOffsetDerivTimeOffset;
  bool WarmUp;
  wstring Name;
  CPlugBitmap* BitmapLasersight;
  CPlugBitmap* BitmapCrosshair;
  CPlugBitmap* BitmapCrosshairTriLaser;
  float SizeXScreenPercent;
  float SizeYScreenPercent;
  float SizeXScreenPercentMax;
  float SizeYScreenPercentMax;
  CPlugBitmap* Icon;
  bool ShowImpactPos;
  UnknownType Sm_SpModelName;
  uint Sm_SpChargeDuration;
  uint Sm_SpInactivityDelayBeforeCharge;
  bool Sm_FirstPersonCam;
  vec3 Sm_FirstPersonCamOffset;
  float Sm_FirstPersonCamFov;
  uint Sm_ProtectDuration;
};

struct CPlugDataTape : public CMwNod {
  CPlugDataTape();

};

struct CPlugSpline3D : public CMwNod {
  CPlugSpline3D();

  const float Length;
  vec3 Translate;
  const CFuncKeysTrans* Keys;
};

struct CPlugTrafficPathSquares : public CMwNod {
  CPlugTrafficPathSquares();

  UnknownType Id;
  const string Name;
  array<int3> Squares;
};

// File extension: 'PlugTrafficObjectParams.Gbx'
struct CPlugTrafficObjectParams : public CMwNod {
  CPlugTrafficObjectParams();

  float DefaultSpeed;
  float DefaultAcceleration;
  float DefaultDecceleration;
  UnknownType TrafficPathType;
  UnknownType TrafficModel;
  UnknownType BaseOffset;
  uint PointDelay;
};

struct CPlugTrafficZoneSquares : public CMwNod {
  CPlugTrafficZoneSquares();

  UnknownType Id;
  const string Name;
  array<int3> Squares;
  float MinSpeed;
  float MaxSpeed;
  float MinSpeedDistance;
  float MaxSpeedDistance;
  float Acceleration;
  const float CurrentSpeed;
  float CurrentYaw;
  float CurrentPitch;
  float PitchSpeed;
  float YawSpeed;
};

struct CPlugFogMatter : public CPlug {
  CPlugFogMatter();

};

struct CPlugFogVolume : public CPlug {
  CPlugFogVolume();

};

struct CPlugFogVolumeBox : public CPlugFogVolume {
  CPlugFogVolumeBox();

};

struct CPlugDynaPointModel : public CMwNod {
  CPlugDynaPointModel();

  vec3 Center;
  float Radius;
  float Friction;
  float Restitution;
  float GravityCoef;
};

struct CPlugFxLightning : public CPlug {
  CPlugFxLightning();

};

struct CPlugFxWindOnDecal : public CPlug {
  CPlugFxWindOnDecal();

};

struct CPlugFileJxr : public CPlugFileImg {
  CPlugFileJxr();

};

struct CPlugFileWebP : public CPlugFileImg {
  CPlugFileWebP();

};

struct CPlugMaterialPack : public CPlug {
  CPlugMaterialPack();

};

struct CPlugTrafficShapedTrajectory : public CMwNod {
  CPlugTrafficShapedTrajectory();

  const bool Closed;
  const uint PointsCount;
  const uint AllocatedSize;
  const float Length;
};

struct CPlugTrafficFlowDescriptor : public CMwNod {
  CPlugTrafficFlowDescriptor();

  uint InitialRandSeed;
  float InitialOffset;
  float Speed;
  float Density;
  float MinVehiclesSpacing;
  bool DrivingDirection;
};

struct CPlugTrafficGraph : public CMwNod {
  CPlugTrafficGraph();

  NodArray Splines;
  NodArray FlowDescriptors;
};

struct CPlugCharPhyRecoilModel : public CMwNod {
  CPlugCharPhyRecoilModel();

};

struct CPlugFxWindOnTreeSprite : public CPlug {
  CPlugFxWindOnTreeSprite();

};

// File extension: 'PlugFlockModel.Gbx'
struct CPlugFlockModel : public CMwNod {
  CPlugFlockModel();

  UnknownType FlockType;
  uint DefSpawnCount;
  CMwNod* BirdModelFid;
  CMwNod* AnimFile;
  CPlugSound* SoundLoop;
  CPlugSound* SoundEventTakeOff;
  UnknownType Volatility;
  float Range;
  float CosViewAngle;
  float MinSpeed;
  float MaxSpeed;
  uint UpdateFrequency;
  float Variance;
  float vAvoidance;
  float kAvoidance;
  float vGrouping;
  float kGrouping;
  float vMatching;
  float kMatching;
  float vGroundAvoid;
  float kGroundAvoid;
  uint StandingDuration;
  uint AnimPeriod;
  uint Anim_StandingStar;
  uint Anim_StandingEnd;
  uint Anim_GlidingStart;
  uint Anim_GlidingEnd;
  uint Anim_FlappingStart;
  uint Anim_FlappingEnd;
};

struct CPlugVehicleVisEmitterModel : public CMwNod {
  CPlugVehicleVisEmitterModel();

};

struct CPlugVehicleVisModel : public CMwNod {
  CPlugVehicleVisModel();

};

struct CPlugVehicleVisModelShared : public CMwNod {
  CPlugVehicleVisModelShared();

};

struct CPlugVehicleMaterialGroup : public CMwNod {
  CPlugVehicleMaterialGroup();

};

struct CPlugVehicleCameraRace3Model : public CPlugCamControlModel {
  CPlugVehicleCameraRace3Model();

};

struct CPlugBodyPath : public CMwNod {
  CPlugBodyPath();

};

struct CPlugCharPhySpecialProperty : public CMwNod {
  CPlugCharPhySpecialProperty();

};

struct CPlugParticleGpuVortex : public CMwNod {
  CPlugParticleGpuVortex();

};

struct CPlugGameSkin : public CMwNod {
  CPlugGameSkin();

};

struct CPlugFxHdrScales_Tech3 : public CPlug {
  CPlugFxHdrScales_Tech3();

};

struct CPlugVehicleCameraRace2Model : public CPlugCamControlModel {
  CPlugVehicleCameraRace2Model();

};

struct CPlugVehicleCameraInternalModel : public CPlugCamControlModel {
  CPlugVehicleCameraInternalModel();

};

// File extension: 'AnimLocSimple.Gbx'
struct CPlugAnimLocSimple : public CMwNod {
  CPlugAnimLocSimple();

  uint Axis;
  uint RotPeriod;
  uint RotPeriodMax;
  uint TransPeriod;
  uint TransPeriodMax;
  float TransY;
};

struct CPlugLightUserModel : public CMwNod {
  CPlugLightUserModel();

  UnknownType Color;
  float Intensity;
  float Distance;
  float PointEmissionRadius;
  float PointEmissionLength;
  float SpotInnerAngle;
  float SpotOuterAngle;
  float SpotEmissionSizeX;
  float SpotEmissionSizeY;
  bool NightOnly;
};

struct CPlugCharPhyMaterials : public CMwNod {
  CPlugCharPhyMaterials();

};

struct CPlugCharPhyModelCustom : public CMwNod {
  CPlugCharPhyModelCustom();

  float EyesHeight;
  float Radius;
  float SpeedCoef;
  float AggroRadius;
  float ShootRadius;
  float TargetMinDistance;
  float DisengageDistance;
  UnknownType Accuracy;
  uint Reaction;
  uint ShootPeriod;
  uint ArmorMax;
  uint Fov;
};

// File extension: 'Mat.Gbx'
struct CPlugMaterialUserInst : public CMwNod {
  CPlugMaterialUserInst();

  UnknownType Name;
  UnknownType Model;
  wstring BaseTexture;
  UnknownType Link;
  ETexAddress IsTilingX;
  ETexAddress IsTilingY;
  float TextureHeightInMeters;
};

struct CPlugMoodSetting : public CPlug {
  CPlugMoodSetting();

};

struct CPlugMoodAtmo : public CPlug {
};

struct CPlugBodyGraph : public CMwNod {
  CPlugBodyGraph();

};

struct CPlugCustomBulletModel : public CMwNod {
  float BulletSpeed;
};

struct CPlugTriggerAction : public CMwNod {
  float StartYaw;
};

// File extension: 'BeamModel.Gbx'
struct CPlugBeamEmitterSubModel : public CMwNod {
  CPlugBeamEmitterSubModel();

  bool EdVisible;
  CPlugMaterial* Material;
  const NodArray AdditionalMaterials;
  _EDisplayType DisplayType;
  float UVScale;
  uint CylinderSideCount;
  uint Duration;
  float Radius;
  float USpeed;
  float VSpeed;
  bool BackFace;
  UnknownType LightningMaxJitterDistPerStep;
  UnknownType LightningJitterRadius;
  UnknownType LightningDistStep;
  float LightningLenMax;
  uint LightningBeamCount;
  float FadeTimeOffset;
  float FadeTimeScale;
  uint Helix_VerticesCountPerTurn;
  float Helix_TurnLength;
  float Helix_OutterRadius;
  float Helix_InnerRadius;
  bool Helix_ClockWise;
  float Helix_DistLOD;
  float Helix_CoeffLowDef;
  uint Helix_MaxHelixCount;
  float DoubleHelix_StartAngle;
  bool DoubleHelix_ClockWise;
  uint BeamWithCylinders_NbSubDiv;
  float BeamWithCylinders_StepSize;
  float BeamWithCylinders_InnerRadius;
  float BeamWithCylinders_OutterRadius;
  float BeamWithCylinders_HalfWidth;
  float BeamWithCylinders_FadeSpeed;
  float BeamWithCylinders_TimeStartFade;
  float BeamWithCylinders_DistLOD;
  float BeamWithCylinders_CoeffLowDef;
  uint BeamWithSpheres_NbVerticalSubDiv;
  uint BeamWithSpheres_NbSpheresPerMeter;
  float BeamWithSpheres_Radius;
  float BeamWithSpheres_StartDistance;
  float BeamWithSpheres_EndDistance;
  float BeamWithSpheres_DistLOD;
  uint BeamWithSpheres_MaxDetailedRailsCount;
  float BeamWithSpheres_Speed;
  UnknownType ColorCenter;
  UnknownType ColorBorder;
  UnknownType ColorLerpPow;
  float ColorCenterMultiplier;
  float ColorBorderMultiplier;
  float LaserRadius;
  UnknownType TriColorCenter;
  UnknownType TriColorBorder;
  UnknownType TriColorLerpPow;
  float TriColorCenterMultiplier;
  float TriColorBorderMultiplier;
  float TriLaserRadius;
  float StartOffsetAtEndLife;
  bool EnableTriLaser;
  bool EnableCenterLaser;
  float SharpIntensity;
  float SharpFadeEndAtEndLife;
  float SharpStartOffset;
  UnknownType SharpScale;
  bool SharpEnabled;
  float SharpEnergy;
  bool SharpFadeOut;
  bool SharpShrinkOverLife;
  float BloomIntensity;
  float BloomFadeEndAtEndLife;
  float BloomStartOffset;
  UnknownType BloomScale;
  bool BloomEnabled;
  float BloomEnergy;
  bool BloomFadeOut;
  bool BloomShrinkOverLife;
};

// File extension: 'PlugProbe.Gbx'
struct CPlugProbe : public CPlug {
  CPlugProbe();

};

struct CPlugCustomBeamModel : public CMwNod {
  string BulletName;
  float LaserRadiusDamage;
};

struct CPlugFileWebM : public CPlugFileVideo {
  CPlugFileWebM();

};

struct CPlugCharVisModelCustom : public CMwNod {
  CPlugCharVisModelCustom();

  UnknownType Sprites;
};

struct CPlugCamShakeModel : public CMwNod {
  CPlugCamShakeModel();

};

struct CPlugCamControlModel : public CMwNod {
  CPlugCamShakeModel* Shake;
};

struct CPlugImportMeshParam : public CMwNod {
  CPlugImportMeshParam();

  enum ImportMeshTypeEnum {
    Static = 0,
    Dyna = 1,
    DynaSkelGeneric = 2,
    DynaSkelHumano = 3,
    DynaSkelFlat = 4,
    Vehicle = 5,
  };
  float Scale;
  bool ForceSmoothNormals;
  string NodePrefix;
  string JointPrefix;
  string MeshSkipPrefix;
  string MeshOnlyPrefix;
  string MeshSkipSuffix;
  string MeshOnlySuffix;
  NodArray MatUserModels;
  NodArray LightUserModels;
  string Skel_GenericRootName;
  string Skel_DummyPrefix;
  string Skel_SocketPrefix;
  bool Skel_SocketOnly;
  float TextureParams_MaxSize;
  bool TextureParams_HqDds;
  string CollectionName;
  ImportMeshTypeEnum ImportMeshType;
  string FileNameSuffix;
};

// File extension: 'Turret.Gbx'
struct CPlugTurret : public CMwNod {
  CPlugTurret();

  enum ETurretFixedAngleSignal {
    Constant = 0,
    Linear = 1,
    PingPong = 2,
  };
  enum EOnArmorEmtpy {
    Destroy = 0,
    Disable = 1,
  };
  bool AimEnabled;
  float AimDetectRadius;
  float AimDetectFOVDeg;
  float AimMaxTrackDist;
  float AimAnticipation;
  uint AimKeepAimingDurationMs;
  uint AimFireTargetChangeDelayMs;
  float AimFireMaxAngleDeg;
  float AimFireMaxDist;
  ETurretFixedAngleSignal FixedAngleSignal;
  uint FixedAnglePeriodMs;
  float FixedAngleMinDeg;
  float FixedAngleMaxDeg;
  uint LifeArmorMax;
  float LifeDisabledDuration;
  EOnArmorEmtpy LifeOnArmorEmtpy;
  uint FirePeriodMs;
  UnknownType Joint0Name;
  vec3 Joint0LocalAxis;
  float Joint0MinAngleDeg;
  float Joint0MaxAngleDeg;
  float Joint0SpeedDegPerS;
  float Joint0NextJointUpdateAngleMaxDeg;
  UnknownType Joint1Name;
  vec3 Joint1LocalAxis;
  float Joint1MinAngleDeg;
  float Joint1MaxAngleDeg;
  float Joint1SpeedDegPerS;
  float Joint1NextJointUpdateAngleMaxDeg;
  UnknownType JointFireName;
  vec3 JointFireLocalAxis;
  UnknownType JointRadarName;
  UnknownType Skel;
  UnknownType Shape;
  UnknownType BulletModel;
  UnknownType Mesh;
  UnknownType RotateSound1;
  UnknownType VisEntFx;
};

struct CPlugVehicleCamInternalVisOffset : public CMwNod {
  CPlugVehicleCamInternalVisOffset();

};

// File extension: 'Shield.Gbx'
struct CPlugShieldModel : public CMwNod {
  CPlugShieldModel();

  bool IsBouncing;
  bool NeedActivation;
  uint ShieldArmor;
  uint ShieldDuration;
  vec3 RelativePos;
  uint TextureNotches;
  UnknownType Shape;
  UnknownType ShieldVisModel;
  UnknownType ShieldActiveSound;
  UnknownType ShieldTouchSound;
  UnknownType ShieldDestroySound;
  UnknownType ShieldTouchParticle;
};

struct CPlugVehicleCameraRaceModel : public CPlugCamControlModel {
  CPlugVehicleCameraRaceModel();

};

struct CPlugVehicleCameraHmdExternalModel : public CPlugCamControlModel {
  CPlugVehicleCameraHmdExternalModel();

};

struct CPlugVehicleVisGeomModel : public CMwNod {
  CPlugVehicleVisGeomModel();

};

// File extension: 'VisEntFx.Gbx'
struct CPlugVisEntFxModel : public CMwNod {
  CPlugVisEntFxModel();

  CPlugParticleEmitterModel* Part_Deactivated;
  CPlugParticleEmitterModel* Part_DeactivatedShot;
  CPlugParticleEmitterModel* Part_TeleportSpawn;
  CPlugParticleEmitterModel* Part_TeleportUnspawn;
  CFuncKeysReal* EliminatedTeleportIntens;
  CFuncKeysReal* EliminatedHighlight;
  vec3 EliminatedHighlightRgb;
  GxLightBall* TacticalLight;
};

struct CPlugGpuBuffer : public CMwNod {
  CPlugGpuBuffer();

};

struct CPlugPolyLine3 : public CMwNod {
  CPlugPolyLine3();

  array<vec3> Poss;
};

struct CPlugPath : public CMwNod {
  CPlugPath();

};

struct CPlugMoodBlender : public CPlug {
  CPlugMoodBlender();

};

// File extension: 'Train.Gbx'
struct CPlugTrainModel : public CMwNod {
  CPlugTrainModel();

  NodArray Wagons;
};

// File extension: 'Wagon.gbx'
struct CPlugTrainWagonModel : public CMwNod {
  CPlugTrainWagonModel();

  CPlugSurface* Shape;
  CPlugSolid2Model* Mesh;
  CPlugSound* Engine;
  CPlugSound* Brake;
  CPlugSound* RailContact;
  CPlugSound* Collision;
  bool IsLoco;
  CFuncKeysReal* AccelCurve;
  float WagonLength;
  float WagonColOffset;
  bool GenLengthFromShape;
};

struct CPlugMoodCurve : public CPlug {
};

// File extension: 'VehiclePhyModelCustom.Gbx'
struct CPlugVehiclePhyModelCustom : public CMwNod {
  CPlugVehiclePhyModelCustom();

  float AccelCoef;
  float ControlCoef;
  float GravityCoef;
};

struct CPlugEntRecordData : public CMwNod {
  CPlugEntRecordData();

};

struct CPlugCharModel : public CMwNod {
};

// File extension: 'WagonCustom.Gbx'
struct CPlugTrainWagonModelCustom : public CMwNod {
  CPlugTrainWagonModelCustom();

  float Speed;
  float Accel;
  float Mass;
};

// File extension: 'EntitySpawner.Gbx'
struct CPlugEntitySpawner : public CMwNod {
  CPlugEntitySpawner();

  UnknownType EntityType;
  CMwNod* Model;
  UnknownType Loc;
};

struct CGmSurf {
};

} // namespace Plug

namespace Scene {

struct CSceneEngine : public CMwEngine {
  CSceneEngine();

};

struct CScene : public CMwNod {
  NodArray Mobils;
  NodArray Cameras;
  NodArray Movers;
  NodArray Lights;
  NodArray Sounds;
  CSceneConfig* SceneConfig;
  NodArray MotionManagers;
  const NodArray MotionManagerModels;
  const CScenePhy* ScenePhy;
  const CSceneDecalsManager* MgrDecals;
  const CSceneSoundManager* MgrSound;
  const CSceneMgrParticle* MgrParticle;
  const CSceneMgrSolidVis* MgrSolidVis;
  const CSceneMgrSolid2Vis* MgrSolid2Vis;
  const CSceneMgrCharVis* MgrCharVis;
  const CSceneMgrVehicleVis* MgrVehicleVis;
  const CSceneMgrFlock* MgrFlock;
  const CSceneMgrAnim* MgrAnim;
  const CSceneMgrBulletVis* MgrBulletVis;
  const CSceneMgrTrafficVis* MgrTrafficVis;
  const CSceneMgrBody* MgrBody;
  const CSceneMgrWeather* MgrWeather;
  const CSceneMgrMapColoring* MgrMapColoring;
  const CHmsMgrVisDyna* MgrVisDyna;
  const CMwNod* MgrObjectVis;
  const CMwNod* MgrGateVis;
  const CMwNod* MgrShieldVis;
  const CMwNod* MoodBlender;
  float EditorHelperHdrScale;
  void LogSceneStats();
};

// File extension: 'Scene2d.Gbx'
struct CScene2d : public CScene {
  CScene2d();

  const CSceneSector* Sector;
  vec2 OverlayMin;
  vec2 OverlayMax;
  NodArray Lights;
  NodArray Sounds;
};

struct CSceneLayout : public CMwNod {
  CSceneLayout();

  NodArray Objects;
  NodArray MotionManagerModels;
  float CameraFarZ;
  float EdCamFocusZ;
  float EdCamLensSize;
  CMwNod* SceneFxNod;
  CSceneFxNod* BitmapWaterFog;
  CPlugBitmap* BitmapCubeReflectHardSpecA;
  CPlugBitmap* BitmapCubeReflectHdrAlpha2;
};

struct CSceneSector : public CMwNod {
  CSceneSector();

  CHmsZone* Zone;
  const CScene* Scene;
};

struct CSceneObject : public CMwNod {
  CScene* Scene;
  void SetLocation(UnknownType Location, CSceneSector* Sector);
  CMwNod* Motion;
};

struct CSceneMgrGUI : public CMwNod {
};

struct CSceneLocation : public CSceneObject {
  CSceneLocation();

  UnknownType Location;
};

struct CScenePoc : public CSceneObject {
  CHmsPoc* HmsPoc;
  bool IsActive;
};

struct CSceneCamera : public CScenePoc {
  CSceneCamera();

  NodArray Overlays;
  uint iPrecalcRender;
  const uint cPrecalcRender;
  CSceneListener* Listener;
};

// File extension: 'SceneLight.Gbx'
struct CSceneLight : public CScenePoc {
  CSceneLight();

  GxLight* Light;
};

struct CSceneController : public CMwNod {
  CSceneController();

};

struct CSceneListener : public CSceneObject {
};

struct CSceneSoundSource : public CSceneObject {
  CSceneSoundSource();

  void Play();
  void Stop();
  CPlugSound* PlugSound;
};

// File extension: 'Mobil.Gbx'
struct CSceneMobil : public CSceneObject {
  CSceneMobil();

  const CSceneMobil* Model;
  bool IsVisible;
  CHmsItem* Item;
  CPlugSolid* Solid;
  CPlugSolid* SolidModel;
  void Show();
  void Hide();
  CMwNod* LinkedObject;
  NodArray Links;
  const CMotion* MotionSolid;
  uint CastedShadows;
  bool SelfShadow;
  void SolidObjectsRefresh();
  void LinkForceUpdateAll();
};

// File extension: 'Toy.Gbx'
struct CSceneToy : public CSceneMobil {
  CSceneToy();

};

struct CSceneCloudSystem : public CMwNod {
  bool IsVisible;
  bool AutoSizeFarZ;
  UnknownType ScaleFarZ_Visibility;
  uint InstCountX;
  uint InstCountZ;
  float WindVortexSpeed;
  bool WindVortexUseHyperbolicSpeed;
  float WindSpeed;
  UnknownType WindDir;
  bool FadeAlpha;
  bool ForceSize;
  vec2 GridSizeXZ;
  bool MaterialUseT3b;
  const NodArray Shaders;
  const UnknownType OutputMode;
};

// File extension: 'Link.Gbx'
struct CSceneObjectLink : public CMwNod {
  CSceneObjectLink();

  const bool IsToSave;
  const bool IsFromModel;
  bool UseOnlyMobilPosition;
  bool UseOnlyMobilTreePosition;
  bool UseTreeVisibilityForPoc;
  UnknownType RelativeLocation;
  CSceneObject* Object;
  CSceneMobil* Mobil;
  UnknownType MobilTreeId;
  bool IsActive2;
  const bool IsDynamic;
};

struct CScenePickerManager : public CMwNod {
  const CHmsPicker* Picker;
};

// userName: 'Vehicle'
struct CSceneVehicleVis : public CMwNod {
};

// userName: 'Character'
struct CSceneCharVis : public CMwNod {
};

// File extension: 'Scene3d.Gbx'
struct CScene3d : public CScene {
  CScene3d();

  NodArray Sectors;
  NodArray Lights;
  NodArray Locations;
  NodArray Sounds;
  float CameraFarZ;
  float EdCamFocusZ;
  float EdCamLensSize;
  UnknownType CameraClearColor;
  CMwNod* SceneFxMgr;
};

struct CPlugBitmapRenderScene3d : public CPlugBitmapRenderCamera {
  CPlugBitmapRenderScene3d();

  CScene3d* Scene3d;
  UnknownType Location;
  void CreateCamera();
  void CreateOverlayCameraSettings();
};

struct CSceneSoundManager : public CMwNod {
};

struct CSceneVehicleCarPhy : public CMwNod {
};

struct CSceneMgrVehicleVisImpl : public CMwNod {
  CSceneMgrVehicleVisImpl();

  UnknownType Extrapolation;
  bool HermiteInterp;
};

struct CSceneVehicleCar : public CSceneVehicle {
  CSceneVehicleCar();

};

// File extension: 'MobilClouds.Gbx'
struct CSceneMobilClouds : public CSceneToy {
  CSceneMobilClouds();

  const CSceneCloudSystem* Clouds;
  void ReBuildInstances();
};

struct CSceneMgrFlockPrivate : public CMwNod {
  void Restart();
  bool IsPlaying;
  float PitchSpeed;
  float PitchMax;
  float YawSpeed;
  float YawMax;
  float RollSpeed;
  float RollMax;
  float PitchUpSpeed;
  float RollUpSpeed;
  float OtherEmitterBirdsInfluence;
  float BirdDistanceToSpeed;
  float GroundRepulsorDistanceToSpeed;
  float RepulsorDistanceToSpeed;
  float MainEmitterDistanceToSpeed;
  float GroundAvoidDistOffset;
};

struct CSceneMgrFlock : public CMwNod {
  CSceneMgrFlock();

  const CSceneMgrFlockPrivate* Private;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxColors : public CSceneFxCompo {
  CSceneFxColors();

  UnknownType ParamInverseRGB;
  UnknownType ParamHue;
  UnknownType ParamSaturation;
  UnknownType ParamBrightness;
  UnknownType ParamContrast;
  UnknownType ParamModulateRGB;
  UnknownType ParamModulateR;
  UnknownType ParamModulateG;
  UnknownType ParamModulateB;
  UnknownType ParamBlendRGB;
  UnknownType ParamBlendAlpha;
  bool ParamUserEnable;
  UnknownType UserIntensity;
  UnknownType CloudsIntensity;
  UnknownType ZFarIntensity;
  float ParamZFar_StartZ;
  float ParamZFar_StopZ;
  UnknownType ParamZFarInverseRGB;
  UnknownType ParamZFarHue;
  UnknownType ParamZFarSaturation;
  UnknownType ParamZFarBrightness;
  UnknownType ParamZFarContrast;
  UnknownType ParamZFarModulateRGB;
  UnknownType ParamZFarModulateR;
  UnknownType ParamZFarModulateG;
  UnknownType ParamZFarModulateB;
  UnknownType ParamZFarBlendRGB;
  UnknownType ParamZFarBlendAlpha;
  CPlugMaterial* MaterialColors;
  CPlugShaderApply* ShaderAutoSaturateWithLight;
  CPlugBitmap* BitmapDepth;
  CPlugBitmap* BitmapSbch;
  vec2 BitmapTcScale;
  vec2 BitmapTcPeriod;
  vec2 BitmapRangeR;
  vec2 BitmapRangeG;
  vec2 BitmapRangeB;
  vec2 BitmapRangeA;
  CPlugShader* ShaderColorGrading;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxSuperSample : public CSceneFxCompo {
  CSceneFxSuperSample();

};

struct CSceneLocationCamera : public CSceneLocation {
  CSceneLocationCamera();

  float StereoScreenDist;
  vec2 FovRectMin;
  vec2 FovRectMax;
};

struct CSceneMgrVehicleVis : public CSceneMgrVis {
  CSceneMgrVehicleVis();

  CSceneMgrVehicleVisImpl* Impl;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxFlares : public CSceneFxCompo {
  CSceneFxFlares();

  uint FlarePerBlock;
};

// File extension: 'SceneFxNod.Gbx'
struct CSceneFxNod : public CMwNod {
  CSceneFxNod();

  bool IsActive;
  CSceneFx* Fx;
  const CSceneFxNod* NodInput;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxBloom : public CSceneFxCompo {
  CSceneFxBloom();

  uint BlurSize;
  UnknownType Intensity;
  UnknownType DataBlend;
  bool DualData;
  const NodArray Datas;
  UnknownType RadialInput;
  UnknownType RadialIntens;
  uint m_RadialProjQuality;
  float RadialRadius2d;
  float RadialRadius3d;
  vec2 RadialOffset2d;
  vec3 RadialOffset3d;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxToneMapping : public CSceneFxCompo {
  CSceneFxToneMapping();

};

struct CBoatSailState : public CMwNod {
  CBoatSailState();

  const CPlugTree* SailTree;
  const CPlugTree* BoomTree;
  const CPlugTree* BoomLowTree;
  const CPlugVisualIndexedTriangles* SailVisualBase;
  const CPlugVisualIndexedTriangles* SailVisualFlat;
  UnknownType SailState;
  UnknownType SailStateCoef;
  bool AutomaticSheetTargetSpeedEnable;
};

struct CSceneFxBloomData : public CMwNod {
  CSceneFxBloomData();

  UnknownType HighInvExponent;
  UnknownType FakeHdrExponent;
  UnknownType FakeHdrMin;
};

// File extension: 'SceneConfig.Gbx'
struct CSceneConfig : public CMwNod {
  CSceneConfig();

  CSceneConfigVision* VisionPC0;
  CSceneConfigVision* VisionPC1;
  CSceneConfigVision* VisionPC2;
  CSceneConfigVision* VisionPC3;
};

struct CSceneConfigVision : public CMwNod {
  CSceneConfigVision();

  const CHmsConfig* HmsConfig;
};

// File extension: 'SceneMood.Gbx'
struct CSceneMood : public CMwNod {
  CSceneMood();

};

// File extension: 'SceneFx.Gbx'
struct CSceneFxStereoscopy : public CSceneFxCompo {
  CSceneFxStereoscopy();

  UnknownType Output;
  bool ExternalControl;
  const float EyeSeparation;
  UnknownType SeparationUserScale;
  const UnknownType SeparationGameScale;
  uint MarginPixelCount;
  UnknownType SplitRatio;
  UnknownType AnaglyphColor;
  UnknownType AnaglyphColorFactor;
  CPlugFilePHlsl* PHlsl_AnaglyphFullColor;
  CPlugFilePHlsl* PHlsl_AnaglyphHalfColor;
  CPlugFilePHlsl* PHlsl_AnaglyphLinear;
  CPlugShaderApply* Shader_Interlaced;
  CPlugShaderApply* Shader_DebugBlend;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxHeadTrack : public CSceneFxCompo {
  CSceneFxHeadTrack();

};

struct CSceneMgrCharVis : public CSceneMgrVis {
  CSceneMgrCharVis();

  const CSceneMgrAnim* MgrAnim;
  const CPlugAnimFile* CinematicLib;
  float TacticalFxRadius;
  float TacticalFxSize;
  float TacticalFxMaxY;
  float TacticalFxMinY;
  float TacticalFxMinDotN;
  float TacticalFxIntens;
  uint LodMaxVert;
};

struct CSceneMgrAnim : public CMwNod {
  CSceneMgrAnim();

  void Debug();
  bool Active;
  bool FootGroundIKEnabled;
  bool FootWallIKEnabled;
  float EdClingOffsetDist;
  float EdWaterOffset;
  bool EdVelFromPos;
  uint EdVelFilterDelay;
  bool EdForceNullInputSpeed;
  uint WallJumpDuration;
  uint WallJumpImpulseTopDuration;
  float WallJumpHDist;
  float WallJumpVDist;
  bool EdForceLod;
  uint EdForceLodIndex;
  bool EdForceLowerJaw;
  UnknownType EdForceLowerJawVal;
  bool EdForceLayerWeight;
  UnknownType EdForceLayerWeightVal;
  EHandIKMode HandIKMode;
  UnknownType OffsetHand_Pen;
  UnknownType OffsetElbow_Pen;
  UnknownType Anticipation_Pen;
  UnknownType HandIKWallThreshold;
  UnknownType HandIKDuration;
  UnknownType HandIKOffsetY;
  UnknownType HandIKOffsetX;
  UnknownType WallOffsetTouch;
  EAnimPartialMode PartialAnimMode;
  EBlendFunc PartialAnimBlendFunc;
  const NodArray SkelBinding;
};

struct CSceneMgrVehiclePhy : public CSceneMgrPhy {
  const CHmsCollZone* MgrCollision;
  uint SpawnInvicibilityDurationMs;
};

struct CSceneMgrParticle : public CMwNod {
  CSceneMgrParticle();

};

struct CSceneMoods : public CMwNod {
  CSceneMoods();

};

struct CSceneMobilLeaves : public CSceneMobil {
  CSceneMobilLeaves();

  uint LeafMaxCount;
  uint LeafEmitterMaxCount;
  CPlugShader* LeafShader;
  void ResetLeaves();
  float LeafRadiusBase;
  float LeafRadiusRandom;
  vec3 Wind;
  float LeafOscillationAmplitudeBase;
  float LeafOscillationAmplitudeRandom;
  float LeafOscillationPeriodBase;
  float LeafOscillationPeriodRandom;
  float LeafFallingSpeedBase;
  float LeafFallingSpeedRandom;
  float LeafAlphaSpeedMax;
  float LeafBetaSpeedlMax;
  float RespawnPeriod;
  float FarZ;
  UnknownType Curvature;
};

struct CSceneMgrSolidVis : public CMwNod {
  const uint cSolidVis;
  const uint cSolidVisDynamic;
};

struct CSceneVehicle : public CSceneMobil {
};

struct CSceneDecalsManager : public CMwNod {
  const CSceneMobil* Decal3dMobil;
  void Draw();
  void EdShowHide();
  vec3 Bucket3dGridCellSize;
  uint Bucket3dGridCellCountX;
  uint Bucket3dGridCellCountY;
  uint Bucket3eGridCellCountZ;
  vec3 Bucket2dGridCellSize;
  uint Bucket2dGridCellCountX;
  uint Bucket2dGridCellCountY;
  uint Bucket2dGridCellCountZ;
  vec3 Bucket2dGridOrigin;
  const uint DrawnCount3d;
  const uint DrawnCount2d;
  const uint DiscardCount3d;
  const uint AllocFailedCount3d;
  bool EnableDecals3d;
  bool EnableDecals2d;
};

struct CSceneToyFilaments : public CSceneToy {
  CSceneToyFilaments();

  float Alpha;
  float k1;
  float k2;
  float k3;
  float MaxSpeed;
  float Inertia;
  float NoiseAmp;
  float NoiseFreq;
  bool AddNoise;
  bool ShowGradient;
};

// File extension: 'Mobil.Gbx'
struct CSceneMobilSnow : public CSceneMobil {
  CSceneMobilSnow();

  UnknownType Kind;
  UnknownType Intensity;
  float FarZ;
  uint LifeSpan;
  float Diam;
  float XYRatio;
  bool WindRotate;
  float Param1;
  UnknownType EditKind;
  CPlugBitmap* EditBitmap;
  uint EditParticleCount;
  void EditInit();
};

// File extension: 'SceneFx.Gbx'
struct CSceneFx : public CMwNod {
  UnknownType Intensity;
  bool WantPreLoad;
};

struct CScenePhy : public CMwNod {
  const CHmsCollZone* MgrCollision;
  const UnknownType MgrCharPhy;
  const CSceneMgrVehiclePhy* MgrVehiclePhy;
  const CSceneMgrBulletPhy* MgrBulletPhy;
  const CSceneMgrTrafficPhy* MgrTrafficPhy;
  const CHmsDynaZone* MgrDyna;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxOverlay : public CSceneFx {
  CSceneFxOverlay();

  CPlugShader* Shader;
};

struct CSceneFxCompo : public CSceneFx {
};

struct CSceneFxDepthOfField : public CSceneFxCompo {
  CSceneFxDepthOfField();

};

// File extension: 'SceneFx.Gbx'
struct CSceneFxMotionBlur : public CSceneFxCompo {
  CSceneFxMotionBlur();

  UnknownType Technique;
  float T2_MotionScale;
  float T2_MotionMaxLen;
  bool T2_DelayShadows;
  CPlugFilePHlsl* T2_Fid_PHlsl_MotionLenCmp;
  CPlugFilePHlsl* T3_PHlsl_MotionBlur;
  CPlugBitmap* T3_BitmapDepth;
  CPlugBitmap* T3_BitmapMotion;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxCameraBlend : public CSceneFxCompo {
  CSceneFxCameraBlend();

  bool CaptureEnable;
  UnknownType CaptureWeight;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxDistor2d : public CSceneFxCompo {
  CSceneFxDistor2d();

  CPlugBitmap* BitmapDistor;
  float DistorScale;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxEdgeBlender : public CSceneFxCompo {
  CSceneFxEdgeBlender();

  UnknownType EdgeDotMax;
  float EdgeDepthMax;
  uint GutterPassCount;
  UnknownType GutterWeight;
  CPlugShaderApply* ShaderEdgeDetect;
  CPlugShaderApply* ShaderEdgeGutter;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxOccZCmp : public CSceneFxCompo {
  CSceneFxOccZCmp();

  bool UsePointsInSphere;
  UnknownType ImageRadius;
  uint BlurTexelCount;
  CPlugShaderApply* Shader;
  CPlugPointsInSphereOpt* PointsInSphere;
  UnknownType Blend;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxBloomHdr : public CSceneFxCompo {
  CSceneFxBloomHdr();

  bool BloomIntensUseCurve;
  float MinIntensInBloomSrc;
  uint DownCount;
  bool PreDown4x4_Else2x2;
  uint BlurSizeDown1_2x2;
  const uint BlurSizeDown1;
  const uint BlurSizeDown2;
  const uint BlurSizeDown3;
  const uint BlurSizeDown4;
  const uint BlurSizeDown5;
  float BlurSizeScaleByLevel;
  float BlurCenterOverEdges;
  float UpScale;
  float UpScaleAlpha;
  UnknownType BlurTexAddress;
  bool UseFakedFlares;
  UnknownType LensDirtIntens;
  UnknownType StreaksSrcMin;
  uint StreaksRotationCount;
  UnknownType StreaksRotation;
  uint StreaksPassCount;
  CPlugShaderApply* FidShaderBloomSelectFilterDown2;
  CPlugShaderApply* FidShaderBloomSelectFilterDown4;
  CPlugShaderApply* ShaderBloomFinal;
  CPlugShaderApply* ShaderDistorImageSpace;
  CPlugShaderApply* ShaderDistorGetDepthIntens;
  CPlugShaderApply* ShaderDistorAtDepth;
  CPlugShaderApply* ShaderHorizonBlur;
  bool DistorEnable;
  uint DistorPeriodTime;
  UnknownType DistorRedSelectRatio;
  bool DistorUseDepth;
  const CPlugFilePHlsl* PHlsl_Final;
  const CPlugFilePHlsl* PHlsl_StreaksSelectSrc;
  const CPlugFilePHlsl* PHlsl_StreaksWorkDir;
  const CPlugFilePHlsl* PHlsl_EdShowBlow;
};

// File extension: 'CarMarksModel.Gbx'
struct CSceneVehicleCarMarksModel : public CMwNod {
  CSceneVehicleCarMarksModel();

  bool Disabled;
  NodArray Models;
};

// File extension: 'CarMarksModelSub.Gbx'
struct CSceneVehicleCarMarksModelSub : public CMwNod {
  CSceneVehicleCarMarksModelSub();

  float SampleMinDist;
  float Width;
  float WidthCoefForceX;
  float WidthCoefForceZ;
  float WidthMax;
  float Alpha;
  float AlphaCoefForceX;
  float AlphaCoefForceZ;
  float AlphaMax;
  float GroundOffset;
  float TexVPerMeter;
  float FadeDist;
  bool CondGroundContact;
  bool CondSliding;
  UnknownType CondMaterialId;
  float CondForceXGreaterThan;
  float CondForceZGreaterThan;
  CPlugMaterial* Material;
  bool DebugDisplay;
};

struct CSceneVehicleCarMarksSamples : public CMwNod {
  CSceneVehicleCarMarksSamples();

  string Name;
  const uint ByteSize;
  bool Disabled;
  array<uint> Stops;
};

// File extension: 'SceneFx.Gbx'
struct CSceneFxCellEdge : public CSceneFxCompo {
  CSceneFxCellEdge();

  uint BlurTexelCount;
  float BlurCenterOverEdges;
  CPlugShaderApply* ShaderEdgeDetect;
};

struct CSceneMover : public CMwNod {
  CSceneMover();

  CSceneObject* Object;
  CSceneController* Controller;
};

struct CSceneFxMgr : public CMwNod {
};

struct CSceneMgrBulletPhy : public CSceneMgrPhy {
  uint BulletRemovalDelay;
  bool LaserVsBullet;
  bool LaserSkewering;
};

struct CSceneMgrBulletVis : public CSceneMgrVis {
};

struct CSceneMgrTrafficVis : public CMwNod {
  CSceneMgrTrafficVis();

  bool DoRenderVehicles;
  void RemoveAll();
};

// File extension: 'SceneFx.Gbx'
struct CSceneMgrWeather : public CMwNod {
  const CPlugFxLightning* FxLightning;
  CMwNod* CloudSystem;
};

struct CSceneMgrTrafficPhy : public CMwNod {
  CSceneMgrTrafficPhy();

  void PhysicallizeAll();
  void UnPhysicallizeAll();
  void ResetTraffic();
  void CheckPointWholeTrafficFlow();
  float PhysicallisationCollSurfScale;
  float VelMaxSqrTobeConsideredStatic;
  float MaxUnevenWithoutJump;
  float AirGravityCoef;
  vec3 Car_FrontLeftWheelRelativePos;
  vec3 Car_FrontRightWheelRelativePos;
  vec3 Car_BackLeftWheelRelativePos;
  vec3 Car_BackRightWheelRelativePos;
  vec3 VertiDownMaxHeight;
  CPlugTrafficGraph* TrafficGraph;
  UnknownType VehiclePhyModel;
  const NodArray ShapedTrajectories;
};

struct CSceneMgrMapColoring : public CMwNod {
  const CPlugBitmap* BitmapTeamEmblem;
};

struct CSceneMgrBody : public CMwNod {
  CSceneMgrBody();

  void StartBodies();
  void StopBodies();
  uint BulletModelIndex;
  uint MaxAmmo;
  float SightScope0;
  float SightScope1;
  float SightScope2;
  float SightScope3;
  uint ShotDelay;
  uint ReloadDelay;
  uint DurationTargetKeptInMemory;
  float EyesHeight;
  uint InitialRandSeed;
  uint SimultaneousBodies;
  uint InitialLifePoints;
  float SpeedCoeff;
  float DistToPathForVictor;
};

struct CSceneAnimFileSkelBinding : public CMwNod {
  const uint cRef;
  const CMwNod* Skel;
  const CMwNod* AnimFile;
};

struct CSceneMobilSolid2 : public CSceneMobil {
};

struct CSceneMgrSolid2Vis : public CMwNod {
  const uint cSolid2Vis;
  const uint cSolid2VisDynamic;
};

struct CSceneMgrPhy : public CMwNod {
};

// userName: 'Bullet'
struct CSceneBulletVis : public CMwNod {
};

struct CSceneMgrVis : public CMwNod {
};

struct CSceneMgrRail : public CMwNod {
};

struct CSceneMgrTrainVis : public CSceneMgrVis {
};

struct CSceneMgrTrainPhy : public CMwNod {
};

// userName: 'Wagon'
struct CSceneWagonPhy : public CMwNod {
};

// userName: 'Wagon'
struct CSceneWagon : public CMwNod {
};

// userName: 'Gun'
struct CSceneGunVis : public CMwNod {
};

struct CSceneMgrGunVis : public CSceneMgrVis {
};

struct CSceneMgrGunPhy : public CSceneMgrPhy {
};

// File extension: 'Boat.Gbx'
struct CSceneToyBoat : public CSceneToy {
  CSceneToyBoat();

  const float HdgDeg;
  const float BSKnot;
  const float BSAvgKnot;
  const float BSTheoricalKnot;
  const float TWDWorldDeg;
  const float TWSWorldKnot;
  const float TWDDeg;
  const float TWSKnot;
  const float TWADeg;
  const float AWADeg;
  const float AWSKnot;
  const float HeelDeg;
  const float COGAvgDeg;
  const float SOGAvgKnot;
  const float StreamSpeedKnot;
  const float StreamDirectionDeg;
  void ResetLocation();
  CBoatParam* Params;
  const float RealBoatWidth;
  const float RealBoatLength;
  CMotionWindBlocker* WindShadow;
  void RetrieveSounds();
  void EdBoatCreate();
  void ChangeSail();
  UnknownType TillerTargetAngle;
  CPlugParticleEmitterModel* SplashEmitterModel;
  const bool TeamMatesVisible;
  const bool StemWavesVisible;
  const bool WindIndicatorVisible;
  NodArray SailStates;
  float ContactForceFluidFrictionCoef;
  float ReplacementStepLength;
  float ContactRotationImpulseCoef;
  float ContactRelSpeedMultCoef;
  float GamePlayCoef_BSLevel;
  float GamePlayCoef_BSCatchBack;
  float GamePlayCoef_BSSpi;
  float GamePlayCoef_BSNoSpi;
  float GamePlayCoef_BSGeneral;
  float GamePlayCoef_BSManoeuvre;
};

// File extension: 'Sea.Gbx'
struct CSceneToySea : public CSceneToy {
  CSceneToySea();

  CSceneToySeaHouleTable* Houles;
  float CoefMovTexture;
  float MinTextureView;
  float MaxTextureView;
  float CoefMinView;
  float Valtest1;
  float Valtest2;
  CSceneToySeaHouleTable* HouleTable3;
  CSceneToySeaHouleTable* HouleTable4;
  CSceneToySeaHouleTable* HouleTable5;
  CSceneToySeaHouleTable* HouleTable6;
  CSceneToySeaHouleTable* HouleTable7;
  const float UpdateGeomTimeMs;
};

struct CSceneToyStem : public CSceneToy {
  CSceneToyStem();

  bool IsActive;
  bool UseWaveProjection;
  bool UseSeaElevation;
  bool OnlyUnderSea;
  float SeaLevel;
  CSceneToySea* Sea;
  uint NbPointZ;
  vec3 Gravity;
  vec3 InitialSpeedDir;
  float MaxCoefSize;
  float BoatSpeedRef;
  float EjectSpeedScale;
  float SplashCoef;
  uint StemDuration;
  vec3 RelativePos;
  bool UseRelativePos2;
  vec3 RelativePos2;
  float StartWidth;
  float EndWidth;
  float TextureSizeInMeter;
  float ValTest1;
  UnknownType StemColor;
  CPlugMaterial* MaterialStem;
};

// File extension: 'BoatTeamDesc.Gbx'
struct CBoatTeamDesc : public CMwNod {
  CBoatTeamDesc();

  UnknownType TeamMateIds;
  CMwRefBuffer* TeamActionDescs;
  CMwRefBuffer* TeamMateLocationDescs;
  CMwRefBuffer* TeamMateVisualAnims;
  UnknownType AnimWalkId;
  void UpdateCacheData();
};

struct CBoatTeamActionDesc : public CMwNod {
  CBoatTeamActionDesc();

  UnknownType TeamActionId;
  NodArray TeamMateActionDescs;
};

struct CBoatTeamMateActionDesc : public CMwNod {
  CBoatTeamMateActionDesc();

  UnknownType TeamMateId;
  UnknownType DestLocationId;
  float WalkSpeed;
  UnknownType AnimBeforeId;
  UnknownType AnimAfterId;
  bool AnimAfterIsLooping;
  bool AnimAfterIsTimeStop;
};

struct CManoeuvre : public CMwNod {
  CManoeuvre();

  float Duration;
  float SlowDownCoef;
  UnknownType TeamActionId;
  UnknownType Sound1Id;
  float Sound1Time;
  UnknownType Sound2Id;
  float Sound2Time;
  uint OldTeamActionIndex;
};

struct CBoatTeamMateLocationDesc : public CMwNod {
  CBoatTeamMateLocationDesc();

  UnknownType LocationId;
  vec3 Translation;
  float RotationYDeg;
};

// File extension: 'SeaHoule.Gbx'
struct CSceneToySeaHoule : public CMwNod {
  CSceneToySeaHoule();

  bool UsedForAssiette;
  CPlugBitmap* TextureCPU;
  float RepresentedX;
  float RepresentedZ;
  float Amplitude;
  float Speed;
  UnknownType AngleWindDeltaInDegree;
  UnknownType DistorFactorXZ;
  UnknownType FoamMin;
  UnknownType FoamScale;
};

struct CBoatSail : public CMwNod {
  CBoatSail();

  UnknownType SailType;
  CFuncCurvesReal* VppCurves;
  CFuncCurves2Real* BSCoefCurves;
  CFuncCurvesReal* OptimalSailAngleCurves;
  NodArray OptimalSailAngleCurvesArray;
  CFuncCurvesReal* HeelAngleCurves;
  CFuncCurves2Real* HeelAngleCoefCurves;
  CFuncCurvesReal* LuffAngleSpeedCurves;
  CFuncCurvesReal* RevolveAngleSpeedCurves;
  CFuncCurvesReal* AccelerationCurves;
  CFuncKeysReal* ShiverAngleCurve;
  CFuncCurvesReal* BoomAngleCurves;
  CFuncKeysReal* SheetAngleMaxCurve;
  float SheetAngleMin;
  float SheetAngleMax;
  float SailSpeedCoefSheet;
  float SailSpeedCoefEaseOut;
  float AutomaticSheetTargetSpeed;
  CManoeuvre* ManoeuvreHaulUp;
  CManoeuvre* ManoeuvreHaulDown;
  CManoeuvre* ManoeuvrePrepareHaulUp;
  CManoeuvre* ManoeuvrePrepareHaulDown;
  float BulgeIntens;
  float BulgeSpeed;
  float BoomSpeed;
  UnknownType SailId;
  UnknownType SailFlatId;
  UnknownType BoomId;
  bool IsReefingGear;
  float VisualHaulDelta;
  float VisualShiverAmplitude;
  float VisualShiverSpeedCoef;
  float VisualShiverSpeedMax;
  bool ShiverWindFree;
  float OldLuffBlockadeWindAngle;
  float OldLuffBlockadeBsSlowDown;
  float OldLuffLimitWindAngle;
  float OldLuffLimitBsSlowDown;
  float OldHeelCoef;
};

// File extension: 'SeaHouleTable.Gbx'
struct CSceneToySeaHouleTable : public CMwNod {
  CSceneToySeaHouleTable();

  float SeaBumpScale;
  vec2 SeaBumpScaleUV;
  float FoamExponant;
  UnknownType FoamScaleWorldXZ;
  void AddHoule();
  NodArray Houles;
  bool FieldHouleUncompress;
  float HouleGlobalScale;
};

// File extension: 'SeaHouleFixe.Gbx'
struct CSceneToySeaHouleFixe : public CSceneToySeaHoule {
  CSceneToySeaHouleFixe();

  float CoefFoam;
  float ExposantFoam;
};

// File extension: 'BoatParam.Gbx'
struct CBoatParam : public CMwNod {
  CBoatParam();

  UnknownType BoatType;
  float BoatWidth;
  float ExtraHullHeightDelta;
  float DecelerationConstant;
  float DecelerationDynamic;
  CFuncCurvesReal* DecelerationFromTillerCurves;
  CFuncCurvesReal* DecelerationFromTillerCurvesBearAway;
  float RotationRadius;
  float TillerAngleMax;
  float TillerInertia;
  CFuncKeysReal* BSCoefFromHeelCurve;
  bool IsNewSailPhysics;
  NodArray Sails;
  CMotionWindBlocker* WindShadow;
  float Surf;
  float Floating;
  float WaterLineHeightDelta;
  float RollCoef;
  float PitchSpeed;
  float PitchInertia;
  float PitchOscillation;
  float PitchOscillationSpeed;
  float HeelSpeed;
  float HeelInertia;
  float HeelOscillation;
  float HeelOscillationSpeed;
  float HeelMax;
  bool IsNewSeaPhysics;
  float LateralForceFromLateralSpeedSq;
  float FloatingForceFromImmersionNormed;
  float FloatingForceFromImmersionNormedSq;
  float FloatingForceFullImmersionDist;
  float Gravity;
  float FluidFrictionY;
  float FloatingDeltaY;
  float DynamicAcceleration;
  float FluidFrictionFront;
  vec3 CameraInsideE;
  vec3 CameraInsideB;
  vec3 CameraInsideE_Amplifior;
  vec3 WindIndicatorDistance;
  CPlugSolid* TeamMateModelFid;
  UnknownType TeamMateTreeToFollowId;
  float m_CollisionSoundBoatSpeedDeltaThreshold;
  NodArray StemWaves;
  CBoatTeamDesc* TeamDesc;
  float OldAccelerationConstant;
  float OldWreckAngle;
  float OldHeelLuff;
  CFuncPathMesh* OldHeelCoefCurve;
  CMwRefBuffer* OldAnimList;
  CFuncPathMesh* OldFuncPathMesh;
  CMotionTeamManager* OldTeamManagerModel;
};

struct CSceneMobilSolid : public CSceneMobil {
};

// File extension: 'Character.Gbx'
struct CSceneMobilCharVis : public CSceneMobil {
  CSceneMobilCharVis();

  const CPlugCharVisModel* CharVisModel;
  const UnknownType CharPhyModel;
};

} // namespace Scene

namespace System {

struct CSystemEngine : public CMwEngine {
  CSystemEngine();

  void SynchUpdate();
};

struct CSystemMouse : public CNodSystem {
  CSystemMouse();

};

struct CSystemKeyboard : public CNodSystem {
  CSystemKeyboard();

};

struct CSystemWindow : public CNodSystem {
  CSystemWindow();

  const UnknownType SizeX;
  const UnknownType SizeY;
  const UnknownType PosX;
  const UnknownType PosY;
  const float Ratio;
  const bool HasSizeChanged;
  const bool HasPosChanged;
  string StatusString;
};

// File extension: 'SystemConfig.Gbx'
struct CSystemConfig : public CMwNod {
  CSystemConfig();

  bool IsSafeMode;
  const CSystemConfigDisplay* Display;
  const CSystemConfigDisplay* DisplaySafe;
  bool NetworkUseProxy;
  string NetworkProxyLogin;
  string NetworkProxyPassword;
  string NetworkProxyServerAndPort;
  uint NetworkServerPort;
  uint NetworkP2PServerPort;
  uint NetworkClientPort;
  UnknownType NetworkSpeed;
  uint NetworkDownloadRate;
  uint NetworkUploadRate;
  bool NetworkForceUseLocalAddress;
  string NetworkForceServerAddress;
  uint NetworkServerBroadcastLength;
  bool NetworkUseNatUPnP;
  string NetworkLastUsedMSAddress;
  string NetworkLastUsedMSPath;
  bool FileTransferEnableDownload;
  bool FileTransferEnableUpload;
  uint FileTransferMaxCacheSize;
  bool EnableLocators;
  bool AutoUpdateFromLocatorAtInternetConnection;
  bool AutoUpdateFromLocator;
  string AutoUpdateLocatorDBUrl;
  bool FileTransferEnableAvatarDownload;
  bool FileTransferEnableAvatarUpload;
  bool FileTransferEnableAvatarLocators;
  bool FileTransferEnableMapDownload;
  bool FileTransferEnableMapUpload;
  bool FileTransferEnableMapLocators;
  bool FileTransferEnableMapModDownload;
  bool FileTransferEnableMapModUpload;
  bool FileTransferEnableMapModLocators;
  bool FileTransferEnableMapSkinDownload;
  bool FileTransferEnableMapSkinUpload;
  bool FileTransferEnableMapSkinLocators;
  bool FileTransferEnableTagSkinDownload;
  bool FileTransferEnableTagSkinUpload;
  bool FileTransferEnableTagSkinLocators;
  bool FileTransferEnableVehicleSkinDownload;
  bool FileTransferEnableVehicleSkinUpload;
  bool FileTransferEnableVehicleSkinLocators;
  bool FileTransferEnableUnknownTypeDownload;
  bool FileTransferEnableUnknownTypeUpload;
  bool FileTransferEnableUnknownTypeLocators;
  bool IsIgnorePlayerSkins;
  bool IsSkipRollingDemo;
  bool ProfileEnableMulti;
  string ProfileName;
  void SetProfileNameUnassigned();
  UnknownType PlayerInfoDisplaySize;
  _E PlayerInfoDisplayType;
  bool EdDontConnect;
  bool DisableReplayRecording;
  bool Dynamic_ParentalLock_IsLocked;
  bool Dynamic_ParentalLock_HasPassword;
  UnknownType Vsk3SeaQuality;
  UnknownType Vsk3BoatQuality;
  UnknownType Vsk3TeamMate;
  UnknownType Vsk3Stem;
  UnknownType TmCarQuality;
  UnknownType TmCarParticlesQuality;
  UnknownType PlayerShadow;
  UnknownType PlayerOcclusion;
  UnknownType TmOpponents;
  uint TmMaxOpponents;
  UnknownType TmBackgroundQuality;
  bool AudioEnabled;
  UnknownType AudioSoundVolume;
  UnknownType AudioMusicVolume;
  bool AudioSoundHdr;
  UnknownType AudioGlobalQuality;
  string AudioDevice_Oal;
  UnknownType AudioAcceleration_Dx9;
  UnknownType AudioQuality3d_Dx9;
  bool AudioUseEFX;
  bool AudioUseHRTF;
  bool AudioDisableDoppler;
  UnknownType AudioSpeakerConfig;
  bool InputsAlternateMethod;
  bool InputsCaptureKeyboard;
  bool InputsFreezeUnusedAxes;
  bool InputsEnableRumble;
  UnknownType Advertising_Enabled;
  UnknownType Advertising_TunningCoef;
  bool Advertising_DisabledByUser;
  bool EnableCrashLogUpload;
  string BlackListUrl;
  string AntiCheatServerUrl;
};

struct CSystemMemoryMonitor : public CMwNod {
  CSystemMemoryMonitor();

};

struct CNodSystem : public CMwNod {
  CNodSystem();

};

struct CSystemFid : public CMwNod {
  CSystemFid();

  const CMwNod* Nod;
  bool Text;
  bool Compressed;
};

struct CSystemFids : public CMwNod {
  const NodArray Trees;
  const NodArray Leaves;
};

struct CSystemFidFile : public CSystemFid {
  CSystemFidFile();

  const uint ByteSize;
  const uint ByteSizeEd;
  bool IsReadOnly;
  const wstring FileName;
  const wstring FullFileName;
  const wstring ShortFileName;
  const CSystemFidFile* Container;
  void CopyToFileRelative(string RelFileName, bool FailIfExists);
};

struct CSystemFidsFolder : public CSystemFids {
  CSystemFidsFolder();

  const uint ByteSize;
  const uint ByteSizeEd;
  const wstring DirName;
  const wstring FullDirName;
};

struct CSystemFidsDrive : public CSystemFidsFolder {
  CSystemFidsDrive();

};

struct CSystemFidMemory : public CSystemFid {
  CSystemFidMemory();

};

struct CSystemConfigDisplay : public CMwNod {
  CSystemConfigDisplay();

  UnknownType RenderingApi;
  UnknownType DisplayMode;
  bool StereoscopyByDefault;
  bool StereoscopyAdvanced;
  uint RefreshRate;
  UnknownType DisplaySync;
  UnknownType TripleBuffer;
  UnknownType AutoScale;
  bool Customize;
  UnknownType Preset;
  UnknownType Antialiasing;
  UnknownType DeferredAA;
  UnknownType ShaderQuality;
  UnknownType TexturesQuality;
  UnknownType FilterAnisoQ;
  UnknownType ZClip;
  UnknownType ZClipAuto;
  uint ZClipNbBlock;
  UnknownType GeometryQuality;
  float GeomLodScaleZ;
  UnknownType WaterReflect;
  bool WaterGeomStadium;
  UnknownType VehicleReflect;
  uint VehicleReflectMaxCount;
  bool TextureDecals_3D;
  bool TextureDecals_2D;
  bool PostFxEnable;
  UnknownType FxBloomHdr;
  UnknownType FxMotionBlur;
  UnknownType FxMotionBlurIntens;
  UnknownType LightMapSizeMax;
  UnknownType LightMapQuality;
  bool LightMapQualityUltra;
  bool LightMapLightIndex;
  UnknownType ScreenShotExt;
  UnknownType Shadows;
  UnknownType GpuSync0;
  UnknownType GpuSync1;
  UnknownType GpuSync2;
  UnknownType GpuSync3;
  uint GpuSyncTimeOut;
  uint MaxFps;
  bool EmulateCursorGDI;
  bool OptimizePartDyna;
  bool DisableZBufferRange;
  bool DisableWindowedAntiAlias;
  bool DisableHdrCubeRenderMipMap;
  bool EnableFullscreenGDI;
  UnknownType LightFromMap;
  bool EnableCheckLags;
  UnknownType AgpUseFactor;
  float ParticleMaxGpuLoadMs;
  bool MultiThreadEnable;
  uint MultiThreadCountMax;
};

struct CSystemPackManager : public CMwNod {
};

struct CSystemPackDesc : public CMwNod {
  const wstring Name;
  const string Checksum;
  const wstring FileName;
  const string Size;
  const wstring LocatorFileName;
  const string Url;
  const bool AutoUpdate;
};

struct CSystemNodWrapper : public CMwNod {
  CSystemNodWrapper();

};

struct CSystemData : public CMwNod {
  string Url;
  const CSystemPackDesc* PackDesc;
  CMwNod* Data;
};

struct CSystemFidContainer : public CMwNod {
};

} // namespace System

namespace Vision {

struct CVisionViewport : public CHmsViewport {
  bool EmulateCursor;
  const array<wstring> Display_Win32DeviceNames;
  void ReGen_TextureGenUVs();
  void GetPerformance();
  bool Alpha01BlendEdges;
  uint Alpha01ClipRef_NoAtoC;
  UnknownType DissolveAlphaDistFactor;
  const float TimeGpuMs_Total;
  const float TimeGpuMs_Particles;
  bool AsyncRender;
  void FreeTextureMem();
  void RestoreTextureMem();
  bool EnableVolumetricFog;
  UnknownType FogTexMaxDepth;
  UnknownType FogSliceDistribCoef;
  UnknownType ScatteringCoef;
  UnknownType AbsorptionCoef;
  UnknownType FogAmbientTweak;
  UnknownType ExtinctionTweak;
  UnknownType PhaseAnisotropy;
  UnknownType HeightDensity0;
  UnknownType HeightScalingCoef;
  vec3 Albedo;
  UnknownType NoiseMaxDensity;
  UnknownType NoiseScalingCoef;
};

// File extension: 'VisionResourceFile.Gbx'
struct CVisionResourceFile : public CMwNod {
  CVisionResourceFile();

  CSystemFidsFolder* FolderShaderBench;
  float BlurDepthTestMaxDist;
  CPlugShaderApply* ShaderZOnly;
  CPlugShaderApply* ShaderZOnly_Alpha01;
  CPlugShaderApply* ShaderFillConst;
  CPlugShaderApply* ShaderFillConst_Alpha01;
  CPlugShaderApply* ShaderDeferredFog;
  CPlugShaderApply* Shader3DVolumetricFog;
  CPlugShaderApply* ShaderParticleVoxelization;
  CPlugShaderApply* ShaderParticlePropagation;
  CPlugShaderApply* ShaderParticleMerge_OverBlend;
  CPlugShaderApply* ShaderDeferredParticleShadow;
  CPlugShaderApply* ShaderDeferredLightBall;
  CPlugShaderApply* ShaderDeferredLightSpot;
  CPlugShaderApply* ShaderDeferredLightFxCylinder;
  CPlugShaderApply* ShaderDeferredLightFxSphere;
  CPlugShaderApply* ShaderDeferredDecal;
  CPlugShaderApply* ShaderDeferredDecalBox;
  CPlugShaderApply* ShaderDeferredDecalBoxVConst;
  CPlugShaderApply* ShaderDeferredGeomProjector;
  CPlugShaderApply* ShaderDeferredGeomFakeOcc;
  CPlugShaderApply* ShaderDeferredGeomShadowVol;
  CPlugShaderApply* ShaderDeferredGeomFogBoxInside;
  CPlugShaderApply* ShaderDeferredGeomFogBoxOutside;
  CPlugShaderApply* ShaderDeferredBurnSphere;
  CPlugShaderApply* ShaderDeferredSSLReflect;
  CPlugShaderApply* ShaderDeferredSSLReflect_CubeMap;
  CPlugShaderApply* ShaderDeferredWaterFog;
  CPlugShaderApply* ShaderWaterFogFromHyperZ;
  CPlugShaderApply* ShaderWaterFogFromHyperZ_Geom;
  CPlugShaderApply* ShaderT3Sea;
  CPlugShaderApply* ShaderCubeToSphereHdrA2;
  CPlugShaderApply* ShaderDecal3dSetInvalid;
  CPlugShaderApply* ShaderDecal3dSetInvalidBox;
  CPlugShaderApply* ShaderCloudsEdgeLight;
  CPlugShaderApply* ShaderCloudsGodLight;
  CPlugShaderApply* ShaderCloudsGodMask;
  CPlugShaderApply* ShaderMoon2d;
  CPlugShaderApply* ShaderShadowFakeQuad;
  CPlugShaderApply* ShaderShadowDepthPeel;
  CPlugShaderApply* ShaderShadowDepthPeel_Alpha01;
  CPlugShaderApply* ShaderSoapBubble;
  CPlugShaderApply* ShaderSpecularInHemi_sRGB;
  CPlugShaderApply* ShaderSpecularInHemi_Linear;
  CPlugShaderApply* ShaderSphereProjInv;
  CPlugShaderApply* ShaderRasterBink_YCrCb_RGBA;
  CPlugShaderApply* ShaderRasterCaptureCompareRGB;
  CPlugShaderApply* ShaderWaterSplash_TransformVertices;
  CPlugShaderApply* ShaderWaterSplash_IntersectTriangles;
  CPlugShaderApply* ShaderWaterSplash_SpawnParticles;
  CPlugShaderApply* ShaderWaterSplash_DebugEdges;
  CPlugShaderApply* ShaderDecal2d_CV_DefDecal;
  CPlugShaderApply* ShaderRasterCircularGauge;
  CPlugShaderApply* ShaderBlitCubeMapFromNormal;
  CPlugFont* FontDebugText;
  CPlugShaderApply* FillVtxColor_sRGB;
  CPlugShaderApply* LensFlareOccQuery;
  CPlugShaderApply* SignedDistanceField_DebugRender;
  CPlugShaderApply* VortexSimu_DebugRender;
  CPlugShaderApply* SpriteLight_Render;
  CPlugShaderApply* AnalyticalEnergyCapsule;
  CPlugShaderApply* EnergyPrismAA;
  CPlugShaderApply* FrustumCluster_Dbg;
  CPlugShaderApply* RasterMsaaResolveHdr;
  CPlugFileVHlsl* VHlslProjector1;
  CPlugFileVHlsl* VHlslLensFlareOccQuery;
  CPlugFileVHlsl* VHlslFillColor;
  CPlugFileVHlsl* VHlslFillColor_Alpha01;
  CPlugFileVHlsl* VHlslFill_0001;
  CPlugFileVHlsl* VHlslFill_0001_Alpha01;
  CPlugFileVHlsl* VHlslFill_0000;
  CPlugFileVHlsl* VHlslFillAlpha;
  CPlugFileVHlsl* VHlslFillDepthMask;
  CPlugFileVHlsl* VHlslRasterCubeMapFromEyeVectInWorld;
  CPlugFileVHlsl* VHlslDebugTexelPerMeter;
  CPlugFileVHlsl* VHlslRasterCubeBlur;
  CPlugFilePHlsl* PHlslBitmap;
  CPlugFilePHlsl* PHlslBitmapModCV;
  CPlugFilePHlsl* PHlslFillConst;
  CPlugFilePHlsl* PHlslFillColor;
  CPlugFilePHlsl* PHlslFillColor_Alpha01;
  CPlugFilePHlsl* PHlslFillAlpha;
  CPlugFilePHlsl* PHlslFillDepthMask;
  CPlugFilePHlsl* PHlslDebugText;
  CPlugFilePHlsl* PHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2;
  CPlugFilePHlsl* PHlslDebugTexelPerMeter;
  CPlugFilePHlsl* PHlslRasterCubeBlur;
  CPlugFilePHlsl* PHlslShadowSmoothDepth;
  CPlugFilePHlsl* PHlslShadowDepthAsRed;
  CPlugFilePHlsl* PHlslShadowDepthAsRed_Alpha;
  CPlugFilePHlsl* PHlslForwardTileCull_DbgDraw;
  CPlugFilePHlsl* PHlslRasterDown4x4_SkipX;
  CPlugFilePHlsl* PHlslRasterSum2HdrMaps;
  CPlugFileGPU* CsCopyRawTexture2D;
  CPlugFileGPU* CsMakeMips8x8;
  CPlugFileGPU* CsMakeMipsTail8x8;
  CPlugFileGPU* CsForwardTileCull;
  CPlugFileGPU* CsLmILight_Bilinear;
  CPlugFileGPU* CsLmILight_MergeBuffers;
  CPlugFileGPU* CsLmILight_UpdateTime;
  CPlugFileGPU* CsSHProjectCubeFlat3x2_Rgb;
  CPlugFileGPU* CsSH_BufferReduction;
  CPlugFileGPU* CsVortexSimu;
  CPlugFileGPU* CsVortexSpawn;
  CPlugFileGPU* CsVolumetricFog_ComputeDensity;
  CPlugFileGPU* CsVolumetricFog_RayMarching;
  CPlugFileGPU* CsParticlesProjection;
  CPlugFileGPU* CsParticlesBBoxInit;
  CPlugFileGPU* CsParticlesBBoxCompute;
  CPlugFileGPU* CsInitSortArg;
  CPlugFileGPU* CsSort;
  CPlugFileGPU* CsSortInner;
  CPlugFileGPU* CsSortStep;
  CPlugFileGPU* CsComputeDistanceField_Analytic;
  CPlugFileGPU* CsComputeDistanceField_BruteForce;
  CPlugFileGPU* CsParticleTileCulling;
  CPlugFileGPU* CsParticleTileDebugRender;
  CPlugFileGPU* CsPs4ClearHTileVr;
  CPlugFileVHlsl* VHlslRasterTc;
  CPlugFileVHlsl* VHlslBlurHV;
  CPlugFilePHlsl* PHlslBlurHV;
  CPlugShaderApply* ShaderBlurHV_DepthMask;
  CPlugShaderApply* ShaderBlurHV_DepthTest;
  CPlugShaderApply* ShaderDownSize2x2AvgInLdr;
  CPlugShaderApply* ShaderDownSize3x3AvgInLdr;
  CPlugShaderApply* ShaderFilterDown2x2;
  CPlugShaderApply* ShaderFilterDown4x4;
  CPlugShaderApply* ShaderAddUpscale2x2;
  CPlugShaderApply* ShaderDepthUp;
  CPlugShaderApply* ShaderDepthDown2x2;
  CPlugShaderApply* ShaderDepthDown3x3;
  CPlugShaderApply* ShaderDepthDown2x2Range;
  CPlugShaderApply* ShaderDepthGutter;
  CPlugShaderApply* ShaderColorDepthAlphaDown2x2_Min;
  CPlugShaderApply* ShaderCubeFilterDown4x4_Cube3x2;
  CPlugShaderApply* ShaderProjectCube48x32_SH3;
  CPlugShaderApply* ShaderGeomToMotion;
  CPlugShaderApply* ShaderGeomToMotion_Alpha01;
  CPlugShaderApply* ShaderGeomToDepth;
  CPlugShaderApply* ShaderGeomToDepth_Alpha01;
  CPlugShaderApply* ShaderGeomToEyeLengthBias;
  CPlugShaderApply* ShaderGeomToEyeLengthBias_Alpha01;
  CPlugShaderApply* ShaderGeomToReflectCubeMap;
  CPlugShaderApply* ShaderGeomToReflectCubeDist;
  CPlugShaderApply* ShaderGeomToFaceNormal;
  CPlugShaderApply* ShaderGeomToFaceNormal_Alpha01;
  CPlugShaderApply* ShaderGeomFakeShadows;
  CPlugShaderApply* ShaderBoxesRasterBitmapBlendPreMod;
  CPlugShaderApply* ShaderGeomBlendWaterFog;
  CPlugShaderApply* ShaderGeomBlendWaterFog_Opacity01;
  CPlugShaderApply* ShaderMgrParticleUpdate;
  CPlugShaderApply* ShaderMgrParticleSpawn;
  CPlugShaderApply* ShaderMgrParticleSpawnPoints;
  CPlugShaderApply* ShaderMgrParticleShadow;
  CPlugShaderApply* ShaderMgrParticleRender;
  CPlugShaderApply* ShaderMgrParticleShowStates;
  CPlugShaderApply* ShaderT3FullDeferredWarp;
  CPlugShaderApply* ShaderT3DynaSpriteDiffuse;
  CPlugShaderApply* ShaderFaceNormalFromLinearDepth;
  CPlugShaderApply* ShaderRasterDistor2d;
  CPlugShaderApply* ShaderRasterBitmap;
  CPlugShaderApply* ShaderRasterBitmapAdd;
  CPlugShaderApply* ShaderRasterBitmapBlendRGB;
  CPlugShaderApply* ShaderRasterBitmapBlendRGBA;
  CPlugShaderApply* ShaderRasterBitmapBlendPreMod;
  CPlugShaderApply* ShaderRasterBitmapBlendPreModInvA;
  CPlugShaderApply* ShaderRasterBitmapBlendPreMod_RGB_A;
  CPlugShaderApply* ShaderRasterConst;
  CPlugShaderApply* ShaderRasterConstMult;
  CPlugShaderApply* ShaderRasterConstAdd;
  CPlugShaderApply* ShaderRasterConstBlend;
  CPlugShaderApply* ShaderRasterGetZ01FromZBuffer;
  CPlugShaderApply* ShaderRasterGutter_8Taps;
  CPlugShaderApply* ShaderRasterGutterRgb_8Taps;
  CPlugShaderApply* ShaderRasterZOnly;
  CPlugShaderApply* ShaderRasterBlendCubes;
  CPlugShaderApply* ShaderLightFromMap;
  CPlugShaderApply* ShaderSmVortexParticle;
  CPlugShaderApply* ShaderDeferredZBufferToDist01;
  CPlugShaderApply* ShaderDeferredOccZCmp;
  CPlugShaderApply* ShaderDeferredShadowPssm;
  CPlugShaderApply* ShaderDeferredCameraMotion;
  CPlugShaderApply* ShaderDeferredDeCompFaceNormal;
  CPlugShaderApply* ShaderDeferredGeomCameraMap;
  CPlugBitmap* BitmapHyperZ;
  CPlugBitmap* BitmapDeferredZ;
  CPlugBitmap* BitmapDeferredPixelNormalInC;
  CPlugBitmap* BitmapDeferredVertexNormalInC;
  CPlugBitmap* BitmapDeferredFaceNormalInC;
  CPlugBitmap* BitmapDeferredMDiffuse;
  CPlugBitmap* BitmapDeferredMSpecular;
  CPlugBitmap* BitmapDeferredLightMask;
  CPlugBitmap* BitmapDeferredPreShade;
  CPlugBitmap* BitmapWaterRefract;
  CPlugBitmap* BitmapPostFxCopyHdrA;
  CPlugBitmap* BitmapSwapR8;
  CPlugBitmap* BitmapShadowLDir0;
  CPlugBitmap* BitmapShadowLDir0_Texture1;
  CPlugBitmap* BitmapShadowStaticSprite;
  CPlugBitmap* BitmapShadowStaticSprite_T1;
  CPlugBitmap* BitmapShadowMaskDepth;
  CPlugBitmap* BitmapShadowPssmDepth;
  CPlugBitmap* BitmapMotion;
  CPlugBitmap* BitmapHeightField;
  CPlugBitmap* BitmapCloudsOcc;
  CPlugBitmap* BitmapToneMap_AutoScale;
  CPlugBitmap* BitmapVehicleLAmbientSH3;
  CPlugBitmap* BitmapReflectCubeHdr;
  CPlugBitmap* BitmapReflectCubeHdrLQ;
  CPlugBitmap* BitmapReflectCubeLQ_IsBackgnd;
  CPlugBitmap* BitmapImageSpaceReflectCube;
  CPlugBitmap* BitmapTranslucentDown;
  CPlugBitmap* BitmapOverlayBlur;
  CPlugBitmap* BitmapDynaHueIntensGauge;
  CPlugBitmap* BitmapDynaTcSxyTzw;
  CPlugBitmap* BitmapDynaTcSxyTzw_RenderOverlay;
  CPlugFxLensFlareArray* FxLensFlareArray;
  CPlugShaderApply* Shader2dFlareAdd_Hdr;
  CPlugShaderApply* Shader2dLensDirtAdd;
  CPlugShaderApply* Shader2dLightHistoryUpdate;
  CPlugBitmap* BitmapLmLListIndexLow;
  CPlugBitmap* BitmapLmLListIndexHigh;
  CPlugBitmap* BitmapTileListUv;
  CPlugBitmap* BitmapTileList;
  CPlugBitmap* BitmapTileMask;
  CPlugBitmap* BitmapTileGpu;
  CPlugBitmap* BitmapCluster;
};

struct CDx11Viewport : public CVisionViewport {
  const string FeatureLevel;
  bool ZBuffer_Near1_Far0;
  bool ZBuffer_Float;
};

} // namespace Vision

namespace Audio {

struct CAudioPort : public CMwNod {
  bool IsEnabled;
  UnknownType SoundVolume;
  UnknownType MusicVolume;
  bool AudioAlwaysOn;
  UnknownType SettingQuality;
  UnknownType SettingSoundHdrFactor;
  bool SettingDisableDoppler;
  UnknownType SettingUpdatePeriod;
  uint SettingSoundsPerUpdate;
  uint SettingMaxSimultaneousSounds;
  const NodArray Zones;
  const NodArray Listeners;
  const NodArray Sources;
  const NodArray BufferKeepers;
  const uint Manager_AllocatedVoices;
  const uint Manager_AvailableVoices;
  const CPlugAudioBalance* BaseBalanceLoud;
  const CPlugAudioBalance* BaseBalanceSoft;
  const CPlugAudioBalance* CurBalance;
  const float CurScriptLimitMusicVolumedB;
  const float CurScriptLimitSceneSoundVolumedB;
  const float CurScriptLimitUiSoundVolumedB;
  float CurSoundVolumeRms;
  float CurSoundHdrCorrection;
  int ForceEnableMusicCount;
  bool MuteSounds_FromLoadScreen;
  uint IsCapturing;
  const NodArray CapturedFileSnds;
  CPlugFileText* ModifierXmlFile;
  void ParseModifierXml();
  void LoadExternalSoundParam();
  void SaveExternalSoundParam();
  const string AnalyzerEstimatedVolume;
  const float AnalyzerAudioTimePerSec;
  const float AnalyzerAudioTimePerSecUpdate;
  const float AnalyzerAudioTimePerSecStream;
  const uint AnalyzerStreamBytesPerSec;
  const uint AnalyzerAudioLongestSlice;
  const uint AnalyzerTotalKeepersMem;
  const string AnalyzerNbSoundsStr;
  const uint AnalyzerNbFadingSounds;
  const uint AnalyzerNbAutoDuckedSounds;
  const uint AnalyzerNbStreamingSounds;
  const uint AnalyzerNbDestoyedPerUpdate;
  const uint AnalyzerNbCreatedPerUpdate;
};

struct CAudioPortNull : public CAudioPort {
};

struct CAudioSoundImplem : public CMwNod {
  const CAudioSource* Source;
  const bool IsActuallyPlaying;
  void RefreshStaticProperties();
  float PlayCursor;
  UnknownType PlayCursorUi;
};

struct CAudioBufferKeeper : public CMwNod {
  const CPlugFileSnd* PlugFileSnd;
  const uint HwAllocSize;
  const bool IsStreaming;
  const bool IsSilent;
  const uint NbUses;
};

struct CAudioListener : public CMwNod {
  CPlugAudioEnvironment* AudioEnvironment;
  float InsideCoef;
  float EnclosedCoef;
  float UnderwaterCoef;
  uint AudioGroupHandleOfInterrest;
};

struct CAudioZone : public CMwNod {
  const NodArray Sources;
  const NodArray Listeners;
};

struct CAudioScriptManager : public CMwNod {
  enum ELibSound {
    Alert = 0,
    ShowDialog = 1,
    HideDialog = 2,
    ShowMenu = 3,
    HideMenu = 4,
    Focus = 5,
    Valid = 6,
    Start = 7,
    Countdown = 8,
    Victory = 9,
    ScoreIncrease = 10,
    Checkpoint = 11,
  };
  CAudioScriptSound* CreateSound(string Url);
  CAudioScriptSound* CreateSoundEx(string Url, float VolumedB, bool IsMusic, bool IsLooping, bool IsSpatialized);
  void DestroySound(CAudioScriptSound* Sound);
  const NodArray Sounds;
  CAudioScriptMusic* CreateMusic(string Url);
  void DestroyMusic(CAudioScriptMusic* Music);
  void PlaySoundEvent(CAudioScriptSound* Sound, float VolumedB);
  void PlaySoundEventUrl(string Url, float VolumedB);
  void PlaySoundLibrary(ELibSound Sound, uint SoundVariant, float VolumedB);
  void PlayDelayedSoundEvent(CAudioScriptSound* Sound, float VolumedB, int Delay);
  void PlayDelayedSoundEventUrl(string Url, float VolumedB, int Delay);
  void PlayDelayedSoundLibrary(ELibSound Sound, uint SoundVariant, float VolumedB, int Delay);
  void PlaySoundEventMix(CAudioScriptSound* Sound, float VolumedB, vec3 PanRadiusLfe);
  void PlaySoundEventMixUrl(string Url, float VolumedB, vec3 PanRadiusLfe);
  void PlayDelayedSoundEventMix(CAudioScriptSound* Sound, float VolumedB, vec3 PanRadiusLfe, int Delay);
  void PlayDelayedSoundEventMixUrl(string Url, float VolumedB, vec3 PanRadiusLfe, int Delay);
  void ClearAllDelayedSoundsEvents();
  bool ForceEnableMusic;
  float LimitMusicVolumedB;
  float LimitSceneSoundVolumedB;
  float LimitUiSoundVolumedB;
};

struct CAudioScriptSound : public CMwNod {
  void Play();
  void Stop();
  const bool IsPlaying;
  const bool DownloadInProgress;
  float Volume;
  float FadeDuration;
  float VolumedB;
  float Pitch;
  vec3 RelativePosition;
  vec3 PanRadiusLfe;
  float PlayCursor;
  const float PlayLength;
};

struct CAudioScriptMusic : public CAudioScriptSound {
  enum EUpdateMode {
    Cut = 0,
    OnNextBar = 1,
    OnNextHalfBar = 2,
    OnNextBeat = 3,
  };
  array<float> Tracks_Volume;
  array<float> Tracks_VolumedB;
  const array<wstring> Tracks_Name;
  const array<float> Tracks_Length;
  const uint Tracks_Count;
  const float BeatsPerMinute;
  const float BeatDuration;
  const uint BeatsPerBar;
  EUpdateMode UpdateMode;
  bool Dbg_ForceIntensity;
  bool Dbg_ForceSequential;
  bool Dbg_ForceRandom;
  UnknownType LPF_CutoffRatio;
  UnknownType LPF_Q;
  UnknownType HPF_CutoffRatio;
  UnknownType HPF_Q;
  float FadeTracksDuration;
  float FadeFiltersDuration;
  void MuteAllTracks();
  void UnmuteAllTracks();
  void NextVariant();
  void NextVariant2(bool IsIntensityDecreasing);
  void EnableSegment(wstring SegmentName);
  bool UseNewImplem;
};

struct CAudioZoneSource : public CMwNod {
  enum EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  CPlugSound* PlugSound;
  float PriorityAdjustement;
  bool UseLowQuality;
  vec3 VolumicSize;
  EAudioBalanceGroup BalanceGroup;
  uint AudioGroupHandle;
  bool Play;
  bool Stop;
  UnknownType Volume;
  UnknownType Pitch;
  uint Variant;
  uint MaxVariants;
  float RpmOrSpeed;
  UnknownType Accel;
  uint Gear;
  uint SurfaceId;
  float SkidIntensity;
  float SkidSpeedKmh;
  const CMwNod* AudioSourceMain;
  const CMwNod* AudioSourceBacking;
};

struct CAudioSource : public CMwNod {
  enum EAudioBalanceGroup {
    Auto = 0,
    Music = 1,
    Menus = 2,
    Ambiance = 3,
    Player = 4,
    Bengs = 5,
    Guns = 6,
    BackingDirect = 7,
    Trails = 8,
    GameUI = 9,
    Custom1 = 10,
    Custom2 = 11,
    OtherPlayers = 12,
    ImpactWarning = 13,
    Environment = 14,
  };
  const bool IsPlaying;
  void Play();
  void Stop();
  const CPlugSound* PlugSound;
  bool UseLowQuality;
  float PriorityAdjustement;
  EAudioBalanceGroup BalanceGroup;
  uint AudioGroupHandle;
  float PlayCursor;
  UnknownType PlayCursorUi;
  UnknownType VolumedB;
  UnknownType LfeSenddB;
  UnknownType Pitch;
  UnknownType PanAngleDeg;
  float Radius;
  vec3 Position;
  UnknownType Loc;
  vec3 Velocity;
  const CAudioSoundImplem* Implementation;
};

struct CAudioSourceMusic : public CAudioSource {
  array<float> TracksVolume;
  array<float> TracksVolumedB;
  UnknownType LPF_CutoffRatio;
  UnknownType LPF_Q;
  UnknownType HPF_CutoffRatio;
  UnknownType HPF_Q;
  float FadeTrackDuration;
  float FadeFiltersDuration;
  void MuteAllTracks();
  void UnmuteAllTracks();
};

struct CAudioSourceEngine : public CAudioSource {
  UnknownType RpmNormalised;
  float Rpm;
  UnknownType Accel;
  float VehicleSpeed;
  UnknownType Alpha;
  uint Gear;
};

struct CAudioSourceSurface : public CAudioSource {
  _ESurfId SurfaceId;
  UnknownType SpeedNormalised;
  float SpeedKmh;
  UnknownType SkidIntensity;
  float SkidSpeedKmh;
};

struct CAudioSourceMulti : public CAudioSource {
  uint Variant;
  uint MaxVariants;
};

struct CAudioSourceMood : public CAudioSource {
  UnknownType InsideFactor;
};

struct CAudioSourceGauge : public CAudioSource {
  UnknownType Ratio;
  float FullRatio;
  float GradingRatio;
  float Rate;
};

struct COalAudioPort : public CAudioPort {
  const wstring OpenALDllPath;
  string DeviceName;
  bool SettingUseEFX;
  bool SettingUseHRTF;
  const uint NbMaxSounds;
  void EnumerateDevicesNames_WriteToLog();
  void EnumerateDevices();
  void EnumerateDevices_WriteToLog();
  const NodArray OalDevices;
  const bool EFXEnabled;
  const uint Manager_SpacialVoices;
  const uint Manager_DirectVoices;
  const CPlugAudioEnvironment* CurrentEnvironment;
};

struct COalAudioBufferKeeper : public CAudioBufferKeeper {
};

// File extension: 'OpenALDevice.Gbx'
struct COalDevice : public CMwNod {
  COalDevice();

  const string DeviceSpecifier;
  const string OtherNames;
  const bool CanCapture;
  const string AlExtensions;
  const string AlcExtensions;
  const uint VersionMajor;
  const uint VersionMinor;
  const bool IsSync;
  const uint RefreshPeriod;
  const uint MixFrequency;
  const uint NbMonoVoices;
  const uint NbStereoVoices;
  const uint XRAMFree;
  const uint XRAMSize;
  const uint EFX_VersionMajor;
  const uint EFX_VersionMinor;
  const uint EFX_MaxAuxSends;
};

} // namespace Audio

namespace Script {

struct CScriptSetting : public CMwNod {
  const UnknownType Type;
  const string Name;
  bool BooleanVal;
  int IntegerVal;
  float RealVal;
  wstring TextVal;
};

struct CScriptTraitsPersistent : public CMwNod {
  CScriptTraitsPersistent();

  const uint PersistentTraitsCount;
};

struct CScriptTraitsMetadata : public CMwNod {
  CScriptTraitsMetadata();

  const uint MetadataTraitsCount;
  void ClearMetadata();
};

struct CScriptInterfacableValue : public CMwNod {
  const UnknownType Type;
  bool BooleanVal;
  int IntegerVal;
  float RealVal;
  wstring TextVal;
  bool Bool1;
  string String1;
  wstring StringInt1;
};

} // namespace Script

namespace Net {

struct CNetNod : public CMwNod {
};

struct CNetServerInfo : public CMwNod {
  const string GameID;
  const string GameVersion;
  const string SessionTitleId;
  const string HostName;
  const string LocalIP;
  const uint LocalUDPPort;
  const uint LocalTCPPort;
  const string RemoteIP;
  const uint RemoteUDPPort;
  const uint RemoteTCPPort;
};

struct CNetClientInfo : public CMwNod {
  const string GameID;
  const string GameVersion;
  const string HostName;
  const string LocalIP;
  const string RemoteIP;
};

struct CNetFormTimed : public CNetNod {
};

struct CNetFormQuerrySessions : public CNetNod {
  CNetFormQuerrySessions();

};

struct CNetFormEnumSessions : public CNetNod {
  CNetFormEnumSessions();

};

struct CNetFormPing : public CNetFormTimed {
  CNetFormPing();

};

struct CNetServer : public CMwNod {
  const uint P2PPort;
  const bool AcceptConnections;
  const uint NbrNewConnections;
  const uint NbrConnections;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsPending;
  const uint NbrConnectionsDisconnecting;
  const uint SendingDataRate;
  const uint TCPSendingDataRate;
  const uint UDPSendingDataRate;
  const uint ReceivingDataRate;
  const uint TCPReceivingDataRate;
  const uint UDPReceivingDataRate;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
};

struct CNetClient : public CMwNod {
  const NodArray Connections;
  const uint NbrNewConnections;
  const uint NbrConnections;
  const uint NbrConnectionsInProgress;
  const uint NbrConnectionsDone;
  const uint NbrConnectionsDisconnecting;
  const uint SendingDataRate;
  const uint TCPSendingDataRate;
  const uint UDPSendingDataRate;
  const uint ReceivingDataRate;
  const uint TCPReceivingDataRate;
  const uint UDPReceivingDataRate;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
  const int TimeLatestHumanPing;
  const int TimeLatestGamePing;
  const float TimeLatestEpsilon;
  const float TimeSmoothedEpsilon;
  const uint LatestTimeSynchronization;
  const uint LatestTimeSyncReception;
  bool TimeNotifyDiscontinuity;
  uint PrevDiscontinuityTime;
  const float TimeCorrectionWeight;
  float TimeThreshold;
  float TimeSmoothing;
  uint TimeLookahead;
};

struct CNetConnection : public CMwNod {
  const bool ClientToServer;
  CMwNod* Info;
  const uint TCPPort;
  const uint UDPPort;
  const uint State;
  const bool Broken;
  const bool ConnectionTCP;
  const bool ConnectionWaiting;
  const bool ConnectionRequest;
  const bool TestingUDP;
  const bool Synchronisation;
  const bool Connected;
  const bool CanReceiveTCP;
  const bool CanSendTCP;
  const bool CanReceiveUDP;
  const bool CanSendUDP;
  const uint TCPEmissionQueue;
  const bool WasUDPPacketDropped;
  const bool IsTCPSaturated;
  const uint LatestNetworkActivity;
  const uint LatestUDPActivity;
  const uint ReceptionPacketTotal;
  const uint UDPReceptionPacketTotal;
  const uint TCPReceptionPacketTotal;
  const uint SendingPacketTotal;
  const uint UDPSendingPacketTotal;
  const uint TCPSendingPacketTotal;
  const uint ReceptionNodTotal;
  const uint UDPReceptionNodTotal;
  const uint TCPReceptionNodTotal;
  const uint SendingNodTotal;
  const uint UDPSendingNodTotal;
  const uint TCPSendingNodTotal;
  const uint ReceptionPacketLoss;
  const uint ReceptionPacketTotalWithoutLoss;
  const uint ReceptionCounter;
  const uint SendingCounter;
  void Disconnect();
};

struct CNetFormConnectionAdmin : public CNetNod {
  CNetFormConnectionAdmin();

};

struct CNetHttpClient : public CMwNod {
  string Server;
  uint Port;
  uint Context;
  string UserName;
  string Password;
  string ProxyServerAndPort;
  const string LastError;
  string LanguageHeader;
  string UserAgentHeader;
  const NodArray Requests;
};

struct CNetHttpResult : public CMwNod {
  const string Server;
  const string Path;
  const _EKind Kind;
  const _EStatus Status;
  const uint ExpectedSize;
  const string ContentType;
  const string ContentEncoding;
  const uint CurrentSize;
  const uint HttpError;
};

struct CNetMasterServer : public CMwNod {
  const string DummyProxyLogin;
  const string DummyProxyPass;
  string GameVersion;
  const NodArray MasterServerUserInfos;
  const NodArray MasterServerHttpClients;
  const NodArray OtherHttpClients;
  const NodArray Downloads;
  const NodArray CurrentDownloads;
  const NodArray HttpDownloadClients;
  const NodArray UpToDateChecks;
  const NodArray CurrentUpToDateChecks;
  const NodArray HttpCheckUpToDateClients;
};

struct CNetMasterHost : public CMwNod {
  string NetHostName;
  const string TitleIdName;
};

struct CNetFileTransfer : public CMwNod {
  const NodArray IPSources;
  const NodArray Uploads;
  const NodArray Downloads;
  const NodArray TerminatedDownloads;
  const bool DownloadEnabled;
  const bool UploadEnabled;
  const bool WaitForDownload;
  const string IPAddress;
  const uint P2PKey;
  const uint PlayerUId;
  const bool IsServer;
  const uint UploadRate;
  const uint DownloadRate;
  const uint NbOfCurrentUls;
  const uint SendBandwidthLimit;
  const uint TotalSendingSize;
  const uint NbSendChannelLeft;
  const uint NbSendChannelToRestore;
  const uint NbSendChannelUsed;
  const uint FirstTimeNotEnoughSendBandwidth;
  const bool IsEmissionSaturated;
  const uint NbOfCurrentDls;
  const uint ReceiveBandwidthLimit;
  const uint TotalReceivingSize;
  const uint NbReceiveChannelLeft;
  const uint NbReceiveChannelToRestore;
  const uint NbReceiveChannelUsed;
  const uint FirstTimeNotEnoughReceiveBandwidth;
  const uint MaxDownloadRateLeft;
  const uint MaxDownloadChannelLeft;
  const uint MaxUploadRateLeft;
  const uint MaxUploadChannelLeft;
  const uint MinSizeTransfer;
  const uint MaxSizeTransfer;
  const uint MaxDownloads;
  const uint MaxUploads;
  const uint MaxChannelPerTransfer;
  const uint NewConnectionTimeoutForDownload;
  const uint NewConnectionTimeoutForUpload;
  const uint SendMsgThroughServerTimeoutForDownload;
  const uint SendMsgThroughServerTimeoutForUpload;
  const uint LastUpdateTime;
  const uint UpdateDelta;
  const uint WriteOnDiskError;
  const CNetServer* Server;
  const CNetClient* Client;
  const CNetMasterServer* MasterServer;
  const CSystemPackManager* PackManager;
  const CSystemFidsFolder* DiskCacheDir;
};

struct CNetMasterServerInfo : public CMwNod {
  string Addr;
  string Path;
  string Name;
  wstring Message;
  bool LadderEnabled;
};

struct CNetFileTransferNod : public CMwNod {
  const wstring Name;
  const string Checksum;
  const CSystemFidFile* File;
  const uint TotalSize;
  const uint CurrentOffset;
};

struct CNetFileTransferForm : public CNetNod {
  CNetFileTransferForm();

};

struct CNetFileTransferDownload : public CNetFileTransferNod {
  const uint IdDownload;
  const UnknownType DownloadState;
  const CSystemPackDesc* PackDesc;
  const uint PriorityLevel;
  const uint PriorityFlags;
  const NodArray Sources;
  const uint NbOfEffectiveSources;
  const CNetSource* ActiveSource;
  const NodArray UrlSources;
  const CNetURLSource* ActiveUrlSource;
  const string Url;
  const string LastUrlUsed;
  const bool AcceptP2P;
  const bool AcceptUrl;
  const bool SkipServerSource;
  const bool IsNearFinished;
  const wstring TempFileName;
  const uint LastWriteTimeout;
  const CNetMasterServerUptoDateCheck* PackDescUpToDateCheck;
  const bool PackDescUpToDateChecked;
  const uint LastDataMsgTime;
  const uint LastDataReception;
  const uint LastDataWrite;
  const uint SendEfficiency;
  const uint InstantaneousEfficiency;
  const uint AverageEfficiency;
};

struct CNetFileTransferUpload : public CNetFileTransferNod {
  const uint IdUpload;
  const uint IdDownload;
  const uint IdSource;
  const UnknownType UploadState;
  const CNetIPSource* IPSource;
  const CNetConnection* Connection;
  const uint DownloadPriorityLevel;
  const uint PriorityLevel;
  const uint NbChannelsUsed;
  const uint NbChannelsUsedValidated;
  const uint TimeOut;
  const uint ValidityTimeOut;
  const bool IsActive;
  const bool MustBeActive;
  const uint LastActiveTime;
  const bool IsConnecting;
  const bool FirstToConnect;
  const bool MustSendReqAck;
  const bool ReqAckSent;
  const uint UploadAttempt;
  const uint MsgAttempt;
  bool ForceCancel;
  const uint ReadOffset;
  const uint LastMessageTime;
  const uint LastReadTimeOut;
  const uint LastSentTime;
  const uint LastDataComplete;
  const uint InstantaneousEfficiency;
  const uint AverageEfficiency;
};

struct CNetSource : public CMwNod {
  CNetSource();

  const uint IdSource;
  const uint IdUpload;
  const UnknownType SourceState;
  const CNetFileTransferDownload* Download;
  const CNetIPSource* SourceAddress;
  const CNetConnection* Connection;
  const uint LastMessageTime;
  const uint TimeOut;
  const uint NbChannelsUsed;
  const uint LastNbChannelsUsedProposition;
  const bool TestedAtLeastOnce;
  const bool OwnsFile;
  const bool IsConnecting;
  const bool FirstToConnect;
  const bool ReqSent;
  const bool MustSendRequest;
  const bool MustSendUploadAck;
  const bool ForceSending;
  const bool HasReceivedUrl;
  bool InterruptTransfer;
  bool ForceCancel;
  const uint SourceAttempt;
  const uint MsgAttempt;
};

struct CNetIPC : public CMwNod {
  CNetIPC();

  const uint Port;
  const string VersionString;
  uint MaxPacketSize;
};

struct CNetFormRpcCall : public CNetNod {
  CNetFormRpcCall();

};

struct CNetUPnP : public CMwNod {
};

struct CNetMasterServerRequest : public CMwNod {
};

struct CNetIPSource : public CMwNod {
  const string RemoteIP;
  const uint DownloadRate;
  const uint UploadRate;
  const bool IsServer;
  const bool IsUploadEnabled;
  const uint P2PKey;
  const uint PlayerUId;
  const CNetConnection* GameConnection;
  const CNetConnection* ConnectionFrom;
  const CNetConnection* ConnectionTo;
  const uint ConnectTimeOut;
  const uint LastConnectionTime;
  const uint LastContactTime;
  const uint ConnectionFromTimeOut;
  const uint ConnectionToTimeOut;
  const bool IsConnecting;
  const uint ConnectionAttempt;
  const bool ConnectionTested;
  const bool ConnectionPossible;
  const uint ThroughServerAttempt;
  const bool ThroughServerTested;
  const bool ThroughServerPossible;
  const bool CanBeConnectedBy;
  const NodArray SourcesUsingConnectionFrom;
  const NodArray UploadsUsingConnectionFrom;
  const NodArray SourcesUsingConnectionTo;
  const NodArray UploadsUsingConnectionTo;
  bool ForceCancel;
};

struct CNetMasterServerUptoDateCheck : public CMwNod {
  const string Server;
  const string Path;
  const uint Port;
  const uint PriorityLevel;
  const bool IsUpToDate;
  const uint ReturnedError;
  const CNetHttpResult* HttpResult;
  const bool IsFinished;
};

struct CNetURLSource : public CMwNod {
  const UnknownType URLSourceState;
  const CNetFileTransferDownload* Download;
  const CNetFileTransferDownload* MasterServerDownload;
  const string Url;
};

struct CNetScriptHttpManager : public CMwNod {
  CNetScriptHttpRequest* CreateGet(string Url);
  CNetScriptHttpRequest* CreateGet2(string Url, bool UseCache);
  CNetScriptHttpRequest* CreateGet3(string Url, bool UseCache, string AdditionalHeaders);
  CNetScriptHttpRequest* CreatePost(string Url, string Resource);
  CNetScriptHttpRequest* CreatePost2(string Url, string Resource, string AdditionalHeaders);
  void Destroy(CNetScriptHttpRequest* Request);
  bool IsValidUrl(string Url);
  const NodArray Requests;
  const uint SlotsAvailable;
  bool AutomaticHeaders_Timezone;
};

struct CNetScriptHttpRequest : public CMwNod {
  const string Url;
  const wstring Result;
  const uint StatusCode;
  const bool IsCompleted;
};

struct CNetXmpp_Timer : public CMwNod {
  CNetXmpp_Timer();

};

struct CNetMasterServerDownload : public CMwNod {
  const string Server;
  const string Path;
  const uint Port;
  const _EContext Context;
  const uint Offset;
  const bool IsPost;
  const bool IsPut;
  const uint TotalSize;
  const uint DownloadStartTime;
  const uint DownloadingTime;
  const uint PriorityLevel;
  const uint ReturnedError;
  const string RequestHeaders;
  const uint Timeout;
  const CNetHttpResult* HttpResult;
  const bool IsFinished;
  const bool IsPaused;
};

struct CNetFormNewPing : public CNetNod {
  CNetFormNewPing();

};

struct CNetMasterServerUserInfo : public CMwNod {
  enum EFirstPartySignInState {
    Unknown = 0,
    NotSignedUp = 1,
    SignedOut = 2,
    SignedIn = 3,
  };
  enum EMasterServerConnectionStatus {
    NotConnected = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
  };
  enum EMasterServerConnectionDetailedStatus {
    NotConnected = 0,
    CheckingNetworkAvailability = 1,
    CheckingMasterServerConnexion = 2,
    WaitingCredentials = 3,
    CheckingMasterServerWaitingQueue = 4,
    WaitingOnMasterServerQueue = 5,
    WaitingSubscriptionCredentials = 6,
    CheckingSubscriptionCredentials = 7,
    WaitingSubscriptionInfo = 8,
    Subscribe = 9,
    OpeningSession = 10,
    Identifying = 11,
    GettingZones = 12,
    WaitingNewZone = 13,
    ChangingZone = 14,
    GettingOnlineProfile = 15,
    SynchronizingProfileChunks = 16,
    AssociatingKey = 17,
    UpdatingProfile = 18,
    GettingBannedCryptedChecksumsList = 19,
    GettingTitleInfo = 20,
    ConnectingToUbiServices = 21,
    FinalizingConnection = 22,
    Connected = 23,
    Disconnecting = 24,
  };
  enum EMasterServerConnectionError {
    None = 0,
    NetworkNotAvailable = 1,
    FirstPartySignedOut = 2,
    NoUbiServicesSession = 3,
    MasterServerDisabled = 4,
    MasterServerInSafeMode = 5,
    KillSwitchEnabled = 6,
    BetaBanned = 7,
    BetaNotApproved = 8,
    NoUplayPC = 9,
  };
  enum ETaskErrorType {
    Success = 0,
    Canceled = 1,
    Unexpected = 2,
    Internal = 3,
    DataManager = 4,
    PrivilegeManager = 5,
    MasterServer = 6,
    UbiServices = 7,
    UplayPC = 8,
    PS4 = 9,
    XboxOne = 10,
    ScoreManager = 11,
  };
  const UnknownType Id;
  const int UserId;
  const string Login;
  const wstring DisplayName;
  const string Password;
  const string NewPassword;
  const CNetMasterServerInfo* MasterServerInfo;
  const EMasterServerConnectionStatus ConnectionStatus;
  const ETaskErrorType LastConnectionErrorType;
  const uint LastConnectionErrorCode;
  const wstring LastConnectionErrorDescription;
  const bool HasUplayProfile;
  const bool HasAcceptedNDA;
  const NodArray UbiServicesSpaceNews;
  const NodArray UbiServicesProfileNews;
};

struct CWebServicesTask : public CMwNod {
};

struct CWebServicesTaskSequence : public CWebServicesTask {
};

struct CWebServicesTaskResult : public CMwNod {
  enum ETaskErrorType {
    Success = 0,
    Canceled = 1,
    Unexpected = 2,
    Internal = 3,
    DataManager = 4,
    PrivilegeManager = 5,
    MasterServer = 6,
    UbiServices = 7,
    UplayPC = 8,
    PS4 = 9,
    XboxOne = 10,
    ScoreManager = 11,
  };
  const UnknownType Id;
  const bool IsProcessing;
  const bool HasSucceeded;
  const bool HasFailed;
  const bool IsCanceled;
  const ETaskErrorType ErrorType;
  const uint ErrorCode;
  const wstring ErrorDescription;
  void Cancel();
};

struct CWebServicesTaskScheduler : public CMwNod {
};

struct CNetMasterServerEmptyTask : public CWebServicesTaskVoid {
};

struct CNetUplayPC : public CMwNod {
};

struct CNetMasterServerTask_GetManiaplanetLoginFromWebIdentity : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_GetWebIdentityFromManiaplanetLogin : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_GetDisplayNameFromManiaplanetLogin : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_GetDisplayNameFromWebIdentity : public CWebServicesTaskSequence {
};

struct CNetMasterServerRequestTask : public CWebServicesTaskSequence {
};

struct CWebServicesTaskResult_Bool : public CWebServicesTaskResult {
  const bool Value;
};

struct CWebServicesTaskResult_String : public CWebServicesTaskResult {
  const string Value;
};

struct CNetMasterServerTask_GetClientConfigUrls : public CNetMasterServerRequestTask {
};

struct CNetUplayPCTask_OpenOverlay : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_CheckNetworkAvailability : public CWebServicesTaskSequence {
};

struct CNetUplayPCUserInfo : public CMwNod {
};

struct CNetMasterServerTask_GetApplicationConfig : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_ApplicationConfig : public CWebServicesTaskResult {
};

struct CNetMasterServerTask_GetWaitingParams : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_CheckLoginForSubscribe : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_Subscribe : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_OpenSession : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_Connect : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_Session_Get : public CWebServicesTaskResult {
  const string SessionId;
  const string ServerLogin;
  const string ServerPassword;
};

struct CNetMasterServerTask_ShowProfile : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_Get : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_JoinOrCreate : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_Leave : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_InviteBuddy : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_Session_ShowInviteUI : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_GetFeatureTimeLimit : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_Natural : public CWebServicesTaskResult {
  const uint Value;
};

struct CNetMasterServerTask_CheckFeatureTimeLimit : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_SetFeatureTimeUse : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_PlayerFeatureLimitList : public CWebServicesTaskResult {
};

struct CNetUbiServicesNews : public CMwNod {
  const UnknownType Id;
  const string NewsId;
  const string Type;
  const string Placement;
  const string Locale;
  const wstring Title;
  const wstring Body;
  const string MediaUrl;
  const string MediaType;
  const uint Priority;
  const uint DisplayTime;
  uint GetPublicationDate(uint Month, uint Day, uint Hour, uint Minute, uint Second);
  const uint LinksCount;
  void GetLinkInfo(uint LinkIndex, string Type, string Param, wstring ActionName, wstring ActionDescription);
};

struct CNetMasterServerTask_GamerPic_GetUrl : public CWebServicesTaskSequence {
};

struct CNetMasterServerTask_GetManiaplanetLoginAndWebIdentities : public CNetMasterServerRequestTask {
};

struct CNetUplayPCTask_UserTrophiesUnlock : public CWebServicesTaskSequence {
};

struct CWebServicesTaskVoid : public CWebServicesTask {
};

struct CNetMasterServerTask_ImportAccount : public CNetMasterServerRequestTask {
};

struct CNetMasterServerTask_ImportAccount_IsFinished : public CNetMasterServerRequestTask {
};

struct CWebServicesTaskResult_OpenSession : public CWebServicesTaskResult {
};

struct CWebServicesTaskResult_StringIntList : public CWebServicesTaskResult {
  const array<wstring> Values;
};

} // namespace Net

namespace Input {

struct CInputPort : public CMwNod {
  const UnknownType InputsMode;
  const string CurrentActionMap;
  bool IsDoingIME;
  UnknownType MouseVisibility;
  UnknownType RumbleIntensity;
  UnknownType CenterSpringIntensity;
  UnknownType ForceFeedbackIntensity;
  bool PollingEnabled;
  const bool DeviceHasBeenHotPlugged;
  const uint DevicePlugEventCount;
  void DeviceHotPlugUpdate();
  const NodArray ConnectedDevices;
  uint MaxSampleRate;
  uint MinHistoryLength;
  const uint EventInStoreCount;
  bool IgnoreFocusForGamePads;
  CInputReplay* InputsReplay_Replay;
  void InputsReplay_Record();
  void InputsReplay_Playback();
  void InputsReplay_Stop();
  void InputsReplay_Pause();
  void InputsReplay_Resume();
  const bool IsPadModuleExclusive;
  const NodArray Script_Pads;
  uint AutoRepeat_InitialDelay;
  uint AutoRepeat_Period;
  const bool StatsDInputOverflowedLastFrame;
  const uint StatsDInputOverflowCount;
  const uint StatsDInputEventsLastFrame;
  const uint StatsDInputEventsCount;
  const uint StatsLatestEvent;
  const uint StatsDInputTimedEventsCount;
  const uint StatsDInputWrongTimestampAhead;
  const float StatsDInputWrongTimestampRatioAhead;
  const uint StatsDInputWrongTimestampLate;
  const float StatsDInputWrongTimestampRatioLate;
  const float StatsDInputWrongTimestampAvgDelta;
  const uint StatsNbMappedInputsReceived;
};

struct CInputPortDx8 : public CInputPort {
  CInputPortDx8();

};

struct CInputPortNull : public CInputPort {
};

struct CInputScriptEvent : public CMwNod {
  enum EType {
    PadButtonPress = 0,
  };
  enum EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  const EType Type;
  const CInputScriptPad* Pad;
  const EButton Button;
  const bool IsAutoRepeat;
  const uint KeyCode;
  const string KeyName;
};

struct CInputBindingsConfig : public CMwNod {
  CInputBindingsConfig();

};

struct CInputDevice : public CMwNod {
  const uint UserData;
  const wstring InstanceName;
  const UnknownType InstanceId;
  const wstring DeviceModelName;
  const UnknownType DeviceModelId;
  const bool IsDisabled;
  const bool InputNotAvailable;
  const bool IsUnPlugged;
  const bool MustBePolled;
  const bool CanRumble;
  const uint ObjectCount;
  void ReadHardwareCurState();
};

struct CInputDeviceMouse : public CInputDevice {
  const bool IsInsideWindow;
  const vec2 PosInViewport;
  const vec2 KineticScrollVel;
};

struct CInputDeviceDx8Mouse : public CInputDeviceMouse {
};

struct CInputDeviceDx8Keyboard : public CInputDevice {
};

struct CInputDeviceDx8Pad : public CInputDevice {
  void DevSwitchUserIdInvalid();
};

// File extension: 'InputReplay.Gbx'
struct CInputReplay : public CMwNod {
  CInputReplay();

  const uint NbEvents;
};

struct CInputScriptManager : public CMwNod {
  enum EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  const NodArray PendingEvents;
  const uint Now;
  const uint Period;
  const NodArray Pads;
  const vec2 MousePos;
  const bool MouseLeftButton;
  const bool MouseRightButton;
  const bool MouseMiddleButton;
  wstring GetPadButtonPlaygroundBinding(CInputScriptPad* Pad, EButton Button);
  wstring GetPadButtonCurrentBinding(CInputScriptPad* Pad, EButton Button);
  wstring GetPadButtonBinding(CInputScriptPad* Pad, EButton Button);
  bool ExclusiveMode;
  bool IsKeyPressed(int KeyCode);
  uint Dbg_AutoRepeat_InitialDelay;
  uint Dbg_AutoRepeat_Period;
};

struct CInputScriptPad : public CMwNod {
  enum EButton {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    A = 4,
    B = 5,
    X = 6,
    Y = 7,
    L1 = 8,
    R1 = 9,
    LeftStick = 10,
    RightStick = 11,
    Menu = 12,
    View = 13,
    LeftStick_Left = 14,
    LeftStick_Right = 15,
    LeftStick_Up = 16,
    LeftStick_Down = 17,
    RightStick_Left = 18,
    RightStick_Right = 19,
    RightStick_Up = 20,
    RightStick_Down = 21,
    L2 = 22,
    R2 = 23,
    None = 24,
  };
  enum EPadType {
    Keyboard = 0,
    Generic = 1,
    XBox = 2,
    PlayStation = 3,
    Vive = 4,
  };
  const int ControllerId;
  const UnknownType UserId;
  const EPadType Type;
  const wstring ModelName;
  const uint IdleDuration;
  const uint Left;
  const uint Right;
  const uint Up;
  const uint Down;
  const uint A;
  const uint B;
  const uint X;
  const uint Y;
  const uint L1;
  const uint R1;
  const uint LeftStickBut;
  const uint RightStickBut;
  const uint Menu;
  const uint View;
  const UnknownType LeftStickX;
  const UnknownType LeftStickY;
  const UnknownType RightStickX;
  const UnknownType RightStickY;
  const UnknownType L2;
  const UnknownType R2;
  const UnknownType ButtonEvents;
  void ClearRumble();
  void AddRumble(uint Duration, float LargeMotor, float SmallMotor);
  void SetColor(vec3 Color);
};

} // namespace Input

namespace Xml {

struct CXmlScriptManager : public CMwNod {
  CXmlScriptDocument* Create(string Contents);
  CXmlScriptDocument* Create2(string Contents, bool GenerateText, bool GenerateTextRaw, bool GenerateTextResursive);
  void Destroy(CXmlScriptDocument* Document);
  const NodArray Documents;
  uint DocumentsSlotsLimit;
};

struct CXmlScriptDocument : public CMwNod {
  const string TextContents;
  const CXmlScriptNode* Root;
  const NodArray Nodes;
  CXmlScriptNode* GetFirstChild(string Name);
};

struct CXmlScriptNode : public CMwNod {
  const wstring Name;
  const wstring TextContents;
  const string TextRawContents;
  const string TextRecursiveContents;
  const NodArray Children;
  wstring GetAttributeText(wstring Name, wstring DefaultValue);
  int GetAttributeInteger(wstring Name, int DefaultValue);
  float GetAttributeReal(wstring Name, float DefaultValue);
  bool GetAttributeBoolean(wstring Name, bool DefaultValue);
  CXmlScriptNode* GetFirstChild(string Name);
};

} // namespace Xml

namespace TrackMania {

// File extension: 'ManiaPlanet.Gbx'
struct CTrackMania : public CGameManiaPlanet {
  CTrackMania();

  void ScanDiskForChallenges();
  void ScanDiskForReplays();
  const NodArray MatchSettings;
};

// File extension: 'TitleCore.Gbx'
struct CTrackManiaCore : public CGameManiaTitleCore {
  CTrackManiaCore();

  const CGameManiaPlanet* Dummy;
  CTrackManiaResource* Resource;
};

struct CTrackManiaRace : public CGameRace {
  CTrackManiaRace();

  uint LapCount;
  const uint NbRespawns;
  const float Fps;
  float VehicleFadeDistMinBoxCoef;
  float VehicleFadeDistMaxBoxCoef;
  void ResetForParam();
  void OnPlayerPositionSend();
  NodArray RaceGhosts;
  bool IsBestRaceGhostVisible;
  bool ForceDisplayNames;
  CGameCtnReplayRecord* ValidateAReplay;
  UnknownType ScaleCarValue;
  UnknownType CatchUpMin;
  UnknownType CatchUpMax;
  float MetersPrediction;
  float AspirationConeH;
  float AspirationConeV;
  float AspirationDistance;
  float AspirationAccelBonus;
  float ScaleSpeedSec;
  CFuncKeysReal* ScaleFunc;
  uint ScaleDuration;
  CFuncKeysReal* BonusMiniCarWeight;
  CFuncKeysReal* BonusEmptyCarsWeight;
  CFuncKeysReal* BonusJumpWeight;
  CFuncKeysReal* BonusTurboWeight;
  CFuncKeysReal* BonusBigCarWeight;
  CFuncKeysReal* BonusSpeedyCarWeight;
  uint BonusIsGoldChance;
  uint BonusTurboStock;
  float BonusCarScale;
  float BonusCarScaleAccel;
  uint BonusMiniCarDuration;
  uint BonusBigCarDuration;
  uint BonusEmptyCarsStock;
  float EmptyCarInitVelCoef;
  float EmptyCarMassCoef;
  uint EmptyCarMaxLimit;
  uint SpeedyCarInitVel;
  float FireCarScaleCoef;
  uint BonusEventTimeStartMin;
  uint BonusEventTimeStartMax;
  uint BonusEventTimeCooldownMin;
  uint BonusEventTimeCooldownMax;
  uint BonusEventTimeWarningDuration;
  uint BonusEventIsGoldChance;
  float StuntModePointCoef;
  uint StuntStickHelperTime;
  uint StuntJumpHelperTime;
  uint StuntContactHelperTime;
  float StuntBodyOffsetMax;
  float StuntBodyOffsetPow;
  UnknownType CameraHeight;
  UnknownType CameraOffset;
  float FovY;
  UnknownType SpeedCoef;
  uint AutoAdaptSpeedStrat;
  UnknownType OutOfScreenTimeLimitSec;
  bool DrawPath;
  uint SampleTimeStepMs;
  uint SampleCount;
  float MinGhostSpeed;
  float MaxGhostSpeed;
  float ReswpawnSpeedBonusCoef;
  float ComeBackDistanceCoef;
  float MinRespawnSpeed;
  int AllowedRespawnCount;
  bool AllowSelfRespawn;
  uint SpeedHistoryIntervalDurationMs;
  uint HelperPathTimeStep;
  uint LateRespawnTimeDurationMs;
  float LateRespawnPenaltyCoef;
  bool ClampRespawnSpeed;
};

struct CTrackManiaRaceNew : public CTrackManiaRace {
  CTrackManiaRaceNew();

};

struct CTrackManiaRaceRules : public CGamePlaygroundScript {
  enum ETmScoreSortOrder {
    TotalPoints = 0,
    BestRace_Time = 1,
    BestRace_Stunts = 2,
    BestRace_NbRespawns = 3,
    BestRace_CheckpointsProgress = 4,
    PrevRace_Time = 5,
    Name = 6,
    LadderRankSortValue = 7,
  };
  enum ETMRespawnBehaviour {
    Normal = 0,
    DoNothing = 1,
    GiveUpBeforeFirstCheckPoint = 2,
    AlwaysGiveUp = 3,
  };
  enum ETmRaceChronoBehaviour {
    Auto = 0,
    Hidden = 1,
    CountDown = 2,
    Normal = 3,
  };
  enum EPersonalGhost {
    Disabled = 0,
    Latest = 1,
    FastestRace = 2,
  };
  const NodArray AllPlayers;
  const NodArray Spectators;
  const NodArray Players;
  const NodArray PlayersRacing;
  const NodArray PlayersWaiting;
  const NodArray Scores;
  uint Clan1Score;
  uint Clan2Score;
  array<int> ClanScores;
  const uint ClansNbTotal;
  const array<uint> ClansNbPlayers;
  const NodArray PendingEvents;
  bool PassOn(CTmRaceRulesEvent* Event);
  void Discard(CTmRaceRulesEvent* Event);
  void SpawnPlayer(CTmRaceRulesPlayer* Player, int ClanNum, int RaceStartTime);
  void UnspawnPlayer(CTmRaceRulesPlayer* Player);
  void SetPlayerClan(CTmRaceRulesPlayer* Player, int ClanNum);
  void Scores_Sort(ETmScoreSortOrder SortOrder);
  void Scores_Clear();
  void Ladder_ComputeRank(ETmScoreSortOrder SortOrder);
  int CutOffTimeLimit;
  int NbLaps;
  bool IndependantLaps;
  bool UseClans;
  bool UseForcedClans;
  ETMRespawnBehaviour RespawnBehaviour;
  bool UiRounds;
  bool UiLaps;
  bool UiStuntsMode;
  bool UiDisplayStuntsNames;
  bool UiDisableHelpMessage;
  int UiScoresPointsLimit;
  ETmRaceChronoBehaviour UiRaceChrono;
  void Cheats_Reset();
  bool EnableCollisions;
  bool EnableScaleCar;
  bool EnableCheckpointBonus;
  bool EnableUniqueCamera;
  bool EnableBonusEvents;
  bool HideOpponents;
  int ForceMaxOpponents;
  bool EnableLegacyXmlRpcCallbacks;
  bool MedalGhost_ShowGold;
  bool MedalGhost_ShowSilver;
  bool MedalGhost_ShowBronze;
  EPersonalGhost PersonalGhost;
  UnknownType RaceGhost_Add(CGameGhostScript* Ghost, bool DisplayAsPlayerBest);
  UnknownType RaceGhost_AddWithOffset(CGameGhostScript* Ghost, uint OffsetMs);
  UnknownType RaceGhost_AddModel(CGameGhostScript* Ghost, bool DisplayAsPlayerBest, UnknownType ModelId);
  void RaceGhost_Remove(UnknownType GhostInstId);
  void RaceGhost_RemoveAll();
  uint RaceGhost_GetStartTime(UnknownType GhostInstId);
  uint RaceGhost_GetCurCheckpoint(UnknownType GhostInstId);
  uint RaceGhost_GetCheckpointTime(UnknownType GhostInstId, uint Checkpoint);
  bool RaceGhost_IsReplayOver(UnknownType GhostInstId);
  const vec3 MapStartLinePos;
  const array<vec3> MapCheckpointPos;
  const array<vec3> MapFinishLinePos;
  const bool MapIsLapRace;
  const uint MapNbLaps;
  const NodArray ConnectedPlayers;
  void FakePlayers_Add(wstring NickName);
  void FakePlayers_Remove(CGamePlayerInfo* User);
  void FakePlayers_RemoveAll();
};

struct CTrackManiaRace1P : public CTrackManiaRace {
  CTrackManiaRace1P();

};

struct CTmRaceRulesScore : public CGamePlaygroundScore {
  const uint TeamNum;
  int Points;
  CTmRaceResultNod* BestRace;
  CTmRaceResultNod* BestLap;
  int PrevRaceDeltaPoints;
  CTmRaceResultNod* PrevRace;
  CTmRaceResultNod* TempResult;
  void Clear();
};

// File extension: 'TrackManiaMenus.Gbx'
struct CTrackManiaMenus : public CGameCtnMenusManiaPlanet {
  CTrackManiaMenus();

  const CGameCtnChallenge* SelectedChallenge;
  uint LastPage;
  const UnknownType Medal;
  const uint CampaignChallengeNumber;
  wstring TestComment;
  wstring Mptp_Score;
  wstring GhostFileName;
  wstring GhostFileNameExt;
  uint LastScore;
  uint LastRecord;
  UnknownType NetworkGameMode;
  const wstring NetworkGameModeName;
  uint MedalsCount;
  bool TestDifficulty0;
  bool TestDifficulty1;
  bool TestDifficulty2;
  bool TestDifficulty3;
  bool TestDifficulty4;
  bool TestQuality0;
  bool TestQuality1;
  bool TestQuality2;
  bool TestQuality3;
  bool TestQuality4;
  void OnChooseAvatar1();
  void OnChooseAvatar2();
  void OnChooseAvatar3();
  void OnChooseAvatar4();
  void OnChooseAvatar5();
  void OnChooseAvatar6();
  void OnChooseAvatar7();
  void OnChooseAvatar8();
  void OnChooseProfile1();
  void OnChooseProfile2();
  void OnChooseProfile3();
  void OnChooseProfile4();
  void OnChooseProfile5();
  void OnChooseProfile6();
  void OnChooseProfile7();
  void OnChooseProfile8();
  void MenuChoosePlaylistHotseat();
  void MenuChoosePlaylistNetwork();
  void MenuChoosePlaylist_Init();
  void MenuChoosePlaylist_Clean();
  void MenuChoosePlaylist_OnPlaylistSelected();
  void MenuChoosePlaylist_OnBack();
  void MenuChoosePlaylist_OnCustom();
  void MenuChoosePlaylist_OnRefresh();
  const uint MenuChoosePlaylist_PlaylistsCount;
  void MenuChoosePlaylist_OnOfficialTracks();
  void MenuChoosePlaylist_OnMyTracks();
  void MenuChoosePlaylist_OnDownloadedTracks();
  void MenuPlayChallenge_Solo();
  void MenuPlayChallenge_Solo_Challenges();
  void MenuPlayChallenge_Solo_MyTracks();
  void MenuPlayChallenge_Solo_DownloadedTracks();
  void MenuChooseChallenge_OnSaveSettings();
  void MenuChooseChallenge_OnSaveSettings_OnYes();
  void MenuChooseChallenge_OnSaveSettings_DoSave();
  void MenuCampaignChallenges();
  void MenuCampaignChallenges_OnBack();
  void MenuCampaignChallenges_OnChallengeCardSelected();
  const wstring MenuCampaignChallenges_Location;
  const uint MenuCampaignChallenges_Level;
  CPlugBitmap* MenuCampaignChallenges_ZoneLogoBitmap;
  void MenuCampaignChallenges_OnChallengeGridPrevPage();
  void MenuCampaignChallenges_OnChallengeGridNextPage();
  void MenuCampaignChallenges_OnChallengeCardRemoved();
  void MenuCampaignChallenges_OnChallengeCardRemovedConfirmed();
  void MenuCampaignChallenges_OnFriendUnlockYes();
  void MenuCampaignChallenges_OnFriendUnlockNo();
  void MenuCampaignChallenges_OnToggleLadder();
  void MenuReplayEditor();
  void MenuGhostEditor();
  bool MenuMultiPlayerNetworkCreate_AcceptReferee;
  void MenuMultiPlayerNetworkCreate_ChooseScriptName();
  void MenuMultiPlayerNetworkCreate_OpenDialogScriptName_Yes();
  void MenuMultiPlayer_OnLan();
  void MenuMultiPlayer_OnInternet();
  void MenuStatistics();
  void MenuStatistics_OnBack();
  void MenuMultiLocal_OnBrowseChallenge();
  void MenuMultiLocal_OnBrowseReplay();
  void DialogQuitRace();
  void DialogQuitRace_OnResume();
  void DialogQuitRace_OnRestart();
  void DialogQuitRace_OnRestartMap();
  void DialogQuitRace_OnNextMap();
  void DialogQuitRace_OnInputSettings();
  void DialogQuitRace_OnStereoscopySettings();
  void DialogQuitRace_OnSelectOpponents();
  void DialogQuitRace_OnEdit();
  void DialogQuitRace_OnQuit();
  void DialogQuickChooseGhostOpponents();
  void DialogLowFpsWarn_OnOk();
  void DialogLowFpsWarn_OnCancel();
  bool DialogLowFpsWarn_NeverAskAgain;
  void DialogQuitEditor();
  void DialogQuitEditor_OnDelete();
  void DialogQuitEditor_OnQuit();
  void DialogChallengeResult_OnRetry();
  void DialogChallengeResult_OnQuit();
  void DialogChallengeResult_OnSaveReplay();
  void DialogChallengeResult_OnEdit();
  void DialogChallengeResult_OnSendScore();
  void DialogChallengeResult_OnRewind();
  void DialogChallengeResult_OnChooseOpponents();
  void DialogChallengeResult_OnNextMap();
  bool DialogChallengeResult_IsPaused;
  bool DialogChallengeResult_IsPlaying;
  void DialogNewUnlock_OnOk();
  void DialogUseGhost();
  void DialogUseGhost_OnYes();
  void DialogUseGhost_OnNo();
  void DialogCreateGhost();
  void DialogCreateGhost_OnUse();
  void DialogCreateGhost_OnRetry();
  void DialogCreateGhost_OnQuit();
  void DialogCreateGhost_OnReallyQuit();
  void DialogCreateGhost_OnSaveReplay();
  void DialogChooseNbGhosts();
  void DialogChooseNbGhosts_On4();
  void DialogChooseNbGhosts_On7();
  void DialogCreateStuntsGhost();
  void DialogCreateStuntsGhost_OnQuit();
  void DialogHotSeatResult_OnRevenge();
  void DialogHotSeatResult_OnNext();
  void DialogHotSeatResult_OnQuit();
  void DialogHotSeatInGameMenu_OnResume();
  void DialogHotSeatInGameMenu_OnGiveUp();
  void DialogHotSeatInGameMenu_OnQuit();
  void ShowMenus();
  void ShowDialogs();
  const uint CatalogChapterTotalCoppers;
  const NodArray DialogChallengeInfos;
  void DialogNextGhostOpponent_OnOk();
  void DialogNextGhostOpponent_OnCancel();
  void DialogNextGhostOpponent_OnKeepTraining();
  void DialogNextGhostOpponent_OnSelectAnotherMap();
  void DialogSendScore_OnCopyToClipboard();
  void DialogSendScore_OnExportGhost();
  void DialogSendScore_OnOk();
};

struct CTrackManiaNetwork : public CGameManiaPlanetNetwork {
  const CTrackManiaRaceRules* TmRaceRules;
  CTrackManiaPlayerInfo* PlayerInfo;
  bool CurrentRaceIsValid;
  bool ForceEndRound;
  uint WaitTimeBeforeTwoValidations;
};

struct CTrackManiaNetForm : public CGameNetForm {
  CTrackManiaNetForm();

};

struct CTrackManiaPlayer : public CGamePlayer {
  enum ERaceState {
    BeforeStart = 0,
    Running = 1,
    Finished = 2,
    Eliminated = 3,
  };
  enum ETmRacePlayerCoopMode {
    None = 0,
    Symbiosys = 1,
    Checkpoint = 2,
  };
  enum ETmJumpMode {
    Disabled = 0,
    Simple = 1,
    Double = 2,
    Infinite = 3,
  };
  enum ETmBonusModeEventType {
    None = 0,
    Bumps = 1,
    LowGravity = 2,
    FreeWheeling = 3,
    LockedDirections = 4,
  };
  enum ESceneVehiclePhyStuntFigure {
    None = 0,
    StraightJump = 1,
    Flip = 2,
    BackFlip = 3,
    Spin = 4,
    Aerial = 5,
    AlleyOop = 6,
    Roll = 7,
    Corkscrew = 8,
    SpinOff = 9,
    Rodeo = 10,
    FlipFlap = 11,
    Twister = 12,
    FreeStyle = 13,
    SpinningMix = 14,
    FlippingChaos = 15,
    RollingMadness = 16,
    WreckNone = 17,
    WreckStraightJump = 18,
    WreckFlip = 19,
    WreckBackFlip = 20,
    WreckSpin = 21,
    WreckAerial = 22,
    WreckAlleyOop = 23,
    WreckRoll = 24,
    WreckCorkscrew = 25,
    WreckSpinOff = 26,
    WreckRodeo = 27,
    WreckFlipFlap = 28,
    WreckTwister = 29,
    WreckFreeStyle = 30,
    WreckSpinningMix = 31,
    WreckFlippingChaos = 32,
    WreckRollingMadness = 33,
    TimePenalty = 34,
    RespawnPenalty = 35,
    Grind = 36,
    Reset = 37,
  };
  const int CurrentClan;
  const ERaceState RaceState;
  const bool IsSpawned;
  CTrackManiaScore* Score;
  const uint RaceStartTime;
  const uint LapStartTime;
  CTmRaceResultNod* CurRace;
  CTmRaceResultNod* CurLap;
  const uint CurrentNbLaps;
  const int CurTriggerIndex;
  const uint CurCheckpointRaceTime;
  const uint CurCheckpointLapTime;
  const int CoopSymbiosysPercentTotal;
  const uint CoopCheckpointCurController;
  const ETmRacePlayerCoopMode CoopMode;
  const uint ControllerCount;
  const int ControllerId0;
  const int ControllerId1;
  const int ControllerId2;
  const int ControllerId3;
  const uint CoopModeControllerCount;
  const int CoopModeControllerId0;
  const int CoopModeControllerId1;
  const int CoopModeControllerId2;
  const int CoopModeControllerId3;
  const bool ForcedAerialCamera;
  const bool ButtonSmashFrenzy;
  const bool EnableTurboButton;
  const bool MaxiAirControl;
  const bool EnableEmptyCars;
  const ETmJumpMode JumpMode;
  const bool TinyCar;
  const bool EnableCatchUpSpeed;
  const bool EnableStuntMode;
  const bool EnableOnlineMode;
  const float AccelCoef;
  const float ControlCoef;
  const float GravityCoef;
  const vec3 Position;
  const vec3 AimDirection;
  const float AimYaw;
  const float AimPitch;
  const float Upwardness;
  const uint CurRaceContinuousRank;
  const float Distance;
  const float Speed;
  const uint DisplaySpeed;
  const float InputSteer;
  const float InputGasPedal;
  const bool InputIsBraking;
  const float EngineRpm;
  const int EngineCurGear;
  const float EngineTurboRatio;
  const uint WheelsContactCount;
  const uint WheelsSkiddingCount;
  const float DamageHullRatio;
  const float DamageWindowRatio;
  const uint InWaterDuration;
  const uint FreeWheelingDuration;
  const uint FlyingDuration;
  const uint SparklingDuration;
  const uint LightTrailsDuration;
  const uint SkiddingDuration;
  const float SkiddingDistance;
  const float FlyingDistance;
  const bool BonusModeIsJump;
  const bool BonusModeIsTurbo;
  const bool BonusModeIsMiniCar;
  const bool BonusModeIsBigCar;
  const bool BonusModeIsEmptyCars;
  const bool BonusModeIsSpeedyCars;
  const bool BonusModeIsGold;
  const uint BonusModeEmptyCarsStock;
  const uint BonusModeTurboStock;
  const uint BonusModeJumpStock;
  const uint BonusBumpCooldown;
  const bool BonusIsPossible;
  const uint BonusModeTimeTillEvent;
  const uint BonusModeTimeTillEndEvent;
  const uint BonusModeTimeTillEventWarning;
  const ETmBonusModeEventType BonusModeEventType;
  const bool BonusModeEventIsGold;
  const uint StuntLastTime;
  const uint StuntPoints;
  const uint StuntCombo;
  const bool StuntPerfectLanding;
  const bool StuntMasterLanding;
  const bool StuntEpicLanding;
  const ESceneVehiclePhyStuntFigure StuntLast;
  const uint StuntTurboGauge;
  const uint StuntTurboGaugeMax;
  const uint TimeElapsedSinceLastStunt;
  const uint StuntAngle;
  const uint UniqueCameraRespawnCount;
  const uint UniqueCameraAvailableRespawnLeft;
  const uint TimeLeftForStuntCombo;
  const uint TimeTillSmashRespawn;
  const uint TimeTillSmashGiveUp;
  const bool SmashNeedHelp;
  const bool StuntStickNeedHelp;
  const bool StuntJumpNeedHelp;
  const float StuntJumpCharge;
  const float StuntMasterCharge;
  const float StuntEpicCharge;
  void StuntStateReset();
  uint BonusEventStartTime;
  uint BonusEventDuration;
  uint BonusEventWarningDuration;
  const int TimeBeforeDeadlyZone;
  const bool IsDeadlyZoneActive;
  const uint NbRespawns;
  bool AutoPilotEnabled;
  const UnknownType SpawnLoc;
  const uint CurLapIndex;
  int InOffZoneStartTime;
};

struct CTrackManiaGameTerminal : public CGameTerminal {
  CTrackManiaGameTerminal();

};

struct CTrackManiaNetworkServerInfo : public CGameCtnNetServerInfo {
  enum EGameMode {
    _GameMode_Script = 0,
    _GameMode_Rounds = 1,
    _GameMode_Time_Attack = 2,
    _GameMode_Team = 3,
    _GameMode_Laps = 4,
    _GameMode_Cup = 5,
    _GameMode_Stunts = 6,
  };
  enum EGameMode_Script {
    Script = 0,
    Rounds = 1,
    TimeAttack = 2,
    Team = 3,
    Laps = 4,
    Cup = 5,
    Stunts = 6,
  };
  const EGameMode CurGameMode;
  const EGameMode_Script CurGameMode_Script;
  const wstring CurGameModeStr;
  const uint CurRoundPointsLimit;
  const uint CurRoundForcedLaps;
  const bool CurRoundUseNewRules;
  const uint CurRoundPointsLimitNewRules;
  const uint CurTeamPointsLimit;
  const uint CurTeamMaxPoints;
  const bool CurTeamUseNewRules;
  const uint CurTeamPointsLimitNewRules;
  const uint CurTimeAttackLimit;
  const uint CurTimeAttackSynchStartPeriod;
  const uint CurLapsNbLaps;
  const uint CurLapsTimeLimit;
  const uint CurEswcCupPointsLimit;
  const uint CurEswcCupRoundsPerChallenge;
  const uint CurEswcCupNbWinners;
  const uint CurEswcCupWarmUpDuration;
  const uint CurChatTime;
  const uint CurFinishTimeout;
  const uint CurAllWarmUpDuration;
  const bool CurDisableRespawn;
  const uint CurForceMaxOpponents;
  const wstring CurScriptRelName;
  EGameMode NextGameMode;
  EGameMode_Script NextGameMode_Script;
  uint NextRoundPointsLimit;
  uint NextRoundForcedLaps;
  bool NextRoundUseNewRules;
  uint NextRoundPointsLimitNewRules;
  uint NextTeamPointsLimit;
  uint NextTeamMaxPoints;
  bool NextTeamUseNewRules;
  uint NextTeamPointsLimitNewRules;
  uint NextTimeAttackLimit;
  uint NextTimeAttackSynchStartPeriod;
  uint NextLapsNbLaps;
  uint NextLapsTimeLimit;
  uint NextEswcCupPointsLimit;
  uint NextEswcCupRoundsPerChallenge;
  uint NextEswcCupNbWinners;
  uint NextEswcCupWarmUpDuration;
  uint NextChatTime;
  uint NextFinishTimeout;
  uint NextAllWarmUpDuration;
  bool NextDisableRespawn;
  bool NextForceMaxOpponents;
  wstring NextScriptRelName;
};

struct CTrackManiaPlayerInfo : public CGamePlayerInfo {
  const CTrackManiaScore* RaceScore;
};

struct CTrackManiaRaceNetRounds : public CTrackManiaRaceNet {
  CTrackManiaRaceNetRounds();

  const uint NbValidRounds;
  const uint CupWarmUpDuration;
  const uint CupRoundsPerChallenge;
};

struct CTmRaceRulesPlayer : public CGamePlayer {
  enum ETmRacePlayerCoopMode {
    None = 0,
    Symbiosys = 1,
    Checkpoint = 2,
  };
  enum ETmJumpMode {
    Disabled = 0,
    Simple = 1,
    Double = 2,
    Infinite = 3,
  };
  const int CurrentClan;
  const CTmRaceRulesScore* Score;
  int RaceStartTime;
  bool IsSpawned;
  CTmRaceResultNod* CurRace;
  CTmRaceResultNod* CurLap;
  int CurrentNbLaps;
  const int CurTriggerIndex;
  const vec3 Position;
  const float AimYaw;
  const float AimPitch;
  const vec3 AimDirection;
  const vec3 Velocity;
  const float Speed;
  UnknownType ForceModelId;
  float AccelCoef;
  float ControlCoef;
  float GravityCoef;
  ETmRacePlayerCoopMode CoopMode;
  uint ControllerCount;
  int ControllerId0;
  int ControllerId1;
  int ControllerId2;
  int ControllerId3;
  uint CoopModeControllerCount;
  int CoopModeControllerId0;
  int CoopModeControllerId1;
  int CoopModeControllerId2;
  int CoopModeControllerId3;
  bool ForcedAerialCamera;
  bool ButtonSmashFrenzy;
  bool EnableTurboButton;
  bool MaxiAirControl;
  bool EnableEmptyCars;
  ETmJumpMode JumpMode;
  bool TinyCar;
  bool EnableCatchUpSpeed;
  bool EnableStuntMode;
  bool EnableOnlineMode;
};

struct CTrackManiaMatchSettings : public CGameFid {
  wstring Comment;
  bool IsSolo;
  bool IsHotSeat;
  bool IsLan;
  bool IsInternet;
  uint SortIndex;
  bool RandomMapOrder;
  const uint NbChallenges;
  const UnknownType Network_GameMode;
  UnknownType HotSeat_GameMode;
  const uint HotSeat_TimeLimit;
  const uint HotSeat_Rounds;
  const NodArray ChallengeInfos;
};

struct CTrackManiaRaceMultiLocal : public CTrackManiaRace1P {
  CTrackManiaRaceMultiLocal();

  const NodArray MultiLocalPlayerInfos;
  const UnknownType PlayerTimeLeft1;
  const UnknownType PlayerTimeLeft2;
  const UnknownType PlayerTimeLeft3;
  const UnknownType PlayerTimeLeft4;
  const UnknownType PlayerTimeLeft5;
  const UnknownType PlayerTimeLeft6;
  const UnknownType PlayerTimeLeft7;
  const UnknownType PlayerTimeLeft8;
  const wstring PlayerName1;
  const wstring PlayerName2;
  const wstring PlayerName3;
  const wstring PlayerName4;
  const wstring PlayerName5;
  const wstring PlayerName6;
  const wstring PlayerName7;
  const wstring PlayerName8;
  const string PlayerBestScore1;
  const string PlayerBestScore2;
  const string PlayerBestScore3;
  const string PlayerBestScore4;
  const string PlayerBestScore5;
  const string PlayerBestScore6;
  const string PlayerBestScore7;
  const string PlayerBestScore8;
  const uint PlayerGeneralPosition;
};

struct CTrackManiaRaceNet : public CTrackManiaRace {
  NodArray GeneralScores;
  NodArray CurrentScores;
  NodArray TeamScores;
  const CGamePlaygroundSpectating* Spectating;
};

struct CTrackManiaRaceNetTimeAttack : public CTrackManiaRaceNet {
  CTrackManiaRaceNetTimeAttack();

  const uint Bidon;
};

struct CTmRaceRulesEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    StartLine = 1,
    WayPoint = 2,
    GiveUp = 3,
    Respawn = 4,
    Stunt = 5,
    OnPlayerAdded = 6,
    OnPlayerRemoved = 7,
    OnCommand = 8,
  };
  enum EStuntFigure {
    None = 0,
    StraightJump = 1,
    Flip = 2,
    BackFlip = 3,
    Spin = 4,
    Aerial = 5,
    AlleyOop = 6,
    Roll = 7,
    Corkscrew = 8,
    SpinOff = 9,
    Rodeo = 10,
    FlipFlap = 11,
    Twister = 12,
    FreeStyle = 13,
    SpinningMix = 14,
    FlippingChaos = 15,
    RollingMadness = 16,
    WreckNone = 17,
    WreckStraightJump = 18,
    WreckFlip = 19,
    WreckBackFlip = 20,
    WreckSpin = 21,
    WreckAerial = 22,
    WreckAlleyOop = 23,
    WreckRoll = 24,
    WreckCorkscrew = 25,
    WreckSpinOff = 26,
    WreckRodeo = 27,
    WreckFlipFlap = 28,
    WreckTwister = 29,
    WreckFreeStyle = 30,
    WreckSpinningMix = 31,
    WreckFlippingChaos = 32,
    WreckRollingMadness = 33,
    TimePenalty = 34,
    RespawnPenalty = 35,
    Grind = 36,
    Reset = 37,
  };
  const EType Type;
  const CTmRaceRulesPlayer* Player;
  uint RaceTime;
  const uint CheckpointInRace;
  const uint CheckpointInLap;
  const bool IsEndLap;
  const bool IsEndRace;
  uint LapTime;
  int StuntsScore;
  uint NbRespawns;
  const UnknownType BlockId;
  float Speed;
  float Distance;
  float Damages;
  const EStuntFigure StuntFigure;
  const uint Angle;
  const uint Points;
  const uint Combo;
  const bool IsStraight;
  const bool IsReverse;
  const bool IsMasterJump;
  const float Factor;
  const CGamePlayerInfo* User;
  const bool PlayerWasSpawned;
  const bool PlayerWasInLadderMatch;
  const string CommandName;
  const bool CommandValueBoolean;
  const int CommandValueInteger;
  const float CommandValueReal;
  const wstring CommandValueText;
};

struct CTrackManiaRaceNetLaps : public CTrackManiaRaceNet {
  CTrackManiaRaceNetLaps();

  void ComputeScores();
};

struct CTmRaceInterfaceManialinkScripHandler : public CGameScriptHandlerPlaygroundInterface {
  const CTrackManiaPlayer* InputPlayer;
  const CTrackManiaPlayer* GUIPlayer;
  const NodArray RaceEvents;
  const uint NbLaps;
  const bool IndependantLaps;
  const NodArray Players;
  const NodArray Scores;
  const array<int> ClanScores;
  const uint SplitScreenNum;
  const uint SplitScreenCount;
  uint CurPlayerCamera;
  const vec3 MapStartLinePos;
  const array<vec3> MapCheckpointPos;
  const array<vec3> MapFinishLinePos;
  const bool MapIsLapRace;
  const uint MapNbLaps;
};

// File extension: '.Frame.Gbx'
struct CTrackManiaControlCheckPointList : public CControlFrame {
  CTrackManiaControlCheckPointList();

  CControlStyle* StyleName;
  CControlStyle* StyleRank;
  CControlStyle* StyleTime;
  CControlFrame* CardModel;
};

struct CTrackManiaRace1PGhosts : public CTrackManiaRace1P {
  CTrackManiaRace1PGhosts();

  NodArray MedalGhosts;
  const NodArray ChallengeGhostInfos;
};

struct CTrackManiaReplayRecord_deprecated : public CGameCtnReplayRecord {
  CTrackManiaReplayRecord_deprecated();

};

struct CCtnMediaBlockEventTrackMania_deprecated : public CGameCtnMediaBlockEvent_deprecated {
  CCtnMediaBlockEventTrackMania_deprecated();

};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlPlayerInfoCard : public CTrackManiaControlCard {
  CTrackManiaControlPlayerInfoCard();

  bool ShowBasedTimeInfosInRounds;
  CPlugBitmap* Avatar;
  const wstring StrPlayerName;
  const wstring StrCountryName;
  const string StrLadderTeamName;
  const uint StrLadderRankingSimple;
  const float StrLadderScore;
  const string StrLadderRaceScore;
  const string StrCurrentRaceRank;
  const uint SpectatorMode;
  const uint NbSpectators;
  const string StrTotalRoundScore;
  const string StrLastRaceRoundScore;
  const string StrBestTimeOrScore;
  const string StrPlayerRaceBestTimeOrScoreDelay;
  const string StrPlayerBestRaceTime;
  const string StrPlayerBestRaceScore;
  const string StrRaceBestTime;
  const string StrPrevRaceTimeOrScore;
  const string StrOffsetFromBestAtCurrentCP_MmSsCc;
  const string StrRaceBestScore;
  const string StrScoreOffsetFromBestAtCurrentCP;
  CTrackManiaRace* Race;
  bool IsStuntsMode;
  bool IsRoundsMode;
};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlCard : public CGameControlCard {
  CTrackManiaControlCard();

};

struct CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated : public CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated {
  CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated();

};

struct CTrackManiaMatchSettingsControlGrid : public CControlGrid {
  CTrackManiaMatchSettingsControlGrid();

  CTrackManiaMatchSettings* PlayList;
  CControlLabel* PlayListNameLabel;
  CControlLabel* PlayListCommentLabel;
  CGameControlCardCtnChallengeInfo* ChallengeCardTemplate;
  uint MaxChallengeInfosPerColumn;
  uint MaxChallengeInfosPerRow;
  const uint CurrentPage;
  const uint NbPage;
  CControlButton* ButtonNextPage;
  CControlButton* ButtonPreviousPage;
  void OnNextPage();
  void OnPreviousPage();
};

struct CTrackManiaScore : public CTmRaceRulesScore {
  uint Score;
  int LastRaceDeltaPoints;
  uint LastRaceTime;
  uint BestTime;
  uint BestStuntsScore;
  uint LapsNbCheckpoint;
  uint RaceInputsDuration;
  uint RaceSimDataSimulationSeed;
  uint BestRaceInputsTimeStartInReplay;
  const string StrRaceBestTime;
  const string StrPrevRaceTime;
  const string StrPrevRaceDeltaPoints;
  const string StrBestStuntsScore;
};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlRaceScoreCard : public CTrackManiaControlCard {
  CTrackManiaControlRaceScoreCard();

  const wstring StrName;
  const string StrLogin;
  const string StrRank;
  const string StrScore;
  const string StrCheckpoint;
  const string StrLadderScore;
  const wstring LadderRank;
  const string StrLastRaceTime;
  const string StrBestTime;
  const string StrPrevRaceDeltaPoints;
  const string StrBestStuntsScore;
};

// File extension: 'Frame.Gbx'
struct CTrackManiaControlMatchSettingsCard : public CTrackManiaControlCard {
  CTrackManiaControlMatchSettingsCard();

  const wstring StrName;
  const wstring StrComment;
  const uint ChallengesCount;
  const uint Medals;
  const wstring StrTracks;
  CPlugBitmap* BmpBannerGrey;
  CPlugBitmap* BmpBanner;
};

struct CTrackManiaRaceInterface : public CGamePlaygroundInterface {
  CTrackManiaRaceInterface();

  const CTrackManiaRace* Race;
  float DownloadProgressMapsTotal;
  float DownloadProgressMapsCur;
  float DownloadProgressAvatarsTotal;
  float DownloadProgressAvatarsCur;
  float DownloadProgressChallengeTotal;
  float DownloadProgressChallengeCur;
  float DownloadProgressPlayersTotal;
  float DownloadProgressPlayersCur;
  float DownloadProgressActivity;
  const uint WarmUpRoundCur;
  const uint WarmUpRoundCount;
  const uint TimeCountDown;
  const uint PlayerGeneralPosition;
  const uint NbPlayers;
  const CTrackManiaPlayerInfo* UiPlayerInfo0;
  const CTrackManiaPlayer* UiPlayer0;
  const uint CurLapNum0;
  const uint RaceChrono0;
  const uint CarSpeedDisplay0;
  const uint CarDistanceDisplay0;
  const string CheckPointInfo_TimeText0;
  const string CheckPointInfo_OffsetTimeText0;
  const wstring CheckPointInfo_CurrentRacePositionText0;
  const CTrackManiaPlayerInfo* UiPlayerInfo1;
  const CTrackManiaPlayer* UiPlayer1;
  const uint CurLapNum1;
  const uint RaceChrono1;
  const uint CarSpeedDisplay1;
  const uint CarDistanceDisplay1;
  const string CheckPointInfo_TimeText1;
  const string CheckPointInfo_OffsetTimeText1;
  const wstring CheckPointInfo_CurrentRacePositionText1;
  const CTrackManiaPlayerInfo* UiPlayerInfo2;
  const CTrackManiaPlayer* UiPlayer2;
  const uint CurLapNum2;
  const uint RaceChrono2;
  const uint CarSpeedDisplay2;
  const uint CarDistanceDisplay2;
  const string CheckPointInfo_TimeText2;
  const string CheckPointInfo_OffsetTimeText2;
  const wstring CheckPointInfo_CurrentRacePositionText2;
  const CTrackManiaPlayerInfo* UiPlayerInfo3;
  const CTrackManiaPlayer* UiPlayer3;
  const uint CurLapNum3;
  const uint RaceChrono3;
  const uint CarSpeedDisplay3;
  const uint CarDistanceDisplay3;
  const string CheckPointInfo_TimeText3;
  const string CheckPointInfo_OffsetTimeText3;
  const wstring CheckPointInfo_CurrentRacePositionText3;
};

struct CTrackManiaRaceAnalyzer : public CGameAnalyzer {
  const CMwStatsValue* InputValue1;
  const CMwStatsValue* InputValue2;
  const uint InputDeltaT1;
  const uint InputDeltaT2;
  const uint InputDeltaT3;
};

struct CTmEditorPluginMapType : public CGameEditorPluginMapMapType {
  const CTrackManiaRaceRules* Mode;
  void TMObjective_SetFromBestRace(CTmRaceRulesScore* Score);
  const NodArray AllPlayers;
  const NodArray Players;
};

struct CTmRaceClientEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    WayPoint = 1,
    Respawn = 2,
    Turbo = 3,
    Horn = 4,
    Impact = 5,
    WaterSplash = 6,
    GlassSmash = 7,
    PartDetached = 8,
    StopEngine = 9,
    StartEngine = 10,
    AirSpawnRelease = 11,
  };
  const EType Type;
  const CTrackManiaPlayer* Player;
  const uint CheckpointInRace;
  const uint CheckpointInLap;
  const bool IsEndRace;
  const bool IsEndLap;
  const uint RaceTime;
  const uint LapTime;
  const int StuntsScore;
  const uint NbRespawns;
};

struct CGamePlayerProfileChunk_TrackManiaSettings : public CGamePlayerProfileChunk {
  CGamePlayerProfileChunk_TrackManiaSettings();

  uint RespawnCount;
  uint RestartCount;
  bool IsShowPlayerGhost;
  bool NadeoGhostsUnlockMessage;
  array<bool> IsDisplayRaceHelp;
  array<bool> RacePlayerInfoIsShow;
};

// File extension: 'TrackManiaResource.Gbx'
struct CTrackManiaResource : public CMwNod {
  CTrackManiaResource();

  CPlugBitmap* Badge_OcclusionMap;
  CPlugBitmap* Badge_OverLayer_DiffuseOpacity;
  CPlugBitmap* Badge_OverLayer_Gloss;
  CPlugBitmap* Badge_StickersMask;
  CPlugSolid2Model* Badge_Mesh;
  CPlugBitmap* Badge_Mesh_MaterialToReplaceBitmap;
  CPlugBitmap* Badge_Mesh_MaterialToReplaceImage;
  CSceneLayout* Badge_AvatarRenderScene;
  CSceneLayout* Badge_BadgeRenderScene;
  CGameBadgeStickerSlots* Badge_StickerSlots;
  CFuncKeysReal* BadgeEditor_FuncBloomIntensAtHdrNorm;
  CFuncKeysReal* BadgeEditor_FuncAvgLumiToKeyValue;
  CControlFrame* CardPlayerScore_Small;
  CControlFrame* CardPlayerScore_Small_Rev;
  CControlFrame* CardPlayerScore_Medium;
  CControlFrame* CardPlayerScore_Medium_Rev;
  CControlFrame* CardPlayerScore_Big;
  CControlFrame* CardPlayerScore_Big_Rev;
};

struct CTmModuleManager : public CGamePlaygroundModuleManagerClient {
};

struct CTmModuleScoresTable : public CGamePlaygroundModuleClientScoresTable {
};

} // namespace TrackMania

namespace ShootMania {

// File extension: 'TitleCore.Gbx'
struct CShootMania : public CGameManiaTitleCore {
  CShootMania();

  CScene2d* ArenaInterfaceUIFid;
  CSmArenaResource* ArenaResourcesFid;
  const CGamePlaygroundResources* ArenaWorld;
  const CSmServer* Server;
  const CSmClient* Client;
};

struct CSmArenaInterfaceManialinkScripHandler : public CGameScriptHandlerPlaygroundInterface {
  const int ArenaNow;
  const CSmPlayer* InputPlayer;
  const CSmPlayer* GUIPlayer;
  const NodArray Players;
  const NodArray Scores;
  const array<int> ClanScores;
  const NodArray Bases;
  const NodArray Blocks;
  const NodArray BlockSpawns;
  const NodArray BlockPoles;
  const NodArray BotPaths;
  const NodArray ObjectAnchors;
  bool HideResumePlayingButton;
  const NodArray MapBases;
  const NodArray MapLandmarks;
  const NodArray MapLandmarks_PlayerSpawn;
  const NodArray MapLandmarks_Gauge;
  const NodArray MapLandmarks_Sector;
  const NodArray MapLandmarks_BotPath;
  const NodArray MapLandmarks_BotSpawn;
  const NodArray MapLandmarks_ObjectAnchor;
  const NodArray MapLandmarks_Gate;
};

struct CSmArenaClient : public CGamePlaygroundCommon {
  const CGameCtnChallenge* Map;
  const CSmArena* Arena;
  const CSmArenaInterface* ArenaInterface;
  float PredictionSmoothConvergenceSpeed;
  CFuncKeysReal* PredictionSmoothFromExtrapolationDuration;
  uint PredictionSimDurationMax;
  float LocalSmoothMin;
  uint LocalSmoothMinInputLag;
  float LocalSmoothMax;
  uint LocalSmoothMaxInputLag;
  float LocalSmoothConvergenceSpeed;
  float LocalSmoothCoefConvergenceSpeed;
  uint LocalSmoothCoefConvergenceDelay;
  const float LocalSmooth;
  const float LocalSmoothCoef;
  float PredictionSmooth;
  uint DbgDelaySendInputs;
  uint GameEditionAmmoGain;
};

struct CSmArenaScore : public CGamePlaygroundScore {
  const uint TeamNum;
  uint Points;
  uint RoundPoints;
  const uint NbEliminationsInflicted;
  const uint NbEliminationsTaken;
  const uint NbRespawnsRequested;
  const uint DamageInflicted;
  const uint DamageTaken;
  void Reset();
  void Clear();
  uint NbEliminationsInflicted_Ed;
  uint NbEliminationsTaken_Ed;
  uint NbRespawnsRequested_Ed;
  uint DamageInflicted_Ed;
  uint DamageTaken_Ed;
};

struct CSmActionInstance : public CMwNod {
  const CGameActionModel* Model;
  const uint Now;
  const uint Variant;
  NodArray Players;
  CSmPlayer* Owner;
  const bool IsActive;
  const bool IsBound;
  uint Energy;
  uint EnergyMax;
  uint EnergyCost;
  bool EnergyReload;
  float AmmoGain;
  UnknownType State_EntityId1;
  int State_Integer1;
  bool State_Boolean1;
  const NodArray PendingEvents;
  bool IsJumping;
  bool IsGliding;
  bool IsAttractor;
  bool IsFlying;
  bool IsSliding;
  bool IsRunning;
  bool IsFrozen;
  bool IsSneaking;
  bool IsFreeLooking;
  bool HasNoPlayerCollision;
  void SendRulesEvent1(wstring Param1, array<wstring>& Param2, CSmPlayer* Shooter, CSmPlayer* Victim);
  void SendRulesEvent2(wstring Param1, array<wstring>& Param2, CSmPlayer* Shooter, CSmPlayer* Victim, CSmObject* Object);
  void SendRulesEvent3(wstring Param1, array<wstring>& Param2, CSmPlayer* Shooter, CSmPlayer* Victim, CSmObject* Object, CGameScriptTurret* Turret);
  UnknownType Anim_GetModelId(wstring ModelName);
  UnknownType Anim_PlayAtLocation(UnknownType AnimModelId, vec3 Position, vec3 Direction);
  UnknownType Anim_PlayOnPlayer(UnknownType AnimModelId, CSmPlayer* Player);
  void Anim_Stop(UnknownType AnimId);
  UnknownType Projectile_GetModelId(wstring ModelName);
  UnknownType Projectile_CreateAtLocation(UnknownType ProjectileModelId, CSmPlayer* PlayerToIgnore, vec3 InitialPosition, vec3 InitialDirection, vec3 InitialVelocity);
  UnknownType Projectile_CreateOnPlayer(UnknownType ProjectileModelId, CSmPlayer* Shooter);
  uint Cooldown;
  bool Cooldown_IsReady();
  void Cooldown_Start();
  UnknownType Shield_CreateAtLocation(vec3 Position, vec3 Direction);
  UnknownType Shield_CreateOnPlayer(CSmPlayer* ShieldOwner);
  void Shield_Destroy(UnknownType ShieldId);
  bool Shield_Exists(UnknownType ShieldId);
  uint Shield_GetArmor(UnknownType ShieldId);
  void Shield_SetArmor(UnknownType ShieldId, uint ShieldArmor);
  bool Shield_GetIsActive(UnknownType ShieldId);
  void Shield_SetIsActive(UnknownType ShieldId, bool ShieldIsActive);
  uint Shield_GetArmorMax(UnknownType ShieldId);
  uint Shield_GetTickReload(UnknownType ShieldId);
  uint Shield_GetCooldown(UnknownType ShieldId);
  int GetPlayerAmmo(CSmPlayer* Player);
  int GetPlayerAmmoMax(CSmPlayer* Player);
};

struct CSmNetForm : public CGameNetForm {
  CSmNetForm();

};

struct CSmPlayer : public CGamePlayer {
  enum ESpawnStatus {
    NotSpawned = 0,
    Spawning = 1,
    Spawned = 2,
  };
  uint EdClan;
  bool Speaking;
  UnknownType LinearHue;
  const UnknownType LinearHueSrgb;
  const int SpawnIndex;
  const uint AFKLatestChangeTime;
  const CSmArenaScore* Score;
  const ESpawnStatus SpawnStatus;
  const int StartTime;
  int EndTime;
  UnknownType AmmoGain;
  UnknownType AmmoPower;
  const bool AutoSwitchWeapon;
  const uint CurWeapon;
  const uint CurAmmo;
  const uint CurAmmoMax;
  const uint CurAmmoUnit;
  uint Armor;
  uint ArmorMax;
  uint ArmorGain;
  uint ArmorReplenishGain;
  UnknownType ArmorPower;
  uint Stamina;
  UnknownType StaminaMax;
  UnknownType StaminaGain;
  UnknownType StaminaPower;
  UnknownType SpeedPower;
  UnknownType JumpPower;
  bool AllowWallJump;
  bool AllowProgressiveJump;
  bool UseAlternateWeaponVisual;
  bool IsHighlighted;
  UnknownType EnergyLevel;
  vec3 ForceColor;
  const UnknownType GetLinearHue;
  float ForceLinearHue;
  UnknownType ForceModelId;
  bool HasShield;
  const bool IsInVehicle;
  UnknownType ThrowSpeed;
  const int CurrentClan;
  const uint IdleDuration;
  const vec3 Position;
  const float AimYaw;
  const float AimPitch;
  const vec3 AimDirection;
  const bool IsUnderground;
  const bool IsTouchingGround;
  const bool IsInAir;
  const bool IsOnTechGround;
  const bool IsOnTechLaser;
  const bool IsOnTechArrow;
  const bool IsOnTechArmor;
  const bool IsOnTechSafeZone;
  const bool IsOnTech;
  const bool IsOnTechNoWeapon;
  const bool IsInWater;
  const vec3 Velocity;
  const float Speed;
  const bool IsInOffZone;
  const bool IsCapturing;
  const CSmScriptBlockPole* BlockPole;
  const CSmScriptMapLandmark* CapturedLandmark;
  const NodArray Objects;
  const bool IsFakePlayer;
  const bool IsBot;
  const CSmPlayerDriver* Driver;
};

struct CSmArenaInterfaceUI : public CGamePlaygroundInterface {
  CSmArenaInterfaceUI();

};

struct CSmPlayerDriver : public CMwNod {
  enum ESmDriverBehaviour {
    Static = 0,
    Turret = 1,
    Scripted = 2,
    IA = 3,
    Patrol = 4,
    Escape = 5,
    Saunter = 6,
  };
  enum ESmDriverPatrolMode {
    OneTrip = 0,
    BackAndForth = 1,
    Loop = 2,
  };
  enum ESmAttackFilter {
    All = 0,
    AllPlayers = 1,
    AllBots = 2,
    AllOpposite = 3,
    OppositePlayers = 4,
    OppositeBots = 5,
    Nobody = 6,
  };
  ESmDriverBehaviour Behaviour;
  float AggroRadius;
  float ShootRadius;
  float TargetMinDistance;
  float DisengageDistance;
  float PathSpeedCoef;
  float Accuracy;
  int ReactionTime;
  int ShootPeriodMin;
  int ShootPeriodMax;
  bool RocketAnticipation;
  float Fov;
  ESmAttackFilter AttackFilter;
  const CSmPlayer* Target;
  const bool IsStuck;
  bool IsFlying;
  const CSmPlayer* Owner;
  int PathOffset;
  float Agressivity;
  bool UseOldShootingSystem;
  ESmDriverPatrolMode Patrol_Mode;
  void Patrol_Restart();
  vec3 Escape_AnchorPoint;
  float Escape_DistanceSafe;
  float Escape_DistanceMinEscape;
  float Escape_DistanceMaxEscape;
  vec3 Saunter_AnchorPoint;
  int Saunter_BaseChillingTime;
  int Saunter_ChillingTimeDelta;
  float Saunter_Radius;
  bool Scripted_ForceAimInMoveDir;
  CSmPlayer* ForcedTarget;
  NodArray TargetsToAvoid;
};

struct CSmActionInstanceEvent : public CMwNod {
  enum EType {
    OnHitPlayer = 0,
    OnProjectileEnd = 1,
    OnActiveChange = 2,
    OnHitObject = 3,
    OnHitShield = 4,
    OnShieldEnd = 5,
  };
  const EType Type;
  const CSmPlayer* Player;
  const CSmObject* Object;
  const uint Damage;
  const UnknownType ProjectileModelId;
  const uint ContextId;
  const vec3 Position;
  const vec3 Direction;
  const vec3 Normal;
  const uint Shield;
};

struct CSmArenaRules : public CMwNod {
  enum EGameplay {
    Default = 0,
    Mp3Beta0 = 1,
  };
  const NodArray Scores;
  CSmArenaRulesMode* RulesMode;
  uint RulesStateStartTime;
  uint RulesStateEndTime;
  bool RulesStateFreeze;
  uint RulesStateTeam1Score;
  uint RulesStateTeam2Score;
  bool FeatureArmorBar;
  bool FeatureUseClans;
  bool FeatureForcedClans;
  bool FeatureStamina;
  bool FeatureRun;
  bool FeatureWallJump;
  bool FeatureSameWallJump;
  bool FeatureRocketJump;
  bool FeatureDisableHorns;
  bool FeatureFallDamage;
  bool FeatureGuns;
  bool FeaturePvPCollisions;
  bool FeaturePvPWeapons;
  bool FeatureProtectClanmates;
  bool FeatureLaserVsBullets;
  bool FeatureLaserSkewering;
  bool FeaturePlayerTagging;
  bool FeatureBeaconsWithRecipients;
  bool FeatureInteractiveScreensIn3d;
  bool FeatureGunSpecial;
  bool FeatureAmmoBonusOnHit;
  bool FeatureAllies;
  EGameplay Gameplay;
};

struct CSmScriptObjectAnchor : public CSmScriptLandmark {
  const wstring ItemName;
  const UnknownType ItemModelId;
};

struct CSmScriptBotPath : public CSmScriptLandmark {
  const uint Clan;
  const array<vec3> Path;
  const bool IsFlying;
};

struct CSmChallengeParameters : public CGameCtnChallengeParameters {
  CSmChallengeParameters();

  void SetDefaults();
};

struct CSmScriptBotSpawn : public CSmScriptLandmark {
  const wstring ItemName;
  const UnknownType ItemModelId;
};

struct CSmObject : public CMwNod {
  enum EStatus {
    OnPlayer = 0,
    OnAnchor = 1,
    InWorld = 2,
    Unspawned = 3,
  };
  const EStatus Status;
  const UnknownType ModelId;
  void SetAnchor(CSmScriptMapObjectAnchor* ObjectAnchor);
  void SetAnchor_Deprecated(CSmScriptObjectAnchor* ObjectAnchor);
  void SetPlayer(CSmPlayer* Player);
  void SetPosition(vec3 Position);
  void SetPositionAndVel(vec3 Position, vec3 Vel);
  void SetUnspawned();
  const CSmPlayer* Player;
  const CSmScriptMapLandmark* AnchorLandmark;
  const vec3 Position;
  const vec3 Vel;
  uint MachineState;
  bool Throwable;
};

struct CSmAnalyzer : public CGameAnalyzer {
  const float LocalEntitySmoothCoef;
};

struct CSmArenaPhysics : public CMwNod {
  const CScenePhy* ScenePhy;
};

struct CSmArenaInterface : public CMwNod {
  const CSmPlayer* GUIPlayer;
  const CSmArenaInterfaceUI* InterfaceUI;
  bool Mouse_SensitivitiesUser_EnableSpecific;
  UnknownType Mouse_SensitivitiesUser_Default;
  UnknownType Mouse_SensitivitiesUser_Laser;
  float Mouse_SensitivityCoefY;
  float Mouse_Accel;
  bool Mouse_InvertY;
  bool Mouse_AccelEnabled;
  bool Mouse_Filter;
  float Mouse_SensitivityCoefFreeLook;
  bool Speaking;
  bool SkippedInputs;
  uint FlipCheck_Duration;
  uint FlipCheck_PitchSumMin;
  float GhosClipPlayerOffset;
};

struct CSmClient : public CMwNod {
  CSmClient();

  const CSmArenaClient* ArenaClient;
  const CSmArenaRules* Rules;
};

struct CSmArenaServer : public CMwNod {
  const CSmArena* Arena;
  uint ClientInputsMaxLatency;
  uint DbgMinInputDelay;
  uint DbgDelaySendSnapshots;
  bool FilterInputs;
};

struct CSmArena : public CMwNod {
  const CSmArenaPhysics* ArenaPhysics;
  const NodArray Players;
  const NodArray Objects;
  const NodArray Actions;
  const NodArray Bases;
  const NodArray Landmark;
  const NodArray BlockSpawns;
  const NodArray BlockPoles;
  const NodArray Sectors;
  const NodArray Gauges;
  const NodArray BotPaths;
  const NodArray ObjectAnchors;
  const NodArray MapLandmarks;
  const NodArray MapBases;
  const NodArray MapGates;
  const NodArray MapGauges;
  const NodArray MapSectors;
  const NodArray MapPlayerSpawns;
  const NodArray MapBotPaths;
  const NodArray MapBotSpawns;
  const NodArray MapObjectAnchors;
  void FakePlayers_AllStatic();
  void FakePlayers_AllPatrol();
  void FakePlayers_AllBackAndForth();
  void FakePlayers_AllOneTrip();
};

struct CSmArenaRulesMode : public CGamePlaygroundScript {
  enum EWeapon {
    Laser = 0,
    Rocket = 1,
    Nucleus = 2,
    Arrow = 3,
    Missile = 4,
  };
  enum EActionSlot {
    Slot_A = 0,
    Slot_B = 1,
    Slot_C = 2,
    Slot_D = 3,
    Slot_E = 4,
    Slot_F = 5,
    Slot_G = 6,
    Slot_H = 7,
  };
  enum EActionInput {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    Consumable1 = 6,
    Consumable2 = 7,
    None = 8,
  };
  enum EGameplay {
    Default = 0,
    Mp3Beta0 = 1,
  };
  uint StartTime;
  uint EndTime;
  uint SpawnInvulnerabilityDuration;
  bool UseClans;
  bool UseForcedClans;
  bool UsePvPCollisions;
  bool UsePvPWeapons;
  bool UseInterractiveScreensIn3d;
  bool UseLaserVsBullets;
  bool UseLaserSkewering;
  bool UsePlayerTagging;
  bool UseBeaconsWithRecipients;
  bool UseAmmoBonusOnHit;
  bool UseSameWallJump;
  bool UseDefaultActionEvents;
  bool UseAllies;
  bool UseAutoSpawnBots;
  bool UseAutoRespawnBots;
  bool WalkOnWall;
  bool UseAutoDiscardBotEvents;
  bool DbgEnableNavMesh;
  bool ForceNavMapsComputation;
  uint GameplayVersion;
  EGameplay Gameplay;
  bool UseProtectClanmates;
  float OffZoneRadius;
  float OffZoneRadiusSpeed;
  UnknownType OffZoneCenterBlockId;
  UnknownType OffZoneCenterLandmarkId;
  const uint PlayersNbTotal;
  const uint PlayersNbAlive;
  const uint PlayersNbDead;
  const uint ClansNbTotal;
  const uint ClansNbAlive;
  const uint ClansNbDead;
  const array<uint> ClansNbPlayers;
  const array<uint> ClansNbPlayersAlive;
  const NodArray Players;
  const NodArray BotPlayers;
  const NodArray Spectators;
  const NodArray AllPlayers;
  const NodArray PendingEvents;
  const NodArray Bases;
  const NodArray Blocks;
  const NodArray BlockSpawns;
  const NodArray BlockPoles;
  const NodArray BotPaths;
  const NodArray ObjectAnchors;
  void SpawnPlayer_Deprecated(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptBlockSpawn* PlayerSpawn, int ActivationDate);
  void SpawnBotPlayer_Deprecated(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptLandmark* Landmark, int ActivationDate);
  CSmPlayer* CreateBotPlayer_Deprecated(UnknownType ModelId, int ClanNum, int Armor, CSmScriptLandmark* Landmark, int ActivationDate);
  const NodArray MapBases;
  const NodArray MapLandmarks;
  const NodArray MapLandmarks_PlayerSpawn;
  const NodArray MapLandmarks_Gauge;
  const NodArray MapLandmarks_Sector;
  const NodArray MapLandmarks_BotPath;
  const NodArray MapLandmarks_BotSpawn;
  const NodArray MapLandmarks_ObjectAnchor;
  const NodArray MapLandmarks_Gate;
  const NodArray Scores;
  uint Clan1Score;
  uint Clan2Score;
  array<int> ClanScores;
  void PassOn(CSmArenaRulesEvent* Event);
  void Discard(CSmArenaRulesEvent* Event);
  void SpawnPlayer(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptMapPlayerSpawn* PlayerSpawn, int ActivationDate);
  void SpawnBotPlayer_AtPlayerSpawn(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptMapPlayerSpawn* PlayerSpawn, int ActivationDate);
  void SpawnBotPlayer_AtBotPath(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptMapBotPath* BotPath, int ActivationDate);
  void SpawnBotPlayer_AtBotSpawn(CSmPlayer* Player, int ClanNum, int Armor, CSmScriptMapBotSpawn* BotSpawn, int ActivationDate);
  void SpawnBotPlayer_FromOwner(CSmPlayer* Player, CSmPlayer* Owner, int Armor, vec3 Offset, int ActivationDate);
  void UnspawnPlayer(CSmPlayer* Player);
  void ClearScores();
  void SetPlayerClan(CSmPlayer* Player, int ClanNum);
  void SetPlayerWeapon(CSmPlayer* Player, EWeapon DefaultWeapon, bool AutoSwitchWeapon);
  void SetPlayerReloadAllWeapons(CSmPlayer* Player, bool ReloadAllWeapons);
  void SetPlayerAmmo(CSmPlayer* Player, EWeapon Weapon, int Count);
  int GetPlayerAmmo(CSmPlayer* Player, EWeapon Weapon);
  void AddPlayerAmmo(CSmPlayer* Player, EWeapon Weapon, float DeltaCount);
  void SetPlayerAmmoMax(CSmPlayer* Player, EWeapon Weapon, int Count);
  int GetPlayerAmmoMax(CSmPlayer* Player, EWeapon Weapon);
  void AddPlayerArmor(CSmPlayer* Victim, int DeltaArmor, CSmPlayer* Shooter, int ShooterPoints);
  void RemovePlayerArmor(CSmPlayer* Victim, int DeltaArmor, CSmPlayer* Shooter, int ShooterPoints);
  int GetWeaponIndex(EWeapon Weapon);
  int GetWeaponNum(EWeapon Weapon);
  bool CanRespawnPlayer(CSmPlayer* Player);
  void RespawnPlayer(CSmPlayer* Player);
  void RespawnPlayerAtCheckpoint(CSmPlayer* Player, CSmScriptMapLandmark* CheckpointLandmark);
  CSmPlayer* CreateBotPlayer(UnknownType ModelId, int TeamNum);
  void DestroyBotPlayer(CSmPlayer* BotPlayer);
  void DestroyAllBotPlayers();
  void ScriptedBot_Move(CSmPlayer* BotPlayer, vec3 Goal);
  void ScriptedBot_MoveDelta(CSmPlayer* BotPlayer, vec3 Delta);
  void ScriptedBot_MoveAndAim(CSmPlayer* BotPlayer, vec3 Goal);
  void ScriptedBot_MoveDeltaAndAim(CSmPlayer* BotPlayer, vec3 Delta);
  void ScriptedBot_Aim(CSmPlayer* BotPlayer, vec3 Goal);
  void ScriptedBot_AimDelta(CSmPlayer* BotPlayer, float DeltaYaw, float DeltaPitch);
  void ScriptedBot_RequestAction(CSmPlayer* BotPlayer);
  void ScriptedBot_RequestGunTrigger(CSmPlayer* BotPlayer);
  void ActionLoad(CSmPlayer* Player, EActionSlot ActionSlot, UnknownType ModelId);
  void ActionBind(CSmPlayer* Player, EActionSlot ActionSlot, EActionInput ActionInput);
  void ActionSetVariant(CSmPlayer* Player, EActionSlot ActionSlot, uint ActionVariant);
  void LoadAction(CSmPlayer* Player, EActionSlot ActionSlot, UnknownType ModelId, uint ActionVariant);
  void BindAction(CSmPlayer* Player, EActionSlot ActionSlot, EActionInput ActionInput);
  void SetNbFakePlayers(int NbClan1, int NbClan2);
  const NodArray Objects;
  CSmObject* ObjectCreate(UnknownType ModelId);
  void ObjectDestroy(CSmObject* Object);
  void ObjectDestroyAll();
  void RemoveShieldArmor(uint VictimShieldId, uint Damage);
  void Replay_SaveAttackScore(CSmPlayer* Player, int Score);
  void Replay_SaveDefenseScore(CSmPlayer* Player, int Score);
  void Replay_SaveTeamScore(uint Team, int Score);
  void Replay_SavePlayerOfInterest(CSmPlayer* Player);
  void Replay_SaveWinner(CSmPlayer* Player);
  void Replay_SaveInterface();
};

struct CSmServer : public CMwNod {
  CSmServer();

  const CSmArenaServer* ArenaServer;
  const CSmArenaRules* Rules;
};

struct CSmArenaRulesEvent : public CMwNod {
  enum EType {
    Unknown = 0,
    OnShoot = 1,
    OnHit = 2,
    OnNearMiss = 3,
    OnArmorEmpty = 4,
    OnCapture = 5,
    OnShotDeny = 6,
    OnFallDamage = 7,
    OnCommand = 8,
    OnPlayerAdded = 9,
    OnPlayerRemoved = 10,
    OnPlayerRequestRespawn = 11,
    OnActionCustomEvent = 12,
    OnActionEvent = 13,
    OnPlayerTouchesObject = 14,
    OnPlayerTriggersSector = 15,
    OnPlayerThrowsObject = 16,
    OnPlayerRequestActionChange = 17,
  };
  enum EActionSlot {
    Slot_A = 0,
    Slot_B = 1,
    Slot_C = 2,
    Slot_D = 3,
    Slot_E = 4,
    Slot_F = 5,
    Slot_G = 6,
    Slot_H = 7,
  };
  enum EActionInput {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    Consumable1 = 6,
    Consumable2 = 7,
    None = 8,
  };
  enum EActionSlots {
    Weapon = 0,
    Movement = 1,
    Activable1 = 2,
    Activable2 = 3,
    Activable3 = 4,
    Activable4 = 5,
    None = 6,
  };
  const EType Type;
  const CSmPlayer* Player;
  int Damage;
  const CSmObject* VictimObject;
  const uint VictimShield;
  const CGameScriptTurret* VictimTurret;
  int ShooterPoints;
  const CSmPlayer* Shooter;
  const CGameScriptTurret* ShooterTurret;
  const uint ShooterClan;
  const CSmPlayer* Victim;
  const float Height;
  const float MissDist;
  const uint WeaponNum;
  const bool ShooterUsedAction;
  const uint ShooterWeaponNum;
  const EActionSlot ShooterActionSlot;
  const wstring ShooterActionId;
  const bool VictimUsedAction;
  const uint VictimWeaponNum;
  const EActionSlot VictimActionSlot;
  const wstring VictimActionId;
  const EActionSlots ActionSlot;
  const EActionSlot Action_Slot;
  const EActionInput ActionInput;
  const wstring ActionId;
  const wstring Param1;
  const array<wstring> Param2;
  const CSmObject* Object;
  const CSmScriptMapSector* Sector;
  const CSmScriptBlockPole* BlockPole;
  const CSmScriptMapLandmark* Landmark;
  const UnknownType PlayerId;
  const CGamePlayerInfo* User;
  const bool PlayerWasSpawned;
  const bool PlayerWasInLadderMatch;
  const vec3 PlayerLastPosition;
  const vec3 PlayerLastAimDirection;
  const bool GiveUp;
  const string CommandName;
  const bool CommandValueBoolean;
  const int CommandValueInteger;
  const float CommandValueReal;
  const wstring CommandValueText;
  const int ActionChange;
};

struct CSmEditorPluginMapType : public CGameEditorPluginMapMapType {
  const CSmArenaRulesMode* Mode;
  const NodArray AllPlayers;
  const NodArray Players;
};

// File extension: 'SmArenaResource.Gbx'
struct CSmArenaResource : public CMwNod {
  CSmArenaResource();

  CScene2d* ScreenIn3d;
  CPlugBitmap* BitmapCoolDownCutOff;
  CPlugBitmap* BitmapConsumablesIcon_Off;
  CPlugShader* ShaderCrossHairHueShift;
  CPlugGameSkin* GameSkinCrosshairs;
  CPlugSound* SoundOffZone;
  CPlugSound* SoundTeleport;
  CPlugSound* UISound_StartMatch;
  CPlugSound* UISound_EndMatch;
  CPlugSound* UISound_StartRound;
  CPlugSound* UISound_EndRound;
  CPlugSound* UISound_PhaseChange;
  CPlugSound* UISound_TieBreakPoint;
  CPlugSound* UISound_TiePoint;
  CPlugSound* UISound_VictoryPoint;
  CPlugSound* UISound_Capture;
  CPlugSound* UISound_TimeOut;
  CPlugSound* UISound_Notice;
  CPlugSound* UISound_Warning;
  CPlugSound* UISound_PlayerEliminated;
  CPlugSound* UISound_PlayerHit;
  CPlugSound* UISound_Checkpoint;
  CPlugSound* UISound_Finish;
  CPlugSound* UISound_Record;
  CPlugSound* UISound_ScoreProgress;
  CPlugSound* UISound_RankChange;
  CPlugSound* UISound_Bonus;
  CPlugSound* UISound_FirstHit;
  CPlugSound* UISound_Combo;
  CPlugSound* UISound_PlayersRemaining;
  CPlugSound* UISound_Custom1;
  CPlugSound* UISound_Custom2;
  CPlugSound* UISound_Custom3;
  CPlugSound* UISound_Custom4;
  CPlugSound* SoundUISplashVersus;
  CPlugSound* SoundUIRetractableShow;
  CPlugSound* SoundUIRetractableHide;
  CPlugSound* SoundUITimeLeftWarning;
  CPlugSound* SoundUITimeTick;
  CPlugSound* SoundUITimeOut;
  CPlugSound* SoundUIGaugeHealth;
  CPlugSound* SoundUIGaugeStamina;
  CPlugSound* SoundUIGaugeEnergy;
  CControlFrame* CardPlayerScore_Small;
  CControlFrame* CardPlayerScore_Small_Rev;
  CControlFrame* CardPlayerScore_Big;
  CControlFrame* CardPlayerScore_Big_Rev;
  CControlFrame* CardPlayerScore_Medium;
  CControlFrame* CardPlayerScore_Medium_Rev;
  CFuncEnum* GameplayIcons;
  CPlugParticleEmitterModel* LaserSight_EmitterModel_deprecated;
  CGameActionFxResources* ActionFxResources;
  CMwRefBuffer* RefBuffer;
  float AdditionalListenerDistanceNbSquares;
};

struct CSmScriptLandmark : public CMwNod {
  const string Tag;
  const uint Order;
  const vec3 Position;
  const vec3 DirFront;
};

struct CSmScriptBlock : public CSmScriptLandmark {
  const CSmScriptBase* Base;
};

struct CSmScriptBlockSpawn : public CSmScriptBlock {
};

struct CSmScriptBlockPole : public CSmScriptBlock {
  bool Captured;
  const CSmScriptSector* Sector;
  const CSmScriptGauge* Gauge;
};

struct CSmScriptBase : public CMwNod {
  uint Clan;
  bool IsActive;
  const uint NumberOfCollectors;
};

struct CSmScriptGauge : public CMwNod {
  uint Clan;
  UnknownType ValueReal;
  uint Value;
  uint Max;
  int Speed;
};

struct CSmScriptSector : public CMwNod {
  const UnknownType PlayersIds;
};

struct CSmModuleScoresTable : public CGamePlaygroundModuleClientScoresTable {
};

struct CSmScriptMapBase : public CMwNod {
  uint Clan;
  bool IsActive;
  const uint NumberOfCollectors;
};

struct CSmScriptMapGate : public CMwNod {
  uint Clan;
  bool Automatic;
  bool ManualClosed;
  const bool AutoClosed;
  bool AutoIsActive;
  int AutoCloseDelay;
  int AutoOpenSpeed;
};

struct CSmScriptMapGauge : public CMwNod {
  uint Clan;
  UnknownType ValueReal;
  uint Value;
  uint Max;
  int Speed;
  bool Captured;
};

struct CSmScriptMapLandmark : public CMwNod {
  const string Tag;
  const uint Order;
  const vec3 Position;
  const CSmScriptMapBase* Base;
  const CSmScriptMapGate* Gate;
  const CSmScriptMapGauge* Gauge;
  const CSmScriptMapSector* Sector;
  const CSmScriptMapPlayerSpawn* PlayerSpawn;
  const CSmScriptMapBotPath* BotPath;
  const CSmScriptMapBotSpawn* BotSpawn;
  const CSmScriptMapObjectAnchor* ObjectAnchor;
};

struct CSmScriptMapSector : public CMwNod {
  const UnknownType PlayersIds;
  const string Tag;
};

struct CSmScriptMapPlayerSpawn : public CMwNod {
};

struct CSmScriptMapBotPath : public CMwNod {
  const uint Clan;
  const array<vec3> Path;
  const bool IsFlying;
};

struct CSmScriptMapObjectAnchor : public CMwNod {
  const wstring ItemName;
  const UnknownType ItemModelId;
};

struct CSmScriptMapBotSpawn : public CMwNod {
  const bool IsFlying;
  const UnknownType BotModelId;
};

struct CSmModuleManager : public CGamePlaygroundModuleManagerClient {
};

struct CSmOffZone : public CMwNod {
};

} // namespace ShootMania

namespace GameData {

struct CGameCtnCollector : public CMwNod {
  CGameCtnCollector();

  enum EProdState {
    Aborted = 0,
    GameBox = 1,
    DevBuild = 2,
    Release = 3,
  };
  UnknownType CollectionId;
  UnknownType Author;
  wstring NameE;
  const wstring Name;
  wstring Description;
  bool IsInternal;
  bool IsAdvanced;
  string PageName;
  uint CatalogPosition;
  EProdState ProdState;
  CPlugFileImg* IconFid;
  bool IconUseAutoRender;
  uint IconQuarterRotationY;
  uint InterfaceNumber;
  const CPlugBitmap* Icon;
  const CMwNod* ArticlePtr;
};

// File extension: 'Item.Gbx'
struct CGameItemModel : public CGameCtnCollector {
  CGameItemModel();

  enum EnumItemType {
    Undefined = 0,
    Ornament = 1,
    PickUp = 2,
    Character = 3,
    Vehicle = 4,
    Spot = 5,
    Cannon = 6,
    Group = 7,
    Decal = 8,
    Turret = 9,
    Wagon = 10,
    Block = 11,
  };
  enum EnumWaypointType {
    Start = 0,
    Finish = 1,
    Checkpoint = 2,
    None = 3,
    StartFinish = 4,
    Dispenser = 5,
  };
  enum EnumDefaultCam {
    None = 0,
    Default = 1,
    Free = 2,
    Spectator = 3,
    Behind = 4,
    Close = 5,
    Internal = 6,
    Helico = 7,
    FirstPerson = 8,
    ThirdPerson = 9,
    ThirdPersonTop = 10,
    Iso = 11,
    IsoFocus = 12,
    Dia3 = 13,
    Board = 14,
    MonoScreen = 15,
    Rear = 16,
    Debug = 17,
  };
  enum EnumInventoryItemClass {
    Weapon = 0,
    Movement = 1,
    Consumable = 2,
    Armor = 3,
  };
  enum EnumItemClipType {
    Not_a_clip = 0,
    Complex = 1,
    Rectangular = 2,
    Triangular = 3,
    Square = 4,
    Hexagonal = 5,
    Octogonal = 6,
    Circular = 7,
  };
  const EnumItemType ItemType;
  const NodArray Actions;
  CGameItemPlacementParam* DefaultPlacementParam_Head;
  CGameItemPlacementParam* DefaultPlacementParam_Content;
  CGameItemPlacementParam* DefaultPlacementParam_Dbg;
  UnknownType Icon;
  CMwNod* EntityModelEdition;
  CMwNod* EntityModel;
  CMwNod* VisModel;
  CMwNod* VisModelCustom;
  UnknownType DefaultSkinFileRef;
  UnknownType ArchetypeRef;
  CMwNod* PhyModel;
  CMwNod* PhyModelCustom;
  bool HasPath;
  bool CanFly;
  EnumItemType ItemTypeE;
  string SkinDirNameCustom;
  CPlugFileFidContainer* DefaultSkinFid;
  void InitFromArchetype();
  const NodArray Cameras;
  EnumDefaultCam DefaultCam;
  UnknownType DefaultWeaponName;
  NodArray NadeoSkinsFids;
  EnumWaypointType WaypointType;
  CPlugAudioEnvironment* AudioEnvironmentInCar;
  CPlugTrafficObjectParams* TrafficParams;
  vec3 GroundPoint;
  float PainterGroundMargin;
  float OrbitalCenterHeightFromGround;
  float OrbitalRadiusBase;
  float OrbitalPreviewAngle;
  NodArray ItemClips_Models;
  array<wstring> ItemClips_DataRefs;
  UnknownType ItemClips_Locs;
  EnumItemClipType ItemClipType;
  array<vec2> ItemClipShapePoints;
  void AddItemClipShapePoint();
  void RemoveLastItemClipShapePoint();
  void MoveUpItemClipShapePoints();
  void MoveDownItemClipShapePoints();
  void RemoveAllItemClipShapePoints();
  uint PolyGen_EdgeCount;
  float PolyGen_Radius;
  float PolyGen_AngleOffsetInDegrees;
  void GeneratePolygonForItemClipShape();
  void ComputeItemClipShapeOptimized();
  const uint ItemClipShapeOptimized_Symmetry;
  const array<vec2> ItemClipShapeOptimized_PolarCoords;
  bool DisableLightmap;
};

struct CGameObjectPhyModel : public CMwNod {
  CGameObjectPhyModel();

  UnknownType MoveShape;
  UnknownType HitShape;
  UnknownType TriggerShape;
  CPlugDynaPointModel* DynaPointModel;
  uint FirePeriod;
  UnknownType ActionModel;
  const NodArray Actions;
  NodArray Triggers;
  _EEGameObjectPhyModelProgam Program;
};

// File extension: 'GameObjectVisModel.Gbx'
struct CGameObjectVisModel : public CMwNod {
  CGameObjectVisModel();

  UnknownType Mesh;
  CPlugAnimLocSimple* LocAnim;
  wstring SoundRef_Spawn;
  wstring SoundRef_Unspawn;
  wstring SoundRef_Grab;
  wstring SoundRef_Smashed;
  wstring SoundRef_Permanent;
  CPlugSound* Sound_Spawn;
  CPlugSound* Sound_Unspawn;
  CPlugSound* Sound_Grab;
  CPlugSound* Sound_Smashed;
  CPlugSound* Sound_Permanent;
  UnknownType SoundLoc_Permanent;
  CPlugParticleEmitterModel* ParticleModel_Alive;
  vec3 ParticleModelPos_Alive;
  CPlugSolid2Model* MeshShaded;
  wstring SmashParticleRef;
  CPlugParticleEmitterModel* DestroyParticleModel;
  UnknownType Sprites;
};

// File extension: 'Action.Gbx'
struct CGameActionModel : public CMwNod {
  CGameActionModel();

  const UnknownType ActionType;
  string ActionName;
  UnknownType Icon;
  wstring Name;
  const wstring Description;
  UnknownType InventoryItemClass;
  CPlugAnimFile* Anim;
  bool IsAnimPartial;
  NodArray Projectiles;
  NodArray Beams;
  UnknownType CrossHair;
  CPlugShieldModel* ShieldModel;
  CPlugScriptWithSettings* Script;
  NodArray BulletModels;
  const uint ParticleBlockCount;
  void LogParticleBlockModelIds();
  const bool IsCustom;
};

struct CGameWaypointSpecialProperty : public CMwNod {
  CGameWaypointSpecialProperty();

  string Tag;
  uint Order;
};

// File extension: 'GameActionFxResources.Gbx'
struct CGameActionFxResources : public CMwNod {
  CGameActionFxResources();

  CSystemFidsFolder* ParticleEmitterSubModels_Continuous;
  CSystemFidsFolder* ParticleEmitterSubModels_Splash;
  CSystemFidsFolder* MeshFolder;
  CSystemFidsFolder* AudioFxLibraryFolder;
  CSystemFidsFolder* BeamEmitterSubModels;
  CMwRefBuffer* BulletModelsLibrary;
};

// File extension: 'Gate.gbx'
struct CGameGateModel : public CMwNod {
  CGameGateModel();

  CPlugSurface* Shape;
  CGameArmorModel* Armor;
  CPlugSound* GateOpenSound;
  CPlugSound* GateSound;
  CPlugSound* GateCloseSound;
};

// File extension: 'Teleporter.gbx'
struct CGameTeleporterModel : public CMwNod {
  CGameTeleporterModel();

  CGameSpawnModel* Spawn;
  CPlugSurface* TriggerShape;
  vec3 CenterPos;
};

// File extension: 'Armor.gbx'
struct CGameArmorModel : public CMwNod {
  CGameArmorModel();

  uint ArmorMax;
  uint ReplenishDelayAfterDamage;
};

// File extension: 'Spawn.gbx'
struct CGameSpawnModel : public CMwNod {
  CGameSpawnModel();

  UnknownType Loc;
  bool Underground;
  float TorqueX;
  uint TorqueDuration;
  vec3 DefaultGravitySpawn;
};

// File extension: 'CaptureZone.gbx'
struct CGameCaptureZoneModel : public CMwNod {
  CGameCaptureZoneModel();

  UnknownType Loc;
  float Radius;
  float Height;
};

// File extension: 'Turbine.gbx'
struct CGameTurbineModel : public CMwNod {
  CGameTurbineModel();

  UnknownType Loc;
  float SilencerBubble_RadiusMute;
  float SilencerBubble_RadiusFade;
  bool SilencerBubble_OnlyPlayerSounds;
};

struct CGameGhostData : public CMwNod {
  CGameGhostData();

};

struct CGameModulePlaygroundModel : public CGameModuleModelCommon {
  UnknownType Icon;
  UnknownType SizeX;
  UnknownType SizeY;
  CPlugFileText* ManialinkCode;
};

struct CGameModuleNodForPropertyList : public CMwNod {
  CGameModuleNodForPropertyList();

};

// File extension: 'Module.Gbx'
struct CGameModuleMenuModel : public CGameModuleModelCommon {
  CGameModuleMenuModel();

  CPlugFileTextScript* ManiaAppScript;
  NodArray Pages;
  CGameModuleMenuPageModel* AddPage(wstring PageUrl);
  void AddLink(CGameModuleMenuPageModel* ParentPage, CGameModuleMenuPageModel* ChildPage);
  string MenuScript;
};

struct CGameModuleModelCommon : public CMwNod {
  const uint LastEditionTime;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundInventoryModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundInventoryModel();

  string Title;
  uint SlotCapacity;
  NodArray Categories;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundScoresTableModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundScoresTableModel();

  NodArray Columns;
  bool UseTeams;
  bool DisplayTeamScores;
  string Title;
  bool UsePlayerDarkening;
  bool UseSettings;
  bool SortSpectatorsLast;
  bool SortDisconnectedLast;
  bool DisplayLocalPlayerInfo;
  bool DisplayServerName;
  bool DisplayColumnLegends;
  UnknownType ColumnCount;
  UnknownType LineCount;
  float ColumnMargin;
  UnknownType GameModeIcon;
  UnknownType SmStormBackground;
  UnknownType TmStadiumBackground;
  UnknownType TmCanyonBackground;
  UnknownType TmValleyBackground;
  UnknownType TmLagoonBackground;
  UnknownType SmHeaderTeam1Bg;
  UnknownType SmHeaderTeam2Bg;
  UnknownType TmHeaderTeam1Bg;
  UnknownType TmHeaderTeam2Bg;
  UnknownType SmPlayerCardSquareQuad;
  UnknownType SmPlayerCardBackgroundQuad;
  UnknownType SmPlayerCardBackgroundQuadRevert;
  UnknownType TmPlayerCardSquareQuad;
  UnknownType TmPlayerCardBackgroundQuad;
  UnknownType TmPlayerCardBackgroundQuadRevert;
  UnknownType Echelon1;
  UnknownType Echelon2;
  UnknownType Echelon3;
  UnknownType Echelon4;
  UnknownType Echelon5;
  UnknownType Echelon6;
  UnknownType Echelon7;
  UnknownType Echelon8;
  UnknownType Echelon9;
  UnknownType Echelon1Rev;
  UnknownType Echelon2Rev;
  UnknownType Echelon3Rev;
  UnknownType Echelon4Rev;
  UnknownType Echelon5Rev;
  UnknownType Echelon6Rev;
  UnknownType Echelon7Rev;
  UnknownType Echelon8Rev;
  UnknownType Echelon9Rev;
  string HeaderStyle;
  string PlayerInfoLocalRankStyle;
  string PlayerCardLocalRankStyle;
  float HeaderScale;
  float PlayerInfoLocalRankScale;
  float PlayerCardLocalRankScale;
  string DefaultTeam1Name;
  string DefaultTeam2Name;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundStoreModel : public CGameModulePlaygroundModel {
  CGameModulePlaygroundStoreModel();

  string Title;
  string Subtitle;
  UnknownType PowerUpImageLvl1;
  UnknownType PowerUpImageLvl2;
  UnknownType PowerUpImageLvl3;
  UnknownType PowerUpImageLvl4;
  UnknownType PowerUpImageLvl5;
  NodArray Actions;
  NodArray Items;
};

// File extension: 'Module.Gbx'
struct CGameModulePlaygroundHudModel : public CGameModuleModelCommon {
  CGameModulePlaygroundHudModel();

  CPlugFileText* Manialink;
  UnknownType Inventory;
  UnknownType Store;
  UnknownType ScoresTable;
};

// File extension: 'Module.Gbx'
struct CGameModuleMenuPageModel : public CGameModuleModelCommon {
  CGameModuleMenuPageModel();

  CPlugFileText* Manialink;
  NodArray Components;
  string ManialinkText;
};

// File extension: 'Editor.Gbx'
struct CGameEditorModel : public CMwNod {
  CGameEditorModel();

  enum EEditorType {
    ActionMaker = 0,
    ChallengeEditor = 1,
    ItemEditor = 2,
    InterfaceDesigner = 3,
    MeshModeler = 4,
    ModuleStudio = 5,
    PixelArt = 6,
    EditorEditor = 7,
    VehicleAssembler = 8,
  };
  const EEditorType EditorType;
  bool AutoGenerateHelp;
  CPlugFileTextScript* MainPlugin;
  const NodArray SubPlugins;
};

struct CGameItemPlacementParam : public CMwNod {
  CGameItemPlacementParam();

  array<vec3> Pivots_Positions;
  bool SwitchPivotManually;
  float FlyVStep;
  float FlyVOffset;
  bool GhostMode;
  float GridSnap_HStep;
  float GridSnap_VStep;
  float GridSnap_HOffset;
  float GridSnap_VOffset;
  float PivotSnap_Distance;
  bool YawOnly;
  bool NotOnObject;
  bool AutoRotation;
  vec3 Cube_Center;
  float Cube_Size;
  array<int4> PivotRotations;
  void AddPivotPosition();
  void AddPivotRotation();
  void RemoveLastPivotPosition();
  void RemoveLastPivotRotation();
  bool HasPath;
  bool IsFreelyAnchorable;
};

// File extension: 'PixelArt.Gbx'
struct CGamePixelArtModel : public CMwNod {
  CGamePixelArtModel();

};

// File extension: 'BlockItem.Gbx'
struct CGameBlockItem : public CMwNod {
  CGameBlockItem();

  UnknownType ArchetypeBlockInfoId_GameBox;
  UnknownType ArchetypeBlockInfoCollectionId;
  NodArray BlockInfoMobilSkins_Crystals;
  array<uint> BlockInfoMobilSkins_MobilIds;
  const UnknownType ArchetypeBlockInfoId;
  const NodArray CustomizedVariants;
};

struct CGameCommonItemEntityModelEdition : public CMwNod {
  CGameCommonItemEntityModelEdition();

  enum EnumItemType {
    Undefined = 0,
    Ornament = 1,
    PickUp = 2,
    Character = 3,
    Vehicle = 4,
    Spot = 5,
    Cannon = 6,
    Group = 7,
    Decal = 8,
    Turret = 9,
    Wagon = 10,
    Block = 11,
  };
  enum EnumInventoryItemClass {
    Weapon = 0,
    Movement = 1,
    Consumable = 2,
    Armor = 3,
  };
  const EnumItemType ItemType;
  CPlugCrystal* MeshCrystal;
  UnknownType Sprites;
  CPlugParticleEmitterModel* DestroyParticleModel;
  bool UseMeshAsMoveShape;
  CPlugCrystal* CustomMoveShapeCrystal;
  bool UseMeshAsHitShape;
  CPlugCrystal* CustomHitShapeCrystal;
  bool UseMeshAsTriggerShape;
  CPlugCrystal* CustomTriggerShapeCrystal;
  CGameActionModel* PickupActionModel;
  const NodArray TriggeredActions;
  NodArray Triggers;
  wstring InventoryName;
  wstring InventoryDescription;
  EnumInventoryItemClass InventoryItemClass;
  uint InventoryOccupation;
};

struct CGameCommonItemEntityModel : public CMwNod {
  CGameCommonItemEntityModel();

  enum EnumInventoryItemClass {
    Weapon = 0,
    Movement = 1,
    Consumable = 2,
    Armor = 3,
  };
  CMwNod* VisModel;
  CMwNod* PhyModel;
  wstring Name;
  wstring Description;
  uint Occupation;
  EnumInventoryItemClass InventoryItemClass;
};

// File extension: 'Block.Gbx'
struct CGameCustomBlockModel : public CGameCtnCollector {
  CGameCustomBlockModel();

  enum EProdState {
    Aborted = 0,
    GameBox = 1,
    DevBuild = 2,
    Release = 3,
  };
  UnknownType ArchetypeBlockInfoId;
  NodArray BlockInfoMobilSkins_Crystals;
};

} // namespace GameData

