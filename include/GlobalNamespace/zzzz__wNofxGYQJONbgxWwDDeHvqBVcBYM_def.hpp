#pragma once
// IWYU pragma private; include "GlobalNamespace/wNofxGYQJONbgxWwDDeHvqBVcBYM.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(wNofxGYQJONbgxWwDDeHvqBVcBYM)
// Forward declare root types
namespace GlobalNamespace {
struct wNofxGYQJONbgxWwDDeHvqBVcBYM;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM, "", "wNofxGYQJONbgxWwDDeHvqBVcBYM");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: wNofxGYQJONbgxWwDDeHvqBVcBYM
struct CORDL_TYPE wNofxGYQJONbgxWwDDeHvqBVcBYM {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __wNofxGYQJONbgxWwDDeHvqBVcBYM_Unwrapped
enum struct __wNofxGYQJONbgxWwDDeHvqBVcBYM_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_InvalidFunction = static_cast<int32_t>(0x1),
__E_FileNotFound = static_cast<int32_t>(0x2),
__E_PathNotFound = static_cast<int32_t>(0x3),
__E_TooManyOpenFiles = static_cast<int32_t>(0x4),
__E_AccessDenied = static_cast<int32_t>(0x5),
__E_InvalidHandle = static_cast<int32_t>(0x6),
__E_ArenaTrashed = static_cast<int32_t>(0x7),
__E_NotEnoughMemory = static_cast<int32_t>(0x8),
__E_InvalidBlock = static_cast<int32_t>(0x9),
__E_BadEnvironment = static_cast<int32_t>(0xa),
__E_BadFormat = static_cast<int32_t>(0xb),
__E_InvalidAccess = static_cast<int32_t>(0xc),
__E_InvalidData = static_cast<int32_t>(0xd),
__E_Outofmemory = static_cast<int32_t>(0xe),
__E_InvalidDrive = static_cast<int32_t>(0xf),
__E_CurrentDirectory = static_cast<int32_t>(0x10),
__E_NotSameDevice = static_cast<int32_t>(0x11),
__E_NoMoreFiles = static_cast<int32_t>(0x12),
__E_WriteProtect = static_cast<int32_t>(0x13),
__E_BadUnit = static_cast<int32_t>(0x14),
__E_NotReady = static_cast<int32_t>(0x15),
__E_BadCommand = static_cast<int32_t>(0x16),
__E_Crc = static_cast<int32_t>(0x17),
__E_BadLength = static_cast<int32_t>(0x18),
__E_Seek = static_cast<int32_t>(0x19),
__E_NotDosDisk = static_cast<int32_t>(0x1a),
__E_SectorNotFound = static_cast<int32_t>(0x1b),
__E_OutOfPaper = static_cast<int32_t>(0x1c),
__E_WriteFault = static_cast<int32_t>(0x1d),
__E_ReadFault = static_cast<int32_t>(0x1e),
__E_GenFailure = static_cast<int32_t>(0x1f),
__E_SharingViolation = static_cast<int32_t>(0x20),
__E_LockViolation = static_cast<int32_t>(0x21),
__E_WrongDisk = static_cast<int32_t>(0x22),
__E_SharingBufferExceeded = static_cast<int32_t>(0x24),
__E_HandleEof = static_cast<int32_t>(0x26),
__E_HandleDiskFull = static_cast<int32_t>(0x27),
__E_NotSupported = static_cast<int32_t>(0x32),
__E_RemNotList = static_cast<int32_t>(0x33),
__E_DupName = static_cast<int32_t>(0x34),
__E_BadNetpath = static_cast<int32_t>(0x35),
__E_NetworkBusy = static_cast<int32_t>(0x36),
__E_DevNotExist = static_cast<int32_t>(0x37),
__E_TooManyCmds = static_cast<int32_t>(0x38),
__E_AdapHdwErr = static_cast<int32_t>(0x39),
__E_BadNetResp = static_cast<int32_t>(0x3a),
__E_UnexpNetErr = static_cast<int32_t>(0x3b),
__E_BadRemAdap = static_cast<int32_t>(0x3c),
__E_PrintqFull = static_cast<int32_t>(0x3d),
__E_NoSpoolSpace = static_cast<int32_t>(0x3e),
__E_PrintCancelled = static_cast<int32_t>(0x3f),
__E_NetnameDeleted = static_cast<int32_t>(0x40),
__E_NetworkAccessDenied = static_cast<int32_t>(0x41),
__E_BadDevType = static_cast<int32_t>(0x42),
__E_BadNetName = static_cast<int32_t>(0x43),
__E_TooManyNames = static_cast<int32_t>(0x44),
__E_TooManySess = static_cast<int32_t>(0x45),
__E_SharingPaused = static_cast<int32_t>(0x46),
__E_ReqNotAccep = static_cast<int32_t>(0x47),
__E_RedirPaused = static_cast<int32_t>(0x48),
__E_FileExists = static_cast<int32_t>(0x50),
__E_CannotMake = static_cast<int32_t>(0x52),
__E_FailI24 = static_cast<int32_t>(0x53),
__E_OutOfStructures = static_cast<int32_t>(0x54),
__E_AlreadyAssigned = static_cast<int32_t>(0x55),
__E_InvalidPassword = static_cast<int32_t>(0x56),
__E_InvalidParameter = static_cast<int32_t>(0x57),
__E_NetWriteFault = static_cast<int32_t>(0x58),
__E_NoProcSlots = static_cast<int32_t>(0x59),
__E_TooManySemaphores = static_cast<int32_t>(0x64),
__E_ExclSemAlreadyOwned = static_cast<int32_t>(0x65),
__E_SemIsSet = static_cast<int32_t>(0x66),
__E_TooManySemRequests = static_cast<int32_t>(0x67),
__E_InvalidAtInterruptTime = static_cast<int32_t>(0x68),
__E_SemOwnerDied = static_cast<int32_t>(0x69),
__E_SemUserLimit = static_cast<int32_t>(0x6a),
__E_DiskChange = static_cast<int32_t>(0x6b),
__E_DriveLocked = static_cast<int32_t>(0x6c),
__E_BrokenPipe = static_cast<int32_t>(0x6d),
__E_OpenFailed = static_cast<int32_t>(0x6e),
__E_BufferOverflow = static_cast<int32_t>(0x6f),
__E_DiskFull = static_cast<int32_t>(0x70),
__E_NoMoreSearchHandles = static_cast<int32_t>(0x71),
__E_InvalidTargetHandle = static_cast<int32_t>(0x72),
__E_InvalidCategory = static_cast<int32_t>(0x75),
__E_InvalidVerifySwitch = static_cast<int32_t>(0x76),
__E_BadDriverLevel = static_cast<int32_t>(0x77),
__E_CallNotImplemented = static_cast<int32_t>(0x78),
__E_SemTimeout = static_cast<int32_t>(0x79),
__E_InsufficientBuffer = static_cast<int32_t>(0x7a),
__E_InvalidName = static_cast<int32_t>(0x7b),
__E_InvalidLevel = static_cast<int32_t>(0x7c),
__E_NoVolumeLabel = static_cast<int32_t>(0x7d),
__E_ModNotFound = static_cast<int32_t>(0x7e),
__E_ProcNotFound = static_cast<int32_t>(0x7f),
__E_WaitNoChildren = static_cast<int32_t>(0x80),
__E_ChildNotComplete = static_cast<int32_t>(0x81),
__E_DirectAccessHandle = static_cast<int32_t>(0x82),
__E_NegativeSeek = static_cast<int32_t>(0x83),
__E_SeekOnDevice = static_cast<int32_t>(0x84),
__E_IsJoinTarget = static_cast<int32_t>(0x85),
__E_IsJoined = static_cast<int32_t>(0x86),
__E_IsSubsted = static_cast<int32_t>(0x87),
__E_NotJoined = static_cast<int32_t>(0x88),
__E_NotSubsted = static_cast<int32_t>(0x89),
__E_JoinToJoin = static_cast<int32_t>(0x8a),
__E_SubstToSubst = static_cast<int32_t>(0x8b),
__E_JoinToSubst = static_cast<int32_t>(0x8c),
__E_SubstToJoin = static_cast<int32_t>(0x8d),
__E_BusyDrive = static_cast<int32_t>(0x8e),
__E_SameDrive = static_cast<int32_t>(0x8f),
__E_DirNotRoot = static_cast<int32_t>(0x90),
__E_DirNotEmpty = static_cast<int32_t>(0x91),
__E_IsSubstPath = static_cast<int32_t>(0x92),
__E_IsJoinPath = static_cast<int32_t>(0x93),
__E_PathBusy = static_cast<int32_t>(0x94),
__E_IsSubstTarget = static_cast<int32_t>(0x95),
__E_SystemTrace = static_cast<int32_t>(0x96),
__E_InvalidEventCount = static_cast<int32_t>(0x97),
__E_TooManyMuxwaiters = static_cast<int32_t>(0x98),
__E_InvalidListFormat = static_cast<int32_t>(0x99),
__E_LabelTooLong = static_cast<int32_t>(0x9a),
__E_TooManyTcbs = static_cast<int32_t>(0x9b),
__E_SignalRefused = static_cast<int32_t>(0x9c),
__E_Discarded = static_cast<int32_t>(0x9d),
__E_NotLocked = static_cast<int32_t>(0x9e),
__E_BadThreadidAddr = static_cast<int32_t>(0x9f),
__E_BadArguments = static_cast<int32_t>(0xa0),
__E_BadPathname = static_cast<int32_t>(0xa1),
__E_SignalPending = static_cast<int32_t>(0xa2),
__E_MaxThrdsReached = static_cast<int32_t>(0xa4),
__E_LockFailed = static_cast<int32_t>(0xa7),
__E_Busy = static_cast<int32_t>(0xaa),
__E_DeviceSupportInProgress = static_cast<int32_t>(0xab),
__E_CancelViolation = static_cast<int32_t>(0xad),
__E_AtomicLocksNotSupported = static_cast<int32_t>(0xae),
__E_InvalidSegmentNumber = static_cast<int32_t>(0xb4),
__E_InvalidOrdinal = static_cast<int32_t>(0xb6),
__E_AlreadyExists = static_cast<int32_t>(0xb7),
__E_InvalidFlagNumber = static_cast<int32_t>(0xba),
__E_SemNotFound = static_cast<int32_t>(0xbb),
__E_InvalidStartingCodeseg = static_cast<int32_t>(0xbc),
__E_InvalidStackseg = static_cast<int32_t>(0xbd),
__E_InvalidModuletype = static_cast<int32_t>(0xbe),
__E_InvalidExeSignature = static_cast<int32_t>(0xbf),
__E_ExeMarkedInvalid = static_cast<int32_t>(0xc0),
__E_BadExeFormat = static_cast<int32_t>(0xc1),
__E_IteratedDataExceeds64k = static_cast<int32_t>(0xc2),
__E_InvalidMinallocsize = static_cast<int32_t>(0xc3),
__E_DynlinkFromInvalidRing = static_cast<int32_t>(0xc4),
__E_IoplNotEnabled = static_cast<int32_t>(0xc5),
__E_InvalidSegdpl = static_cast<int32_t>(0xc6),
__E_AutodatasegExceeds64k = static_cast<int32_t>(0xc7),
__E_Ring2segMustBeMovable = static_cast<int32_t>(0xc8),
__E_RelocChainXeedsSeglim = static_cast<int32_t>(0xc9),
__E_InfloopInRelocChain = static_cast<int32_t>(0xca),
__E_EnvvarNotFound = static_cast<int32_t>(0xcb),
__E_NoSignalSent = static_cast<int32_t>(0xcd),
__E_FilenameExcedRange = static_cast<int32_t>(0xce),
__E_Ring2StackInUse = static_cast<int32_t>(0xcf),
__E_MetaExpansionTooLong = static_cast<int32_t>(0xd0),
__E_InvalidSignalNumber = static_cast<int32_t>(0xd1),
__E_Thread1Inactive = static_cast<int32_t>(0xd2),
__E_Locked = static_cast<int32_t>(0xd4),
__E_TooManyModules = static_cast<int32_t>(0xd6),
__E_NestingNotAllowed = static_cast<int32_t>(0xd7),
__E_ExeMachineTypeMismatch = static_cast<int32_t>(0xd8),
__E_ExeCannotModifySignedBinary = static_cast<int32_t>(0xd9),
__E_ExeCannotModifyStrongSignedBinary = static_cast<int32_t>(0xda),
__E_FileCheckedOut = static_cast<int32_t>(0xdc),
__E_CheckoutRequired = static_cast<int32_t>(0xdd),
__E_BadFileType = static_cast<int32_t>(0xde),
__E_FileTooLarge = static_cast<int32_t>(0xdf),
__E_FormsAuthRequired = static_cast<int32_t>(0xe0),
__E_VirusInfected = static_cast<int32_t>(0xe1),
__E_VirusDeleted = static_cast<int32_t>(0xe2),
__E_PipeLocal = static_cast<int32_t>(0xe5),
__E_BadPipe = static_cast<int32_t>(0xe6),
__E_PipeBusy = static_cast<int32_t>(0xe7),
__E_NoData = static_cast<int32_t>(0xe8),
__E_PipeNotConnected = static_cast<int32_t>(0xe9),
__E_MoreData = static_cast<int32_t>(0xea),
__E_VcDisconnected = static_cast<int32_t>(0xf0),
__E_InvalidEaName = static_cast<int32_t>(0xfe),
__E_EaListInconsistent = static_cast<int32_t>(0xff),
__E_NoMoreItems = static_cast<int32_t>(0x103),
__E_CannotCopy = static_cast<int32_t>(0x10a),
__E_Directory = static_cast<int32_t>(0x10b),
__E_EasDidntFit = static_cast<int32_t>(0x113),
__E_EaFileCorrupt = static_cast<int32_t>(0x114),
__E_EaTableFull = static_cast<int32_t>(0x115),
__E_InvalidEaHandle = static_cast<int32_t>(0x116),
__E_EasNotSupported = static_cast<int32_t>(0x11a),
__E_NotOwner = static_cast<int32_t>(0x120),
__E_TooManyPosts = static_cast<int32_t>(0x12a),
__E_PartialCopy = static_cast<int32_t>(0x12b),
__E_OplockNotGranted = static_cast<int32_t>(0x12c),
__E_InvalidOplockProtocol = static_cast<int32_t>(0x12d),
__E_DiskTooFragmented = static_cast<int32_t>(0x12e),
__E_DeletePending = static_cast<int32_t>(0x12f),
__E_IncompatibleWithGlobalShortNameRegistrySetting = static_cast<int32_t>(0x130),
__E_ShortNamesNotEnabledOnVolume = static_cast<int32_t>(0x131),
__E_SecurityStreamIsInconsistent = static_cast<int32_t>(0x132),
__E_InvalidLockRange = static_cast<int32_t>(0x133),
__E_ImageSubsystemNotPresent = static_cast<int32_t>(0x134),
__E_NotificationGuidAlreadyDefined = static_cast<int32_t>(0x135),
__E_InvalidExceptionHandler = static_cast<int32_t>(0x136),
__E_DuplicatePrivileges = static_cast<int32_t>(0x137),
__E_NoRangesProcessed = static_cast<int32_t>(0x138),
__E_NotAllowedOnSystemFile = static_cast<int32_t>(0x139),
__E_DiskResourcesExhausted = static_cast<int32_t>(0x13a),
__E_InvalidToken = static_cast<int32_t>(0x13b),
__E_DeviceFeatureNotSupported = static_cast<int32_t>(0x13c),
__E_MrMidNotFound = static_cast<int32_t>(0x13d),
__E_ScopeNotFound = static_cast<int32_t>(0x13e),
__E_UndefinedScope = static_cast<int32_t>(0x13f),
__E_InvalidCap = static_cast<int32_t>(0x140),
__E_DeviceUnreachable = static_cast<int32_t>(0x141),
__E_DeviceNoResources = static_cast<int32_t>(0x142),
__E_DataChecksumError = static_cast<int32_t>(0x143),
__E_IntermixedKernelEaOperation = static_cast<int32_t>(0x144),
__E_FileLevelTrimNotSupported = static_cast<int32_t>(0x146),
__E_OffsetAlignmentViolation = static_cast<int32_t>(0x147),
__E_InvalidFieldInParameterList = static_cast<int32_t>(0x148),
__E_OperationInProgress = static_cast<int32_t>(0x149),
__E_BadDevicePath = static_cast<int32_t>(0x14a),
__E_TooManyDescriptors = static_cast<int32_t>(0x14b),
__E_ScrubDataDisabled = static_cast<int32_t>(0x14c),
__E_NotRedundantStorage = static_cast<int32_t>(0x14d),
__E_ResidentFileNotSupported = static_cast<int32_t>(0x14e),
__E_CompressedFileNotSupported = static_cast<int32_t>(0x14f),
__E_DirectoryNotSupported = static_cast<int32_t>(0x150),
__E_NotReadFromCopy = static_cast<int32_t>(0x151),
__E_FtWriteFailure = static_cast<int32_t>(0x152),
__E_FtDiScanRequired = static_cast<int32_t>(0x153),
__E_InvalidKernelInfoVersion = static_cast<int32_t>(0x154),
__E_InvalidPepInfoVersion = static_cast<int32_t>(0x155),
__E_FailNoactionReboot = static_cast<int32_t>(0x15e),
__E_FailShutdown = static_cast<int32_t>(0x15f),
__E_FailRestart = static_cast<int32_t>(0x160),
__E_MaxSessionsReached = static_cast<int32_t>(0x161),
__E_ThreadModeAlreadyBackground = static_cast<int32_t>(0x190),
__E_ThreadModeNotBackground = static_cast<int32_t>(0x191),
__E_ProcessModeAlreadyBackground = static_cast<int32_t>(0x192),
__E_ProcessModeNotBackground = static_cast<int32_t>(0x193),
__E_InvalidAddress = static_cast<int32_t>(0x1e7),
__E_UserProfileLoad = static_cast<int32_t>(0x1f4),
__E_ArithmeticOverflow = static_cast<int32_t>(0x216),
__E_PipeConnected = static_cast<int32_t>(0x217),
__E_PipeListening = static_cast<int32_t>(0x218),
__E_VerifierStop = static_cast<int32_t>(0x219),
__E_AbiosError = static_cast<int32_t>(0x21a),
__E_Wx86Warning = static_cast<int32_t>(0x21b),
__E_Wx86Error = static_cast<int32_t>(0x21c),
__E_TimerNotCanceled = static_cast<int32_t>(0x21d),
__E_Unwind = static_cast<int32_t>(0x21e),
__E_BadStack = static_cast<int32_t>(0x21f),
__E_InvalidUnwindTarget = static_cast<int32_t>(0x220),
__E_InvalidPortAttributes = static_cast<int32_t>(0x221),
__E_PortMessageTooLong = static_cast<int32_t>(0x222),
__E_InvalidQuotaLower = static_cast<int32_t>(0x223),
__E_DeviceAlreadyAttached = static_cast<int32_t>(0x224),
__E_InstructionMisalignment = static_cast<int32_t>(0x225),
__E_ProfilingNotStarted = static_cast<int32_t>(0x226),
__E_ProfilingNotStopped = static_cast<int32_t>(0x227),
__E_CouldNotInterpret = static_cast<int32_t>(0x228),
__E_ProfilingAtLimit = static_cast<int32_t>(0x229),
__E_CantWait = static_cast<int32_t>(0x22a),
__E_CantTerminateSelf = static_cast<int32_t>(0x22b),
__E_UnexpectedMmCreateErr = static_cast<int32_t>(0x22c),
__E_UnexpectedMmMapError = static_cast<int32_t>(0x22d),
__E_UnexpectedMmExtendErr = static_cast<int32_t>(0x22e),
__E_BadFunctionTable = static_cast<int32_t>(0x22f),
__E_NoGuidTranslation = static_cast<int32_t>(0x230),
__E_InvalidLdtSize = static_cast<int32_t>(0x231),
__E_InvalidLdtOffset = static_cast<int32_t>(0x233),
__E_InvalidLdtDescriptor = static_cast<int32_t>(0x234),
__E_TooManyThreads = static_cast<int32_t>(0x235),
__E_ThreadNotInProcess = static_cast<int32_t>(0x236),
__E_PagefileQuotaExceeded = static_cast<int32_t>(0x237),
__E_LogonServerConflict = static_cast<int32_t>(0x238),
__E_SynchronizationRequired = static_cast<int32_t>(0x239),
__E_NetOpenFailed = static_cast<int32_t>(0x23a),
__E_IoPrivilegeFailed = static_cast<int32_t>(0x23b),
__E_ControlCExit = static_cast<int32_t>(0x23c),
__E_MissingSystemfile = static_cast<int32_t>(0x23d),
__E_UnhandledException = static_cast<int32_t>(0x23e),
__E_AppInitFailure = static_cast<int32_t>(0x23f),
__E_PagefileCreateFailed = static_cast<int32_t>(0x240),
__E_InvalidImageHash = static_cast<int32_t>(0x241),
__E_NoPagefile = static_cast<int32_t>(0x242),
__E_IllegalFloatContext = static_cast<int32_t>(0x243),
__E_NoEventPair = static_cast<int32_t>(0x244),
__E_DomainCtrlrConfigError = static_cast<int32_t>(0x245),
__E_IllegalCharacter = static_cast<int32_t>(0x246),
__E_UndefinedCharacter = static_cast<int32_t>(0x247),
__E_FloppyVolume = static_cast<int32_t>(0x248),
__E_BiosFailedToConnectInterrupt = static_cast<int32_t>(0x249),
__E_BackupController = static_cast<int32_t>(0x24a),
__E_MutantLimitExceeded = static_cast<int32_t>(0x24b),
__E_FsDriverRequired = static_cast<int32_t>(0x24c),
__E_CannotLoadRegistryFile = static_cast<int32_t>(0x24d),
__E_DebugAttachFailed = static_cast<int32_t>(0x24e),
__E_SystemProcessTerminated = static_cast<int32_t>(0x24f),
__E_DataNotAccepted = static_cast<int32_t>(0x250),
__E_VdmHardError = static_cast<int32_t>(0x251),
__E_DriverCancelTimeout = static_cast<int32_t>(0x252),
__E_ReplyMessageMismatch = static_cast<int32_t>(0x253),
__E_LostWritebehindData = static_cast<int32_t>(0x254),
__E_ClientServerParametersInvalid = static_cast<int32_t>(0x255),
__E_NotTinyStream = static_cast<int32_t>(0x256),
__E_StackOverflowRead = static_cast<int32_t>(0x257),
__E_ConvertToLarge = static_cast<int32_t>(0x258),
__E_FoundOutOfScope = static_cast<int32_t>(0x259),
__E_AllocateBucket = static_cast<int32_t>(0x25a),
__E_MarshallOverflow = static_cast<int32_t>(0x25b),
__E_InvalidVariant = static_cast<int32_t>(0x25c),
__E_BadCompressionBuffer = static_cast<int32_t>(0x25d),
__E_AuditFailed = static_cast<int32_t>(0x25e),
__E_TimerResolutionNotSet = static_cast<int32_t>(0x25f),
__E_InsufficientLogonInfo = static_cast<int32_t>(0x260),
__E_BadDllEntrypoint = static_cast<int32_t>(0x261),
__E_BadServiceEntrypoint = static_cast<int32_t>(0x262),
__E_IpAddressConflict1 = static_cast<int32_t>(0x263),
__E_IpAddressConflict2 = static_cast<int32_t>(0x264),
__E_RegistryQuotaLimit = static_cast<int32_t>(0x265),
__E_NoCallbackActive = static_cast<int32_t>(0x266),
__E_PwdTooShort = static_cast<int32_t>(0x267),
__E_PwdTooRecent = static_cast<int32_t>(0x268),
__E_PwdHistoryConflict = static_cast<int32_t>(0x269),
__E_UnsupportedCompression = static_cast<int32_t>(0x26a),
__E_InvalidHwProfile = static_cast<int32_t>(0x26b),
__E_InvalidPlugplayDevicePath = static_cast<int32_t>(0x26c),
__E_QuotaListInconsistent = static_cast<int32_t>(0x26d),
__E_EvaluationExpiration = static_cast<int32_t>(0x26e),
__E_IllegalDllRelocation = static_cast<int32_t>(0x26f),
__E_DllInitFailedLogoff = static_cast<int32_t>(0x270),
__E_ValidateContinue = static_cast<int32_t>(0x271),
__E_NoMoreMatches = static_cast<int32_t>(0x272),
__E_RangeListConflict = static_cast<int32_t>(0x273),
__E_ServerSidMismatch = static_cast<int32_t>(0x274),
__E_CantEnableDenyOnly = static_cast<int32_t>(0x275),
__E_FloatMultipleFaults = static_cast<int32_t>(0x276),
__E_FloatMultipleTraps = static_cast<int32_t>(0x277),
__E_Nointerface = static_cast<int32_t>(0x278),
__E_DriverFailedSleep = static_cast<int32_t>(0x279),
__E_CorruptSystemFile = static_cast<int32_t>(0x27a),
__E_CommitmentMinimum = static_cast<int32_t>(0x27b),
__E_PnpRestartEnumeration = static_cast<int32_t>(0x27c),
__E_SystemImageBadSignature = static_cast<int32_t>(0x27d),
__E_PnpRebootRequired = static_cast<int32_t>(0x27e),
__E_InsufficientPower = static_cast<int32_t>(0x27f),
__E_MultipleFaultViolation = static_cast<int32_t>(0x280),
__E_SystemShutdown = static_cast<int32_t>(0x281),
__E_PortNotSet = static_cast<int32_t>(0x282),
__E_DsVersionCheckFailure = static_cast<int32_t>(0x283),
__E_RangeNotFound = static_cast<int32_t>(0x284),
__E_NotSafeModeDriver = static_cast<int32_t>(0x286),
__E_FailedDriverEntry = static_cast<int32_t>(0x287),
__E_DeviceEnumerationError = static_cast<int32_t>(0x288),
__E_MountPointNotResolved = static_cast<int32_t>(0x289),
__E_InvalidDeviceObjectParameter = static_cast<int32_t>(0x28a),
__E_McaOccured = static_cast<int32_t>(0x28b),
__E_DriverDatabaseError = static_cast<int32_t>(0x28c),
__E_SystemHiveTooLarge = static_cast<int32_t>(0x28d),
__E_DriverFailedPriorUnload = static_cast<int32_t>(0x28e),
__E_VolsnapPrepareHibernate = static_cast<int32_t>(0x28f),
__E_HibernationFailure = static_cast<int32_t>(0x290),
__E_PwdTooLong = static_cast<int32_t>(0x291),
__E_FileSystemLimitation = static_cast<int32_t>(0x299),
__E_AssertionFailure = static_cast<int32_t>(0x29c),
__E_AcpiError = static_cast<int32_t>(0x29d),
__E_WowAssertion = static_cast<int32_t>(0x29e),
__E_PnpBadMpsTable = static_cast<int32_t>(0x29f),
__E_PnpTranslationFailed = static_cast<int32_t>(0x2a0),
__E_PnpIrqTranslationFailed = static_cast<int32_t>(0x2a1),
__E_PnpInvalidId = static_cast<int32_t>(0x2a2),
__E_WakeSystemDebugger = static_cast<int32_t>(0x2a3),
__E_HandlesClosed = static_cast<int32_t>(0x2a4),
__E_ExtraneousInformation = static_cast<int32_t>(0x2a5),
__E_RxactCommitNecessary = static_cast<int32_t>(0x2a6),
__E_MediaCheck = static_cast<int32_t>(0x2a7),
__E_GuidSubstitutionMade = static_cast<int32_t>(0x2a8),
__E_StoppedOnSymlink = static_cast<int32_t>(0x2a9),
__E_Longjump = static_cast<int32_t>(0x2aa),
__E_PlugplayQueryVetoed = static_cast<int32_t>(0x2ab),
__E_UnwindConsolidate = static_cast<int32_t>(0x2ac),
__E_RegistryHiveRecovered = static_cast<int32_t>(0x2ad),
__E_DllMightBeInsecure = static_cast<int32_t>(0x2ae),
__E_DllMightBeIncompatible = static_cast<int32_t>(0x2af),
__E_DbgExceptionNotHandled = static_cast<int32_t>(0x2b0),
__E_DbgReplyLater = static_cast<int32_t>(0x2b1),
__E_DbgUnableToProvideHandle = static_cast<int32_t>(0x2b2),
__E_DbgTerminateThread = static_cast<int32_t>(0x2b3),
__E_DbgTerminateProcess = static_cast<int32_t>(0x2b4),
__E_DbgControlC = static_cast<int32_t>(0x2b5),
__E_DbgPrintexceptionC = static_cast<int32_t>(0x2b6),
__E_DbgRipexception = static_cast<int32_t>(0x2b7),
__E_DbgControlBreak = static_cast<int32_t>(0x2b8),
__E_DbgCommandException = static_cast<int32_t>(0x2b9),
__E_ObjectNameExists = static_cast<int32_t>(0x2ba),
__E_ThreadWasSuspended = static_cast<int32_t>(0x2bb),
__E_ImageNotAtBase = static_cast<int32_t>(0x2bc),
__E_RxactStateCreated = static_cast<int32_t>(0x2bd),
__E_SegmentNotification = static_cast<int32_t>(0x2be),
__E_BadCurrentDirectory = static_cast<int32_t>(0x2bf),
__E_FtReadRecoveryFromBackup = static_cast<int32_t>(0x2c0),
__E_FtWriteRecovery = static_cast<int32_t>(0x2c1),
__E_ImageMachineTypeMismatch = static_cast<int32_t>(0x2c2),
__E_ReceivePartial = static_cast<int32_t>(0x2c3),
__E_ReceiveExpedited = static_cast<int32_t>(0x2c4),
__E_ReceivePartialExpedited = static_cast<int32_t>(0x2c5),
__E_EventDone = static_cast<int32_t>(0x2c6),
__E_EventPending = static_cast<int32_t>(0x2c7),
__E_CheckingFileSystem = static_cast<int32_t>(0x2c8),
__E_FatalAppExit = static_cast<int32_t>(0x2c9),
__E_PredefinedHandle = static_cast<int32_t>(0x2ca),
__E_WasUnlocked = static_cast<int32_t>(0x2cb),
__E_ServiceNotification = static_cast<int32_t>(0x2cc),
__E_WasLocked = static_cast<int32_t>(0x2cd),
__E_LogHardError = static_cast<int32_t>(0x2ce),
__E_AlreadyWin32 = static_cast<int32_t>(0x2cf),
__E_ImageMachineTypeMismatchExe = static_cast<int32_t>(0x2d0),
__E_NoYieldPerformed = static_cast<int32_t>(0x2d1),
__E_TimerResumeIgnored = static_cast<int32_t>(0x2d2),
__E_ArbitrationUnhandled = static_cast<int32_t>(0x2d3),
__E_CardbusNotSupported = static_cast<int32_t>(0x2d4),
__E_MpProcessorMismatch = static_cast<int32_t>(0x2d5),
__E_Hibernated = static_cast<int32_t>(0x2d6),
__E_ResumeHibernation = static_cast<int32_t>(0x2d7),
__E_FirmwareUpdated = static_cast<int32_t>(0x2d8),
__E_DriversLeakingLockedPages = static_cast<int32_t>(0x2d9),
__E_WakeSystem = static_cast<int32_t>(0x2da),
__E_Wait1 = static_cast<int32_t>(0x2db),
__E_Wait2 = static_cast<int32_t>(0x2dc),
__E_Wait3 = static_cast<int32_t>(0x2dd),
__E_Wait63 = static_cast<int32_t>(0x2de),
__E_AbandonedWait0 = static_cast<int32_t>(0x2df),
__E_AbandonedWait63 = static_cast<int32_t>(0x2e0),
__E_UserApc = static_cast<int32_t>(0x2e1),
__E_KernelApc = static_cast<int32_t>(0x2e2),
__E_Alerted = static_cast<int32_t>(0x2e3),
__E_ElevationRequired = static_cast<int32_t>(0x2e4),
__E_Reparse = static_cast<int32_t>(0x2e5),
__E_OplockBreakInProgress = static_cast<int32_t>(0x2e6),
__E_VolumeMounted = static_cast<int32_t>(0x2e7),
__E_RxactCommitted = static_cast<int32_t>(0x2e8),
__E_NotifyCleanup = static_cast<int32_t>(0x2e9),
__E_PrimaryTransportConnectFailed = static_cast<int32_t>(0x2ea),
__E_PageFaultTransition = static_cast<int32_t>(0x2eb),
__E_PageFaultDemandZero = static_cast<int32_t>(0x2ec),
__E_PageFaultCopyOnWrite = static_cast<int32_t>(0x2ed),
__E_PageFaultGuardPage = static_cast<int32_t>(0x2ee),
__E_PageFaultPagingFile = static_cast<int32_t>(0x2ef),
__E_CachePageLocked = static_cast<int32_t>(0x2f0),
__E_CrashDump = static_cast<int32_t>(0x2f1),
__E_BufferAllZeros = static_cast<int32_t>(0x2f2),
__E_ReparseObject = static_cast<int32_t>(0x2f3),
__E_ResourceRequirementsChanged = static_cast<int32_t>(0x2f4),
__E_TranslationComplete = static_cast<int32_t>(0x2f5),
__E_NothingToTerminate = static_cast<int32_t>(0x2f6),
__E_ProcessNotInJob = static_cast<int32_t>(0x2f7),
__E_ProcessInJob = static_cast<int32_t>(0x2f8),
__E_VolsnapHibernateReady = static_cast<int32_t>(0x2f9),
__E_FsfilterOpCompletedSuccessfully = static_cast<int32_t>(0x2fa),
__E_InterruptVectorAlreadyConnected = static_cast<int32_t>(0x2fb),
__E_InterruptStillConnected = static_cast<int32_t>(0x2fc),
__E_WaitForOplock = static_cast<int32_t>(0x2fd),
__E_DbgExceptionHandled = static_cast<int32_t>(0x2fe),
__E_DbgContinue = static_cast<int32_t>(0x2ff),
__E_CallbackPopStack = static_cast<int32_t>(0x300),
__E_CompressionDisabled = static_cast<int32_t>(0x301),
__E_Cantfetchbackwards = static_cast<int32_t>(0x302),
__E_Cantscrollbackwards = static_cast<int32_t>(0x303),
__E_Rowsnotreleased = static_cast<int32_t>(0x304),
__E_BadAccessorFlags = static_cast<int32_t>(0x305),
__E_ErrorsEncountered = static_cast<int32_t>(0x306),
__E_NotCapable = static_cast<int32_t>(0x307),
__E_RequestOutOfSequence = static_cast<int32_t>(0x308),
__E_VersionParseError = static_cast<int32_t>(0x309),
__E_Badstartposition = static_cast<int32_t>(0x30a),
__E_MemoryHardware = static_cast<int32_t>(0x30b),
__E_DiskRepairDisabled = static_cast<int32_t>(0x30c),
__E_InsufficientResourceForSpecifiedSharedSectionSize = static_cast<int32_t>(0x30d),
__E_SystemPowerstateTransition = static_cast<int32_t>(0x30e),
__E_SystemPowerstateComplexTransition = static_cast<int32_t>(0x30f),
__E_McaException = static_cast<int32_t>(0x310),
__E_AccessAuditByPolicy = static_cast<int32_t>(0x311),
__E_AccessDisabledNoSaferUiByPolicy = static_cast<int32_t>(0x312),
__E_AbandonHiberfile = static_cast<int32_t>(0x313),
__E_LostWritebehindDataNetworkDisconnected = static_cast<int32_t>(0x314),
__E_LostWritebehindDataNetworkServerError = static_cast<int32_t>(0x315),
__E_LostWritebehindDataLocalDiskError = static_cast<int32_t>(0x316),
__E_BadMcfgTable = static_cast<int32_t>(0x317),
__E_DiskRepairRedirected = static_cast<int32_t>(0x318),
__E_DiskRepairUnsuccessful = static_cast<int32_t>(0x319),
__E_CorruptLogOverfull = static_cast<int32_t>(0x31a),
__E_CorruptLogCorrupted = static_cast<int32_t>(0x31b),
__E_CorruptLogUnavailable = static_cast<int32_t>(0x31c),
__E_CorruptLogDeletedFull = static_cast<int32_t>(0x31d),
__E_CorruptLogCleared = static_cast<int32_t>(0x31e),
__E_OrphanNameExhausted = static_cast<int32_t>(0x31f),
__E_OplockSwitchedToNewHandle = static_cast<int32_t>(0x320),
__E_CannotGrantRequestedOplock = static_cast<int32_t>(0x321),
__E_CannotBreakOplock = static_cast<int32_t>(0x322),
__E_OplockHandleClosed = static_cast<int32_t>(0x323),
__E_NoAceCondition = static_cast<int32_t>(0x324),
__E_InvalidAceCondition = static_cast<int32_t>(0x325),
__E_FileHandleRevoked = static_cast<int32_t>(0x326),
__E_ImageAtDifferentBase = static_cast<int32_t>(0x327),
__E_EaAccessDenied = static_cast<int32_t>(0x3e2),
__E_OperationAborted = static_cast<int32_t>(0x3e3),
__E_IoIncomplete = static_cast<int32_t>(0x3e4),
__E_IoPending = static_cast<int32_t>(0x3e5),
__E_Noaccess = static_cast<int32_t>(0x3e6),
__E_Swaperror = static_cast<int32_t>(0x3e7),
__E_StackOverflow = static_cast<int32_t>(0x3e9),
__E_InvalidMessage = static_cast<int32_t>(0x3ea),
__E_CanNotComplete = static_cast<int32_t>(0x3eb),
__E_InvalidFlags = static_cast<int32_t>(0x3ec),
__E_UnrecognizedVolume = static_cast<int32_t>(0x3ed),
__E_FileInvalid = static_cast<int32_t>(0x3ee),
__E_FullscreenMode = static_cast<int32_t>(0x3ef),
__E_NoToken = static_cast<int32_t>(0x3f0),
__E_Baddb = static_cast<int32_t>(0x3f1),
__E_Badkey = static_cast<int32_t>(0x3f2),
__E_Cantopen = static_cast<int32_t>(0x3f3),
__E_Cantread = static_cast<int32_t>(0x3f4),
__E_Cantwrite = static_cast<int32_t>(0x3f5),
__E_RegistryRecovered = static_cast<int32_t>(0x3f6),
__E_RegistryCorrupt = static_cast<int32_t>(0x3f7),
__E_RegistryIoFailed = static_cast<int32_t>(0x3f8),
__E_NotRegistryFile = static_cast<int32_t>(0x3f9),
__E_KeyDeleted = static_cast<int32_t>(0x3fa),
__E_NoLogSpace = static_cast<int32_t>(0x3fb),
__E_KeyHasChildren = static_cast<int32_t>(0x3fc),
__E_ChildMustBeVolatile = static_cast<int32_t>(0x3fd),
__E_NotifyEnumDir = static_cast<int32_t>(0x3fe),
__E_DependentServicesRunning = static_cast<int32_t>(0x41b),
__E_InvalidServiceControl = static_cast<int32_t>(0x41c),
__E_ServiceRequestTimeout = static_cast<int32_t>(0x41d),
__E_ServiceNoThread = static_cast<int32_t>(0x41e),
__E_ServiceDatabaseLocked = static_cast<int32_t>(0x41f),
__E_ServiceAlreadyRunning = static_cast<int32_t>(0x420),
__E_InvalidServiceAccount = static_cast<int32_t>(0x421),
__E_ServiceDisabled = static_cast<int32_t>(0x422),
__E_CircularDependency = static_cast<int32_t>(0x423),
__E_ServiceDoesNotExist = static_cast<int32_t>(0x424),
__E_ServiceCannotAcceptCtrl = static_cast<int32_t>(0x425),
__E_ServiceNotActive = static_cast<int32_t>(0x426),
__E_FailedServiceControllerConnect = static_cast<int32_t>(0x427),
__E_ExceptionInService = static_cast<int32_t>(0x428),
__E_DatabaseDoesNotExist = static_cast<int32_t>(0x429),
__E_ServiceSpecificError = static_cast<int32_t>(0x42a),
__E_ProcessAborted = static_cast<int32_t>(0x42b),
__E_ServiceDependencyFail = static_cast<int32_t>(0x42c),
__E_ServiceLogonFailed = static_cast<int32_t>(0x42d),
__E_ServiceStartHang = static_cast<int32_t>(0x42e),
__E_InvalidServiceLock = static_cast<int32_t>(0x42f),
__E_ServiceMarkedForDelete = static_cast<int32_t>(0x430),
__E_ServiceExists = static_cast<int32_t>(0x431),
__E_AlreadyRunningLkg = static_cast<int32_t>(0x432),
__E_ServiceDependencyDeleted = static_cast<int32_t>(0x433),
__E_BootAlreadyAccepted = static_cast<int32_t>(0x434),
__E_ServiceNeverStarted = static_cast<int32_t>(0x435),
__E_DuplicateServiceName = static_cast<int32_t>(0x436),
__E_DifferentServiceAccount = static_cast<int32_t>(0x437),
__E_CannotDetectDriverFailure = static_cast<int32_t>(0x438),
__E_CannotDetectProcessAbort = static_cast<int32_t>(0x439),
__E_NoRecoveryProgram = static_cast<int32_t>(0x43a),
__E_ServiceNotInExe = static_cast<int32_t>(0x43b),
__E_NotSafebootService = static_cast<int32_t>(0x43c),
__E_EndOfMedia = static_cast<int32_t>(0x44c),
__E_FilemarkDetected = static_cast<int32_t>(0x44d),
__E_BeginningOfMedia = static_cast<int32_t>(0x44e),
__E_SetmarkDetected = static_cast<int32_t>(0x44f),
__E_NoDataDetected = static_cast<int32_t>(0x450),
__E_PartitionFailure = static_cast<int32_t>(0x451),
__E_InvalidBlockLength = static_cast<int32_t>(0x452),
__E_DeviceNotPartitioned = static_cast<int32_t>(0x453),
__E_UnableToLockMedia = static_cast<int32_t>(0x454),
__E_UnableToUnloadMedia = static_cast<int32_t>(0x455),
__E_MediaChanged = static_cast<int32_t>(0x456),
__E_BusReset = static_cast<int32_t>(0x457),
__E_NoMediaInDrive = static_cast<int32_t>(0x458),
__E_NoUnicodeTranslation = static_cast<int32_t>(0x459),
__E_DllInitFailed = static_cast<int32_t>(0x45a),
__E_ShutdownInProgress = static_cast<int32_t>(0x45b),
__E_NoShutdownInProgress = static_cast<int32_t>(0x45c),
__E_IoDevice = static_cast<int32_t>(0x45d),
__E_SerialNoDevice = static_cast<int32_t>(0x45e),
__E_IrqBusy = static_cast<int32_t>(0x45f),
__E_MoreWrites = static_cast<int32_t>(0x460),
__E_CounterTimeout = static_cast<int32_t>(0x461),
__E_FloppyIdMarkNotFound = static_cast<int32_t>(0x462),
__E_FloppyWrongCylinder = static_cast<int32_t>(0x463),
__E_FloppyUnknownError = static_cast<int32_t>(0x464),
__E_FloppyBadRegisters = static_cast<int32_t>(0x465),
__E_DiskRecalibrateFailed = static_cast<int32_t>(0x466),
__E_DiskOperationFailed = static_cast<int32_t>(0x467),
__E_DiskResetFailed = static_cast<int32_t>(0x468),
__E_EomOverflow = static_cast<int32_t>(0x469),
__E_NotEnoughServerMemory = static_cast<int32_t>(0x46a),
__E_PossibleDeadlock = static_cast<int32_t>(0x46b),
__E_MappedAlignment = static_cast<int32_t>(0x46c),
__E_SetPowerStateVetoed = static_cast<int32_t>(0x474),
__E_SetPowerStateFailed = static_cast<int32_t>(0x475),
__E_TooManyLinks = static_cast<int32_t>(0x476),
__E_OldWinVersion = static_cast<int32_t>(0x47e),
__E_AppWrongOs = static_cast<int32_t>(0x47f),
__E_SingleInstanceApp = static_cast<int32_t>(0x480),
__E_RmodeApp = static_cast<int32_t>(0x481),
__E_InvalidDll = static_cast<int32_t>(0x482),
__E_NoAssociation = static_cast<int32_t>(0x483),
__E_DdeFail = static_cast<int32_t>(0x484),
__E_DllNotFound = static_cast<int32_t>(0x485),
__E_NoMoreUserHandles = static_cast<int32_t>(0x486),
__E_MessageSyncOnly = static_cast<int32_t>(0x487),
__E_SourceElementEmpty = static_cast<int32_t>(0x488),
__E_DestinationElementFull = static_cast<int32_t>(0x489),
__E_IllegalElementAddress = static_cast<int32_t>(0x48a),
__E_MagazineNotPresent = static_cast<int32_t>(0x48b),
__E_DeviceReinitializationNeeded = static_cast<int32_t>(0x48c),
__E_DeviceRequiresCleaning = static_cast<int32_t>(0x48d),
__E_DeviceDoorOpen = static_cast<int32_t>(0x48e),
__E_DeviceNotConnected = static_cast<int32_t>(0x48f),
__E_NotFound = static_cast<int32_t>(0x490),
__E_NoMatch = static_cast<int32_t>(0x491),
__E_SetNotFound = static_cast<int32_t>(0x492),
__E_PointNotFound = static_cast<int32_t>(0x493),
__E_NoTrackingService = static_cast<int32_t>(0x494),
__E_NoVolumeId = static_cast<int32_t>(0x495),
__E_UnableToRemoveReplaced = static_cast<int32_t>(0x497),
__E_UnableToMoveReplacement = static_cast<int32_t>(0x498),
__E_UnableToMoveReplacement2 = static_cast<int32_t>(0x499),
__E_JournalDeleteInProgress = static_cast<int32_t>(0x49a),
__E_JournalNotActive = static_cast<int32_t>(0x49b),
__E_PotentialFileFound = static_cast<int32_t>(0x49c),
__E_JournalEntryDeleted = static_cast<int32_t>(0x49d),
__E_ShutdownIsScheduled = static_cast<int32_t>(0x4a6),
__E_ShutdownUsersLoggedOn = static_cast<int32_t>(0x4a7),
__E_BadDevice = static_cast<int32_t>(0x4b0),
__E_ConnectionUnavail = static_cast<int32_t>(0x4b1),
__E_DeviceAlreadyRemembered = static_cast<int32_t>(0x4b2),
__E_NoNetOrBadPath = static_cast<int32_t>(0x4b3),
__E_BadProvider = static_cast<int32_t>(0x4b4),
__E_CannotOpenProfile = static_cast<int32_t>(0x4b5),
__E_BadProfile = static_cast<int32_t>(0x4b6),
__E_NotContainer = static_cast<int32_t>(0x4b7),
__E_ExtendedError = static_cast<int32_t>(0x4b8),
__E_InvalidGroupname = static_cast<int32_t>(0x4b9),
__E_InvalidComputername = static_cast<int32_t>(0x4ba),
__E_InvalidEventname = static_cast<int32_t>(0x4bb),
__E_InvalidDomainname = static_cast<int32_t>(0x4bc),
__E_InvalidServicename = static_cast<int32_t>(0x4bd),
__E_InvalidNetname = static_cast<int32_t>(0x4be),
__E_InvalidSharename = static_cast<int32_t>(0x4bf),
__E_InvalidPasswordname = static_cast<int32_t>(0x4c0),
__E_InvalidMessagename = static_cast<int32_t>(0x4c1),
__E_InvalidMessagedest = static_cast<int32_t>(0x4c2),
__E_SessionCredentialConflict = static_cast<int32_t>(0x4c3),
__E_RemoteSessionLimitExceeded = static_cast<int32_t>(0x4c4),
__E_DupDomainname = static_cast<int32_t>(0x4c5),
__E_NoNetwork = static_cast<int32_t>(0x4c6),
__E_Cancelled = static_cast<int32_t>(0x4c7),
__E_UserMappedFile = static_cast<int32_t>(0x4c8),
__E_ConnectionRefused = static_cast<int32_t>(0x4c9),
__E_GracefulDisconnect = static_cast<int32_t>(0x4ca),
__E_AddressAlreadyAssociated = static_cast<int32_t>(0x4cb),
__E_AddressNotAssociated = static_cast<int32_t>(0x4cc),
__E_ConnectionInvalid = static_cast<int32_t>(0x4cd),
__E_ConnectionActive = static_cast<int32_t>(0x4ce),
__E_NetworkUnreachable = static_cast<int32_t>(0x4cf),
__E_HostUnreachable = static_cast<int32_t>(0x4d0),
__E_ProtocolUnreachable = static_cast<int32_t>(0x4d1),
__E_PortUnreachable = static_cast<int32_t>(0x4d2),
__E_RequestAborted = static_cast<int32_t>(0x4d3),
__E_ConnectionAborted = static_cast<int32_t>(0x4d4),
__E_Retry = static_cast<int32_t>(0x4d5),
__E_ConnectionCountLimit = static_cast<int32_t>(0x4d6),
__E_LoginTimeRestriction = static_cast<int32_t>(0x4d7),
__E_LoginWkstaRestriction = static_cast<int32_t>(0x4d8),
__E_IncorrectAddress = static_cast<int32_t>(0x4d9),
__E_AlreadyRegistered = static_cast<int32_t>(0x4da),
__E_ServiceNotFound = static_cast<int32_t>(0x4db),
__E_NotAuthenticated = static_cast<int32_t>(0x4dc),
__E_NotLoggedOn = static_cast<int32_t>(0x4dd),
__E_Continue = static_cast<int32_t>(0x4de),
__E_AlreadyInitialized = static_cast<int32_t>(0x4df),
__E_NoMoreDevices = static_cast<int32_t>(0x4e0),
__E_NoSuchSite = static_cast<int32_t>(0x4e1),
__E_DomainControllerExists = static_cast<int32_t>(0x4e2),
__E_OnlyIfConnected = static_cast<int32_t>(0x4e3),
__E_OverrideNochanges = static_cast<int32_t>(0x4e4),
__E_BadUserProfile = static_cast<int32_t>(0x4e5),
__E_NotSupportedOnSbs = static_cast<int32_t>(0x4e6),
__E_ServerShutdownInProgress = static_cast<int32_t>(0x4e7),
__E_HostDown = static_cast<int32_t>(0x4e8),
__E_NonAccountSid = static_cast<int32_t>(0x4e9),
__E_NonDomainSid = static_cast<int32_t>(0x4ea),
__E_ApphelpBlock = static_cast<int32_t>(0x4eb),
__E_AccessDisabledByPolicy = static_cast<int32_t>(0x4ec),
__E_RegNatConsumption = static_cast<int32_t>(0x4ed),
__E_CscshareOffline = static_cast<int32_t>(0x4ee),
__E_PkinitFailure = static_cast<int32_t>(0x4ef),
__E_SmartcardSubsystemFailure = static_cast<int32_t>(0x4f0),
__E_DowngradeDetected = static_cast<int32_t>(0x4f1),
__E_MachineLocked = static_cast<int32_t>(0x4f7),
__E_CallbackSuppliedInvalidData = static_cast<int32_t>(0x4f9),
__E_SyncForegroundRefreshRequired = static_cast<int32_t>(0x4fa),
__E_DriverBlocked = static_cast<int32_t>(0x4fb),
__E_InvalidImportOfNonDll = static_cast<int32_t>(0x4fc),
__E_AccessDisabledWebblade = static_cast<int32_t>(0x4fd),
__E_AccessDisabledWebbladeTamper = static_cast<int32_t>(0x4fe),
__E_RecoveryFailure = static_cast<int32_t>(0x4ff),
__E_AlreadyFiber = static_cast<int32_t>(0x500),
__E_AlreadyThread = static_cast<int32_t>(0x501),
__E_StackBufferOverrun = static_cast<int32_t>(0x502),
__E_ParameterQuotaExceeded = static_cast<int32_t>(0x503),
__E_DebuggerInactive = static_cast<int32_t>(0x504),
__E_DelayLoadFailed = static_cast<int32_t>(0x505),
__E_VdmDisallowed = static_cast<int32_t>(0x506),
__E_UnidentifiedError = static_cast<int32_t>(0x507),
__E_InvalidCruntimeParameter = static_cast<int32_t>(0x508),
__E_BeyondVdl = static_cast<int32_t>(0x509),
__E_IncompatibleServiceSidType = static_cast<int32_t>(0x50a),
__E_DriverProcessTerminated = static_cast<int32_t>(0x50b),
__E_ImplementationLimit = static_cast<int32_t>(0x50c),
__E_ProcessIsProtected = static_cast<int32_t>(0x50d),
__E_ServiceNotifyClientLagging = static_cast<int32_t>(0x50e),
__E_DiskQuotaExceeded = static_cast<int32_t>(0x50f),
__E_ContentBlocked = static_cast<int32_t>(0x510),
__E_IncompatibleServicePrivilege = static_cast<int32_t>(0x511),
__E_AppHang = static_cast<int32_t>(0x512),
__E_InvalidLabel = static_cast<int32_t>(0x513),
__E_NotAllAssigned = static_cast<int32_t>(0x514),
__E_SomeNotMapped = static_cast<int32_t>(0x515),
__E_NoQuotasForAccount = static_cast<int32_t>(0x516),
__E_LocalUserSessionKey = static_cast<int32_t>(0x517),
__E_NullLmPassword = static_cast<int32_t>(0x518),
__E_UnknownRevision = static_cast<int32_t>(0x519),
__E_RevisionMismatch = static_cast<int32_t>(0x51a),
__E_InvalidOwner = static_cast<int32_t>(0x51b),
__E_InvalidPrimaryGroup = static_cast<int32_t>(0x51c),
__E_NoImpersonationToken = static_cast<int32_t>(0x51d),
__E_CantDisableMandatory = static_cast<int32_t>(0x51e),
__E_NoLogonServers = static_cast<int32_t>(0x51f),
__E_NoSuchLogonSession = static_cast<int32_t>(0x520),
__E_NoSuchPrivilege = static_cast<int32_t>(0x521),
__E_PrivilegeNotHeld = static_cast<int32_t>(0x522),
__E_InvalidAccountName = static_cast<int32_t>(0x523),
__E_UserExists = static_cast<int32_t>(0x524),
__E_NoSuchUser = static_cast<int32_t>(0x525),
__E_GroupExists = static_cast<int32_t>(0x526),
__E_NoSuchGroup = static_cast<int32_t>(0x527),
__E_MemberInGroup = static_cast<int32_t>(0x528),
__E_MemberNotInGroup = static_cast<int32_t>(0x529),
__E_LastAdmin = static_cast<int32_t>(0x52a),
__E_WrongPassword = static_cast<int32_t>(0x52b),
__E_IllFormedPassword = static_cast<int32_t>(0x52c),
__E_PasswordRestriction = static_cast<int32_t>(0x52d),
__E_LogonFailure = static_cast<int32_t>(0x52e),
__E_AccountRestriction = static_cast<int32_t>(0x52f),
__E_InvalidLogonHours = static_cast<int32_t>(0x530),
__E_InvalidWorkstation = static_cast<int32_t>(0x531),
__E_PasswordExpired = static_cast<int32_t>(0x532),
__E_AccountDisabled = static_cast<int32_t>(0x533),
__E_NoneMapped = static_cast<int32_t>(0x534),
__E_TooManyLuidsRequested = static_cast<int32_t>(0x535),
__E_LuidsExhausted = static_cast<int32_t>(0x536),
__E_InvalidSubAuthority = static_cast<int32_t>(0x537),
__E_InvalidAcl = static_cast<int32_t>(0x538),
__E_InvalidSid = static_cast<int32_t>(0x539),
__E_InvalidSecurityDescr = static_cast<int32_t>(0x53a),
__E_BadInheritanceAcl = static_cast<int32_t>(0x53c),
__E_ServerDisabled = static_cast<int32_t>(0x53d),
__E_ServerNotDisabled = static_cast<int32_t>(0x53e),
__E_InvalidIdAuthority = static_cast<int32_t>(0x53f),
__E_AllottedSpaceExceeded = static_cast<int32_t>(0x540),
__E_InvalidGroupAttributes = static_cast<int32_t>(0x541),
__E_BadImpersonationLevel = static_cast<int32_t>(0x542),
__E_CantOpenAnonymous = static_cast<int32_t>(0x543),
__E_BadValidationClass = static_cast<int32_t>(0x544),
__E_BadTokenType = static_cast<int32_t>(0x545),
__E_NoSecurityOnObject = static_cast<int32_t>(0x546),
__E_CantAccessDomainInfo = static_cast<int32_t>(0x547),
__E_InvalidServerState = static_cast<int32_t>(0x548),
__E_InvalidDomainState = static_cast<int32_t>(0x549),
__E_InvalidDomainRole = static_cast<int32_t>(0x54a),
__E_NoSuchDomain = static_cast<int32_t>(0x54b),
__E_DomainExists = static_cast<int32_t>(0x54c),
__E_DomainLimitExceeded = static_cast<int32_t>(0x54d),
__E_InternalDbCorruption = static_cast<int32_t>(0x54e),
__E_InternalError = static_cast<int32_t>(0x54f),
__E_GenericNotMapped = static_cast<int32_t>(0x550),
__E_BadDescriptorFormat = static_cast<int32_t>(0x551),
__E_NotLogonProcess = static_cast<int32_t>(0x552),
__E_LogonSessionExists = static_cast<int32_t>(0x553),
__E_NoSuchPackage = static_cast<int32_t>(0x554),
__E_BadLogonSessionState = static_cast<int32_t>(0x555),
__E_LogonSessionCollision = static_cast<int32_t>(0x556),
__E_InvalidLogonType = static_cast<int32_t>(0x557),
__E_CannotImpersonate = static_cast<int32_t>(0x558),
__E_RxactInvalidState = static_cast<int32_t>(0x559),
__E_RxactCommitFailure = static_cast<int32_t>(0x55a),
__E_SpecialAccount = static_cast<int32_t>(0x55b),
__E_SpecialGroup = static_cast<int32_t>(0x55c),
__E_SpecialUser = static_cast<int32_t>(0x55d),
__E_MembersPrimaryGroup = static_cast<int32_t>(0x55e),
__E_TokenAlreadyInUse = static_cast<int32_t>(0x55f),
__E_NoSuchAlias = static_cast<int32_t>(0x560),
__E_MemberNotInAlias = static_cast<int32_t>(0x561),
__E_MemberInAlias = static_cast<int32_t>(0x562),
__E_AliasExists = static_cast<int32_t>(0x563),
__E_LogonNotGranted = static_cast<int32_t>(0x564),
__E_TooManySecrets = static_cast<int32_t>(0x565),
__E_SecretTooLong = static_cast<int32_t>(0x566),
__E_InternalDbError = static_cast<int32_t>(0x567),
__E_TooManyContextIds = static_cast<int32_t>(0x568),
__E_LogonTypeNotGranted = static_cast<int32_t>(0x569),
__E_NtCrossEncryptionRequired = static_cast<int32_t>(0x56a),
__E_NoSuchMember = static_cast<int32_t>(0x56b),
__E_InvalidMember = static_cast<int32_t>(0x56c),
__E_TooManySids = static_cast<int32_t>(0x56d),
__E_LmCrossEncryptionRequired = static_cast<int32_t>(0x56e),
__E_NoInheritance = static_cast<int32_t>(0x56f),
__E_FileCorrupt = static_cast<int32_t>(0x570),
__E_DiskCorrupt = static_cast<int32_t>(0x571),
__E_NoUserSessionKey = static_cast<int32_t>(0x572),
__E_LicenseQuotaExceeded = static_cast<int32_t>(0x573),
__E_WrongTargetName = static_cast<int32_t>(0x574),
__E_MutualAuthFailed = static_cast<int32_t>(0x575),
__E_TimeSkew = static_cast<int32_t>(0x576),
__E_CurrentDomainNotAllowed = static_cast<int32_t>(0x577),
__E_InvalidWindowHandle = static_cast<int32_t>(0x578),
__E_InvalidMenuHandle = static_cast<int32_t>(0x579),
__E_InvalidCursorHandle = static_cast<int32_t>(0x57a),
__E_InvalidAccelHandle = static_cast<int32_t>(0x57b),
__E_InvalidHookHandle = static_cast<int32_t>(0x57c),
__E_InvalidDwpHandle = static_cast<int32_t>(0x57d),
__E_TlwWithWschild = static_cast<int32_t>(0x57e),
__E_CannotFindWndClass = static_cast<int32_t>(0x57f),
__E_WindowOfOtherThread = static_cast<int32_t>(0x580),
__E_HotkeyAlreadyRegistered = static_cast<int32_t>(0x581),
__E_ClassAlreadyExists = static_cast<int32_t>(0x582),
__E_ClassDoesNotExist = static_cast<int32_t>(0x583),
__E_ClassHasWindows = static_cast<int32_t>(0x584),
__E_InvalidIndex = static_cast<int32_t>(0x585),
__E_InvalidIconHandle = static_cast<int32_t>(0x586),
__E_PrivateDialogIndex = static_cast<int32_t>(0x587),
__E_ListboxIdNotFound = static_cast<int32_t>(0x588),
__E_NoWildcardCharacters = static_cast<int32_t>(0x589),
__E_ClipboardNotOpen = static_cast<int32_t>(0x58a),
__E_HotkeyNotRegistered = static_cast<int32_t>(0x58b),
__E_WindowNotDialog = static_cast<int32_t>(0x58c),
__E_ControlIdNotFound = static_cast<int32_t>(0x58d),
__E_InvalidComboboxMessage = static_cast<int32_t>(0x58e),
__E_WindowNotCombobox = static_cast<int32_t>(0x58f),
__E_InvalidEditHeight = static_cast<int32_t>(0x590),
__E_DcNotFound = static_cast<int32_t>(0x591),
__E_InvalidHookFilter = static_cast<int32_t>(0x592),
__E_InvalidFilterProc = static_cast<int32_t>(0x593),
__E_HookNeedsHmod = static_cast<int32_t>(0x594),
__E_GlobalOnlyHook = static_cast<int32_t>(0x595),
__E_JournalHookSet = static_cast<int32_t>(0x596),
__E_HookNotInstalled = static_cast<int32_t>(0x597),
__E_InvalidLbMessage = static_cast<int32_t>(0x598),
__E_SetcountOnBadLb = static_cast<int32_t>(0x599),
__E_LbWithoutTabstops = static_cast<int32_t>(0x59a),
__E_DestroyObjectOfOtherThread = static_cast<int32_t>(0x59b),
__E_ChildWindowMenu = static_cast<int32_t>(0x59c),
__E_NoSystemMenu = static_cast<int32_t>(0x59d),
__E_InvalidMsgboxStyle = static_cast<int32_t>(0x59e),
__E_InvalidSpiValue = static_cast<int32_t>(0x59f),
__E_ScreenAlreadyLocked = static_cast<int32_t>(0x5a0),
__E_HwndsHaveDiffParent = static_cast<int32_t>(0x5a1),
__E_NotChildWindow = static_cast<int32_t>(0x5a2),
__E_InvalidGwCommand = static_cast<int32_t>(0x5a3),
__E_InvalidThreadId = static_cast<int32_t>(0x5a4),
__E_NonMdichildWindow = static_cast<int32_t>(0x5a5),
__E_PopupAlreadyActive = static_cast<int32_t>(0x5a6),
__E_NoScrollbars = static_cast<int32_t>(0x5a7),
__E_InvalidScrollbarRange = static_cast<int32_t>(0x5a8),
__E_InvalidShowwinCommand = static_cast<int32_t>(0x5a9),
__E_NoSystemResources = static_cast<int32_t>(0x5aa),
__E_NonpagedSystemResources = static_cast<int32_t>(0x5ab),
__E_PagedSystemResources = static_cast<int32_t>(0x5ac),
__E_WorkingSetQuota = static_cast<int32_t>(0x5ad),
__E_PagefileQuota = static_cast<int32_t>(0x5ae),
__E_CommitmentLimit = static_cast<int32_t>(0x5af),
__E_MenuItemNotFound = static_cast<int32_t>(0x5b0),
__E_InvalidKeyboardHandle = static_cast<int32_t>(0x5b1),
__E_HookTypeNotAllowed = static_cast<int32_t>(0x5b2),
__E_RequiresInteractiveWindowstation = static_cast<int32_t>(0x5b3),
__E_Timeout = static_cast<int32_t>(0x5b4),
__E_InvalidMonitorHandle = static_cast<int32_t>(0x5b5),
__E_IncorrectSize = static_cast<int32_t>(0x5b6),
__E_SymlinkClassDisabled = static_cast<int32_t>(0x5b7),
__E_SymlinkNotSupported = static_cast<int32_t>(0x5b8),
__E_XmlParseError = static_cast<int32_t>(0x5b9),
__E_XmldsigError = static_cast<int32_t>(0x5ba),
__E_RestartApplication = static_cast<int32_t>(0x5bb),
__E_WrongCompartment = static_cast<int32_t>(0x5bc),
__E_AuthipFailure = static_cast<int32_t>(0x5bd),
__E_NoNvramResources = static_cast<int32_t>(0x5be),
__E_NotGuiProcess = static_cast<int32_t>(0x5bf),
__E_EventlogFileCorrupt = static_cast<int32_t>(0x5dc),
__E_EventlogCantStart = static_cast<int32_t>(0x5dd),
__E_LogFileFull = static_cast<int32_t>(0x5de),
__E_EventlogFileChanged = static_cast<int32_t>(0x5df),
__E_InvalidTaskName = static_cast<int32_t>(0x60e),
__E_InvalidTaskIndex = static_cast<int32_t>(0x60f),
__E_ThreadAlreadyInTask = static_cast<int32_t>(0x610),
__E_InstallServiceFailure = static_cast<int32_t>(0x641),
__E_InstallUserexit = static_cast<int32_t>(0x642),
__E_InstallFailure = static_cast<int32_t>(0x643),
__E_InstallSuspend = static_cast<int32_t>(0x644),
__E_UnknownProduct = static_cast<int32_t>(0x645),
__E_UnknownFeature = static_cast<int32_t>(0x646),
__E_UnknownComponent = static_cast<int32_t>(0x647),
__E_UnknownProperty = static_cast<int32_t>(0x648),
__E_InvalidHandleState = static_cast<int32_t>(0x649),
__E_BadConfiguration = static_cast<int32_t>(0x64a),
__E_IndexAbsent = static_cast<int32_t>(0x64b),
__E_InstallSourceAbsent = static_cast<int32_t>(0x64c),
__E_InstallPackageVersion = static_cast<int32_t>(0x64d),
__E_ProductUninstalled = static_cast<int32_t>(0x64e),
__E_BadQuerySyntax = static_cast<int32_t>(0x64f),
__E_InvalidField = static_cast<int32_t>(0x650),
__E_DeviceRemoved = static_cast<int32_t>(0x651),
__E_InstallAlreadyRunning = static_cast<int32_t>(0x652),
__E_InstallPackageOpenFailed = static_cast<int32_t>(0x653),
__E_InstallPackageInvalid = static_cast<int32_t>(0x654),
__E_InstallUiFailure = static_cast<int32_t>(0x655),
__E_InstallLogFailure = static_cast<int32_t>(0x656),
__E_InstallLanguageUnsupported = static_cast<int32_t>(0x657),
__E_InstallTransformFailure = static_cast<int32_t>(0x658),
__E_InstallPackageRejected = static_cast<int32_t>(0x659),
__E_FunctionNotCalled = static_cast<int32_t>(0x65a),
__E_FunctionFailed = static_cast<int32_t>(0x65b),
__E_InvalidTable = static_cast<int32_t>(0x65c),
__E_DatatypeMismatch = static_cast<int32_t>(0x65d),
__E_UnsupportedType = static_cast<int32_t>(0x65e),
__E_CreateFailed = static_cast<int32_t>(0x65f),
__E_InstallTempUnwritable = static_cast<int32_t>(0x660),
__E_InstallPlatformUnsupported = static_cast<int32_t>(0x661),
__E_InstallNotused = static_cast<int32_t>(0x662),
__E_PatchPackageOpenFailed = static_cast<int32_t>(0x663),
__E_PatchPackageInvalid = static_cast<int32_t>(0x664),
__E_PatchPackageUnsupported = static_cast<int32_t>(0x665),
__E_ProductVersion = static_cast<int32_t>(0x666),
__E_InvalidCommandLine = static_cast<int32_t>(0x667),
__E_InstallRemoteDisallowed = static_cast<int32_t>(0x668),
__E_SuccessRebootInitiated = static_cast<int32_t>(0x669),
__E_PatchTargetNotFound = static_cast<int32_t>(0x66a),
__E_PatchPackageRejected = static_cast<int32_t>(0x66b),
__E_InstallTransformRejected = static_cast<int32_t>(0x66c),
__E_InstallRemoteProhibited = static_cast<int32_t>(0x66d),
__E_PatchRemovalUnsupported = static_cast<int32_t>(0x66e),
__E_UnknownPatch = static_cast<int32_t>(0x66f),
__E_PatchNoSequence = static_cast<int32_t>(0x670),
__E_PatchRemovalDisallowed = static_cast<int32_t>(0x671),
__E_InvalidPatchXml = static_cast<int32_t>(0x672),
__E_PatchManagedAdvertisedProduct = static_cast<int32_t>(0x673),
__E_InstallServiceSafeboot = static_cast<int32_t>(0x674),
__E_FailFastException = static_cast<int32_t>(0x675),
__E_InstallRejected = static_cast<int32_t>(0x676),
__E_InvalidUserBuffer = static_cast<int32_t>(0x6f8),
__E_UnrecognizedMedia = static_cast<int32_t>(0x6f9),
__E_NoTrustLsaSecret = static_cast<int32_t>(0x6fa),
__E_NoTrustSamAccount = static_cast<int32_t>(0x6fb),
__E_TrustedDomainFailure = static_cast<int32_t>(0x6fc),
__E_TrustedRelationshipFailure = static_cast<int32_t>(0x6fd),
__E_TrustFailure = static_cast<int32_t>(0x6fe),
__E_NetlogonNotStarted = static_cast<int32_t>(0x700),
__E_AccountExpired = static_cast<int32_t>(0x701),
__E_RedirectorHasOpenHandles = static_cast<int32_t>(0x702),
__E_PrinterDriverAlreadyInstalled = static_cast<int32_t>(0x703),
__E_UnknownPort = static_cast<int32_t>(0x704),
__E_UnknownPrinterDriver = static_cast<int32_t>(0x705),
__E_UnknownPrintprocessor = static_cast<int32_t>(0x706),
__E_InvalidSeparatorFile = static_cast<int32_t>(0x707),
__E_InvalidPriority = static_cast<int32_t>(0x708),
__E_InvalidPrinterName = static_cast<int32_t>(0x709),
__E_PrinterAlreadyExists = static_cast<int32_t>(0x70a),
__E_InvalidPrinterCommand = static_cast<int32_t>(0x70b),
__E_InvalidDatatype = static_cast<int32_t>(0x70c),
__E_InvalidEnvironment = static_cast<int32_t>(0x70d),
__E_NologonInterdomainTrustAccount = static_cast<int32_t>(0x70f),
__E_NologonWorkstationTrustAccount = static_cast<int32_t>(0x710),
__E_NologonServerTrustAccount = static_cast<int32_t>(0x711),
__E_DomainTrustInconsistent = static_cast<int32_t>(0x712),
__E_ServerHasOpenHandles = static_cast<int32_t>(0x713),
__E_ResourceDataNotFound = static_cast<int32_t>(0x714),
__E_ResourceTypeNotFound = static_cast<int32_t>(0x715),
__E_ResourceNameNotFound = static_cast<int32_t>(0x716),
__E_ResourceLangNotFound = static_cast<int32_t>(0x717),
__E_NotEnoughQuota = static_cast<int32_t>(0x718),
__E_InvalidTime = static_cast<int32_t>(0x76d),
__E_InvalidFormName = static_cast<int32_t>(0x76e),
__E_InvalidFormSize = static_cast<int32_t>(0x76f),
__E_AlreadyWaiting = static_cast<int32_t>(0x770),
__E_PrinterDeleted = static_cast<int32_t>(0x771),
__E_InvalidPrinterState = static_cast<int32_t>(0x772),
__E_PasswordMustChange = static_cast<int32_t>(0x773),
__E_DomainControllerNotFound = static_cast<int32_t>(0x774),
__E_AccountLockedOut = static_cast<int32_t>(0x775),
__E_NoSitename = static_cast<int32_t>(0x77f),
__E_CantAccessFile = static_cast<int32_t>(0x780),
__E_CantResolveFilename = static_cast<int32_t>(0x781),
__E_KmDriverBlocked = static_cast<int32_t>(0x78a),
__E_ContextExpired = static_cast<int32_t>(0x78b),
__E_PerUserTrustQuotaExceeded = static_cast<int32_t>(0x78c),
__E_AllUserTrustQuotaExceeded = static_cast<int32_t>(0x78d),
__E_UserDeleteTrustQuotaExceeded = static_cast<int32_t>(0x78e),
__E_AuthenticationFirewallFailed = static_cast<int32_t>(0x78f),
__E_RemotePrintConnectionsBlocked = static_cast<int32_t>(0x790),
__E_NtlmBlocked = static_cast<int32_t>(0x791),
__E_PasswordChangeRequired = static_cast<int32_t>(0x792),
__E_InvalidPixelFormat = static_cast<int32_t>(0x7d0),
__E_BadDriver = static_cast<int32_t>(0x7d1),
__E_InvalidWindowStyle = static_cast<int32_t>(0x7d2),
__E_MetafileNotSupported = static_cast<int32_t>(0x7d3),
__E_TransformNotSupported = static_cast<int32_t>(0x7d4),
__E_ClippingNotSupported = static_cast<int32_t>(0x7d5),
__E_InvalidCmm = static_cast<int32_t>(0x7da),
__E_InvalidProfile = static_cast<int32_t>(0x7db),
__E_TagNotFound = static_cast<int32_t>(0x7dc),
__E_TagNotPresent = static_cast<int32_t>(0x7dd),
__E_DuplicateTag = static_cast<int32_t>(0x7de),
__E_ProfileNotAssociatedWithDevice = static_cast<int32_t>(0x7df),
__E_ProfileNotFound = static_cast<int32_t>(0x7e0),
__E_InvalidColorspace = static_cast<int32_t>(0x7e1),
__E_IcmNotEnabled = static_cast<int32_t>(0x7e2),
__E_DeletingIcmXform = static_cast<int32_t>(0x7e3),
__E_InvalidTransform = static_cast<int32_t>(0x7e4),
__E_ColorspaceMismatch = static_cast<int32_t>(0x7e5),
__E_InvalidColorindex = static_cast<int32_t>(0x7e6),
__E_ProfileDoesNotMatchDevice = static_cast<int32_t>(0x7e7),
__E_ConnectedOtherPassword = static_cast<int32_t>(0x83c),
__E_ConnectedOtherPasswordDefault = static_cast<int32_t>(0x83d),
__E_BadUsername = static_cast<int32_t>(0x89a),
__E_NotConnected = static_cast<int32_t>(0x8ca),
__E_OpenFiles = static_cast<int32_t>(0x961),
__E_ActiveConnections = static_cast<int32_t>(0x962),
__E_DeviceInUse = static_cast<int32_t>(0x964),
__E_UnknownPrintMonitor = static_cast<int32_t>(0xbb8),
__E_PrinterDriverInUse = static_cast<int32_t>(0xbb9),
__E_SpoolFileNotFound = static_cast<int32_t>(0xbba),
__E_SplNoStartdoc = static_cast<int32_t>(0xbbb),
__E_SplNoAddjob = static_cast<int32_t>(0xbbc),
__E_PrintProcessorAlreadyInstalled = static_cast<int32_t>(0xbbd),
__E_PrintMonitorAlreadyInstalled = static_cast<int32_t>(0xbbe),
__E_InvalidPrintMonitor = static_cast<int32_t>(0xbbf),
__E_PrintMonitorInUse = static_cast<int32_t>(0xbc0),
__E_PrinterHasJobsQueued = static_cast<int32_t>(0xbc1),
__E_SuccessRebootRequired = static_cast<int32_t>(0xbc2),
__E_SuccessRestartRequired = static_cast<int32_t>(0xbc3),
__E_PrinterNotFound = static_cast<int32_t>(0xbc4),
__E_PrinterDriverWarned = static_cast<int32_t>(0xbc5),
__E_PrinterDriverBlocked = static_cast<int32_t>(0xbc6),
__E_PrinterDriverPackageInUse = static_cast<int32_t>(0xbc7),
__E_CoreDriverPackageNotFound = static_cast<int32_t>(0xbc8),
__E_FailRebootRequired = static_cast<int32_t>(0xbc9),
__E_FailRebootInitiated = static_cast<int32_t>(0xbca),
__E_PrinterDriverDownloadNeeded = static_cast<int32_t>(0xbcb),
__E_PrintJobRestartRequired = static_cast<int32_t>(0xbcc),
__E_InvalidPrinterDriverManifest = static_cast<int32_t>(0xbcd),
__E_PrinterNotShareable = static_cast<int32_t>(0xbce),
__E_RequestPaused = static_cast<int32_t>(0xbea),
__E_IoReissueAsCached = static_cast<int32_t>(0xf6e),
__E_WinsInternal = static_cast<int32_t>(0xfa0),
__E_CanNotDelLocalWins = static_cast<int32_t>(0xfa1),
__E_StaticInit = static_cast<int32_t>(0xfa2),
__E_IncBackup = static_cast<int32_t>(0xfa3),
__E_FullBackup = static_cast<int32_t>(0xfa4),
__E_RecNonExistent = static_cast<int32_t>(0xfa5),
__E_RplNotAllowed = static_cast<int32_t>(0xfa6),
__E_DhcpAddressConflict = static_cast<int32_t>(0x1004),
__E_WmiGuidNotFound = static_cast<int32_t>(0x1068),
__E_WmiInstanceNotFound = static_cast<int32_t>(0x1069),
__E_WmiItemidNotFound = static_cast<int32_t>(0x106a),
__E_WmiTryAgain = static_cast<int32_t>(0x106b),
__E_WmiDpNotFound = static_cast<int32_t>(0x106c),
__E_WmiUnresolvedInstanceRef = static_cast<int32_t>(0x106d),
__E_WmiAlreadyEnabled = static_cast<int32_t>(0x106e),
__E_WmiGuidDisconnected = static_cast<int32_t>(0x106f),
__E_WmiServerUnavailable = static_cast<int32_t>(0x1070),
__E_WmiDpFailed = static_cast<int32_t>(0x1071),
__E_WmiInvalidMof = static_cast<int32_t>(0x1072),
__E_WmiInvalidReginfo = static_cast<int32_t>(0x1073),
__E_WmiAlreadyDisabled = static_cast<int32_t>(0x1074),
__E_WmiReadOnly = static_cast<int32_t>(0x1075),
__E_WmiSetFailure = static_cast<int32_t>(0x1076),
__E_NotAppcontainer = static_cast<int32_t>(0x109a),
__E_AppcontainerRequired = static_cast<int32_t>(0x109b),
__E_NotSupportedInAppcontainer = static_cast<int32_t>(0x109c),
__E_InvalidPackageSidLength = static_cast<int32_t>(0x109d),
__E_InvalidMedia = static_cast<int32_t>(0x10cc),
__E_InvalidLibrary = static_cast<int32_t>(0x10cd),
__E_InvalidMediaPool = static_cast<int32_t>(0x10ce),
__E_DriveMediaMismatch = static_cast<int32_t>(0x10cf),
__E_MediaOffline = static_cast<int32_t>(0x10d0),
__E_LibraryOffline = static_cast<int32_t>(0x10d1),
__E_Empty = static_cast<int32_t>(0x10d2),
__E_NotEmpty = static_cast<int32_t>(0x10d3),
__E_MediaUnavailable = static_cast<int32_t>(0x10d4),
__E_ResourceDisabled = static_cast<int32_t>(0x10d5),
__E_InvalidCleaner = static_cast<int32_t>(0x10d6),
__E_UnableToClean = static_cast<int32_t>(0x10d7),
__E_ObjectNotFound = static_cast<int32_t>(0x10d8),
__E_DatabaseFailure = static_cast<int32_t>(0x10d9),
__E_DatabaseFull = static_cast<int32_t>(0x10da),
__E_MediaIncompatible = static_cast<int32_t>(0x10db),
__E_ResourceNotPresent = static_cast<int32_t>(0x10dc),
__E_InvalidOperation = static_cast<int32_t>(0x10dd),
__E_MediaNotAvailable = static_cast<int32_t>(0x10de),
__E_DeviceNotAvailable = static_cast<int32_t>(0x10df),
__E_RequestRefused = static_cast<int32_t>(0x10e0),
__E_InvalidDriveObject = static_cast<int32_t>(0x10e1),
__E_LibraryFull = static_cast<int32_t>(0x10e2),
__E_MediumNotAccessible = static_cast<int32_t>(0x10e3),
__E_UnableToLoadMedium = static_cast<int32_t>(0x10e4),
__E_UnableToInventoryDrive = static_cast<int32_t>(0x10e5),
__E_UnableToInventorySlot = static_cast<int32_t>(0x10e6),
__E_UnableToInventoryTransport = static_cast<int32_t>(0x10e7),
__E_TransportFull = static_cast<int32_t>(0x10e8),
__E_ControllingIeport = static_cast<int32_t>(0x10e9),
__E_UnableToEjectMountedMedia = static_cast<int32_t>(0x10ea),
__E_CleanerSlotSet = static_cast<int32_t>(0x10eb),
__E_CleanerSlotNotSet = static_cast<int32_t>(0x10ec),
__E_CleanerCartridgeSpent = static_cast<int32_t>(0x10ed),
__E_UnexpectedOmid = static_cast<int32_t>(0x10ee),
__E_CantDeleteLastItem = static_cast<int32_t>(0x10ef),
__E_MessageExceedsMaxSize = static_cast<int32_t>(0x10f0),
__E_VolumeContainsSysFiles = static_cast<int32_t>(0x10f1),
__E_IndigenousType = static_cast<int32_t>(0x10f2),
__E_NoSupportingDrives = static_cast<int32_t>(0x10f3),
__E_CleanerCartridgeInstalled = static_cast<int32_t>(0x10f4),
__E_IeportFull = static_cast<int32_t>(0x10f5),
__E_FileOffline = static_cast<int32_t>(0x10fe),
__E_RemoteStorageNotActive = static_cast<int32_t>(0x10ff),
__E_RemoteStorageMediaError = static_cast<int32_t>(0x1100),
__E_NotAReparsePoint = static_cast<int32_t>(0x1126),
__E_ReparseAttributeConflict = static_cast<int32_t>(0x1127),
__E_InvalidReparseData = static_cast<int32_t>(0x1128),
__E_ReparseTagInvalid = static_cast<int32_t>(0x1129),
__E_ReparseTagMismatch = static_cast<int32_t>(0x112a),
__E_AppDataNotFound = static_cast<int32_t>(0x1130),
__E_AppDataExpired = static_cast<int32_t>(0x1131),
__E_AppDataCorrupt = static_cast<int32_t>(0x1132),
__E_AppDataLimitExceeded = static_cast<int32_t>(0x1133),
__E_AppDataRebootRequired = static_cast<int32_t>(0x1134),
__E_SecurebootRollbackDetected = static_cast<int32_t>(0x1144),
__E_SecurebootPolicyViolation = static_cast<int32_t>(0x1145),
__E_SecurebootInvalidPolicy = static_cast<int32_t>(0x1146),
__E_SecurebootPolicyPublisherNotFound = static_cast<int32_t>(0x1147),
__E_SecurebootPolicyNotSigned = static_cast<int32_t>(0x1148),
__E_SecurebootNotEnabled = static_cast<int32_t>(0x1149),
__E_SecurebootFileReplaced = static_cast<int32_t>(0x114a),
__E_OffloadReadFltNotSupported = static_cast<int32_t>(0x1158),
__E_OffloadWriteFltNotSupported = static_cast<int32_t>(0x1159),
__E_OffloadReadFileNotSupported = static_cast<int32_t>(0x115a),
__E_OffloadWriteFileNotSupported = static_cast<int32_t>(0x115b),
__E_VolumeNotSisEnabled = static_cast<int32_t>(0x1194),
__E_DependentResourceExists = static_cast<int32_t>(0x1389),
__E_DependencyNotFound = static_cast<int32_t>(0x138a),
__E_DependencyAlreadyExists = static_cast<int32_t>(0x138b),
__E_ResourceNotOnline = static_cast<int32_t>(0x138c),
__E_HostNodeNotAvailable = static_cast<int32_t>(0x138d),
__E_ResourceNotAvailable = static_cast<int32_t>(0x138e),
__E_ResourceNotFound = static_cast<int32_t>(0x138f),
__E_ShutdownCluster = static_cast<int32_t>(0x1390),
__E_CantEvictActiveNode = static_cast<int32_t>(0x1391),
__E_ObjectAlreadyExists = static_cast<int32_t>(0x1392),
__E_ObjectInList = static_cast<int32_t>(0x1393),
__E_GroupNotAvailable = static_cast<int32_t>(0x1394),
__E_GroupNotFound = static_cast<int32_t>(0x1395),
__E_GroupNotOnline = static_cast<int32_t>(0x1396),
__E_HostNodeNotResourceOwner = static_cast<int32_t>(0x1397),
__E_HostNodeNotGroupOwner = static_cast<int32_t>(0x1398),
__E_ResmonCreateFailed = static_cast<int32_t>(0x1399),
__E_ResmonOnlineFailed = static_cast<int32_t>(0x139a),
__E_ResourceOnline = static_cast<int32_t>(0x139b),
__E_QuorumResource = static_cast<int32_t>(0x139c),
__E_NotQuorumCapable = static_cast<int32_t>(0x139d),
__E_ClusterShuttingDown = static_cast<int32_t>(0x139e),
__E_InvalidState = static_cast<int32_t>(0x139f),
__E_ResourcePropertiesStored = static_cast<int32_t>(0x13a0),
__E_NotQuorumClass = static_cast<int32_t>(0x13a1),
__E_CoreResource = static_cast<int32_t>(0x13a2),
__E_QuorumResourceOnlineFailed = static_cast<int32_t>(0x13a3),
__E_QuorumlogOpenFailed = static_cast<int32_t>(0x13a4),
__E_ClusterlogCorrupt = static_cast<int32_t>(0x13a5),
__E_ClusterlogRecordExceedsMaxsize = static_cast<int32_t>(0x13a6),
__E_ClusterlogExceedsMaxsize = static_cast<int32_t>(0x13a7),
__E_ClusterlogChkpointNotFound = static_cast<int32_t>(0x13a8),
__E_ClusterlogNotEnoughSpace = static_cast<int32_t>(0x13a9),
__E_QuorumOwnerAlive = static_cast<int32_t>(0x13aa),
__E_NetworkNotAvailable = static_cast<int32_t>(0x13ab),
__E_NodeNotAvailable = static_cast<int32_t>(0x13ac),
__E_AllNodesNotAvailable = static_cast<int32_t>(0x13ad),
__E_ResourceFailed = static_cast<int32_t>(0x13ae),
__E_ClusterInvalidNode = static_cast<int32_t>(0x13af),
__E_ClusterNodeExists = static_cast<int32_t>(0x13b0),
__E_ClusterJoinInProgress = static_cast<int32_t>(0x13b1),
__E_ClusterNodeNotFound = static_cast<int32_t>(0x13b2),
__E_ClusterLocalNodeNotFound = static_cast<int32_t>(0x13b3),
__E_ClusterNetworkExists = static_cast<int32_t>(0x13b4),
__E_ClusterNetworkNotFound = static_cast<int32_t>(0x13b5),
__E_ClusterNetinterfaceExists = static_cast<int32_t>(0x13b6),
__E_ClusterNetinterfaceNotFound = static_cast<int32_t>(0x13b7),
__E_ClusterInvalidRequest = static_cast<int32_t>(0x13b8),
__E_ClusterInvalidNetworkProvider = static_cast<int32_t>(0x13b9),
__E_ClusterNodeDown = static_cast<int32_t>(0x13ba),
__E_ClusterNodeUnreachable = static_cast<int32_t>(0x13bb),
__E_ClusterNodeNotMember = static_cast<int32_t>(0x13bc),
__E_ClusterJoinNotInProgress = static_cast<int32_t>(0x13bd),
__E_ClusterInvalidNetwork = static_cast<int32_t>(0x13be),
__E_ClusterNodeUp = static_cast<int32_t>(0x13c0),
__E_ClusterIpaddrInUse = static_cast<int32_t>(0x13c1),
__E_ClusterNodeNotPaused = static_cast<int32_t>(0x13c2),
__E_ClusterNoSecurityContext = static_cast<int32_t>(0x13c3),
__E_ClusterNetworkNotInternal = static_cast<int32_t>(0x13c4),
__E_ClusterNodeAlreadyUp = static_cast<int32_t>(0x13c5),
__E_ClusterNodeAlreadyDown = static_cast<int32_t>(0x13c6),
__E_ClusterNetworkAlreadyOnline = static_cast<int32_t>(0x13c7),
__E_ClusterNetworkAlreadyOffline = static_cast<int32_t>(0x13c8),
__E_ClusterNodeAlreadyMember = static_cast<int32_t>(0x13c9),
__E_ClusterLastInternalNetwork = static_cast<int32_t>(0x13ca),
__E_ClusterNetworkHasDependents = static_cast<int32_t>(0x13cb),
__E_InvalidOperationOnQuorum = static_cast<int32_t>(0x13cc),
__E_DependencyNotAllowed = static_cast<int32_t>(0x13cd),
__E_ClusterNodePaused = static_cast<int32_t>(0x13ce),
__E_NodeCantHostResource = static_cast<int32_t>(0x13cf),
__E_ClusterNodeNotReady = static_cast<int32_t>(0x13d0),
__E_ClusterNodeShuttingDown = static_cast<int32_t>(0x13d1),
__E_ClusterJoinAborted = static_cast<int32_t>(0x13d2),
__E_ClusterIncompatibleVersions = static_cast<int32_t>(0x13d3),
__E_ClusterMaxnumOfResourcesExceeded = static_cast<int32_t>(0x13d4),
__E_ClusterSystemConfigChanged = static_cast<int32_t>(0x13d5),
__E_ClusterResourceTypeNotFound = static_cast<int32_t>(0x13d6),
__E_ClusterRestypeNotSupported = static_cast<int32_t>(0x13d7),
__E_ClusterResnameNotFound = static_cast<int32_t>(0x13d8),
__E_ClusterNoRpcPackagesRegistered = static_cast<int32_t>(0x13d9),
__E_ClusterOwnerNotInPreflist = static_cast<int32_t>(0x13da),
__E_ClusterDatabaseSeqmismatch = static_cast<int32_t>(0x13db),
__E_ResmonInvalidState = static_cast<int32_t>(0x13dc),
__E_ClusterGumNotLocker = static_cast<int32_t>(0x13dd),
__E_QuorumDiskNotFound = static_cast<int32_t>(0x13de),
__E_DatabaseBackupCorrupt = static_cast<int32_t>(0x13df),
__E_ClusterNodeAlreadyHasDfsRoot = static_cast<int32_t>(0x13e0),
__E_ResourcePropertyUnchangeable = static_cast<int32_t>(0x13e1),
__E_ClusterMembershipInvalidState = static_cast<int32_t>(0x1702),
__E_ClusterQuorumlogNotFound = static_cast<int32_t>(0x1703),
__E_ClusterMembershipHalt = static_cast<int32_t>(0x1704),
__E_ClusterInstanceIdMismatch = static_cast<int32_t>(0x1705),
__E_ClusterNetworkNotFoundForIp = static_cast<int32_t>(0x1706),
__E_ClusterPropertyDataTypeMismatch = static_cast<int32_t>(0x1707),
__E_ClusterEvictWithoutCleanup = static_cast<int32_t>(0x1708),
__E_ClusterParameterMismatch = static_cast<int32_t>(0x1709),
__E_NodeCannotBeClustered = static_cast<int32_t>(0x170a),
__E_ClusterWrongOsVersion = static_cast<int32_t>(0x170b),
__E_ClusterCantCreateDupClusterName = static_cast<int32_t>(0x170c),
__E_CluscfgAlreadyCommitted = static_cast<int32_t>(0x170d),
__E_CluscfgRollbackFailed = static_cast<int32_t>(0x170e),
__E_CluscfgSystemDiskDriveLetterConflict = static_cast<int32_t>(0x170f),
__E_ClusterOldVersion = static_cast<int32_t>(0x1710),
__E_ClusterMismatchedComputerAcctName = static_cast<int32_t>(0x1711),
__E_ClusterNoNetAdapters = static_cast<int32_t>(0x1712),
__E_ClusterPoisoned = static_cast<int32_t>(0x1713),
__E_ClusterGroupMoving = static_cast<int32_t>(0x1714),
__E_ClusterResourceTypeBusy = static_cast<int32_t>(0x1715),
__E_ResourceCallTimedOut = static_cast<int32_t>(0x1716),
__E_InvalidClusterIpv6Address = static_cast<int32_t>(0x1717),
__E_ClusterInternalInvalidFunction = static_cast<int32_t>(0x1718),
__E_ClusterParameterOutOfBounds = static_cast<int32_t>(0x1719),
__E_ClusterPartialSend = static_cast<int32_t>(0x171a),
__E_ClusterRegistryInvalidFunction = static_cast<int32_t>(0x171b),
__E_ClusterInvalidStringTermination = static_cast<int32_t>(0x171c),
__E_ClusterInvalidStringFormat = static_cast<int32_t>(0x171d),
__E_ClusterDatabaseTransactionInProgress = static_cast<int32_t>(0x171e),
__E_ClusterDatabaseTransactionNotInProgress = static_cast<int32_t>(0x171f),
__E_ClusterNullData = static_cast<int32_t>(0x1720),
__E_ClusterPartialRead = static_cast<int32_t>(0x1721),
__E_ClusterPartialWrite = static_cast<int32_t>(0x1722),
__E_ClusterCantDeserializeData = static_cast<int32_t>(0x1723),
__E_DependentResourcePropertyConflict = static_cast<int32_t>(0x1724),
__E_ClusterNoQuorum = static_cast<int32_t>(0x1725),
__E_ClusterInvalidIpv6Network = static_cast<int32_t>(0x1726),
__E_ClusterInvalidIpv6TunnelNetwork = static_cast<int32_t>(0x1727),
__E_QuorumNotAllowedInThisGroup = static_cast<int32_t>(0x1728),
__E_DependencyTreeTooComplex = static_cast<int32_t>(0x1729),
__E_ExceptionInResourceCall = static_cast<int32_t>(0x172a),
__E_ClusterRhsFailedInitialization = static_cast<int32_t>(0x172b),
__E_ClusterNotInstalled = static_cast<int32_t>(0x172c),
__E_ClusterResourcesMustBeOnlineOnTheSameNode = static_cast<int32_t>(0x172d),
__E_ClusterMaxNodesInCluster = static_cast<int32_t>(0x172e),
__E_ClusterTooManyNodes = static_cast<int32_t>(0x172f),
__E_ClusterObjectAlreadyUsed = static_cast<int32_t>(0x1730),
__E_NoncoreGroupsFound = static_cast<int32_t>(0x1731),
__E_FileShareResourceConflict = static_cast<int32_t>(0x1732),
__E_ClusterEvictInvalidRequest = static_cast<int32_t>(0x1733),
__E_ClusterSingletonResource = static_cast<int32_t>(0x1734),
__E_ClusterGroupSingletonResource = static_cast<int32_t>(0x1735),
__E_ClusterResourceProviderFailed = static_cast<int32_t>(0x1736),
__E_ClusterResourceConfigurationError = static_cast<int32_t>(0x1737),
__E_ClusterGroupBusy = static_cast<int32_t>(0x1738),
__E_ClusterNotSharedVolume = static_cast<int32_t>(0x1739),
__E_ClusterInvalidSecurityDescriptor = static_cast<int32_t>(0x173a),
__E_ClusterSharedVolumesInUse = static_cast<int32_t>(0x173b),
__E_ClusterUseSharedVolumesApi = static_cast<int32_t>(0x173c),
__E_ClusterBackupInProgress = static_cast<int32_t>(0x173d),
__E_NonCsvPath = static_cast<int32_t>(0x173e),
__E_CsvVolumeNotLocal = static_cast<int32_t>(0x173f),
__E_ClusterWatchdogTerminating = static_cast<int32_t>(0x1740),
__E_ClusterResourceVetoedMoveIncompatibleNodes = static_cast<int32_t>(0x1741),
__E_ClusterInvalidNodeWeight = static_cast<int32_t>(0x1742),
__E_ClusterResourceVetoedCall = static_cast<int32_t>(0x1743),
__E_ResmonSystemResourcesLacking = static_cast<int32_t>(0x1744),
__E_ClusterResourceVetoedMoveNotEnoughResourcesOnDestination = static_cast<int32_t>(0x1745),
__E_ClusterResourceVetoedMoveNotEnoughResourcesOnSource = static_cast<int32_t>(0x1746),
__E_ClusterGroupQueued = static_cast<int32_t>(0x1747),
__E_ClusterResourceLockedStatus = static_cast<int32_t>(0x1748),
__E_ClusterSharedVolumeFailoverNotAllowed = static_cast<int32_t>(0x1749),
__E_ClusterNodeDrainInProgress = static_cast<int32_t>(0x174a),
__E_ClusterDiskNotConnected = static_cast<int32_t>(0x174b),
__E_DiskNotCsvCapable = static_cast<int32_t>(0x174c),
__E_ResourceNotInAvailableStorage = static_cast<int32_t>(0x174d),
__E_ClusterSharedVolumeRedirected = static_cast<int32_t>(0x174e),
__E_ClusterSharedVolumeNotRedirected = static_cast<int32_t>(0x174f),
__E_ClusterCannotReturnProperties = static_cast<int32_t>(0x1750),
__E_ClusterResourceContainsUnsupportedDiffAreaForSharedVolumes = static_cast<int32_t>(0x1751),
__E_ClusterResourceIsInMaintenanceMode = static_cast<int32_t>(0x1752),
__E_ClusterAffinityConflict = static_cast<int32_t>(0x1753),
__E_ClusterResourceIsReplicaVirtualMachine = static_cast<int32_t>(0x1754),
__E_EncryptionFailed = static_cast<int32_t>(0x1770),
__E_DecryptionFailed = static_cast<int32_t>(0x1771),
__E_FileEncrypted = static_cast<int32_t>(0x1772),
__E_NoRecoveryPolicy = static_cast<int32_t>(0x1773),
__E_NoEfs = static_cast<int32_t>(0x1774),
__E_WrongEfs = static_cast<int32_t>(0x1775),
__E_NoUserKeys = static_cast<int32_t>(0x1776),
__E_FileNotEncrypted = static_cast<int32_t>(0x1777),
__E_NotExportFormat = static_cast<int32_t>(0x1778),
__E_FileReadOnly = static_cast<int32_t>(0x1779),
__E_DirEfsDisallowed = static_cast<int32_t>(0x177a),
__E_EfsServerNotTrusted = static_cast<int32_t>(0x177b),
__E_BadRecoveryPolicy = static_cast<int32_t>(0x177c),
__E_EfsAlgBlobTooBig = static_cast<int32_t>(0x177d),
__E_VolumeNotSupportEfs = static_cast<int32_t>(0x177e),
__E_EfsDisabled = static_cast<int32_t>(0x177f),
__E_EfsVersionNotSupport = static_cast<int32_t>(0x1780),
__E_CsEncryptionInvalidServerResponse = static_cast<int32_t>(0x1781),
__E_CsEncryptionUnsupportedServer = static_cast<int32_t>(0x1782),
__E_CsEncryptionExistingEncryptedFile = static_cast<int32_t>(0x1783),
__E_CsEncryptionNewEncryptedFile = static_cast<int32_t>(0x1784),
__E_CsEncryptionFileNotCse = static_cast<int32_t>(0x1785),
__E_EncryptionPolicyDeniesOperation = static_cast<int32_t>(0x1786),
__E_NoBrowserServersFound = static_cast<int32_t>(0x17e6),
__E_LogSectorInvalid = static_cast<int32_t>(0x19c8),
__E_LogSectorParityInvalid = static_cast<int32_t>(0x19c9),
__E_LogSectorRemapped = static_cast<int32_t>(0x19ca),
__E_LogBlockIncomplete = static_cast<int32_t>(0x19cb),
__E_LogInvalidRange = static_cast<int32_t>(0x19cc),
__E_LogBlocksExhausted = static_cast<int32_t>(0x19cd),
__E_LogReadContextInvalid = static_cast<int32_t>(0x19ce),
__E_LogRestartInvalid = static_cast<int32_t>(0x19cf),
__E_LogBlockVersion = static_cast<int32_t>(0x19d0),
__E_LogBlockInvalid = static_cast<int32_t>(0x19d1),
__E_LogReadModeInvalid = static_cast<int32_t>(0x19d2),
__E_LogNoRestart = static_cast<int32_t>(0x19d3),
__E_LogMetadataCorrupt = static_cast<int32_t>(0x19d4),
__E_LogMetadataInvalid = static_cast<int32_t>(0x19d5),
__E_LogMetadataInconsistent = static_cast<int32_t>(0x19d6),
__E_LogReservationInvalid = static_cast<int32_t>(0x19d7),
__E_LogCantDelete = static_cast<int32_t>(0x19d8),
__E_LogContainerLimitExceeded = static_cast<int32_t>(0x19d9),
__E_LogStartOfLog = static_cast<int32_t>(0x19da),
__E_LogPolicyAlreadyInstalled = static_cast<int32_t>(0x19db),
__E_LogPolicyNotInstalled = static_cast<int32_t>(0x19dc),
__E_LogPolicyInvalid = static_cast<int32_t>(0x19dd),
__E_LogPolicyConflict = static_cast<int32_t>(0x19de),
__E_LogPinnedArchiveTail = static_cast<int32_t>(0x19df),
__E_LogRecordNonexistent = static_cast<int32_t>(0x19e0),
__E_LogRecordsReservedInvalid = static_cast<int32_t>(0x19e1),
__E_LogSpaceReservedInvalid = static_cast<int32_t>(0x19e2),
__E_LogTailInvalid = static_cast<int32_t>(0x19e3),
__E_LogFull = static_cast<int32_t>(0x19e4),
__E_CouldNotResizeLog = static_cast<int32_t>(0x19e5),
__E_LogMultiplexed = static_cast<int32_t>(0x19e6),
__E_LogDedicated = static_cast<int32_t>(0x19e7),
__E_LogArchiveNotInProgress = static_cast<int32_t>(0x19e8),
__E_LogArchiveInProgress = static_cast<int32_t>(0x19e9),
__E_LogEphemeral = static_cast<int32_t>(0x19ea),
__E_LogNotEnoughContainers = static_cast<int32_t>(0x19eb),
__E_LogClientAlreadyRegistered = static_cast<int32_t>(0x19ec),
__E_LogClientNotRegistered = static_cast<int32_t>(0x19ed),
__E_LogFullHandlerInProgress = static_cast<int32_t>(0x19ee),
__E_LogContainerReadFailed = static_cast<int32_t>(0x19ef),
__E_LogContainerWriteFailed = static_cast<int32_t>(0x19f0),
__E_LogContainerOpenFailed = static_cast<int32_t>(0x19f1),
__E_LogContainerStateInvalid = static_cast<int32_t>(0x19f2),
__E_LogStateInvalid = static_cast<int32_t>(0x19f3),
__E_LogPinned = static_cast<int32_t>(0x19f4),
__E_LogMetadataFlushFailed = static_cast<int32_t>(0x19f5),
__E_LogInconsistentSecurity = static_cast<int32_t>(0x19f6),
__E_LogAppendedFlushFailed = static_cast<int32_t>(0x19f7),
__E_LogPinnedReservation = static_cast<int32_t>(0x19f8),
__E_InvalidTransaction = static_cast<int32_t>(0x1a2c),
__E_TransactionNotActive = static_cast<int32_t>(0x1a2d),
__E_TransactionRequestNotValid = static_cast<int32_t>(0x1a2e),
__E_TransactionNotRequested = static_cast<int32_t>(0x1a2f),
__E_TransactionAlreadyAborted = static_cast<int32_t>(0x1a30),
__E_TransactionAlreadyCommitted = static_cast<int32_t>(0x1a31),
__E_TmInitializationFailed = static_cast<int32_t>(0x1a32),
__E_ResourcemanagerReadOnly = static_cast<int32_t>(0x1a33),
__E_TransactionNotJoined = static_cast<int32_t>(0x1a34),
__E_TransactionSuperiorExists = static_cast<int32_t>(0x1a35),
__E_CrmProtocolAlreadyExists = static_cast<int32_t>(0x1a36),
__E_TransactionPropagationFailed = static_cast<int32_t>(0x1a37),
__E_CrmProtocolNotFound = static_cast<int32_t>(0x1a38),
__E_TransactionInvalidMarshallBuffer = static_cast<int32_t>(0x1a39),
__E_CurrentTransactionNotValid = static_cast<int32_t>(0x1a3a),
__E_TransactionNotFound = static_cast<int32_t>(0x1a3b),
__E_ResourcemanagerNotFound = static_cast<int32_t>(0x1a3c),
__E_EnlistmentNotFound = static_cast<int32_t>(0x1a3d),
__E_TransactionmanagerNotFound = static_cast<int32_t>(0x1a3e),
__E_TransactionmanagerNotOnline = static_cast<int32_t>(0x1a3f),
__E_TransactionmanagerRecoveryNameCollision = static_cast<int32_t>(0x1a40),
__E_TransactionNotRoot = static_cast<int32_t>(0x1a41),
__E_TransactionObjectExpired = static_cast<int32_t>(0x1a42),
__E_TransactionResponseNotEnlisted = static_cast<int32_t>(0x1a43),
__E_TransactionRecordTooLong = static_cast<int32_t>(0x1a44),
__E_ImplicitTransactionNotSupported = static_cast<int32_t>(0x1a45),
__E_TransactionIntegrityViolated = static_cast<int32_t>(0x1a46),
__E_TransactionmanagerIdentityMismatch = static_cast<int32_t>(0x1a47),
__E_RmCannotBeFrozenForSnapshot = static_cast<int32_t>(0x1a48),
__E_TransactionMustWritethrough = static_cast<int32_t>(0x1a49),
__E_TransactionNoSuperior = static_cast<int32_t>(0x1a4a),
__E_HeuristicDamagePossible = static_cast<int32_t>(0x1a4b),
__E_TransactionalConflict = static_cast<int32_t>(0x1a90),
__E_RmNotActive = static_cast<int32_t>(0x1a91),
__E_RmMetadataCorrupt = static_cast<int32_t>(0x1a92),
__E_DirectoryNotRm = static_cast<int32_t>(0x1a93),
__E_TransactionsUnsupportedRemote = static_cast<int32_t>(0x1a95),
__E_LogResizeInvalidSize = static_cast<int32_t>(0x1a96),
__E_ObjectNoLongerExists = static_cast<int32_t>(0x1a97),
__E_StreamMiniversionNotFound = static_cast<int32_t>(0x1a98),
__E_StreamMiniversionNotValid = static_cast<int32_t>(0x1a99),
__E_MiniversionInaccessibleFromSpecifiedTransaction = static_cast<int32_t>(0x1a9a),
__E_CantOpenMiniversionWithModifyIntent = static_cast<int32_t>(0x1a9b),
__E_CantCreateMoreStreamMiniversions = static_cast<int32_t>(0x1a9c),
__E_RemoteFileVersionMismatch = static_cast<int32_t>(0x1a9e),
__E_HandleNoLongerValid = static_cast<int32_t>(0x1a9f),
__E_NoTxfMetadata = static_cast<int32_t>(0x1aa0),
__E_LogCorruptionDetected = static_cast<int32_t>(0x1aa1),
__E_CantRecoverWithHandleOpen = static_cast<int32_t>(0x1aa2),
__E_RmDisconnected = static_cast<int32_t>(0x1aa3),
__E_EnlistmentNotSuperior = static_cast<int32_t>(0x1aa4),
__E_RecoveryNotNeeded = static_cast<int32_t>(0x1aa5),
__E_RmAlreadyStarted = static_cast<int32_t>(0x1aa6),
__E_FileIdentityNotPersistent = static_cast<int32_t>(0x1aa7),
__E_CantBreakTransactionalDependency = static_cast<int32_t>(0x1aa8),
__E_CantCrossRmBoundary = static_cast<int32_t>(0x1aa9),
__E_TxfDirNotEmpty = static_cast<int32_t>(0x1aaa),
__E_IndoubtTransactionsExist = static_cast<int32_t>(0x1aab),
__E_TmVolatile = static_cast<int32_t>(0x1aac),
__E_RollbackTimerExpired = static_cast<int32_t>(0x1aad),
__E_TxfAttributeCorrupt = static_cast<int32_t>(0x1aae),
__E_EfsNotAllowedInTransaction = static_cast<int32_t>(0x1aaf),
__E_TransactionalOpenNotAllowed = static_cast<int32_t>(0x1ab0),
__E_LogGrowthFailed = static_cast<int32_t>(0x1ab1),
__E_TransactedMappingUnsupportedRemote = static_cast<int32_t>(0x1ab2),
__E_TxfMetadataAlreadyPresent = static_cast<int32_t>(0x1ab3),
__E_TransactionScopeCallbacksNotSet = static_cast<int32_t>(0x1ab4),
__E_TransactionRequiredPromotion = static_cast<int32_t>(0x1ab5),
__E_CannotExecuteFileInTransaction = static_cast<int32_t>(0x1ab6),
__E_TransactionsNotFrozen = static_cast<int32_t>(0x1ab7),
__E_TransactionFreezeInProgress = static_cast<int32_t>(0x1ab8),
__E_NotSnapshotVolume = static_cast<int32_t>(0x1ab9),
__E_NoSavepointWithOpenFiles = static_cast<int32_t>(0x1aba),
__E_DataLostRepair = static_cast<int32_t>(0x1abb),
__E_SparseNotAllowedInTransaction = static_cast<int32_t>(0x1abc),
__E_TmIdentityMismatch = static_cast<int32_t>(0x1abd),
__E_FloatedSection = static_cast<int32_t>(0x1abe),
__E_CannotAcceptTransactedWork = static_cast<int32_t>(0x1abf),
__E_CannotAbortTransactions = static_cast<int32_t>(0x1ac0),
__E_BadClusters = static_cast<int32_t>(0x1ac1),
__E_CompressionNotAllowedInTransaction = static_cast<int32_t>(0x1ac2),
__E_VolumeDirty = static_cast<int32_t>(0x1ac3),
__E_NoLinkTrackingInTransaction = static_cast<int32_t>(0x1ac4),
__E_OperationNotSupportedInTransaction = static_cast<int32_t>(0x1ac5),
__E_ExpiredHandle = static_cast<int32_t>(0x1ac6),
__E_TransactionNotEnlisted = static_cast<int32_t>(0x1ac7),
__E_CtxWinstationNameInvalid = static_cast<int32_t>(0x1b59),
__E_CtxInvalidPd = static_cast<int32_t>(0x1b5a),
__E_CtxPdNotFound = static_cast<int32_t>(0x1b5b),
__E_CtxWdNotFound = static_cast<int32_t>(0x1b5c),
__E_CtxCannotMakeEventlogEntry = static_cast<int32_t>(0x1b5d),
__E_CtxServiceNameCollision = static_cast<int32_t>(0x1b5e),
__E_CtxClosePending = static_cast<int32_t>(0x1b5f),
__E_CtxNoOutbuf = static_cast<int32_t>(0x1b60),
__E_CtxModemInfNotFound = static_cast<int32_t>(0x1b61),
__E_CtxInvalidModemname = static_cast<int32_t>(0x1b62),
__E_CtxModemResponseError = static_cast<int32_t>(0x1b63),
__E_CtxModemResponseTimeout = static_cast<int32_t>(0x1b64),
__E_CtxModemResponseNoCarrier = static_cast<int32_t>(0x1b65),
__E_CtxModemResponseNoDialtone = static_cast<int32_t>(0x1b66),
__E_CtxModemResponseBusy = static_cast<int32_t>(0x1b67),
__E_CtxModemResponseVoice = static_cast<int32_t>(0x1b68),
__E_CtxTdError = static_cast<int32_t>(0x1b69),
__E_CtxWinstationNotFound = static_cast<int32_t>(0x1b6e),
__E_CtxWinstationAlreadyExists = static_cast<int32_t>(0x1b6f),
__E_CtxWinstationBusy = static_cast<int32_t>(0x1b70),
__E_CtxBadVideoMode = static_cast<int32_t>(0x1b71),
__E_CtxGraphicsInvalid = static_cast<int32_t>(0x1b7b),
__E_CtxLogonDisabled = static_cast<int32_t>(0x1b7d),
__E_CtxNotConsole = static_cast<int32_t>(0x1b7e),
__E_CtxClientQueryTimeout = static_cast<int32_t>(0x1b80),
__E_CtxConsoleDisconnect = static_cast<int32_t>(0x1b81),
__E_CtxConsoleConnect = static_cast<int32_t>(0x1b82),
__E_CtxShadowDenied = static_cast<int32_t>(0x1b84),
__E_CtxWinstationAccessDenied = static_cast<int32_t>(0x1b85),
__E_CtxInvalidWd = static_cast<int32_t>(0x1b89),
__E_CtxShadowInvalid = static_cast<int32_t>(0x1b8a),
__E_CtxShadowDisabled = static_cast<int32_t>(0x1b8b),
__E_CtxClientLicenseInUse = static_cast<int32_t>(0x1b8c),
__E_CtxClientLicenseNotSet = static_cast<int32_t>(0x1b8d),
__E_CtxLicenseNotAvailable = static_cast<int32_t>(0x1b8e),
__E_CtxLicenseClientInvalid = static_cast<int32_t>(0x1b8f),
__E_CtxLicenseExpired = static_cast<int32_t>(0x1b90),
__E_CtxShadowNotRunning = static_cast<int32_t>(0x1b91),
__E_CtxShadowEndedByModeChange = static_cast<int32_t>(0x1b92),
__E_ActivationCountExceeded = static_cast<int32_t>(0x1b93),
__E_CtxWinstationsDisabled = static_cast<int32_t>(0x1b94),
__E_CtxEncryptionLevelRequired = static_cast<int32_t>(0x1b95),
__E_CtxSessionInUse = static_cast<int32_t>(0x1b96),
__E_CtxNoForceLogoff = static_cast<int32_t>(0x1b97),
__E_CtxAccountRestriction = static_cast<int32_t>(0x1b98),
__E_RdpProtocolError = static_cast<int32_t>(0x1b99),
__E_CtxCdmConnect = static_cast<int32_t>(0x1b9a),
__E_CtxCdmDisconnect = static_cast<int32_t>(0x1b9b),
__E_CtxSecurityLayerError = static_cast<int32_t>(0x1b9c),
__E_TsIncompatibleSessions = static_cast<int32_t>(0x1b9d),
__E_TsVideoSubsystemError = static_cast<int32_t>(0x1b9e),
__E_DsNotInstalled = static_cast<int32_t>(0x2008),
__E_DsMembershipEvaluatedLocally = static_cast<int32_t>(0x2009),
__E_DsNoAttributeOrValue = static_cast<int32_t>(0x200a),
__E_DsInvalidAttributeSyntax = static_cast<int32_t>(0x200b),
__E_DsAttributeTypeUndefined = static_cast<int32_t>(0x200c),
__E_DsAttributeOrValueExists = static_cast<int32_t>(0x200d),
__E_DsBusy = static_cast<int32_t>(0x200e),
__E_DsUnavailable = static_cast<int32_t>(0x200f),
__E_DsNoRidsAllocated = static_cast<int32_t>(0x2010),
__E_DsNoMoreRids = static_cast<int32_t>(0x2011),
__E_DsIncorrectRoleOwner = static_cast<int32_t>(0x2012),
__E_DsRidmgrInitError = static_cast<int32_t>(0x2013),
__E_DsObjClassViolation = static_cast<int32_t>(0x2014),
__E_DsCantOnNonLeaf = static_cast<int32_t>(0x2015),
__E_DsCantOnRdn = static_cast<int32_t>(0x2016),
__E_DsCantModObjClass = static_cast<int32_t>(0x2017),
__E_DsCrossDomMoveError = static_cast<int32_t>(0x2018),
__E_DsGcNotAvailable = static_cast<int32_t>(0x2019),
__E_SharedPolicy = static_cast<int32_t>(0x201a),
__E_PolicyObjectNotFound = static_cast<int32_t>(0x201b),
__E_PolicyOnlyInDs = static_cast<int32_t>(0x201c),
__E_PromotionActive = static_cast<int32_t>(0x201d),
__E_NoPromotionActive = static_cast<int32_t>(0x201e),
__E_DsOperationsError = static_cast<int32_t>(0x2020),
__E_DsProtocolError = static_cast<int32_t>(0x2021),
__E_DsTimelimitExceeded = static_cast<int32_t>(0x2022),
__E_DsSizelimitExceeded = static_cast<int32_t>(0x2023),
__E_DsAdminLimitExceeded = static_cast<int32_t>(0x2024),
__E_DsCompareFalse = static_cast<int32_t>(0x2025),
__E_DsCompareTrue = static_cast<int32_t>(0x2026),
__E_DsAuthMethodNotSupported = static_cast<int32_t>(0x2027),
__E_DsStrongAuthRequired = static_cast<int32_t>(0x2028),
__E_DsInappropriateAuth = static_cast<int32_t>(0x2029),
__E_DsAuthUnknown = static_cast<int32_t>(0x202a),
__E_DsReferral = static_cast<int32_t>(0x202b),
__E_DsUnavailableCritExtension = static_cast<int32_t>(0x202c),
__E_DsConfidentialityRequired = static_cast<int32_t>(0x202d),
__E_DsInappropriateMatching = static_cast<int32_t>(0x202e),
__E_DsConstraintViolation = static_cast<int32_t>(0x202f),
__E_DsNoSuchObject = static_cast<int32_t>(0x2030),
__E_DsAliasProblem = static_cast<int32_t>(0x2031),
__E_DsInvalidDnSyntax = static_cast<int32_t>(0x2032),
__E_DsIsLeaf = static_cast<int32_t>(0x2033),
__E_DsAliasDerefProblem = static_cast<int32_t>(0x2034),
__E_DsUnwillingToPerform = static_cast<int32_t>(0x2035),
__E_DsLoopDetect = static_cast<int32_t>(0x2036),
__E_DsNamingViolation = static_cast<int32_t>(0x2037),
__E_DsObjectResultsTooLarge = static_cast<int32_t>(0x2038),
__E_DsAffectsMultipleDsas = static_cast<int32_t>(0x2039),
__E_DsServerDown = static_cast<int32_t>(0x203a),
__E_DsLocalError = static_cast<int32_t>(0x203b),
__E_DsEncodingError = static_cast<int32_t>(0x203c),
__E_DsDecodingError = static_cast<int32_t>(0x203d),
__E_DsFilterUnknown = static_cast<int32_t>(0x203e),
__E_DsParamError = static_cast<int32_t>(0x203f),
__E_DsNotSupported = static_cast<int32_t>(0x2040),
__E_DsNoResultsReturned = static_cast<int32_t>(0x2041),
__E_DsControlNotFound = static_cast<int32_t>(0x2042),
__E_DsClientLoop = static_cast<int32_t>(0x2043),
__E_DsReferralLimitExceeded = static_cast<int32_t>(0x2044),
__E_DsSortControlMissing = static_cast<int32_t>(0x2045),
__E_DsOffsetRangeError = static_cast<int32_t>(0x2046),
__E_DsRidmgrDisabled = static_cast<int32_t>(0x2047),
__E_DsRootMustBeNc = static_cast<int32_t>(0x206d),
__E_DsAddReplicaInhibited = static_cast<int32_t>(0x206e),
__E_DsAttNotDefInSchema = static_cast<int32_t>(0x206f),
__E_DsMaxObjSizeExceeded = static_cast<int32_t>(0x2070),
__E_DsObjStringNameExists = static_cast<int32_t>(0x2071),
__E_DsNoRdnDefinedInSchema = static_cast<int32_t>(0x2072),
__E_DsRdnDoesntMatchSchema = static_cast<int32_t>(0x2073),
__E_DsNoRequestedAttsFound = static_cast<int32_t>(0x2074),
__E_DsUserBufferToSmall = static_cast<int32_t>(0x2075),
__E_DsAttIsNotOnObj = static_cast<int32_t>(0x2076),
__E_DsIllegalModOperation = static_cast<int32_t>(0x2077),
__E_DsObjTooLarge = static_cast<int32_t>(0x2078),
__E_DsBadInstanceType = static_cast<int32_t>(0x2079),
__E_DsMasterdsaRequired = static_cast<int32_t>(0x207a),
__E_DsObjectClassRequired = static_cast<int32_t>(0x207b),
__E_DsMissingRequiredAtt = static_cast<int32_t>(0x207c),
__E_DsAttNotDefForClass = static_cast<int32_t>(0x207d),
__E_DsAttAlreadyExists = static_cast<int32_t>(0x207e),
__E_DsCantAddAttValues = static_cast<int32_t>(0x2080),
__E_DsSingleValueConstraint = static_cast<int32_t>(0x2081),
__E_DsRangeConstraint = static_cast<int32_t>(0x2082),
__E_DsAttValAlreadyExists = static_cast<int32_t>(0x2083),
__E_DsCantRemMissingAtt = static_cast<int32_t>(0x2084),
__E_DsCantRemMissingAttVal = static_cast<int32_t>(0x2085),
__E_DsRootCantBeSubref = static_cast<int32_t>(0x2086),
__E_DsNoChaining = static_cast<int32_t>(0x2087),
__E_DsNoChainedEval = static_cast<int32_t>(0x2088),
__E_DsNoParentObject = static_cast<int32_t>(0x2089),
__E_DsParentIsAnAlias = static_cast<int32_t>(0x208a),
__E_DsCantMixMasterAndReps = static_cast<int32_t>(0x208b),
__E_DsChildrenExist = static_cast<int32_t>(0x208c),
__E_DsObjNotFound = static_cast<int32_t>(0x208d),
__E_DsAliasedObjMissing = static_cast<int32_t>(0x208e),
__E_DsBadNameSyntax = static_cast<int32_t>(0x208f),
__E_DsAliasPointsToAlias = static_cast<int32_t>(0x2090),
__E_DsCantDerefAlias = static_cast<int32_t>(0x2091),
__E_DsOutOfScope = static_cast<int32_t>(0x2092),
__E_DsObjectBeingRemoved = static_cast<int32_t>(0x2093),
__E_DsCantDeleteDsaObj = static_cast<int32_t>(0x2094),
__E_DsGenericError = static_cast<int32_t>(0x2095),
__E_DsDsaMustBeIntMaster = static_cast<int32_t>(0x2096),
__E_DsClassNotDsa = static_cast<int32_t>(0x2097),
__E_DsInsuffAccessRights = static_cast<int32_t>(0x2098),
__E_DsIllegalSuperior = static_cast<int32_t>(0x2099),
__E_DsAttributeOwnedBySam = static_cast<int32_t>(0x209a),
__E_DsNameTooManyParts = static_cast<int32_t>(0x209b),
__E_DsNameTooLong = static_cast<int32_t>(0x209c),
__E_DsNameValueTooLong = static_cast<int32_t>(0x209d),
__E_DsNameUnparseable = static_cast<int32_t>(0x209e),
__E_DsNameTypeUnknown = static_cast<int32_t>(0x209f),
__E_DsNotAnObject = static_cast<int32_t>(0x20a0),
__E_DsSecDescTooShort = static_cast<int32_t>(0x20a1),
__E_DsSecDescInvalid = static_cast<int32_t>(0x20a2),
__E_DsNoDeletedName = static_cast<int32_t>(0x20a3),
__E_DsSubrefMustHaveParent = static_cast<int32_t>(0x20a4),
__E_DsNcnameMustBeNc = static_cast<int32_t>(0x20a5),
__E_DsCantAddSystemOnly = static_cast<int32_t>(0x20a6),
__E_DsClassMustBeConcrete = static_cast<int32_t>(0x20a7),
__E_DsInvalidDmd = static_cast<int32_t>(0x20a8),
__E_DsObjGuidExists = static_cast<int32_t>(0x20a9),
__E_DsNotOnBacklink = static_cast<int32_t>(0x20aa),
__E_DsNoCrossrefForNc = static_cast<int32_t>(0x20ab),
__E_DsShuttingDown = static_cast<int32_t>(0x20ac),
__E_DsUnknownOperation = static_cast<int32_t>(0x20ad),
__E_DsInvalidRoleOwner = static_cast<int32_t>(0x20ae),
__E_DsCouldntContactFsmo = static_cast<int32_t>(0x20af),
__E_DsCrossNcDnRename = static_cast<int32_t>(0x20b0),
__E_DsCantModSystemOnly = static_cast<int32_t>(0x20b1),
__E_DsReplicatorOnly = static_cast<int32_t>(0x20b2),
__E_DsObjClassNotDefined = static_cast<int32_t>(0x20b3),
__E_DsObjClassNotSubclass = static_cast<int32_t>(0x20b4),
__E_DsNameReferenceInvalid = static_cast<int32_t>(0x20b5),
__E_DsCrossRefExists = static_cast<int32_t>(0x20b6),
__E_DsCantDelMasterCrossref = static_cast<int32_t>(0x20b7),
__E_DsSubtreeNotifyNotNcHead = static_cast<int32_t>(0x20b8),
__E_DsNotifyFilterTooComplex = static_cast<int32_t>(0x20b9),
__E_DsDupRdn = static_cast<int32_t>(0x20ba),
__E_DsDupOid = static_cast<int32_t>(0x20bb),
__E_DsDupMapiId = static_cast<int32_t>(0x20bc),
__E_DsDupSchemaIdGuid = static_cast<int32_t>(0x20bd),
__E_DsDupLdapDisplayName = static_cast<int32_t>(0x20be),
__E_DsSemanticAttTest = static_cast<int32_t>(0x20bf),
__E_DsSyntaxMismatch = static_cast<int32_t>(0x20c0),
__E_DsExistsInMustHave = static_cast<int32_t>(0x20c1),
__E_DsExistsInMayHave = static_cast<int32_t>(0x20c2),
__E_DsNonexistentMayHave = static_cast<int32_t>(0x20c3),
__E_DsNonexistentMustHave = static_cast<int32_t>(0x20c4),
__E_DsAuxClsTestFail = static_cast<int32_t>(0x20c5),
__E_DsNonexistentPossSup = static_cast<int32_t>(0x20c6),
__E_DsSubClsTestFail = static_cast<int32_t>(0x20c7),
__E_DsBadRdnAttIdSyntax = static_cast<int32_t>(0x20c8),
__E_DsExistsInAuxCls = static_cast<int32_t>(0x20c9),
__E_DsExistsInSubCls = static_cast<int32_t>(0x20ca),
__E_DsExistsInPossSup = static_cast<int32_t>(0x20cb),
__E_DsRecalcschemaFailed = static_cast<int32_t>(0x20cc),
__E_DsTreeDeleteNotFinished = static_cast<int32_t>(0x20cd),
__E_DsCantDelete = static_cast<int32_t>(0x20ce),
__E_DsAttSchemaReqId = static_cast<int32_t>(0x20cf),
__E_DsBadAttSchemaSyntax = static_cast<int32_t>(0x20d0),
__E_DsCantCacheAtt = static_cast<int32_t>(0x20d1),
__E_DsCantCacheClass = static_cast<int32_t>(0x20d2),
__E_DsCantRemoveAttCache = static_cast<int32_t>(0x20d3),
__E_DsCantRemoveClassCache = static_cast<int32_t>(0x20d4),
__E_DsCantRetrieveDn = static_cast<int32_t>(0x20d5),
__E_DsMissingSupref = static_cast<int32_t>(0x20d6),
__E_DsCantRetrieveInstance = static_cast<int32_t>(0x20d7),
__E_DsCodeInconsistency = static_cast<int32_t>(0x20d8),
__E_DsDatabaseError = static_cast<int32_t>(0x20d9),
__E_DsGovernsidMissing = static_cast<int32_t>(0x20da),
__E_DsMissingExpectedAtt = static_cast<int32_t>(0x20db),
__E_DsNcnameMissingCrRef = static_cast<int32_t>(0x20dc),
__E_DsSecurityCheckingError = static_cast<int32_t>(0x20dd),
__E_DsSchemaNotLoaded = static_cast<int32_t>(0x20de),
__E_DsSchemaAllocFailed = static_cast<int32_t>(0x20df),
__E_DsAttSchemaReqSyntax = static_cast<int32_t>(0x20e0),
__E_DsGcverifyError = static_cast<int32_t>(0x20e1),
__E_DsDraSchemaMismatch = static_cast<int32_t>(0x20e2),
__E_DsCantFindDsaObj = static_cast<int32_t>(0x20e3),
__E_DsCantFindExpectedNc = static_cast<int32_t>(0x20e4),
__E_DsCantFindNcInCache = static_cast<int32_t>(0x20e5),
__E_DsCantRetrieveChild = static_cast<int32_t>(0x20e6),
__E_DsSecurityIllegalModify = static_cast<int32_t>(0x20e7),
__E_DsCantReplaceHiddenRec = static_cast<int32_t>(0x20e8),
__E_DsBadHierarchyFile = static_cast<int32_t>(0x20e9),
__E_DsBuildHierarchyTableFailed = static_cast<int32_t>(0x20ea),
__E_DsConfigParamMissing = static_cast<int32_t>(0x20eb),
__E_DsCountingAbIndicesFailed = static_cast<int32_t>(0x20ec),
__E_DsHierarchyTableMallocFailed = static_cast<int32_t>(0x20ed),
__E_DsInternalFailure = static_cast<int32_t>(0x20ee),
__E_DsUnknownError = static_cast<int32_t>(0x20ef),
__E_DsRootRequiresClassTop = static_cast<int32_t>(0x20f0),
__E_DsRefusingFsmoRoles = static_cast<int32_t>(0x20f1),
__E_DsMissingFsmoSettings = static_cast<int32_t>(0x20f2),
__E_DsUnableToSurrenderRoles = static_cast<int32_t>(0x20f3),
__E_DsDraGeneric = static_cast<int32_t>(0x20f4),
__E_DsDraInvalidParameter = static_cast<int32_t>(0x20f5),
__E_DsDraBusy = static_cast<int32_t>(0x20f6),
__E_DsDraBadDn = static_cast<int32_t>(0x20f7),
__E_DsDraBadNc = static_cast<int32_t>(0x20f8),
__E_DsDraDnExists = static_cast<int32_t>(0x20f9),
__E_DsDraInternalError = static_cast<int32_t>(0x20fa),
__E_DsDraInconsistentDit = static_cast<int32_t>(0x20fb),
__E_DsDraConnectionFailed = static_cast<int32_t>(0x20fc),
__E_DsDraBadInstanceType = static_cast<int32_t>(0x20fd),
__E_DsDraOutOfMem = static_cast<int32_t>(0x20fe),
__E_DsDraMailProblem = static_cast<int32_t>(0x20ff),
__E_DsDraRefAlreadyExists = static_cast<int32_t>(0x2100),
__E_DsDraRefNotFound = static_cast<int32_t>(0x2101),
__E_DsDraObjIsRepSource = static_cast<int32_t>(0x2102),
__E_DsDraDbError = static_cast<int32_t>(0x2103),
__E_DsDraNoReplica = static_cast<int32_t>(0x2104),
__E_DsDraAccessDenied = static_cast<int32_t>(0x2105),
__E_DsDraNotSupported = static_cast<int32_t>(0x2106),
__E_DsDraRpcCancelled = static_cast<int32_t>(0x2107),
__E_DsDraSourceDisabled = static_cast<int32_t>(0x2108),
__E_DsDraSinkDisabled = static_cast<int32_t>(0x2109),
__E_DsDraNameCollision = static_cast<int32_t>(0x210a),
__E_DsDraSourceReinstalled = static_cast<int32_t>(0x210b),
__E_DsDraMissingParent = static_cast<int32_t>(0x210c),
__E_DsDraPreempted = static_cast<int32_t>(0x210d),
__E_DsDraAbandonSync = static_cast<int32_t>(0x210e),
__E_DsDraShutdown = static_cast<int32_t>(0x210f),
__E_DsDraIncompatiblePartialSet = static_cast<int32_t>(0x2110),
__E_DsDraSourceIsPartialReplica = static_cast<int32_t>(0x2111),
__E_DsDraExtnConnectionFailed = static_cast<int32_t>(0x2112),
__E_DsInstallSchemaMismatch = static_cast<int32_t>(0x2113),
__E_DsDupLinkId = static_cast<int32_t>(0x2114),
__E_DsNameErrorResolving = static_cast<int32_t>(0x2115),
__E_DsNameErrorNotFound = static_cast<int32_t>(0x2116),
__E_DsNameErrorNotUnique = static_cast<int32_t>(0x2117),
__E_DsNameErrorNoMapping = static_cast<int32_t>(0x2118),
__E_DsNameErrorDomainOnly = static_cast<int32_t>(0x2119),
__E_DsNameErrorNoSyntacticalMapping = static_cast<int32_t>(0x211a),
__E_DsConstructedAttMod = static_cast<int32_t>(0x211b),
__E_DsWrongOmObjClass = static_cast<int32_t>(0x211c),
__E_DsDraReplPending = static_cast<int32_t>(0x211d),
__E_DsDsRequired = static_cast<int32_t>(0x211e),
__E_DsInvalidLdapDisplayName = static_cast<int32_t>(0x211f),
__E_DsNonBaseSearch = static_cast<int32_t>(0x2120),
__E_DsCantRetrieveAtts = static_cast<int32_t>(0x2121),
__E_DsBacklinkWithoutLink = static_cast<int32_t>(0x2122),
__E_DsEpochMismatch = static_cast<int32_t>(0x2123),
__E_DsSrcNameMismatch = static_cast<int32_t>(0x2124),
__E_DsSrcAndDstNcIdentical = static_cast<int32_t>(0x2125),
__E_DsDstNcMismatch = static_cast<int32_t>(0x2126),
__E_DsNotAuthoritiveForDstNc = static_cast<int32_t>(0x2127),
__E_DsSrcGuidMismatch = static_cast<int32_t>(0x2128),
__E_DsCantMoveDeletedObject = static_cast<int32_t>(0x2129),
__E_DsPdcOperationInProgress = static_cast<int32_t>(0x212a),
__E_DsCrossDomainCleanupReqd = static_cast<int32_t>(0x212b),
__E_DsIllegalXdomMoveOperation = static_cast<int32_t>(0x212c),
__E_DsCantWithAcctGroupMembershps = static_cast<int32_t>(0x212d),
__E_DsNcMustHaveNcParent = static_cast<int32_t>(0x212e),
__E_DsCrImpossibleToValidate = static_cast<int32_t>(0x212f),
__E_DsDstDomainNotNative = static_cast<int32_t>(0x2130),
__E_DsMissingInfrastructureContainer = static_cast<int32_t>(0x2131),
__E_DsCantMoveAccountGroup = static_cast<int32_t>(0x2132),
__E_DsCantMoveResourceGroup = static_cast<int32_t>(0x2133),
__E_DsInvalidSearchFlag = static_cast<int32_t>(0x2134),
__E_DsNoTreeDeleteAboveNc = static_cast<int32_t>(0x2135),
__E_DsCouldntLockTreeForDelete = static_cast<int32_t>(0x2136),
__E_DsCouldntIdentifyObjectsForTreeDelete = static_cast<int32_t>(0x2137),
__E_DsSamInitFailure = static_cast<int32_t>(0x2138),
__E_DsSensitiveGroupViolation = static_cast<int32_t>(0x2139),
__E_DsCantModPrimarygroupid = static_cast<int32_t>(0x213a),
__E_DsIllegalBaseSchemaMod = static_cast<int32_t>(0x213b),
__E_DsNonsafeSchemaChange = static_cast<int32_t>(0x213c),
__E_DsSchemaUpdateDisallowed = static_cast<int32_t>(0x213d),
__E_DsCantCreateUnderSchema = static_cast<int32_t>(0x213e),
__E_DsInstallNoSrcSchVersion = static_cast<int32_t>(0x213f),
__E_DsInstallNoSchVersionInInifile = static_cast<int32_t>(0x2140),
__E_DsInvalidGroupType = static_cast<int32_t>(0x2141),
__E_DsNoNestGlobalgroupInMixeddomain = static_cast<int32_t>(0x2142),
__E_DsNoNestLocalgroupInMixeddomain = static_cast<int32_t>(0x2143),
__E_DsGlobalCantHaveLocalMember = static_cast<int32_t>(0x2144),
__E_DsGlobalCantHaveUniversalMember = static_cast<int32_t>(0x2145),
__E_DsUniversalCantHaveLocalMember = static_cast<int32_t>(0x2146),
__E_DsGlobalCantHaveCrossdomainMember = static_cast<int32_t>(0x2147),
__E_DsLocalCantHaveCrossdomainLocalMember = static_cast<int32_t>(0x2148),
__E_DsHavePrimaryMembers = static_cast<int32_t>(0x2149),
__E_DsStringSdConversionFailed = static_cast<int32_t>(0x214a),
__E_DsNamingMasterGc = static_cast<int32_t>(0x214b),
__E_DsDnsLookupFailure = static_cast<int32_t>(0x214c),
__E_DsCouldntUpdateSpns = static_cast<int32_t>(0x214d),
__E_DsCantRetrieveSd = static_cast<int32_t>(0x214e),
__E_DsKeyNotUnique = static_cast<int32_t>(0x214f),
__E_DsWrongLinkedAttSyntax = static_cast<int32_t>(0x2150),
__E_DsSamNeedBootkeyPassword = static_cast<int32_t>(0x2151),
__E_DsSamNeedBootkeyFloppy = static_cast<int32_t>(0x2152),
__E_DsCantStart = static_cast<int32_t>(0x2153),
__E_DsInitFailure = static_cast<int32_t>(0x2154),
__E_DsNoPktPrivacyOnConnection = static_cast<int32_t>(0x2155),
__E_DsSourceDomainInForest = static_cast<int32_t>(0x2156),
__E_DsDestinationDomainNotInForest = static_cast<int32_t>(0x2157),
__E_DsDestinationAuditingNotEnabled = static_cast<int32_t>(0x2158),
__E_DsCantFindDcForSrcDomain = static_cast<int32_t>(0x2159),
__E_DsSrcObjNotGroupOrUser = static_cast<int32_t>(0x215a),
__E_DsSrcSidExistsInForest = static_cast<int32_t>(0x215b),
__E_DsSrcAndDstObjectClassMismatch = static_cast<int32_t>(0x215c),
__E_SamInitFailure = static_cast<int32_t>(0x215d),
__E_DsDraSchemaInfoShip = static_cast<int32_t>(0x215e),
__E_DsDraSchemaConflict = static_cast<int32_t>(0x215f),
__E_DsDraEarlierSchemaConflict = static_cast<int32_t>(0x2160),
__E_DsDraObjNcMismatch = static_cast<int32_t>(0x2161),
__E_DsNcStillHasDsas = static_cast<int32_t>(0x2162),
__E_DsGcRequired = static_cast<int32_t>(0x2163),
__E_DsLocalMemberOfLocalOnly = static_cast<int32_t>(0x2164),
__E_DsNoFpoInUniversalGroups = static_cast<int32_t>(0x2165),
__E_DsCantAddToGc = static_cast<int32_t>(0x2166),
__E_DsNoCheckpointWithPdc = static_cast<int32_t>(0x2167),
__E_DsSourceAuditingNotEnabled = static_cast<int32_t>(0x2168),
__E_DsCantCreateInNondomainNc = static_cast<int32_t>(0x2169),
__E_DsInvalidNameForSpn = static_cast<int32_t>(0x216a),
__E_DsFilterUsesContructedAttrs = static_cast<int32_t>(0x216b),
__E_DsUnicodepwdNotInQuotes = static_cast<int32_t>(0x216c),
__E_DsMachineAccountQuotaExceeded = static_cast<int32_t>(0x216d),
__E_DsMustBeRunOnDstDc = static_cast<int32_t>(0x216e),
__E_DsSrcDcMustBeSp4OrGreater = static_cast<int32_t>(0x216f),
__E_DsCantTreeDeleteCriticalObj = static_cast<int32_t>(0x2170),
__E_DsInitFailureConsole = static_cast<int32_t>(0x2171),
__E_DsSamInitFailureConsole = static_cast<int32_t>(0x2172),
__E_DsForestVersionTooHigh = static_cast<int32_t>(0x2173),
__E_DsDomainVersionTooHigh = static_cast<int32_t>(0x2174),
__E_DsForestVersionTooLow = static_cast<int32_t>(0x2175),
__E_DsDomainVersionTooLow = static_cast<int32_t>(0x2176),
__E_DsIncompatibleVersion = static_cast<int32_t>(0x2177),
__E_DsLowDsaVersion = static_cast<int32_t>(0x2178),
__E_DsNoBehaviorVersionInMixeddomain = static_cast<int32_t>(0x2179),
__E_DsNotSupportedSortOrder = static_cast<int32_t>(0x217a),
__E_DsNameNotUnique = static_cast<int32_t>(0x217b),
__E_DsMachineAccountCreatedPrent4 = static_cast<int32_t>(0x217c),
__E_DsOutOfVersionStore = static_cast<int32_t>(0x217d),
__E_DsIncompatibleControlsUsed = static_cast<int32_t>(0x217e),
__E_DsNoRefDomain = static_cast<int32_t>(0x217f),
__E_DsReservedLinkId = static_cast<int32_t>(0x2180),
__E_DsLinkIdNotAvailable = static_cast<int32_t>(0x2181),
__E_DsAgCantHaveUniversalMember = static_cast<int32_t>(0x2182),
__E_DsModifydnDisallowedByInstanceType = static_cast<int32_t>(0x2183),
__E_DsNoObjectMoveInSchemaNc = static_cast<int32_t>(0x2184),
__E_DsModifydnDisallowedByFlag = static_cast<int32_t>(0x2185),
__E_DsModifydnWrongGrandparent = static_cast<int32_t>(0x2186),
__E_DsNameErrorTrustReferral = static_cast<int32_t>(0x2187),
__E_NotSupportedOnStandardServer = static_cast<int32_t>(0x2188),
__E_DsCantAccessRemotePartOfAd = static_cast<int32_t>(0x2189),
__E_DsCrImpossibleToValidateV2 = static_cast<int32_t>(0x218a),
__E_DsThreadLimitExceeded = static_cast<int32_t>(0x218b),
__E_DsNotClosest = static_cast<int32_t>(0x218c),
__E_DsCantDeriveSpnWithoutServerRef = static_cast<int32_t>(0x218d),
__E_DsSingleUserModeFailed = static_cast<int32_t>(0x218e),
__E_DsNtdscriptSyntaxError = static_cast<int32_t>(0x218f),
__E_DsNtdscriptProcessError = static_cast<int32_t>(0x2190),
__E_DsDifferentReplEpochs = static_cast<int32_t>(0x2191),
__E_DsDrsExtensionsChanged = static_cast<int32_t>(0x2192),
__E_DsReplicaSetChangeNotAllowedOnDisabledCr = static_cast<int32_t>(0x2193),
__E_DsNoMsdsIntid = static_cast<int32_t>(0x2194),
__E_DsDupMsdsIntid = static_cast<int32_t>(0x2195),
__E_DsExistsInRdnattid = static_cast<int32_t>(0x2196),
__E_DsAuthorizationFailed = static_cast<int32_t>(0x2197),
__E_DsInvalidScript = static_cast<int32_t>(0x2198),
__E_DsRemoteCrossrefOpFailed = static_cast<int32_t>(0x2199),
__E_DsCrossRefBusy = static_cast<int32_t>(0x219a),
__E_DsCantDeriveSpnForDeletedDomain = static_cast<int32_t>(0x219b),
__E_DsCantDemoteWithWriteableNc = static_cast<int32_t>(0x219c),
__E_DsDuplicateIdFound = static_cast<int32_t>(0x219d),
__E_DsInsufficientAttrToCreateObject = static_cast<int32_t>(0x219e),
__E_DsGroupConversionError = static_cast<int32_t>(0x219f),
__E_DsCantMoveAppBasicGroup = static_cast<int32_t>(0x21a0),
__E_DsCantMoveAppQueryGroup = static_cast<int32_t>(0x21a1),
__E_DsRoleNotVerified = static_cast<int32_t>(0x21a2),
__E_DsWkoContainerCannotBeSpecial = static_cast<int32_t>(0x21a3),
__E_DsDomainRenameInProgress = static_cast<int32_t>(0x21a4),
__E_DsExistingAdChildNc = static_cast<int32_t>(0x21a5),
__E_DsReplLifetimeExceeded = static_cast<int32_t>(0x21a6),
__E_DsDisallowedInSystemContainer = static_cast<int32_t>(0x21a7),
__E_DsLdapSendQueueFull = static_cast<int32_t>(0x21a8),
__E_DsDraOutScheduleWindow = static_cast<int32_t>(0x21a9),
__E_DsPolicyNotKnown = static_cast<int32_t>(0x21aa),
__E_NoSiteSettingsObject = static_cast<int32_t>(0x21ab),
__E_NoSecrets = static_cast<int32_t>(0x21ac),
__E_NoWritableDcFound = static_cast<int32_t>(0x21ad),
__E_DsNoServerObject = static_cast<int32_t>(0x21ae),
__E_DsNoNtdsaObject = static_cast<int32_t>(0x21af),
__E_DsNonAsqSearch = static_cast<int32_t>(0x21b0),
__E_DsAuditFailure = static_cast<int32_t>(0x21b1),
__E_DsInvalidSearchFlagSubtree = static_cast<int32_t>(0x21b2),
__E_DsInvalidSearchFlagTuple = static_cast<int32_t>(0x21b3),
__E_DsHierarchyTableTooDeep = static_cast<int32_t>(0x21b4),
__E_DsDraCorruptUtdVector = static_cast<int32_t>(0x21b5),
__E_DsDraSecretsDenied = static_cast<int32_t>(0x21b6),
__E_DsReservedMapiId = static_cast<int32_t>(0x21b7),
__E_DsMapiIdNotAvailable = static_cast<int32_t>(0x21b8),
__E_DsDraMissingKrbtgtSecret = static_cast<int32_t>(0x21b9),
__E_DsDomainNameExistsInForest = static_cast<int32_t>(0x21ba),
__E_DsFlatNameExistsInForest = static_cast<int32_t>(0x21bb),
__E_InvalidUserPrincipalName = static_cast<int32_t>(0x21bc),
__E_DsOidMappedGroupCantHaveMembers = static_cast<int32_t>(0x21bd),
__E_DsOidNotFound = static_cast<int32_t>(0x21be),
__E_DsDraRecycledTarget = static_cast<int32_t>(0x21bf),
__E_DsDisallowedNcRedirect = static_cast<int32_t>(0x21c0),
__E_DsHighAdldsFfl = static_cast<int32_t>(0x21c1),
__E_DsHighDsaVersion = static_cast<int32_t>(0x21c2),
__E_DsLowAdldsFfl = static_cast<int32_t>(0x21c3),
__E_DomainSidSameAsLocalWorkstation = static_cast<int32_t>(0x21c4),
__E_DsUndeleteSamValidationFailed = static_cast<int32_t>(0x21c5),
__E_IncorrectAccountType = static_cast<int32_t>(0x21c6),
__E_IpsecQmPolicyExists = static_cast<int32_t>(0x32c8),
__E_IpsecQmPolicyNotFound = static_cast<int32_t>(0x32c9),
__E_IpsecQmPolicyInUse = static_cast<int32_t>(0x32ca),
__E_IpsecMmPolicyExists = static_cast<int32_t>(0x32cb),
__E_IpsecMmPolicyNotFound = static_cast<int32_t>(0x32cc),
__E_IpsecMmPolicyInUse = static_cast<int32_t>(0x32cd),
__E_IpsecMmFilterExists = static_cast<int32_t>(0x32ce),
__E_IpsecMmFilterNotFound = static_cast<int32_t>(0x32cf),
__E_IpsecTransportFilterExists = static_cast<int32_t>(0x32d0),
__E_IpsecTransportFilterNotFound = static_cast<int32_t>(0x32d1),
__E_IpsecMmAuthExists = static_cast<int32_t>(0x32d2),
__E_IpsecMmAuthNotFound = static_cast<int32_t>(0x32d3),
__E_IpsecMmAuthInUse = static_cast<int32_t>(0x32d4),
__E_IpsecDefaultMmPolicyNotFound = static_cast<int32_t>(0x32d5),
__E_IpsecDefaultMmAuthNotFound = static_cast<int32_t>(0x32d6),
__E_IpsecDefaultQmPolicyNotFound = static_cast<int32_t>(0x32d7),
__E_IpsecTunnelFilterExists = static_cast<int32_t>(0x32d8),
__E_IpsecTunnelFilterNotFound = static_cast<int32_t>(0x32d9),
__E_IpsecMmFilterPendingDeletion = static_cast<int32_t>(0x32da),
__E_IpsecTransportFilterPendingDeletion = static_cast<int32_t>(0x32db),
__E_IpsecTunnelFilterPendingDeletion = static_cast<int32_t>(0x32dc),
__E_IpsecMmPolicyPendingDeletion = static_cast<int32_t>(0x32dd),
__E_IpsecMmAuthPendingDeletion = static_cast<int32_t>(0x32de),
__E_IpsecQmPolicyPendingDeletion = static_cast<int32_t>(0x32df),
__E_IpsecIkeNegStatusBegin = static_cast<int32_t>(0x35e8),
__E_IpsecIkeAuthFail = static_cast<int32_t>(0x35e9),
__E_IpsecIkeAttribFail = static_cast<int32_t>(0x35ea),
__E_IpsecIkeNegotiationPending = static_cast<int32_t>(0x35eb),
__E_IpsecIkeGeneralProcessingError = static_cast<int32_t>(0x35ec),
__E_IpsecIkeTimedOut = static_cast<int32_t>(0x35ed),
__E_IpsecIkeNoCert = static_cast<int32_t>(0x35ee),
__E_IpsecIkeSaDeleted = static_cast<int32_t>(0x35ef),
__E_IpsecIkeSaReaped = static_cast<int32_t>(0x35f0),
__E_IpsecIkeMmAcquireDrop = static_cast<int32_t>(0x35f1),
__E_IpsecIkeQmAcquireDrop = static_cast<int32_t>(0x35f2),
__E_IpsecIkeQueueDropMm = static_cast<int32_t>(0x35f3),
__E_IpsecIkeQueueDropNoMm = static_cast<int32_t>(0x35f4),
__E_IpsecIkeDropNoResponse = static_cast<int32_t>(0x35f5),
__E_IpsecIkeMmDelayDrop = static_cast<int32_t>(0x35f6),
__E_IpsecIkeQmDelayDrop = static_cast<int32_t>(0x35f7),
__E_IpsecIkeError = static_cast<int32_t>(0x35f8),
__E_IpsecIkeCrlFailed = static_cast<int32_t>(0x35f9),
__E_IpsecIkeInvalidKeyUsage = static_cast<int32_t>(0x35fa),
__E_IpsecIkeInvalidCertType = static_cast<int32_t>(0x35fb),
__E_IpsecIkeNoPrivateKey = static_cast<int32_t>(0x35fc),
__E_IpsecIkeSimultaneousRekey = static_cast<int32_t>(0x35fd),
__E_IpsecIkeDhFail = static_cast<int32_t>(0x35fe),
__E_IpsecIkeCriticalPayloadNotRecognized = static_cast<int32_t>(0x35ff),
__E_IpsecIkeInvalidHeader = static_cast<int32_t>(0x3600),
__E_IpsecIkeNoPolicy = static_cast<int32_t>(0x3601),
__E_IpsecIkeInvalidSignature = static_cast<int32_t>(0x3602),
__E_IpsecIkeKerberosError = static_cast<int32_t>(0x3603),
__E_IpsecIkeNoPublicKey = static_cast<int32_t>(0x3604),
__E_IpsecIkeProcessErr = static_cast<int32_t>(0x3605),
__E_IpsecIkeProcessErrSa = static_cast<int32_t>(0x3606),
__E_IpsecIkeProcessErrProp = static_cast<int32_t>(0x3607),
__E_IpsecIkeProcessErrTrans = static_cast<int32_t>(0x3608),
__E_IpsecIkeProcessErrKe = static_cast<int32_t>(0x3609),
__E_IpsecIkeProcessErrId = static_cast<int32_t>(0x360a),
__E_IpsecIkeProcessErrCert = static_cast<int32_t>(0x360b),
__E_IpsecIkeProcessErrCertReq = static_cast<int32_t>(0x360c),
__E_IpsecIkeProcessErrHash = static_cast<int32_t>(0x360d),
__E_IpsecIkeProcessErrSig = static_cast<int32_t>(0x360e),
__E_IpsecIkeProcessErrNonce = static_cast<int32_t>(0x360f),
__E_IpsecIkeProcessErrNotify = static_cast<int32_t>(0x3610),
__E_IpsecIkeProcessErrDelete = static_cast<int32_t>(0x3611),
__E_IpsecIkeProcessErrVendor = static_cast<int32_t>(0x3612),
__E_IpsecIkeInvalidPayload = static_cast<int32_t>(0x3613),
__E_IpsecIkeLoadSoftSa = static_cast<int32_t>(0x3614),
__E_IpsecIkeSoftSaTornDown = static_cast<int32_t>(0x3615),
__E_IpsecIkeInvalidCookie = static_cast<int32_t>(0x3616),
__E_IpsecIkeNoPeerCert = static_cast<int32_t>(0x3617),
__E_IpsecIkePeerCrlFailed = static_cast<int32_t>(0x3618),
__E_IpsecIkePolicyChange = static_cast<int32_t>(0x3619),
__E_IpsecIkeNoMmPolicy = static_cast<int32_t>(0x361a),
__E_IpsecIkeNotcbpriv = static_cast<int32_t>(0x361b),
__E_IpsecIkeSecloadfail = static_cast<int32_t>(0x361c),
__E_IpsecIkeFailsspinit = static_cast<int32_t>(0x361d),
__E_IpsecIkeFailqueryssp = static_cast<int32_t>(0x361e),
__E_IpsecIkeSrvacqfail = static_cast<int32_t>(0x361f),
__E_IpsecIkeSrvquerycred = static_cast<int32_t>(0x3620),
__E_IpsecIkeGetspifail = static_cast<int32_t>(0x3621),
__E_IpsecIkeInvalidFilter = static_cast<int32_t>(0x3622),
__E_IpsecIkeOutOfMemory = static_cast<int32_t>(0x3623),
__E_IpsecIkeAddUpdateKeyFailed = static_cast<int32_t>(0x3624),
__E_IpsecIkeInvalidPolicy = static_cast<int32_t>(0x3625),
__E_IpsecIkeUnknownDoi = static_cast<int32_t>(0x3626),
__E_IpsecIkeInvalidSituation = static_cast<int32_t>(0x3627),
__E_IpsecIkeDhFailure = static_cast<int32_t>(0x3628),
__E_IpsecIkeInvalidGroup = static_cast<int32_t>(0x3629),
__E_IpsecIkeEncrypt = static_cast<int32_t>(0x362a),
__E_IpsecIkeDecrypt = static_cast<int32_t>(0x362b),
__E_IpsecIkePolicyMatch = static_cast<int32_t>(0x362c),
__E_IpsecIkeUnsupportedId = static_cast<int32_t>(0x362d),
__E_IpsecIkeInvalidHash = static_cast<int32_t>(0x362e),
__E_IpsecIkeInvalidHashAlg = static_cast<int32_t>(0x362f),
__E_IpsecIkeInvalidHashSize = static_cast<int32_t>(0x3630),
__E_IpsecIkeInvalidEncryptAlg = static_cast<int32_t>(0x3631),
__E_IpsecIkeInvalidAuthAlg = static_cast<int32_t>(0x3632),
__E_IpsecIkeInvalidSig = static_cast<int32_t>(0x3633),
__E_IpsecIkeLoadFailed = static_cast<int32_t>(0x3634),
__E_IpsecIkeRpcDelete = static_cast<int32_t>(0x3635),
__E_IpsecIkeBenignReinit = static_cast<int32_t>(0x3636),
__E_IpsecIkeInvalidResponderLifetimeNotify = static_cast<int32_t>(0x3637),
__E_IpsecIkeInvalidMajorVersion = static_cast<int32_t>(0x3638),
__E_IpsecIkeInvalidCertKeylen = static_cast<int32_t>(0x3639),
__E_IpsecIkeMmLimit = static_cast<int32_t>(0x363a),
__E_IpsecIkeNegotiationDisabled = static_cast<int32_t>(0x363b),
__E_IpsecIkeQmLimit = static_cast<int32_t>(0x363c),
__E_IpsecIkeMmExpired = static_cast<int32_t>(0x363d),
__E_IpsecIkePeerMmAssumedInvalid = static_cast<int32_t>(0x363e),
__E_IpsecIkeCertChainPolicyMismatch = static_cast<int32_t>(0x363f),
__E_IpsecIkeUnexpectedMessageId = static_cast<int32_t>(0x3640),
__E_IpsecIkeInvalidAuthPayload = static_cast<int32_t>(0x3641),
__E_IpsecIkeDosCookieSent = static_cast<int32_t>(0x3642),
__E_IpsecIkeShuttingDown = static_cast<int32_t>(0x3643),
__E_IpsecIkeCgaAuthFailed = static_cast<int32_t>(0x3644),
__E_IpsecIkeProcessErrNatoa = static_cast<int32_t>(0x3645),
__E_IpsecIkeInvalidMmForQm = static_cast<int32_t>(0x3646),
__E_IpsecIkeQmExpired = static_cast<int32_t>(0x3647),
__E_IpsecIkeTooManyFilters = static_cast<int32_t>(0x3648),
__E_IpsecIkeNegStatusEnd = static_cast<int32_t>(0x3649),
__E_IpsecIkeKillDummyNapTunnel = static_cast<int32_t>(0x364a),
__E_IpsecIkeInnerIpAssignmentFailure = static_cast<int32_t>(0x364b),
__E_IpsecIkeRequireCpPayloadMissing = static_cast<int32_t>(0x364c),
__E_IpsecKeyModuleImpersonationNegotiationPending = static_cast<int32_t>(0x364d),
__E_IpsecIkeCoexistenceSuppress = static_cast<int32_t>(0x364e),
__E_IpsecIkeRatelimitDrop = static_cast<int32_t>(0x364f),
__E_IpsecIkePeerDoesntSupportMobike = static_cast<int32_t>(0x3650),
__E_IpsecIkeAuthorizationFailure = static_cast<int32_t>(0x3651),
__E_IpsecIkeStrongCredAuthorizationFailure = static_cast<int32_t>(0x3652),
__E_IpsecIkeAuthorizationFailureWithOptionalRetry = static_cast<int32_t>(0x3653),
__E_IpsecIkeStrongCredAuthorizationAndCertmapFailure = static_cast<int32_t>(0x3654),
__E_IpsecIkeNegStatusExtendedEnd = static_cast<int32_t>(0x3655),
__E_IpsecBadSpi = static_cast<int32_t>(0x3656),
__E_IpsecSaLifetimeExpired = static_cast<int32_t>(0x3657),
__E_IpsecWrongSa = static_cast<int32_t>(0x3658),
__E_IpsecReplayCheckFailed = static_cast<int32_t>(0x3659),
__E_IpsecInvalidPacket = static_cast<int32_t>(0x365a),
__E_IpsecIntegrityCheckFailed = static_cast<int32_t>(0x365b),
__E_IpsecClearTextDrop = static_cast<int32_t>(0x365c),
__E_IpsecAuthFirewallDrop = static_cast<int32_t>(0x365d),
__E_IpsecThrottleDrop = static_cast<int32_t>(0x365e),
__E_IpsecDospBlock = static_cast<int32_t>(0x3665),
__E_IpsecDospReceivedMulticast = static_cast<int32_t>(0x3666),
__E_IpsecDospInvalidPacket = static_cast<int32_t>(0x3667),
__E_IpsecDospStateLookupFailed = static_cast<int32_t>(0x3668),
__E_IpsecDospMaxEntries = static_cast<int32_t>(0x3669),
__E_IpsecDospKeymodNotAllowed = static_cast<int32_t>(0x366a),
__E_IpsecDospNotInstalled = static_cast<int32_t>(0x366b),
__E_IpsecDospMaxPerIpRatelimitQueues = static_cast<int32_t>(0x366c),
__E_SxsSectionNotFound = static_cast<int32_t>(0x36b0),
__E_SxsCantGenActctx = static_cast<int32_t>(0x36b1),
__E_SxsInvalidActctxdataFormat = static_cast<int32_t>(0x36b2),
__E_SxsAssemblyNotFound = static_cast<int32_t>(0x36b3),
__E_SxsManifestFormatError = static_cast<int32_t>(0x36b4),
__E_SxsManifestParseError = static_cast<int32_t>(0x36b5),
__E_SxsActivationContextDisabled = static_cast<int32_t>(0x36b6),
__E_SxsKeyNotFound = static_cast<int32_t>(0x36b7),
__E_SxsVersionConflict = static_cast<int32_t>(0x36b8),
__E_SxsWrongSectionType = static_cast<int32_t>(0x36b9),
__E_SxsThreadQueriesDisabled = static_cast<int32_t>(0x36ba),
__E_SxsProcessDefaultAlreadySet = static_cast<int32_t>(0x36bb),
__E_SxsUnknownEncodingGroup = static_cast<int32_t>(0x36bc),
__E_SxsUnknownEncoding = static_cast<int32_t>(0x36bd),
__E_SxsInvalidXmlNamespaceUri = static_cast<int32_t>(0x36be),
__E_SxsRootManifestDependencyNotInstalled = static_cast<int32_t>(0x36bf),
__E_SxsLeafManifestDependencyNotInstalled = static_cast<int32_t>(0x36c0),
__E_SxsInvalidAssemblyIdentityAttribute = static_cast<int32_t>(0x36c1),
__E_SxsManifestMissingRequiredDefaultNamespace = static_cast<int32_t>(0x36c2),
__E_SxsManifestInvalidRequiredDefaultNamespace = static_cast<int32_t>(0x36c3),
__E_SxsPrivateManifestCrossPathWithReparsePoint = static_cast<int32_t>(0x36c4),
__E_SxsDuplicateDllName = static_cast<int32_t>(0x36c5),
__E_SxsDuplicateWindowclassName = static_cast<int32_t>(0x36c6),
__E_SxsDuplicateClsid = static_cast<int32_t>(0x36c7),
__E_SxsDuplicateIid = static_cast<int32_t>(0x36c8),
__E_SxsDuplicateTlbid = static_cast<int32_t>(0x36c9),
__E_SxsDuplicateProgid = static_cast<int32_t>(0x36ca),
__E_SxsDuplicateAssemblyName = static_cast<int32_t>(0x36cb),
__E_SxsFileHashMismatch = static_cast<int32_t>(0x36cc),
__E_SxsPolicyParseError = static_cast<int32_t>(0x36cd),
__E_SxsXmlEMissingquote = static_cast<int32_t>(0x36ce),
__E_SxsXmlECommentsyntax = static_cast<int32_t>(0x36cf),
__E_SxsXmlEBadstartnamechar = static_cast<int32_t>(0x36d0),
__E_SxsXmlEBadnamechar = static_cast<int32_t>(0x36d1),
__E_SxsXmlEBadcharinstring = static_cast<int32_t>(0x36d2),
__E_SxsXmlEXmldeclsyntax = static_cast<int32_t>(0x36d3),
__E_SxsXmlEBadchardata = static_cast<int32_t>(0x36d4),
__E_SxsXmlEMissingwhitespace = static_cast<int32_t>(0x36d5),
__E_SxsXmlEExpectingtagend = static_cast<int32_t>(0x36d6),
__E_SxsXmlEMissingsemicolon = static_cast<int32_t>(0x36d7),
__E_SxsXmlEUnbalancedparen = static_cast<int32_t>(0x36d8),
__E_SxsXmlEInternalerror = static_cast<int32_t>(0x36d9),
__E_SxsXmlEUnexpectedWhitespace = static_cast<int32_t>(0x36da),
__E_SxsXmlEIncompleteEncoding = static_cast<int32_t>(0x36db),
__E_SxsXmlEMissingParen = static_cast<int32_t>(0x36dc),
__E_SxsXmlEExpectingclosequote = static_cast<int32_t>(0x36dd),
__E_SxsXmlEMultipleColons = static_cast<int32_t>(0x36de),
__E_SxsXmlEInvalidDecimal = static_cast<int32_t>(0x36df),
__E_SxsXmlEInvalidHexidecimal = static_cast<int32_t>(0x36e0),
__E_SxsXmlEInvalidUnicode = static_cast<int32_t>(0x36e1),
__E_SxsXmlEWhitespaceorquestionmark = static_cast<int32_t>(0x36e2),
__E_SxsXmlEUnexpectedendtag = static_cast<int32_t>(0x36e3),
__E_SxsXmlEUnclosedtag = static_cast<int32_t>(0x36e4),
__E_SxsXmlEDuplicateattribute = static_cast<int32_t>(0x36e5),
__E_SxsXmlEMultipleroots = static_cast<int32_t>(0x36e6),
__E_SxsXmlEInvalidatrootlevel = static_cast<int32_t>(0x36e7),
__E_SxsXmlEBadxmldecl = static_cast<int32_t>(0x36e8),
__E_SxsXmlEMissingroot = static_cast<int32_t>(0x36e9),
__E_SxsXmlEUnexpectedeof = static_cast<int32_t>(0x36ea),
__E_SxsXmlEBadperefinsubset = static_cast<int32_t>(0x36eb),
__E_SxsXmlEUnclosedstarttag = static_cast<int32_t>(0x36ec),
__E_SxsXmlEUnclosedendtag = static_cast<int32_t>(0x36ed),
__E_SxsXmlEUnclosedstring = static_cast<int32_t>(0x36ee),
__E_SxsXmlEUnclosedcomment = static_cast<int32_t>(0x36ef),
__E_SxsXmlEUncloseddecl = static_cast<int32_t>(0x36f0),
__E_SxsXmlEUnclosedcdata = static_cast<int32_t>(0x36f1),
__E_SxsXmlEReservednamespace = static_cast<int32_t>(0x36f2),
__E_SxsXmlEInvalidencoding = static_cast<int32_t>(0x36f3),
__E_SxsXmlEInvalidswitch = static_cast<int32_t>(0x36f4),
__E_SxsXmlEBadxmlcase = static_cast<int32_t>(0x36f5),
__E_SxsXmlEInvalidStandalone = static_cast<int32_t>(0x36f6),
__E_SxsXmlEUnexpectedStandalone = static_cast<int32_t>(0x36f7),
__E_SxsXmlEInvalidVersion = static_cast<int32_t>(0x36f8),
__E_SxsXmlEMissingequals = static_cast<int32_t>(0x36f9),
__E_SxsProtectionRecoveryFailed = static_cast<int32_t>(0x36fa),
__E_SxsProtectionPublicKeyTooShort = static_cast<int32_t>(0x36fb),
__E_SxsProtectionCatalogNotValid = static_cast<int32_t>(0x36fc),
__E_SxsUntranslatableHresult = static_cast<int32_t>(0x36fd),
__E_SxsProtectionCatalogFileMissing = static_cast<int32_t>(0x36fe),
__E_SxsMissingAssemblyIdentityAttribute = static_cast<int32_t>(0x36ff),
__E_SxsInvalidAssemblyIdentityAttributeName = static_cast<int32_t>(0x3700),
__E_SxsAssemblyMissing = static_cast<int32_t>(0x3701),
__E_SxsCorruptActivationStack = static_cast<int32_t>(0x3702),
__E_SxsCorruption = static_cast<int32_t>(0x3703),
__E_SxsEarlyDeactivation = static_cast<int32_t>(0x3704),
__E_SxsInvalidDeactivation = static_cast<int32_t>(0x3705),
__E_SxsMultipleDeactivation = static_cast<int32_t>(0x3706),
__E_SxsProcessTerminationRequested = static_cast<int32_t>(0x3707),
__E_SxsReleaseActivationContext = static_cast<int32_t>(0x3708),
__E_SxsSystemDefaultActivationContextEmpty = static_cast<int32_t>(0x3709),
__E_SxsInvalidIdentityAttributeValue = static_cast<int32_t>(0x370a),
__E_SxsInvalidIdentityAttributeName = static_cast<int32_t>(0x370b),
__E_SxsIdentityDuplicateAttribute = static_cast<int32_t>(0x370c),
__E_SxsIdentityParseError = static_cast<int32_t>(0x370d),
__E_MalformedSubstitutionString = static_cast<int32_t>(0x370e),
__E_SxsIncorrectPublicKeyToken = static_cast<int32_t>(0x370f),
__E_UnmappedSubstitutionString = static_cast<int32_t>(0x3710),
__E_SxsAssemblyNotLocked = static_cast<int32_t>(0x3711),
__E_SxsComponentStoreCorrupt = static_cast<int32_t>(0x3712),
__E_AdvancedInstallerFailed = static_cast<int32_t>(0x3713),
__E_XmlEncodingMismatch = static_cast<int32_t>(0x3714),
__E_SxsManifestIdentitySameButContentsDifferent = static_cast<int32_t>(0x3715),
__E_SxsIdentitiesDifferent = static_cast<int32_t>(0x3716),
__E_SxsAssemblyIsNotADeployment = static_cast<int32_t>(0x3717),
__E_SxsFileNotPartOfAssembly = static_cast<int32_t>(0x3718),
__E_SxsManifestTooBig = static_cast<int32_t>(0x3719),
__E_SxsSettingNotRegistered = static_cast<int32_t>(0x371a),
__E_SxsTransactionClosureIncomplete = static_cast<int32_t>(0x371b),
__E_SmiPrimitiveInstallerFailed = static_cast<int32_t>(0x371c),
__E_GenericCommandFailed = static_cast<int32_t>(0x371d),
__E_SxsFileHashMissing = static_cast<int32_t>(0x371e),
__E_EvtInvalidChannelPath = static_cast<int32_t>(0x3a98),
__E_EvtInvalidQuery = static_cast<int32_t>(0x3a99),
__E_EvtPublisherMetadataNotFound = static_cast<int32_t>(0x3a9a),
__E_EvtEventTemplateNotFound = static_cast<int32_t>(0x3a9b),
__E_EvtInvalidPublisherName = static_cast<int32_t>(0x3a9c),
__E_EvtInvalidEventData = static_cast<int32_t>(0x3a9d),
__E_EvtChannelNotFound = static_cast<int32_t>(0x3a9f),
__E_EvtMalformedXmlText = static_cast<int32_t>(0x3aa0),
__E_EvtSubscriptionToDirectChannel = static_cast<int32_t>(0x3aa1),
__E_EvtConfigurationError = static_cast<int32_t>(0x3aa2),
__E_EvtQueryResultStale = static_cast<int32_t>(0x3aa3),
__E_EvtQueryResultInvalidPosition = static_cast<int32_t>(0x3aa4),
__E_EvtNonValidatingMsxml = static_cast<int32_t>(0x3aa5),
__E_EvtFilterAlreadyscoped = static_cast<int32_t>(0x3aa6),
__E_EvtFilterNoteltset = static_cast<int32_t>(0x3aa7),
__E_EvtFilterInvarg = static_cast<int32_t>(0x3aa8),
__E_EvtFilterInvtest = static_cast<int32_t>(0x3aa9),
__E_EvtFilterInvtype = static_cast<int32_t>(0x3aaa),
__E_EvtFilterParseerr = static_cast<int32_t>(0x3aab),
__E_EvtFilterUnsupportedop = static_cast<int32_t>(0x3aac),
__E_EvtFilterUnexpectedtoken = static_cast<int32_t>(0x3aad),
__E_EvtInvalidOperationOverEnabledDirectChannel = static_cast<int32_t>(0x3aae),
__E_EvtInvalidChannelPropertyValue = static_cast<int32_t>(0x3aaf),
__E_EvtInvalidPublisherPropertyValue = static_cast<int32_t>(0x3ab0),
__E_EvtChannelCannotActivate = static_cast<int32_t>(0x3ab1),
__E_EvtFilterTooComplex = static_cast<int32_t>(0x3ab2),
__E_EvtMessageNotFound = static_cast<int32_t>(0x3ab3),
__E_EvtMessageIdNotFound = static_cast<int32_t>(0x3ab4),
__E_EvtUnresolvedValueInsert = static_cast<int32_t>(0x3ab5),
__E_EvtUnresolvedParameterInsert = static_cast<int32_t>(0x3ab6),
__E_EvtMaxInsertsReached = static_cast<int32_t>(0x3ab7),
__E_EvtEventDefinitionNotFound = static_cast<int32_t>(0x3ab8),
__E_EvtMessageLocaleNotFound = static_cast<int32_t>(0x3ab9),
__E_EvtVersionTooOld = static_cast<int32_t>(0x3aba),
__E_EvtVersionTooNew = static_cast<int32_t>(0x3abb),
__E_EvtCannotOpenChannelOfQuery = static_cast<int32_t>(0x3abc),
__E_EvtPublisherDisabled = static_cast<int32_t>(0x3abd),
__E_EvtFilterOutOfRange = static_cast<int32_t>(0x3abe),
__E_EcSubscriptionCannotActivate = static_cast<int32_t>(0x3ae8),
__E_EcLogDisabled = static_cast<int32_t>(0x3ae9),
__E_EcCircularForwarding = static_cast<int32_t>(0x3aea),
__E_EcCredstoreFull = static_cast<int32_t>(0x3aeb),
__E_EcCredNotFound = static_cast<int32_t>(0x3aec),
__E_EcNoActiveChannel = static_cast<int32_t>(0x3aed),
__E_MuiFileNotFound = static_cast<int32_t>(0x3afc),
__E_MuiInvalidFile = static_cast<int32_t>(0x3afd),
__E_MuiInvalidRcConfig = static_cast<int32_t>(0x3afe),
__E_MuiInvalidLocaleName = static_cast<int32_t>(0x3aff),
__E_MuiInvalidUltimatefallbackName = static_cast<int32_t>(0x3b00),
__E_MuiFileNotLoaded = static_cast<int32_t>(0x3b01),
__E_ResourceEnumUserStop = static_cast<int32_t>(0x3b02),
__E_MuiIntlsettingsUilangNotInstalled = static_cast<int32_t>(0x3b03),
__E_MuiIntlsettingsInvalidLocaleName = static_cast<int32_t>(0x3b04),
__E_MrmRuntimeNoDefaultOrNeutralResource = static_cast<int32_t>(0x3b06),
__E_MrmInvalidPriconfig = static_cast<int32_t>(0x3b07),
__E_MrmInvalidFileType = static_cast<int32_t>(0x3b08),
__E_MrmUnknownQualifier = static_cast<int32_t>(0x3b09),
__E_MrmInvalidQualifierValue = static_cast<int32_t>(0x3b0a),
__E_MrmNoCandidate = static_cast<int32_t>(0x3b0b),
__E_MrmNoMatchOrDefaultCandidate = static_cast<int32_t>(0x3b0c),
__E_MrmResourceTypeMismatch = static_cast<int32_t>(0x3b0d),
__E_MrmDuplicateMapName = static_cast<int32_t>(0x3b0e),
__E_MrmDuplicateEntry = static_cast<int32_t>(0x3b0f),
__E_MrmInvalidResourceIdentifier = static_cast<int32_t>(0x3b10),
__E_MrmFilepathTooLong = static_cast<int32_t>(0x3b11),
__E_MrmUnsupportedDirectoryType = static_cast<int32_t>(0x3b12),
__E_MrmInvalidPriFile = static_cast<int32_t>(0x3b16),
__E_MrmNamedResourceNotFound = static_cast<int32_t>(0x3b17),
__E_MrmMapNotFound = static_cast<int32_t>(0x3b1f),
__E_MrmUnsupportedProfileType = static_cast<int32_t>(0x3b20),
__E_MrmInvalidQualifierOperator = static_cast<int32_t>(0x3b21),
__E_MrmIndeterminateQualifierValue = static_cast<int32_t>(0x3b22),
__E_MrmAutomergeEnabled = static_cast<int32_t>(0x3b23),
__E_MrmTooManyResources = static_cast<int32_t>(0x3b24),
__E_McaInvalidCapabilitiesString = static_cast<int32_t>(0x3b60),
__E_McaInvalidVcpVersion = static_cast<int32_t>(0x3b61),
__E_McaMonitorViolatesMccsSpecification = static_cast<int32_t>(0x3b62),
__E_McaMccsVersionMismatch = static_cast<int32_t>(0x3b63),
__E_McaUnsupportedMccsVersion = static_cast<int32_t>(0x3b64),
__E_McaInternalError = static_cast<int32_t>(0x3b65),
__E_McaInvalidTechnologyTypeReturned = static_cast<int32_t>(0x3b66),
__E_McaUnsupportedColorTemperature = static_cast<int32_t>(0x3b67),
__E_AmbiguousSystemDevice = static_cast<int32_t>(0x3b92),
__E_SystemDeviceNotFound = static_cast<int32_t>(0x3bc3),
__E_HashNotSupported = static_cast<int32_t>(0x3bc4),
__E_HashNotPresent = static_cast<int32_t>(0x3bc5),
__E_SecondaryIcProviderNotRegistered = static_cast<int32_t>(0x3bd9),
__E_GpioClientInformationInvalid = static_cast<int32_t>(0x3bda),
__E_GpioVersionNotSupported = static_cast<int32_t>(0x3bdb),
__E_GpioInvalidRegistrationPacket = static_cast<int32_t>(0x3bdc),
__E_GpioOperationDenied = static_cast<int32_t>(0x3bdd),
__E_GpioIncompatibleConnectMode = static_cast<int32_t>(0x3bde),
__E_GpioInterruptAlreadyUnmasked = static_cast<int32_t>(0x3bdf),
__E_CannotSwitchRunlevel = static_cast<int32_t>(0x3c28),
__E_InvalidRunlevelSetting = static_cast<int32_t>(0x3c29),
__E_RunlevelSwitchTimeout = static_cast<int32_t>(0x3c2a),
__E_RunlevelSwitchAgentTimeout = static_cast<int32_t>(0x3c2b),
__E_RunlevelSwitchInProgress = static_cast<int32_t>(0x3c2c),
__E_ServicesFailedAutostart = static_cast<int32_t>(0x3c2d),
__E_ComTaskStopPending = static_cast<int32_t>(0x3c8d),
__E_InstallOpenPackageFailed = static_cast<int32_t>(0x3cf0),
__E_InstallPackageNotFound = static_cast<int32_t>(0x3cf1),
__E_InstallInvalidPackage = static_cast<int32_t>(0x3cf2),
__E_InstallResolveDependencyFailed = static_cast<int32_t>(0x3cf3),
__E_InstallOutOfDiskSpace = static_cast<int32_t>(0x3cf4),
__E_InstallNetworkFailure = static_cast<int32_t>(0x3cf5),
__E_InstallRegistrationFailure = static_cast<int32_t>(0x3cf6),
__E_InstallDeregistrationFailure = static_cast<int32_t>(0x3cf7),
__E_InstallCancel = static_cast<int32_t>(0x3cf8),
__E_InstallFailed = static_cast<int32_t>(0x3cf9),
__E_RemoveFailed = static_cast<int32_t>(0x3cfa),
__E_PackageAlreadyExists = static_cast<int32_t>(0x3cfb),
__E_NeedsRemediation = static_cast<int32_t>(0x3cfc),
__E_InstallPrerequisiteFailed = static_cast<int32_t>(0x3cfd),
__E_PackageRepositoryCorrupted = static_cast<int32_t>(0x3cfe),
__E_InstallPolicyFailure = static_cast<int32_t>(0x3cff),
__E_PackageUpdating = static_cast<int32_t>(0x3d00),
__E_DeploymentBlockedByPolicy = static_cast<int32_t>(0x3d01),
__E_PackagesInUse = static_cast<int32_t>(0x3d02),
__E_RecoveryFileCorrupt = static_cast<int32_t>(0x3d03),
__E_InvalidStagedSignature = static_cast<int32_t>(0x3d04),
__E_DeletingExistingApplicationdataStoreFailed = static_cast<int32_t>(0x3d05),
__E_InstallPackageDowngrade = static_cast<int32_t>(0x3d06),
__E_SystemNeedsRemediation = static_cast<int32_t>(0x3d07),
__E_AppxIntegrityFailureClrNgen = static_cast<int32_t>(0x3d08),
__E_ResiliencyFileCorrupt = static_cast<int32_t>(0x3d09),
__E_InstallFirewallServiceNotRunning = static_cast<int32_t>(0x3d0a),
__E_StateLoadStoreFailed = static_cast<int32_t>(0x3db8),
__E_StateGetVersionFailed = static_cast<int32_t>(0x3db9),
__E_StateSetVersionFailed = static_cast<int32_t>(0x3dba),
__E_StateStructuredResetFailed = static_cast<int32_t>(0x3dbb),
__E_StateOpenContainerFailed = static_cast<int32_t>(0x3dbc),
__E_StateCreateContainerFailed = static_cast<int32_t>(0x3dbd),
__E_StateDeleteContainerFailed = static_cast<int32_t>(0x3dbe),
__E_StateReadSettingFailed = static_cast<int32_t>(0x3dbf),
__E_StateWriteSettingFailed = static_cast<int32_t>(0x3dc0),
__E_StateDeleteSettingFailed = static_cast<int32_t>(0x3dc1),
__E_StateQuerySettingFailed = static_cast<int32_t>(0x3dc2),
__E_StateReadCompositeSettingFailed = static_cast<int32_t>(0x3dc3),
__E_StateWriteCompositeSettingFailed = static_cast<int32_t>(0x3dc4),
__E_StateEnumerateContainerFailed = static_cast<int32_t>(0x3dc5),
__E_StateEnumerateSettingsFailed = static_cast<int32_t>(0x3dc6),
__E_StateCompositeSettingValueSizeLimitExceeded = static_cast<int32_t>(0x3dc7),
__E_StateSettingValueSizeLimitExceeded = static_cast<int32_t>(0x3dc8),
__E_StateSettingNameSizeLimitExceeded = static_cast<int32_t>(0x3dc9),
__E_StateContainerNameSizeLimitExceeded = static_cast<int32_t>(0x3dca),
__E_ApiUnavailable = static_cast<int32_t>(0x3de1),
__E_AuditingDisabled = static_cast<int32_t>(0xc0090001),
__E_AllSidsFiltered = static_cast<int32_t>(0xc0090002),
__E_BizrulesNotEnabled = static_cast<int32_t>(0xc0090003),
__E_CredRequiresConfirmation = static_cast<int32_t>(0x80097019),
__E_FltIoComplete = static_cast<int32_t>(0x1f0001),
__E_FltNoHandlerDefined = static_cast<int32_t>(0x801f0001),
__E_FltContextAlreadyDefined = static_cast<int32_t>(0x801f0002),
__E_FltInvalidAsynchronousRequest = static_cast<int32_t>(0x801f0003),
__E_FltDisallowFastIo = static_cast<int32_t>(0x801f0004),
__E_FltInvalidNameRequest = static_cast<int32_t>(0x801f0005),
__E_FltNotSafeToPostOperation = static_cast<int32_t>(0x801f0006),
__E_FltNotInitialized = static_cast<int32_t>(0x801f0007),
__E_FltFilterNotReady = static_cast<int32_t>(0x801f0008),
__E_FltPostOperationCleanup = static_cast<int32_t>(0x801f0009),
__E_FltInternalError = static_cast<int32_t>(0x801f000a),
__E_FltDeletingObject = static_cast<int32_t>(0x801f000b),
__E_FltMustBeNonpagedPool = static_cast<int32_t>(0x801f000c),
__E_FltDuplicateEntry = static_cast<int32_t>(0x801f000d),
__E_FltCbdqDisabled = static_cast<int32_t>(0x801f000e),
__E_FltDoNotAttach = static_cast<int32_t>(0x801f000f),
__E_FltDoNotDetach = static_cast<int32_t>(0x801f0010),
__E_FltInstanceAltitudeCollision = static_cast<int32_t>(0x801f0011),
__E_FltInstanceNameCollision = static_cast<int32_t>(0x801f0012),
__E_FltFilterNotFound = static_cast<int32_t>(0x801f0013),
__E_FltVolumeNotFound = static_cast<int32_t>(0x801f0014),
__E_FltInstanceNotFound = static_cast<int32_t>(0x801f0015),
__E_FltContextAllocationNotFound = static_cast<int32_t>(0x801f0016),
__E_FltInvalidContextRegistration = static_cast<int32_t>(0x801f0017),
__E_FltNameCacheMiss = static_cast<int32_t>(0x801f0018),
__E_FltNoDeviceObject = static_cast<int32_t>(0x801f0019),
__E_FltVolumeAlreadyMounted = static_cast<int32_t>(0x801f001a),
__E_FltAlreadyEnlisted = static_cast<int32_t>(0x801f001b),
__E_FltContextAlreadyLinked = static_cast<int32_t>(0x801f001c),
__E_FltNoWaiterForReply = static_cast<int32_t>(0x801f0020),
__E_FltRegistrationBusy = static_cast<int32_t>(0x801f0023),
__E_HungDisplayDriverThread = static_cast<int32_t>(0x80260001),
__E_MonitorNoDescriptor = static_cast<int32_t>(0x80261001),
__E_MonitorUnknownDescriptorFormat = static_cast<int32_t>(0x80261002),
__E_MonitorInvalidDescriptorChecksum = static_cast<int32_t>(0xc0261003),
__E_MonitorInvalidStandardTimingBlock = static_cast<int32_t>(0xc0261004),
__E_MonitorWmiDatablockRegistrationFailed = static_cast<int32_t>(0xc0261005),
__E_MonitorInvalidSerialNumberMondscBlock = static_cast<int32_t>(0xc0261006),
__E_MonitorInvalidUserFriendlyMondscBlock = static_cast<int32_t>(0xc0261007),
__E_MonitorNoMoreDescriptorData = static_cast<int32_t>(0xc0261008),
__E_MonitorInvalidDetailedTimingBlock = static_cast<int32_t>(0xc0261009),
__E_MonitorInvalidManufactureDate = static_cast<int32_t>(0xc026100a),
__E_GraphicsNotExclusiveModeOwner = static_cast<int32_t>(0xc0262000),
__E_GraphicsInsufficientDmaBuffer = static_cast<int32_t>(0xc0262001),
__E_GraphicsInvalidDisplayAdapter = static_cast<int32_t>(0xc0262002),
__E_GraphicsAdapterWasReset = static_cast<int32_t>(0xc0262003),
__E_GraphicsInvalidDriverModel = static_cast<int32_t>(0xc0262004),
__E_GraphicsPresentModeChanged = static_cast<int32_t>(0xc0262005),
__E_GraphicsPresentOccluded = static_cast<int32_t>(0xc0262006),
__E_GraphicsPresentDenied = static_cast<int32_t>(0xc0262007),
__E_GraphicsCannotcolorconvert = static_cast<int32_t>(0xc0262008),
__E_GraphicsDriverMismatch = static_cast<int32_t>(0xc0262009),
__E_GraphicsPartialDataPopulated = static_cast<int32_t>(0x4026200a),
__E_GraphicsPresentRedirectionDisabled = static_cast<int32_t>(0xc026200b),
__E_GraphicsPresentUnoccluded = static_cast<int32_t>(0xc026200c),
__E_GraphicsWindowdcNotAvailable = static_cast<int32_t>(0xc026200d),
__E_GraphicsWindowlessPresentDisabled = static_cast<int32_t>(0xc026200e),
__E_GraphicsNoVideoMemory = static_cast<int32_t>(0xc0262100),
__E_GraphicsCantLockMemory = static_cast<int32_t>(0xc0262101),
__E_GraphicsAllocationBusy = static_cast<int32_t>(0xc0262102),
__E_GraphicsTooManyReferences = static_cast<int32_t>(0xc0262103),
__E_GraphicsTryAgainLater = static_cast<int32_t>(0xc0262104),
__E_GraphicsTryAgainNow = static_cast<int32_t>(0xc0262105),
__E_GraphicsAllocationInvalid = static_cast<int32_t>(0xc0262106),
__E_GraphicsUnswizzlingApertureUnavailable = static_cast<int32_t>(0xc0262107),
__E_GraphicsUnswizzlingApertureUnsupported = static_cast<int32_t>(0xc0262108),
__E_GraphicsCantEvictPinnedAllocation = static_cast<int32_t>(0xc0262109),
__E_GraphicsInvalidAllocationUsage = static_cast<int32_t>(0xc0262110),
__E_GraphicsCantRenderLockedAllocation = static_cast<int32_t>(0xc0262111),
__E_GraphicsAllocationClosed = static_cast<int32_t>(0xc0262112),
__E_GraphicsInvalidAllocationInstance = static_cast<int32_t>(0xc0262113),
__E_GraphicsInvalidAllocationHandle = static_cast<int32_t>(0xc0262114),
__E_GraphicsWrongAllocationDevice = static_cast<int32_t>(0xc0262115),
__E_GraphicsAllocationContentLost = static_cast<int32_t>(0xc0262116),
__E_GraphicsGpuExceptionOnDevice = static_cast<int32_t>(0xc0262200),
__E_GraphicsSkipAllocationPreparation = static_cast<int32_t>(0x40262201),
__E_GraphicsInvalidVidpnTopology = static_cast<int32_t>(0xc0262300),
__E_GraphicsVidpnTopologyNotSupported = static_cast<int32_t>(0xc0262301),
__E_GraphicsVidpnTopologyCurrentlyNotSupported = static_cast<int32_t>(0xc0262302),
__E_GraphicsInvalidVidpn = static_cast<int32_t>(0xc0262303),
__E_GraphicsInvalidVideoPresentSource = static_cast<int32_t>(0xc0262304),
__E_GraphicsInvalidVideoPresentTarget = static_cast<int32_t>(0xc0262305),
__E_GraphicsVidpnModalityNotSupported = static_cast<int32_t>(0xc0262306),
__E_GraphicsModeNotPinned = static_cast<int32_t>(0x262307),
__E_GraphicsInvalidVidpnSourcemodeset = static_cast<int32_t>(0xc0262308),
__E_GraphicsInvalidVidpnTargetmodeset = static_cast<int32_t>(0xc0262309),
__E_GraphicsInvalidFrequency = static_cast<int32_t>(0xc026230a),
__E_GraphicsInvalidActiveRegion = static_cast<int32_t>(0xc026230b),
__E_GraphicsInvalidTotalRegion = static_cast<int32_t>(0xc026230c),
__E_GraphicsInvalidVideoPresentSourceMode = static_cast<int32_t>(0xc0262310),
__E_GraphicsInvalidVideoPresentTargetMode = static_cast<int32_t>(0xc0262311),
__E_GraphicsPinnedModeMustRemainInSet = static_cast<int32_t>(0xc0262312),
__E_GraphicsPathAlreadyInTopology = static_cast<int32_t>(0xc0262313),
__E_GraphicsModeAlreadyInModeset = static_cast<int32_t>(0xc0262314),
__E_GraphicsInvalidVideopresentsourceset = static_cast<int32_t>(0xc0262315),
__E_GraphicsInvalidVideopresenttargetset = static_cast<int32_t>(0xc0262316),
__E_GraphicsSourceAlreadyInSet = static_cast<int32_t>(0xc0262317),
__E_GraphicsTargetAlreadyInSet = static_cast<int32_t>(0xc0262318),
__E_GraphicsInvalidVidpnPresentPath = static_cast<int32_t>(0xc0262319),
__E_GraphicsNoRecommendedVidpnTopology = static_cast<int32_t>(0xc026231a),
__E_GraphicsInvalidMonitorFrequencyrangeset = static_cast<int32_t>(0xc026231b),
__E_GraphicsInvalidMonitorFrequencyrange = static_cast<int32_t>(0xc026231c),
__E_GraphicsFrequencyrangeNotInSet = static_cast<int32_t>(0xc026231d),
__E_GraphicsNoPreferredMode = static_cast<int32_t>(0x26231e),
__E_GraphicsFrequencyrangeAlreadyInSet = static_cast<int32_t>(0xc026231f),
__E_GraphicsStaleModeset = static_cast<int32_t>(0xc0262320),
__E_GraphicsInvalidMonitorSourcemodeset = static_cast<int32_t>(0xc0262321),
__E_GraphicsInvalidMonitorSourceMode = static_cast<int32_t>(0xc0262322),
__E_GraphicsNoRecommendedFunctionalVidpn = static_cast<int32_t>(0xc0262323),
__E_GraphicsModeIdMustBeUnique = static_cast<int32_t>(0xc0262324),
__E_GraphicsEmptyAdapterMonitorModeSupportIntersection = static_cast<int32_t>(0xc0262325),
__E_GraphicsVideoPresentTargetsLessThanSources = static_cast<int32_t>(0xc0262326),
__E_GraphicsPathNotInTopology = static_cast<int32_t>(0xc0262327),
__E_GraphicsAdapterMustHaveAtLeastOneSource = static_cast<int32_t>(0xc0262328),
__E_GraphicsAdapterMustHaveAtLeastOneTarget = static_cast<int32_t>(0xc0262329),
__E_GraphicsInvalidMonitordescriptorset = static_cast<int32_t>(0xc026232a),
__E_GraphicsInvalidMonitordescriptor = static_cast<int32_t>(0xc026232b),
__E_GraphicsMonitordescriptorNotInSet = static_cast<int32_t>(0xc026232c),
__E_GraphicsMonitordescriptorAlreadyInSet = static_cast<int32_t>(0xc026232d),
__E_GraphicsMonitordescriptorIdMustBeUnique = static_cast<int32_t>(0xc026232e),
__E_GraphicsInvalidVidpnTargetSubsetType = static_cast<int32_t>(0xc026232f),
__E_GraphicsResourcesNotRelated = static_cast<int32_t>(0xc0262330),
__E_GraphicsSourceIdMustBeUnique = static_cast<int32_t>(0xc0262331),
__E_GraphicsTargetIdMustBeUnique = static_cast<int32_t>(0xc0262332),
__E_GraphicsNoAvailableVidpnTarget = static_cast<int32_t>(0xc0262333),
__E_GraphicsMonitorCouldNotBeAssociatedWithAdapter = static_cast<int32_t>(0xc0262334),
__E_GraphicsNoVidpnmgr = static_cast<int32_t>(0xc0262335),
__E_GraphicsNoActiveVidpn = static_cast<int32_t>(0xc0262336),
__E_GraphicsStaleVidpnTopology = static_cast<int32_t>(0xc0262337),
__E_GraphicsMonitorNotConnected = static_cast<int32_t>(0xc0262338),
__E_GraphicsSourceNotInTopology = static_cast<int32_t>(0xc0262339),
__E_GraphicsInvalidPrimarysurfaceSize = static_cast<int32_t>(0xc026233a),
__E_GraphicsInvalidVisibleregionSize = static_cast<int32_t>(0xc026233b),
__E_GraphicsInvalidStride = static_cast<int32_t>(0xc026233c),
__E_GraphicsInvalidPixelformat = static_cast<int32_t>(0xc026233d),
__E_GraphicsInvalidColorbasis = static_cast<int32_t>(0xc026233e),
__E_GraphicsInvalidPixelvalueaccessmode = static_cast<int32_t>(0xc026233f),
__E_GraphicsTargetNotInTopology = static_cast<int32_t>(0xc0262340),
__E_GraphicsNoDisplayModeManagementSupport = static_cast<int32_t>(0xc0262341),
__E_GraphicsVidpnSourceInUse = static_cast<int32_t>(0xc0262342),
__E_GraphicsCantAccessActiveVidpn = static_cast<int32_t>(0xc0262343),
__E_GraphicsInvalidPathImportanceOrdinal = static_cast<int32_t>(0xc0262344),
__E_GraphicsInvalidPathContentGeometryTransformation = static_cast<int32_t>(0xc0262345),
__E_GraphicsPathContentGeometryTransformationNotSupported = static_cast<int32_t>(0xc0262346),
__E_GraphicsInvalidGammaRamp = static_cast<int32_t>(0xc0262347),
__E_GraphicsGammaRampNotSupported = static_cast<int32_t>(0xc0262348),
__E_GraphicsMultisamplingNotSupported = static_cast<int32_t>(0xc0262349),
__E_GraphicsModeNotInModeset = static_cast<int32_t>(0xc026234a),
__E_GraphicsDatasetIsEmpty = static_cast<int32_t>(0x26234b),
__E_GraphicsNoMoreElementsInDataset = static_cast<int32_t>(0x26234c),
__E_GraphicsInvalidVidpnTopologyRecommendationReason = static_cast<int32_t>(0xc026234d),
__E_GraphicsInvalidPathContentType = static_cast<int32_t>(0xc026234e),
__E_GraphicsInvalidCopyprotectionType = static_cast<int32_t>(0xc026234f),
__E_GraphicsUnassignedModesetAlreadyExists = static_cast<int32_t>(0xc0262350),
__E_GraphicsPathContentGeometryTransformationNotPinned = static_cast<int32_t>(0x262351),
__E_GraphicsInvalidScanlineOrdering = static_cast<int32_t>(0xc0262352),
__E_GraphicsTopologyChangesNotAllowed = static_cast<int32_t>(0xc0262353),
__E_GraphicsNoAvailableImportanceOrdinals = static_cast<int32_t>(0xc0262354),
__E_GraphicsIncompatiblePrivateFormat = static_cast<int32_t>(0xc0262355),
__E_GraphicsInvalidModePruningAlgorithm = static_cast<int32_t>(0xc0262356),
__E_GraphicsInvalidMonitorCapabilityOrigin = static_cast<int32_t>(0xc0262357),
__E_GraphicsInvalidMonitorFrequencyrangeConstraint = static_cast<int32_t>(0xc0262358),
__E_GraphicsMaxNumPathsReached = static_cast<int32_t>(0xc0262359),
__E_GraphicsCancelVidpnTopologyAugmentation = static_cast<int32_t>(0xc026235a),
__E_GraphicsInvalidClientType = static_cast<int32_t>(0xc026235b),
__E_GraphicsClientvidpnNotSet = static_cast<int32_t>(0xc026235c),
__E_GraphicsSpecifiedChildAlreadyConnected = static_cast<int32_t>(0xc0262400),
__E_GraphicsChildDescriptorNotSupported = static_cast<int32_t>(0xc0262401),
__E_GraphicsUnknownChildStatus = static_cast<int32_t>(0x4026242f),
__E_GraphicsNotALinkedAdapter = static_cast<int32_t>(0xc0262430),
__E_GraphicsLeadlinkNotEnumerated = static_cast<int32_t>(0xc0262431),
__E_GraphicsChainlinksNotEnumerated = static_cast<int32_t>(0xc0262432),
__E_GraphicsAdapterChainNotReady = static_cast<int32_t>(0xc0262433),
__E_GraphicsChainlinksNotStarted = static_cast<int32_t>(0xc0262434),
__E_GraphicsChainlinksNotPoweredOn = static_cast<int32_t>(0xc0262435),
__E_GraphicsInconsistentDeviceLinkState = static_cast<int32_t>(0xc0262436),
__E_GraphicsLeadlinkStartDeferred = static_cast<int32_t>(0x40262437),
__E_GraphicsNotPostDeviceDriver = static_cast<int32_t>(0xc0262438),
__E_GraphicsPollingTooFrequently = static_cast<int32_t>(0x40262439),
__E_GraphicsStartDeferred = static_cast<int32_t>(0x4026243a),
__E_GraphicsAdapterAccessNotExcluded = static_cast<int32_t>(0xc026243b),
__E_GraphicsOpmNotSupported = static_cast<int32_t>(0xc0262500),
__E_GraphicsCoppNotSupported = static_cast<int32_t>(0xc0262501),
__E_GraphicsUabNotSupported = static_cast<int32_t>(0xc0262502),
__E_GraphicsOpmInvalidEncryptedParameters = static_cast<int32_t>(0xc0262503),
__E_GraphicsOpmNoVideoOutputsExist = static_cast<int32_t>(0xc0262505),
__E_GraphicsOpmInternalError = static_cast<int32_t>(0xc026250b),
__E_GraphicsOpmInvalidHandle = static_cast<int32_t>(0xc026250c),
__E_GraphicsPvpInvalidCertificateLength = static_cast<int32_t>(0xc026250e),
__E_GraphicsOpmSpanningModeEnabled = static_cast<int32_t>(0xc026250f),
__E_GraphicsOpmTheaterModeEnabled = static_cast<int32_t>(0xc0262510),
__E_GraphicsPvpHfsFailed = static_cast<int32_t>(0xc0262511),
__E_GraphicsOpmInvalidSrm = static_cast<int32_t>(0xc0262512),
__E_GraphicsOpmOutputDoesNotSupportHdcp = static_cast<int32_t>(0xc0262513),
__E_GraphicsOpmOutputDoesNotSupportAcp = static_cast<int32_t>(0xc0262514),
__E_GraphicsOpmOutputDoesNotSupportCgmsa = static_cast<int32_t>(0xc0262515),
__E_GraphicsOpmHdcpSrmNeverSet = static_cast<int32_t>(0xc0262516),
__E_GraphicsOpmResolutionTooHigh = static_cast<int32_t>(0xc0262517),
__E_GraphicsOpmAllHdcpHardwareAlreadyInUse = static_cast<int32_t>(0xc0262518),
__E_GraphicsOpmVideoOutputNoLongerExists = static_cast<int32_t>(0xc026251a),
__E_GraphicsOpmSessionTypeChangeInProgress = static_cast<int32_t>(0xc026251b),
__E_GraphicsOpmVideoOutputDoesNotHaveCoppSemantics = static_cast<int32_t>(0xc026251c),
__E_GraphicsOpmInvalidInformationRequest = static_cast<int32_t>(0xc026251d),
__E_GraphicsOpmDriverInternalError = static_cast<int32_t>(0xc026251e),
__E_GraphicsOpmVideoOutputDoesNotHaveOpmSemantics = static_cast<int32_t>(0xc026251f),
__E_GraphicsOpmSignalingNotSupported = static_cast<int32_t>(0xc0262520),
__E_GraphicsOpmInvalidConfigurationRequest = static_cast<int32_t>(0xc0262521),
__E_GraphicsI2CNotSupported = static_cast<int32_t>(0xc0262580),
__E_GraphicsI2CDeviceDoesNotExist = static_cast<int32_t>(0xc0262581),
__E_GraphicsI2CErrorTransmittingData = static_cast<int32_t>(0xc0262582),
__E_GraphicsI2CErrorReceivingData = static_cast<int32_t>(0xc0262583),
__E_GraphicsDdcciVcpNotSupported = static_cast<int32_t>(0xc0262584),
__E_GraphicsDdcciInvalidData = static_cast<int32_t>(0xc0262585),
__E_GraphicsDdcciMonitorReturnedInvalidTimingStatusByte = static_cast<int32_t>(0xc0262586),
__E_GraphicsMcaInvalidCapabilitiesString = static_cast<int32_t>(0xc0262587),
__E_GraphicsMcaInternalError = static_cast<int32_t>(0xc0262588),
__E_GraphicsDdcciInvalidMessageCommand = static_cast<int32_t>(0xc0262589),
__E_GraphicsDdcciInvalidMessageLength = static_cast<int32_t>(0xc026258a),
__E_GraphicsDdcciInvalidMessageChecksum = static_cast<int32_t>(0xc026258b),
__E_GraphicsInvalidPhysicalMonitorHandle = static_cast<int32_t>(0xc026258c),
__E_GraphicsMonitorNoLongerExists = static_cast<int32_t>(0xc026258d),
__E_GraphicsDdcciCurrentCurrentValueGreaterThanMaximumValue = static_cast<int32_t>(0xc02625d8),
__E_GraphicsMcaInvalidVcpVersion = static_cast<int32_t>(0xc02625d9),
__E_GraphicsMcaMonitorViolatesMccsSpecification = static_cast<int32_t>(0xc02625da),
__E_GraphicsMcaMccsVersionMismatch = static_cast<int32_t>(0xc02625db),
__E_GraphicsMcaUnsupportedMccsVersion = static_cast<int32_t>(0xc02625dc),
__E_GraphicsMcaInvalidTechnologyTypeReturned = static_cast<int32_t>(0xc02625de),
__E_GraphicsMcaUnsupportedColorTemperature = static_cast<int32_t>(0xc02625df),
__E_GraphicsOnlyConsoleSessionSupported = static_cast<int32_t>(0xc02625e0),
__E_GraphicsNoDisplayDeviceCorrespondsToName = static_cast<int32_t>(0xc02625e1),
__E_GraphicsDisplayDeviceNotAttachedToDesktop = static_cast<int32_t>(0xc02625e2),
__E_GraphicsMirroringDevicesNotSupported = static_cast<int32_t>(0xc02625e3),
__E_GraphicsInvalidPointer = static_cast<int32_t>(0xc02625e4),
__E_GraphicsNoMonitorsCorrespondToDisplayDevice = static_cast<int32_t>(0xc02625e5),
__E_GraphicsParameterArrayTooSmall = static_cast<int32_t>(0xc02625e6),
__E_GraphicsInternalError = static_cast<int32_t>(0xc02625e7),
__E_GraphicsSessionTypeChangeInProgress = static_cast<int32_t>(0xc02605e8),
__E_NdisInterfaceClosing = static_cast<int32_t>(0x80340002),
__E_NdisBadVersion = static_cast<int32_t>(0x80340004),
__E_NdisBadCharacteristics = static_cast<int32_t>(0x80340005),
__E_NdisAdapterNotFound = static_cast<int32_t>(0x80340006),
__E_NdisOpenFailed = static_cast<int32_t>(0x80340007),
__E_NdisDeviceFailed = static_cast<int32_t>(0x80340008),
__E_NdisMulticastFull = static_cast<int32_t>(0x80340009),
__E_NdisMulticastExists = static_cast<int32_t>(0x8034000a),
__E_NdisMulticastNotFound = static_cast<int32_t>(0x8034000b),
__E_NdisRequestAborted = static_cast<int32_t>(0x8034000c),
__E_NdisResetInProgress = static_cast<int32_t>(0x8034000d),
__E_NdisNotSupported = static_cast<int32_t>(0x803400bb),
__E_NdisInvalidPacket = static_cast<int32_t>(0x8034000f),
__E_NdisAdapterNotReady = static_cast<int32_t>(0x80340011),
__E_NdisInvalidLength = static_cast<int32_t>(0x80340014),
__E_NdisInvalidData = static_cast<int32_t>(0x80340015),
__E_NdisBufferTooShort = static_cast<int32_t>(0x80340016),
__E_NdisInvalidOid = static_cast<int32_t>(0x80340017),
__E_NdisAdapterRemoved = static_cast<int32_t>(0x80340018),
__E_NdisUnsupportedMedia = static_cast<int32_t>(0x80340019),
__E_NdisGroupAddressInUse = static_cast<int32_t>(0x8034001a),
__E_NdisFileNotFound = static_cast<int32_t>(0x8034001b),
__E_NdisErrorReadingFile = static_cast<int32_t>(0x8034001c),
__E_NdisAlreadyMapped = static_cast<int32_t>(0x8034001d),
__E_NdisResourceConflict = static_cast<int32_t>(0x8034001e),
__E_NdisMediaDisconnected = static_cast<int32_t>(0x8034001f),
__E_NdisInvalidAddress = static_cast<int32_t>(0x80340022),
__E_NdisInvalidDeviceRequest = static_cast<int32_t>(0x80340010),
__E_NdisPaused = static_cast<int32_t>(0x8034002a),
__E_NdisInterfaceNotFound = static_cast<int32_t>(0x8034002b),
__E_NdisUnsupportedRevision = static_cast<int32_t>(0x8034002c),
__E_NdisInvalidPort = static_cast<int32_t>(0x8034002d),
__E_NdisInvalidPortState = static_cast<int32_t>(0x8034002e),
__E_NdisLowPowerState = static_cast<int32_t>(0x8034002f),
__E_NdisReinitRequired = static_cast<int32_t>(0x80340030),
__E_NdisDot11AutoConfigEnabled = static_cast<int32_t>(0x80342000),
__E_NdisDot11MediaInUse = static_cast<int32_t>(0x80342001),
__E_NdisDot11PowerStateInvalid = static_cast<int32_t>(0x80342002),
__E_NdisPmWolPatternListFull = static_cast<int32_t>(0x80342003),
__E_NdisPmProtocolOffloadListFull = static_cast<int32_t>(0x80342004),
__E_NdisIndicationRequired = static_cast<int32_t>(0x340001),
__E_NdisOffloadPolicy = static_cast<int32_t>(0xc034100f),
__E_NdisOffloadConnectionRejected = static_cast<int32_t>(0xc0341012),
__E_NdisOffloadPathRejected = static_cast<int32_t>(0xc0341013),
__E_HvInvalidHypercallCode = static_cast<int32_t>(0xc0350002),
__E_HvInvalidHypercallInput = static_cast<int32_t>(0xc0350003),
__E_HvInvalidAlignment = static_cast<int32_t>(0xc0350004),
__E_HvInvalidParameter = static_cast<int32_t>(0xc0350005),
__E_HvAccessDenied = static_cast<int32_t>(0xc0350006),
__E_HvInvalidPartitionState = static_cast<int32_t>(0xc0350007),
__E_HvOperationDenied = static_cast<int32_t>(0xc0350008),
__E_HvUnknownProperty = static_cast<int32_t>(0xc0350009),
__E_HvPropertyValueOutOfRange = static_cast<int32_t>(0xc035000a),
__E_HvInsufficientMemory = static_cast<int32_t>(0xc035000b),
__E_HvPartitionTooDeep = static_cast<int32_t>(0xc035000c),
__E_HvInvalidPartitionId = static_cast<int32_t>(0xc035000d),
__E_HvInvalidVpIndex = static_cast<int32_t>(0xc035000e),
__E_HvInvalidPortId = static_cast<int32_t>(0xc0350011),
__E_HvInvalidConnectionId = static_cast<int32_t>(0xc0350012),
__E_HvInsufficientBuffers = static_cast<int32_t>(0xc0350013),
__E_HvNotAcknowledged = static_cast<int32_t>(0xc0350014),
__E_HvAcknowledged = static_cast<int32_t>(0xc0350016),
__E_HvInvalidSaveRestoreState = static_cast<int32_t>(0xc0350017),
__E_HvInvalidSynicState = static_cast<int32_t>(0xc0350018),
__E_HvObjectInUse = static_cast<int32_t>(0xc0350019),
__E_HvInvalidProximityDomainInfo = static_cast<int32_t>(0xc035001a),
__E_HvNoData = static_cast<int32_t>(0xc035001b),
__E_HvInactive = static_cast<int32_t>(0xc035001c),
__E_HvNoResources = static_cast<int32_t>(0xc035001d),
__E_HvFeatureUnavailable = static_cast<int32_t>(0xc035001e),
__E_HvInsufficientDeviceDomains = static_cast<int32_t>(0xc0350038),
__E_HvInvalidLpIndex = static_cast<int32_t>(0xc0350041),
__E_HvNotPresent = static_cast<int32_t>(0xc0351000),
__E_VidDuplicateHandler = static_cast<int32_t>(0xc0370001),
__E_VidTooManyHandlers = static_cast<int32_t>(0xc0370002),
__E_VidQueueFull = static_cast<int32_t>(0xc0370003),
__E_VidHandlerNotPresent = static_cast<int32_t>(0xc0370004),
__E_VidInvalidObjectName = static_cast<int32_t>(0xc0370005),
__E_VidPartitionNameTooLong = static_cast<int32_t>(0xc0370006),
__E_VidMessageQueueNameTooLong = static_cast<int32_t>(0xc0370007),
__E_VidPartitionAlreadyExists = static_cast<int32_t>(0xc0370008),
__E_VidPartitionDoesNotExist = static_cast<int32_t>(0xc0370009),
__E_VidPartitionNameNotFound = static_cast<int32_t>(0xc037000a),
__E_VidMessageQueueAlreadyExists = static_cast<int32_t>(0xc037000b),
__E_VidExceededMbpEntryMapLimit = static_cast<int32_t>(0xc037000c),
__E_VidMbStillReferenced = static_cast<int32_t>(0xc037000d),
__E_VidChildGpaPageSetCorrupted = static_cast<int32_t>(0xc037000e),
__E_VidInvalidNumaSettings = static_cast<int32_t>(0xc037000f),
__E_VidInvalidNumaNodeIndex = static_cast<int32_t>(0xc0370010),
__E_VidNotificationQueueAlreadyAssociated = static_cast<int32_t>(0xc0370011),
__E_VidInvalidMemoryBlockHandle = static_cast<int32_t>(0xc0370012),
__E_VidPageRangeOverflow = static_cast<int32_t>(0xc0370013),
__E_VidInvalidMessageQueueHandle = static_cast<int32_t>(0xc0370014),
__E_VidInvalidGpaRangeHandle = static_cast<int32_t>(0xc0370015),
__E_VidNoMemoryBlockNotificationQueue = static_cast<int32_t>(0xc0370016),
__E_VidMemoryBlockLockCountExceeded = static_cast<int32_t>(0xc0370017),
__E_VidInvalidPpmHandle = static_cast<int32_t>(0xc0370018),
__E_VidMbpsAreLocked = static_cast<int32_t>(0xc0370019),
__E_VidMessageQueueClosed = static_cast<int32_t>(0xc037001a),
__E_VidVirtualProcessorLimitExceeded = static_cast<int32_t>(0xc037001b),
__E_VidStopPending = static_cast<int32_t>(0xc037001c),
__E_VidInvalidProcessorState = static_cast<int32_t>(0xc037001d),
__E_VidExceededKmContextCountLimit = static_cast<int32_t>(0xc037001e),
__E_VidKmInterfaceAlreadyInitialized = static_cast<int32_t>(0xc037001f),
__E_VidMbPropertyAlreadySetReset = static_cast<int32_t>(0xc0370020),
__E_VidMmioRangeDestroyed = static_cast<int32_t>(0xc0370021),
__E_VidInvalidChildGpaPageSet = static_cast<int32_t>(0xc0370022),
__E_VidReservePageSetIsBeingUsed = static_cast<int32_t>(0xc0370023),
__E_VidReservePageSetTooSmall = static_cast<int32_t>(0xc0370024),
__E_VidMbpAlreadyLockedUsingReservedPage = static_cast<int32_t>(0xc0370025),
__E_VidMbpCountExceededLimit = static_cast<int32_t>(0xc0370026),
__E_VidSavedStateCorrupt = static_cast<int32_t>(0xc0370027),
__E_VidSavedStateUnrecognizedItem = static_cast<int32_t>(0xc0370028),
__E_VidSavedStateIncompatible = static_cast<int32_t>(0xc0370029),
__E_VidRemoteNodeParentGpaPagesUsed = static_cast<int32_t>(0x80370001),
__E_VolmgrIncompleteRegeneration = static_cast<int32_t>(0x80380001),
__E_VolmgrIncompleteDiskMigration = static_cast<int32_t>(0x80380002),
__E_VolmgrDatabaseFull = static_cast<int32_t>(0xc0380001),
__E_VolmgrDiskConfigurationCorrupted = static_cast<int32_t>(0xc0380002),
__E_VolmgrDiskConfigurationNotInSync = static_cast<int32_t>(0xc0380003),
__E_VolmgrPackConfigUpdateFailed = static_cast<int32_t>(0xc0380004),
__E_VolmgrDiskContainsNonSimpleVolume = static_cast<int32_t>(0xc0380005),
__E_VolmgrDiskDuplicate = static_cast<int32_t>(0xc0380006),
__E_VolmgrDiskDynamic = static_cast<int32_t>(0xc0380007),
__E_VolmgrDiskIdInvalid = static_cast<int32_t>(0xc0380008),
__E_VolmgrDiskInvalid = static_cast<int32_t>(0xc0380009),
__E_VolmgrDiskLastVoter = static_cast<int32_t>(0xc038000a),
__E_VolmgrDiskLayoutInvalid = static_cast<int32_t>(0xc038000b),
__E_VolmgrDiskLayoutNonBasicBetweenBasicPartitions = static_cast<int32_t>(0xc038000c),
__E_VolmgrDiskLayoutNotCylinderAligned = static_cast<int32_t>(0xc038000d),
__E_VolmgrDiskLayoutPartitionsTooSmall = static_cast<int32_t>(0xc038000e),
__E_VolmgrDiskLayoutPrimaryBetweenLogicalPartitions = static_cast<int32_t>(0xc038000f),
__E_VolmgrDiskLayoutTooManyPartitions = static_cast<int32_t>(0xc0380010),
__E_VolmgrDiskMissing = static_cast<int32_t>(0xc0380011),
__E_VolmgrDiskNotEmpty = static_cast<int32_t>(0xc0380012),
__E_VolmgrDiskNotEnoughSpace = static_cast<int32_t>(0xc0380013),
__E_VolmgrDiskRevectoringFailed = static_cast<int32_t>(0xc0380014),
__E_VolmgrDiskSectorSizeInvalid = static_cast<int32_t>(0xc0380015),
__E_VolmgrDiskSetNotContained = static_cast<int32_t>(0xc0380016),
__E_VolmgrDiskUsedByMultipleMembers = static_cast<int32_t>(0xc0380017),
__E_VolmgrDiskUsedByMultiplePlexes = static_cast<int32_t>(0xc0380018),
__E_VolmgrDynamicDiskNotSupported = static_cast<int32_t>(0xc0380019),
__E_VolmgrExtentAlreadyUsed = static_cast<int32_t>(0xc038001a),
__E_VolmgrExtentNotContiguous = static_cast<int32_t>(0xc038001b),
__E_VolmgrExtentNotInPublicRegion = static_cast<int32_t>(0xc038001c),
__E_VolmgrExtentNotSectorAligned = static_cast<int32_t>(0xc038001d),
__E_VolmgrExtentOverlapsEbrPartition = static_cast<int32_t>(0xc038001e),
__E_VolmgrExtentVolumeLengthsDoNotMatch = static_cast<int32_t>(0xc038001f),
__E_VolmgrFaultTolerantNotSupported = static_cast<int32_t>(0xc0380020),
__E_VolmgrInterleaveLengthInvalid = static_cast<int32_t>(0xc0380021),
__E_VolmgrMaximumRegisteredUsers = static_cast<int32_t>(0xc0380022),
__E_VolmgrMemberInSync = static_cast<int32_t>(0xc0380023),
__E_VolmgrMemberIndexDuplicate = static_cast<int32_t>(0xc0380024),
__E_VolmgrMemberIndexInvalid = static_cast<int32_t>(0xc0380025),
__E_VolmgrMemberMissing = static_cast<int32_t>(0xc0380026),
__E_VolmgrMemberNotDetached = static_cast<int32_t>(0xc0380027),
__E_VolmgrMemberRegenerating = static_cast<int32_t>(0xc0380028),
__E_VolmgrAllDisksFailed = static_cast<int32_t>(0xc0380029),
__E_VolmgrNoRegisteredUsers = static_cast<int32_t>(0xc038002a),
__E_VolmgrNoSuchUser = static_cast<int32_t>(0xc038002b),
__E_VolmgrNotificationReset = static_cast<int32_t>(0xc038002c),
__E_VolmgrNumberOfMembersInvalid = static_cast<int32_t>(0xc038002d),
__E_VolmgrNumberOfPlexesInvalid = static_cast<int32_t>(0xc038002e),
__E_VolmgrPackDuplicate = static_cast<int32_t>(0xc038002f),
__E_VolmgrPackIdInvalid = static_cast<int32_t>(0xc0380030),
__E_VolmgrPackInvalid = static_cast<int32_t>(0xc0380031),
__E_VolmgrPackNameInvalid = static_cast<int32_t>(0xc0380032),
__E_VolmgrPackOffline = static_cast<int32_t>(0xc0380033),
__E_VolmgrPackHasQuorum = static_cast<int32_t>(0xc0380034),
__E_VolmgrPackWithoutQuorum = static_cast<int32_t>(0xc0380035),
__E_VolmgrPartitionStyleInvalid = static_cast<int32_t>(0xc0380036),
__E_VolmgrPartitionUpdateFailed = static_cast<int32_t>(0xc0380037),
__E_VolmgrPlexInSync = static_cast<int32_t>(0xc0380038),
__E_VolmgrPlexIndexDuplicate = static_cast<int32_t>(0xc0380039),
__E_VolmgrPlexIndexInvalid = static_cast<int32_t>(0xc038003a),
__E_VolmgrPlexLastActive = static_cast<int32_t>(0xc038003b),
__E_VolmgrPlexMissing = static_cast<int32_t>(0xc038003c),
__E_VolmgrPlexRegenerating = static_cast<int32_t>(0xc038003d),
__E_VolmgrPlexTypeInvalid = static_cast<int32_t>(0xc038003e),
__E_VolmgrPlexNotRaid5 = static_cast<int32_t>(0xc038003f),
__E_VolmgrPlexNotSimple = static_cast<int32_t>(0xc0380040),
__E_VolmgrStructureSizeInvalid = static_cast<int32_t>(0xc0380041),
__E_VolmgrTooManyNotificationRequests = static_cast<int32_t>(0xc0380042),
__E_VolmgrTransactionInProgress = static_cast<int32_t>(0xc0380043),
__E_VolmgrUnexpectedDiskLayoutChange = static_cast<int32_t>(0xc0380044),
__E_VolmgrVolumeContainsMissingDisk = static_cast<int32_t>(0xc0380045),
__E_VolmgrVolumeIdInvalid = static_cast<int32_t>(0xc0380046),
__E_VolmgrVolumeLengthInvalid = static_cast<int32_t>(0xc0380047),
__E_VolmgrVolumeLengthNotSectorSizeMultiple = static_cast<int32_t>(0xc0380048),
__E_VolmgrVolumeNotMirrored = static_cast<int32_t>(0xc0380049),
__E_VolmgrVolumeNotRetained = static_cast<int32_t>(0xc038004a),
__E_VolmgrVolumeOffline = static_cast<int32_t>(0xc038004b),
__E_VolmgrVolumeRetained = static_cast<int32_t>(0xc038004c),
__E_VolmgrNumberOfExtentsInvalid = static_cast<int32_t>(0xc038004d),
__E_VolmgrDifferentSectorSize = static_cast<int32_t>(0xc038004e),
__E_VolmgrBadBootDisk = static_cast<int32_t>(0xc038004f),
__E_VolmgrPackConfigOffline = static_cast<int32_t>(0xc0380050),
__E_VolmgrPackConfigOnline = static_cast<int32_t>(0xc0380051),
__E_VolmgrNotPrimaryPack = static_cast<int32_t>(0xc0380052),
__E_VolmgrPackLogUpdateFailed = static_cast<int32_t>(0xc0380053),
__E_VolmgrNumberOfDisksInPlexInvalid = static_cast<int32_t>(0xc0380054),
__E_VolmgrNumberOfDisksInMemberInvalid = static_cast<int32_t>(0xc0380055),
__E_VolmgrVolumeMirrored = static_cast<int32_t>(0xc0380056),
__E_VolmgrPlexNotSimpleSpanned = static_cast<int32_t>(0xc0380057),
__E_VolmgrNoValidLogCopies = static_cast<int32_t>(0xc0380058),
__E_VolmgrPrimaryPackPresent = static_cast<int32_t>(0xc0380059),
__E_VolmgrNumberOfDisksInvalid = static_cast<int32_t>(0xc038005a),
__E_VolmgrMirrorNotSupported = static_cast<int32_t>(0xc038005b),
__E_VolmgrRaid5NotSupported = static_cast<int32_t>(0xc038005c),
__E_BcdNotAllEntriesImported = static_cast<int32_t>(0x80390001),
__E_BcdTooManyElements = static_cast<int32_t>(0xc0390002),
__E_BcdNotAllEntriesSynchronized = static_cast<int32_t>(0x80390003),
__E_VhdDriveFooterMissing = static_cast<int32_t>(0xc03a0001),
__E_VhdDriveFooterChecksumMismatch = static_cast<int32_t>(0xc03a0002),
__E_VhdDriveFooterCorrupt = static_cast<int32_t>(0xc03a0003),
__E_VhdFormatUnknown = static_cast<int32_t>(0xc03a0004),
__E_VhdFormatUnsupportedVersion = static_cast<int32_t>(0xc03a0005),
__E_VhdSparseHeaderChecksumMismatch = static_cast<int32_t>(0xc03a0006),
__E_VhdSparseHeaderUnsupportedVersion = static_cast<int32_t>(0xc03a0007),
__E_VhdSparseHeaderCorrupt = static_cast<int32_t>(0xc03a0008),
__E_VhdBlockAllocationFailure = static_cast<int32_t>(0xc03a0009),
__E_VhdBlockAllocationTableCorrupt = static_cast<int32_t>(0xc03a000a),
__E_VhdInvalidBlockSize = static_cast<int32_t>(0xc03a000b),
__E_VhdBitmapMismatch = static_cast<int32_t>(0xc03a000c),
__E_VhdParentVhdNotFound = static_cast<int32_t>(0xc03a000d),
__E_VhdChildParentIdMismatch = static_cast<int32_t>(0xc03a000e),
__E_VhdChildParentTimestampMismatch = static_cast<int32_t>(0xc03a000f),
__E_VhdMetadataReadFailure = static_cast<int32_t>(0xc03a0010),
__E_VhdMetadataWriteFailure = static_cast<int32_t>(0xc03a0011),
__E_VhdInvalidSize = static_cast<int32_t>(0xc03a0012),
__E_VhdInvalidFileSize = static_cast<int32_t>(0xc03a0013),
__E_VirtdiskProviderNotFound = static_cast<int32_t>(0xc03a0014),
__E_VirtdiskNotVirtualDisk = static_cast<int32_t>(0xc03a0015),
__E_VhdParentVhdAccessDenied = static_cast<int32_t>(0xc03a0016),
__E_VhdChildParentSizeMismatch = static_cast<int32_t>(0xc03a0017),
__E_VhdDifferencingChainCycleDetected = static_cast<int32_t>(0xc03a0018),
__E_VhdDifferencingChainErrorInParent = static_cast<int32_t>(0xc03a0019),
__E_VirtualDiskLimitation = static_cast<int32_t>(0xc03a001a),
__E_VhdInvalidType = static_cast<int32_t>(0xc03a001b),
__E_VhdInvalidState = static_cast<int32_t>(0xc03a001c),
__E_VirtdiskUnsupportedDiskSectorSize = static_cast<int32_t>(0xc03a001d),
__E_VirtdiskDiskAlreadyOwned = static_cast<int32_t>(0xc03a001e),
__E_VirtdiskDiskOnlineAndWritable = static_cast<int32_t>(0xc03a001f),
__E_CtlogTrackingNotInitialized = static_cast<int32_t>(0xc03a0020),
__E_CtlogLogfileSizeExceededMaxsize = static_cast<int32_t>(0xc03a0021),
__E_CtlogVhdChangedOffline = static_cast<int32_t>(0xc03a0022),
__E_CtlogInvalidTrackingState = static_cast<int32_t>(0xc03a0023),
__E_CtlogInconsistentTrackingFile = static_cast<int32_t>(0xc03a0024),
__E_VhdResizeWouldTruncateData = static_cast<int32_t>(0xc03a0025),
__E_VhdCouldNotComputeMinimumVirtualSize = static_cast<int32_t>(0xc03a0026),
__E_VhdAlreadyAtOrBelowMinimumVirtualSize = static_cast<int32_t>(0xc03a0027),
__E_VhdMetadataFull = static_cast<int32_t>(0xc03a0028),
__E_QueryStorageError = static_cast<int32_t>(0x803a0001),
__E_SpacesPoolWasDeleted = static_cast<int32_t>(0xe70001),
__E_SpacesResiliencyTypeInvalid = static_cast<int32_t>(0x80e70003),
__E_SpacesDriveSectorSizeInvalid = static_cast<int32_t>(0x80e70004),
__E_SpacesDriveRedundancyInvalid = static_cast<int32_t>(0x80e70006),
__E_SpacesNumberOfDataCopiesInvalid = static_cast<int32_t>(0x80e70007),
__E_SpacesParityLayoutInvalid = static_cast<int32_t>(0x80e70008),
__E_SpacesInterleaveLengthInvalid = static_cast<int32_t>(0x80e70009),
__E_SpacesNumberOfColumnsInvalid = static_cast<int32_t>(0x80e7000a),
__E_SpacesNotEnoughDrives = static_cast<int32_t>(0x80e7000b),
__E_VolsnapBootfileNotValid = static_cast<int32_t>(0x80820001),
__E_DbgCreateProcessFailureLockdown = static_cast<int32_t>(0x80b00001),
__E_DbgAttachProcessFailureLockdown = static_cast<int32_t>(0x80b00002),
__E_DbgConnectServerFailureLockdown = static_cast<int32_t>(0x80b00003),
__E_DbgStartServerFailureLockdown = static_cast<int32_t>(0x80b00004),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __wNofxGYQJONbgxWwDDeHvqBVcBYM_Unwrapped () const noexcept {
return static_cast<__wNofxGYQJONbgxWwDDeHvqBVcBYM_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr wNofxGYQJONbgxWwDDeHvqBVcBYM() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr wNofxGYQJONbgxWwDDeHvqBVcBYM(int32_t  value__) noexcept;

/// @brief Field AbandonHiberfile value: I32(787)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AbandonHiberfile;

/// @brief Field AbandonedWait0 value: I32(735)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AbandonedWait0;

/// @brief Field AbandonedWait63 value: I32(736)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AbandonedWait63;

/// @brief Field AbiosError value: I32(538)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AbiosError;

/// @brief Field AccessAuditByPolicy value: I32(785)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessAuditByPolicy;

/// @brief Field AccessDenied value: I32(5)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessDenied;

/// @brief Field AccessDisabledByPolicy value: I32(1260)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessDisabledByPolicy;

/// @brief Field AccessDisabledNoSaferUiByPolicy value: I32(786)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessDisabledNoSaferUiByPolicy;

/// @brief Field AccessDisabledWebblade value: I32(1277)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessDisabledWebblade;

/// @brief Field AccessDisabledWebbladeTamper value: I32(1278)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccessDisabledWebbladeTamper;

/// @brief Field AccountDisabled value: I32(1331)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccountDisabled;

/// @brief Field AccountExpired value: I32(1793)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccountExpired;

/// @brief Field AccountLockedOut value: I32(1909)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccountLockedOut;

/// @brief Field AccountRestriction value: I32(1327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AccountRestriction;

/// @brief Field AcpiError value: I32(669)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AcpiError;

/// @brief Field ActivationCountExceeded value: I32(7059)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ActivationCountExceeded;

/// @brief Field ActiveConnections value: I32(2402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ActiveConnections;

/// @brief Field AdapHdwErr value: I32(57)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AdapHdwErr;

/// @brief Field AddressAlreadyAssociated value: I32(1227)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AddressAlreadyAssociated;

/// @brief Field AddressNotAssociated value: I32(1228)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AddressNotAssociated;

/// @brief Field AdvancedInstallerFailed value: I32(14099)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AdvancedInstallerFailed;

/// @brief Field Alerted value: I32(739)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Alerted;

/// @brief Field AliasExists value: I32(1379)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AliasExists;

/// @brief Field AllNodesNotAvailable value: I32(5037)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AllNodesNotAvailable;

/// @brief Field AllSidsFiltered value: I32(-1073151998)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AllSidsFiltered;

/// @brief Field AllUserTrustQuotaExceeded value: I32(1933)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AllUserTrustQuotaExceeded;

/// @brief Field AllocateBucket value: I32(602)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AllocateBucket;

/// @brief Field AllottedSpaceExceeded value: I32(1344)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AllottedSpaceExceeded;

/// @brief Field AlreadyAssigned value: I32(85)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyAssigned;

/// @brief Field AlreadyExists value: I32(183)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyExists;

/// @brief Field AlreadyFiber value: I32(1280)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyFiber;

/// @brief Field AlreadyInitialized value: I32(1247)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyInitialized;

/// @brief Field AlreadyRegistered value: I32(1242)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyRegistered;

/// @brief Field AlreadyRunningLkg value: I32(1074)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyRunningLkg;

/// @brief Field AlreadyThread value: I32(1281)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyThread;

/// @brief Field AlreadyWaiting value: I32(1904)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyWaiting;

/// @brief Field AlreadyWin32 value: I32(719)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AlreadyWin32;

/// @brief Field AmbiguousSystemDevice value: I32(15250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AmbiguousSystemDevice;

/// @brief Field ApiUnavailable value: I32(15841)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ApiUnavailable;

/// @brief Field AppDataCorrupt value: I32(4402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppDataCorrupt;

/// @brief Field AppDataExpired value: I32(4401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppDataExpired;

/// @brief Field AppDataLimitExceeded value: I32(4403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppDataLimitExceeded;

/// @brief Field AppDataNotFound value: I32(4400)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppDataNotFound;

/// @brief Field AppDataRebootRequired value: I32(4404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppDataRebootRequired;

/// @brief Field AppHang value: I32(1298)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppHang;

/// @brief Field AppInitFailure value: I32(575)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppInitFailure;

/// @brief Field AppWrongOs value: I32(1151)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppWrongOs;

/// @brief Field AppcontainerRequired value: I32(4251)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppcontainerRequired;

/// @brief Field ApphelpBlock value: I32(1259)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ApphelpBlock;

/// @brief Field AppxIntegrityFailureClrNgen value: I32(15624)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AppxIntegrityFailureClrNgen;

/// @brief Field ArbitrationUnhandled value: I32(723)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ArbitrationUnhandled;

/// @brief Field ArenaTrashed value: I32(7)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ArenaTrashed;

/// @brief Field ArithmeticOverflow value: I32(534)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ArithmeticOverflow;

/// @brief Field AssertionFailure value: I32(668)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AssertionFailure;

/// @brief Field AtomicLocksNotSupported value: I32(174)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AtomicLocksNotSupported;

/// @brief Field AuditFailed value: I32(606)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AuditFailed;

/// @brief Field AuditingDisabled value: I32(-1073151999)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AuditingDisabled;

/// @brief Field AuthenticationFirewallFailed value: I32(1935)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AuthenticationFirewallFailed;

/// @brief Field AuthipFailure value: I32(1469)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AuthipFailure;

/// @brief Field AutodatasegExceeds64k value: I32(199)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const AutodatasegExceeds64k;

/// @brief Field BackupController value: I32(586)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BackupController;

/// @brief Field BadAccessorFlags value: I32(773)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadAccessorFlags;

/// @brief Field BadArguments value: I32(160)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadArguments;

/// @brief Field BadClusters value: I32(6849)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadClusters;

/// @brief Field BadCommand value: I32(22)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadCommand;

/// @brief Field BadCompressionBuffer value: I32(605)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadCompressionBuffer;

/// @brief Field BadConfiguration value: I32(1610)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadConfiguration;

/// @brief Field BadCurrentDirectory value: I32(703)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadCurrentDirectory;

/// @brief Field BadDescriptorFormat value: I32(1361)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDescriptorFormat;

/// @brief Field BadDevType value: I32(66)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDevType;

/// @brief Field BadDevice value: I32(1200)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDevice;

/// @brief Field BadDevicePath value: I32(330)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDevicePath;

/// @brief Field BadDllEntrypoint value: I32(609)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDllEntrypoint;

/// @brief Field BadDriver value: I32(2001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDriver;

/// @brief Field BadDriverLevel value: I32(119)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadDriverLevel;

/// @brief Field BadEnvironment value: I32(10)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadEnvironment;

/// @brief Field BadExeFormat value: I32(193)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadExeFormat;

/// @brief Field BadFileType value: I32(222)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadFileType;

/// @brief Field BadFormat value: I32(11)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadFormat;

/// @brief Field BadFunctionTable value: I32(559)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadFunctionTable;

/// @brief Field BadImpersonationLevel value: I32(1346)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadImpersonationLevel;

/// @brief Field BadInheritanceAcl value: I32(1340)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadInheritanceAcl;

/// @brief Field BadLength value: I32(24)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadLength;

/// @brief Field BadLogonSessionState value: I32(1365)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadLogonSessionState;

/// @brief Field BadMcfgTable value: I32(791)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadMcfgTable;

/// @brief Field BadNetName value: I32(67)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadNetName;

/// @brief Field BadNetResp value: I32(58)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadNetResp;

/// @brief Field BadNetpath value: I32(53)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadNetpath;

/// @brief Field BadPathname value: I32(161)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadPathname;

/// @brief Field BadPipe value: I32(230)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadPipe;

/// @brief Field BadProfile value: I32(1206)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadProfile;

/// @brief Field BadProvider value: I32(1204)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadProvider;

/// @brief Field BadQuerySyntax value: I32(1615)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadQuerySyntax;

/// @brief Field BadRecoveryPolicy value: I32(6012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadRecoveryPolicy;

/// @brief Field BadRemAdap value: I32(60)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadRemAdap;

/// @brief Field BadServiceEntrypoint value: I32(610)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadServiceEntrypoint;

/// @brief Field BadStack value: I32(543)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadStack;

/// @brief Field BadThreadidAddr value: I32(159)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadThreadidAddr;

/// @brief Field BadTokenType value: I32(1349)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadTokenType;

/// @brief Field BadUnit value: I32(20)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadUnit;

/// @brief Field BadUserProfile value: I32(1253)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadUserProfile;

/// @brief Field BadUsername value: I32(2202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadUsername;

/// @brief Field BadValidationClass value: I32(1348)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BadValidationClass;

/// @brief Field Baddb value: I32(1009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Baddb;

/// @brief Field Badkey value: I32(1010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Badkey;

/// @brief Field Badstartposition value: I32(778)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Badstartposition;

/// @brief Field BcdNotAllEntriesImported value: I32(-2143748095)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BcdNotAllEntriesImported;

/// @brief Field BcdNotAllEntriesSynchronized value: I32(-2143748093)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BcdNotAllEntriesSynchronized;

/// @brief Field BcdTooManyElements value: I32(-1070006270)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BcdTooManyElements;

/// @brief Field BeginningOfMedia value: I32(1102)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BeginningOfMedia;

/// @brief Field BeyondVdl value: I32(1289)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BeyondVdl;

/// @brief Field BiosFailedToConnectInterrupt value: I32(585)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BiosFailedToConnectInterrupt;

/// @brief Field BizrulesNotEnabled value: I32(-1073151997)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BizrulesNotEnabled;

/// @brief Field BootAlreadyAccepted value: I32(1076)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BootAlreadyAccepted;

/// @brief Field BrokenPipe value: I32(109)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BrokenPipe;

/// @brief Field BufferAllZeros value: I32(754)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BufferAllZeros;

/// @brief Field BufferOverflow value: I32(111)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BufferOverflow;

/// @brief Field BusReset value: I32(1111)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BusReset;

/// @brief Field Busy value: I32(170)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Busy;

/// @brief Field BusyDrive value: I32(142)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const BusyDrive;

/// @brief Field CachePageLocked value: I32(752)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CachePageLocked;

/// @brief Field CallNotImplemented value: I32(120)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CallNotImplemented;

/// @brief Field CallbackPopStack value: I32(768)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CallbackPopStack;

/// @brief Field CallbackSuppliedInvalidData value: I32(1273)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CallbackSuppliedInvalidData;

/// @brief Field CanNotComplete value: I32(1003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CanNotComplete;

/// @brief Field CanNotDelLocalWins value: I32(4001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CanNotDelLocalWins;

/// @brief Field CancelViolation value: I32(173)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CancelViolation;

/// @brief Field Cancelled value: I32(1223)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cancelled;

/// @brief Field CannotAbortTransactions value: I32(6848)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotAbortTransactions;

/// @brief Field CannotAcceptTransactedWork value: I32(6847)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotAcceptTransactedWork;

/// @brief Field CannotBreakOplock value: I32(802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotBreakOplock;

/// @brief Field CannotCopy value: I32(266)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotCopy;

/// @brief Field CannotDetectDriverFailure value: I32(1080)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotDetectDriverFailure;

/// @brief Field CannotDetectProcessAbort value: I32(1081)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotDetectProcessAbort;

/// @brief Field CannotExecuteFileInTransaction value: I32(6838)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotExecuteFileInTransaction;

/// @brief Field CannotFindWndClass value: I32(1407)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotFindWndClass;

/// @brief Field CannotGrantRequestedOplock value: I32(801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotGrantRequestedOplock;

/// @brief Field CannotImpersonate value: I32(1368)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotImpersonate;

/// @brief Field CannotLoadRegistryFile value: I32(589)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotLoadRegistryFile;

/// @brief Field CannotMake value: I32(82)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotMake;

/// @brief Field CannotOpenProfile value: I32(1205)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotOpenProfile;

/// @brief Field CannotSwitchRunlevel value: I32(15400)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CannotSwitchRunlevel;

/// @brief Field CantAccessDomainInfo value: I32(1351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantAccessDomainInfo;

/// @brief Field CantAccessFile value: I32(1920)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantAccessFile;

/// @brief Field CantBreakTransactionalDependency value: I32(6824)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantBreakTransactionalDependency;

/// @brief Field CantCreateMoreStreamMiniversions value: I32(6812)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantCreateMoreStreamMiniversions;

/// @brief Field CantCrossRmBoundary value: I32(6825)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantCrossRmBoundary;

/// @brief Field CantDeleteLastItem value: I32(4335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantDeleteLastItem;

/// @brief Field CantDisableMandatory value: I32(1310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantDisableMandatory;

/// @brief Field CantEnableDenyOnly value: I32(629)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantEnableDenyOnly;

/// @brief Field CantEvictActiveNode value: I32(5009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantEvictActiveNode;

/// @brief Field CantOpenAnonymous value: I32(1347)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantOpenAnonymous;

/// @brief Field CantOpenMiniversionWithModifyIntent value: I32(6811)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantOpenMiniversionWithModifyIntent;

/// @brief Field CantRecoverWithHandleOpen value: I32(6818)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantRecoverWithHandleOpen;

/// @brief Field CantResolveFilename value: I32(1921)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantResolveFilename;

/// @brief Field CantTerminateSelf value: I32(555)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantTerminateSelf;

/// @brief Field CantWait value: I32(554)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CantWait;

/// @brief Field Cantfetchbackwards value: I32(770)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cantfetchbackwards;

/// @brief Field Cantopen value: I32(1011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cantopen;

/// @brief Field Cantread value: I32(1012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cantread;

/// @brief Field Cantscrollbackwards value: I32(771)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cantscrollbackwards;

/// @brief Field Cantwrite value: I32(1013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Cantwrite;

/// @brief Field CardbusNotSupported value: I32(724)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CardbusNotSupported;

/// @brief Field CheckingFileSystem value: I32(712)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CheckingFileSystem;

/// @brief Field CheckoutRequired value: I32(221)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CheckoutRequired;

/// @brief Field ChildMustBeVolatile value: I32(1021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ChildMustBeVolatile;

/// @brief Field ChildNotComplete value: I32(129)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ChildNotComplete;

/// @brief Field ChildWindowMenu value: I32(1436)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ChildWindowMenu;

/// @brief Field CircularDependency value: I32(1059)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CircularDependency;

/// @brief Field ClassAlreadyExists value: I32(1410)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClassAlreadyExists;

/// @brief Field ClassDoesNotExist value: I32(1411)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClassDoesNotExist;

/// @brief Field ClassHasWindows value: I32(1412)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClassHasWindows;

/// @brief Field CleanerCartridgeInstalled value: I32(4340)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CleanerCartridgeInstalled;

/// @brief Field CleanerCartridgeSpent value: I32(4333)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CleanerCartridgeSpent;

/// @brief Field CleanerSlotNotSet value: I32(4332)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CleanerSlotNotSet;

/// @brief Field CleanerSlotSet value: I32(4331)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CleanerSlotSet;

/// @brief Field ClientServerParametersInvalid value: I32(597)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClientServerParametersInvalid;

/// @brief Field ClipboardNotOpen value: I32(1418)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClipboardNotOpen;

/// @brief Field ClippingNotSupported value: I32(2005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClippingNotSupported;

/// @brief Field CluscfgAlreadyCommitted value: I32(5901)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CluscfgAlreadyCommitted;

/// @brief Field CluscfgRollbackFailed value: I32(5902)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CluscfgRollbackFailed;

/// @brief Field CluscfgSystemDiskDriveLetterConflict value: I32(5903)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CluscfgSystemDiskDriveLetterConflict;

/// @brief Field ClusterAffinityConflict value: I32(5971)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterAffinityConflict;

/// @brief Field ClusterBackupInProgress value: I32(5949)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterBackupInProgress;

/// @brief Field ClusterCannotReturnProperties value: I32(5968)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterCannotReturnProperties;

/// @brief Field ClusterCantCreateDupClusterName value: I32(5900)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterCantCreateDupClusterName;

/// @brief Field ClusterCantDeserializeData value: I32(5923)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterCantDeserializeData;

/// @brief Field ClusterDatabaseSeqmismatch value: I32(5083)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterDatabaseSeqmismatch;

/// @brief Field ClusterDatabaseTransactionInProgress value: I32(5918)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterDatabaseTransactionInProgress;

/// @brief Field ClusterDatabaseTransactionNotInProgress value: I32(5919)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterDatabaseTransactionNotInProgress;

/// @brief Field ClusterDiskNotConnected value: I32(5963)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterDiskNotConnected;

/// @brief Field ClusterEvictInvalidRequest value: I32(5939)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterEvictInvalidRequest;

/// @brief Field ClusterEvictWithoutCleanup value: I32(5896)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterEvictWithoutCleanup;

/// @brief Field ClusterGroupBusy value: I32(5944)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterGroupBusy;

/// @brief Field ClusterGroupMoving value: I32(5908)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterGroupMoving;

/// @brief Field ClusterGroupQueued value: I32(5959)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterGroupQueued;

/// @brief Field ClusterGroupSingletonResource value: I32(5941)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterGroupSingletonResource;

/// @brief Field ClusterGumNotLocker value: I32(5085)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterGumNotLocker;

/// @brief Field ClusterIncompatibleVersions value: I32(5075)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterIncompatibleVersions;

/// @brief Field ClusterInstanceIdMismatch value: I32(5893)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInstanceIdMismatch;

/// @brief Field ClusterInternalInvalidFunction value: I32(5912)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInternalInvalidFunction;

/// @brief Field ClusterInvalidIpv6Network value: I32(5926)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidIpv6Network;

/// @brief Field ClusterInvalidIpv6TunnelNetwork value: I32(5927)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidIpv6TunnelNetwork;

/// @brief Field ClusterInvalidNetwork value: I32(5054)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidNetwork;

/// @brief Field ClusterInvalidNetworkProvider value: I32(5049)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidNetworkProvider;

/// @brief Field ClusterInvalidNode value: I32(5039)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidNode;

/// @brief Field ClusterInvalidNodeWeight value: I32(5954)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidNodeWeight;

/// @brief Field ClusterInvalidRequest value: I32(5048)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidRequest;

/// @brief Field ClusterInvalidSecurityDescriptor value: I32(5946)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidSecurityDescriptor;

/// @brief Field ClusterInvalidStringFormat value: I32(5917)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidStringFormat;

/// @brief Field ClusterInvalidStringTermination value: I32(5916)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterInvalidStringTermination;

/// @brief Field ClusterIpaddrInUse value: I32(5057)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterIpaddrInUse;

/// @brief Field ClusterJoinAborted value: I32(5074)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterJoinAborted;

/// @brief Field ClusterJoinInProgress value: I32(5041)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterJoinInProgress;

/// @brief Field ClusterJoinNotInProgress value: I32(5053)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterJoinNotInProgress;

/// @brief Field ClusterLastInternalNetwork value: I32(5066)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterLastInternalNetwork;

/// @brief Field ClusterLocalNodeNotFound value: I32(5043)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterLocalNodeNotFound;

/// @brief Field ClusterMaxNodesInCluster value: I32(5934)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterMaxNodesInCluster;

/// @brief Field ClusterMaxnumOfResourcesExceeded value: I32(5076)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterMaxnumOfResourcesExceeded;

/// @brief Field ClusterMembershipHalt value: I32(5892)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterMembershipHalt;

/// @brief Field ClusterMembershipInvalidState value: I32(5890)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterMembershipInvalidState;

/// @brief Field ClusterMismatchedComputerAcctName value: I32(5905)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterMismatchedComputerAcctName;

/// @brief Field ClusterNetinterfaceExists value: I32(5046)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetinterfaceExists;

/// @brief Field ClusterNetinterfaceNotFound value: I32(5047)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetinterfaceNotFound;

/// @brief Field ClusterNetworkAlreadyOffline value: I32(5064)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkAlreadyOffline;

/// @brief Field ClusterNetworkAlreadyOnline value: I32(5063)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkAlreadyOnline;

/// @brief Field ClusterNetworkExists value: I32(5044)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkExists;

/// @brief Field ClusterNetworkHasDependents value: I32(5067)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkHasDependents;

/// @brief Field ClusterNetworkNotFound value: I32(5045)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkNotFound;

/// @brief Field ClusterNetworkNotFoundForIp value: I32(5894)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkNotFoundForIp;

/// @brief Field ClusterNetworkNotInternal value: I32(5060)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNetworkNotInternal;

/// @brief Field ClusterNoNetAdapters value: I32(5906)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNoNetAdapters;

/// @brief Field ClusterNoQuorum value: I32(5925)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNoQuorum;

/// @brief Field ClusterNoRpcPackagesRegistered value: I32(5081)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNoRpcPackagesRegistered;

/// @brief Field ClusterNoSecurityContext value: I32(5059)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNoSecurityContext;

/// @brief Field ClusterNodeAlreadyDown value: I32(5062)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeAlreadyDown;

/// @brief Field ClusterNodeAlreadyHasDfsRoot value: I32(5088)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeAlreadyHasDfsRoot;

/// @brief Field ClusterNodeAlreadyMember value: I32(5065)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeAlreadyMember;

/// @brief Field ClusterNodeAlreadyUp value: I32(5061)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeAlreadyUp;

/// @brief Field ClusterNodeDown value: I32(5050)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeDown;

/// @brief Field ClusterNodeDrainInProgress value: I32(5962)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeDrainInProgress;

/// @brief Field ClusterNodeExists value: I32(5040)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeExists;

/// @brief Field ClusterNodeNotFound value: I32(5042)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeNotFound;

/// @brief Field ClusterNodeNotMember value: I32(5052)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeNotMember;

/// @brief Field ClusterNodeNotPaused value: I32(5058)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeNotPaused;

/// @brief Field ClusterNodeNotReady value: I32(5072)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeNotReady;

/// @brief Field ClusterNodePaused value: I32(5070)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodePaused;

/// @brief Field ClusterNodeShuttingDown value: I32(5073)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeShuttingDown;

/// @brief Field ClusterNodeUnreachable value: I32(5051)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeUnreachable;

/// @brief Field ClusterNodeUp value: I32(5056)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNodeUp;

/// @brief Field ClusterNotInstalled value: I32(5932)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNotInstalled;

/// @brief Field ClusterNotSharedVolume value: I32(5945)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNotSharedVolume;

/// @brief Field ClusterNullData value: I32(5920)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterNullData;

/// @brief Field ClusterObjectAlreadyUsed value: I32(5936)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterObjectAlreadyUsed;

/// @brief Field ClusterOldVersion value: I32(5904)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterOldVersion;

/// @brief Field ClusterOwnerNotInPreflist value: I32(5082)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterOwnerNotInPreflist;

/// @brief Field ClusterParameterMismatch value: I32(5897)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterParameterMismatch;

/// @brief Field ClusterParameterOutOfBounds value: I32(5913)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterParameterOutOfBounds;

/// @brief Field ClusterPartialRead value: I32(5921)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterPartialRead;

/// @brief Field ClusterPartialSend value: I32(5914)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterPartialSend;

/// @brief Field ClusterPartialWrite value: I32(5922)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterPartialWrite;

/// @brief Field ClusterPoisoned value: I32(5907)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterPoisoned;

/// @brief Field ClusterPropertyDataTypeMismatch value: I32(5895)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterPropertyDataTypeMismatch;

/// @brief Field ClusterQuorumlogNotFound value: I32(5891)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterQuorumlogNotFound;

/// @brief Field ClusterRegistryInvalidFunction value: I32(5915)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterRegistryInvalidFunction;

/// @brief Field ClusterResnameNotFound value: I32(5080)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResnameNotFound;

/// @brief Field ClusterResourceConfigurationError value: I32(5943)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceConfigurationError;

/// @brief Field ClusterResourceContainsUnsupportedDiffAreaForSharedVolumes value: I32(5969)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceContainsUnsupportedDiffAreaForSharedVolumes;

/// @brief Field ClusterResourceIsInMaintenanceMode value: I32(5970)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceIsInMaintenanceMode;

/// @brief Field ClusterResourceIsReplicaVirtualMachine value: I32(5972)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceIsReplicaVirtualMachine;

/// @brief Field ClusterResourceLockedStatus value: I32(5960)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceLockedStatus;

/// @brief Field ClusterResourceProviderFailed value: I32(5942)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceProviderFailed;

/// @brief Field ClusterResourceTypeBusy value: I32(5909)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceTypeBusy;

/// @brief Field ClusterResourceTypeNotFound value: I32(5078)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceTypeNotFound;

/// @brief Field ClusterResourceVetoedCall value: I32(5955)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceVetoedCall;

/// @brief Field ClusterResourceVetoedMoveIncompatibleNodes value: I32(5953)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceVetoedMoveIncompatibleNodes;

/// @brief Field ClusterResourceVetoedMoveNotEnoughResourcesOnDestination value: I32(5957)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceVetoedMoveNotEnoughResourcesOnDestination;

/// @brief Field ClusterResourceVetoedMoveNotEnoughResourcesOnSource value: I32(5958)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourceVetoedMoveNotEnoughResourcesOnSource;

/// @brief Field ClusterResourcesMustBeOnlineOnTheSameNode value: I32(5933)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterResourcesMustBeOnlineOnTheSameNode;

/// @brief Field ClusterRestypeNotSupported value: I32(5079)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterRestypeNotSupported;

/// @brief Field ClusterRhsFailedInitialization value: I32(5931)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterRhsFailedInitialization;

/// @brief Field ClusterSharedVolumeFailoverNotAllowed value: I32(5961)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSharedVolumeFailoverNotAllowed;

/// @brief Field ClusterSharedVolumeNotRedirected value: I32(5967)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSharedVolumeNotRedirected;

/// @brief Field ClusterSharedVolumeRedirected value: I32(5966)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSharedVolumeRedirected;

/// @brief Field ClusterSharedVolumesInUse value: I32(5947)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSharedVolumesInUse;

/// @brief Field ClusterShuttingDown value: I32(5022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterShuttingDown;

/// @brief Field ClusterSingletonResource value: I32(5940)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSingletonResource;

/// @brief Field ClusterSystemConfigChanged value: I32(5077)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterSystemConfigChanged;

/// @brief Field ClusterTooManyNodes value: I32(5935)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterTooManyNodes;

/// @brief Field ClusterUseSharedVolumesApi value: I32(5948)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterUseSharedVolumesApi;

/// @brief Field ClusterWatchdogTerminating value: I32(5952)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterWatchdogTerminating;

/// @brief Field ClusterWrongOsVersion value: I32(5899)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterWrongOsVersion;

/// @brief Field ClusterlogChkpointNotFound value: I32(5032)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterlogChkpointNotFound;

/// @brief Field ClusterlogCorrupt value: I32(5029)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterlogCorrupt;

/// @brief Field ClusterlogExceedsMaxsize value: I32(5031)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterlogExceedsMaxsize;

/// @brief Field ClusterlogNotEnoughSpace value: I32(5033)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterlogNotEnoughSpace;

/// @brief Field ClusterlogRecordExceedsMaxsize value: I32(5030)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ClusterlogRecordExceedsMaxsize;

/// @brief Field ColorspaceMismatch value: I32(2021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ColorspaceMismatch;

/// @brief Field ComTaskStopPending value: I32(15501)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ComTaskStopPending;

/// @brief Field CommitmentLimit value: I32(1455)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CommitmentLimit;

/// @brief Field CommitmentMinimum value: I32(635)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CommitmentMinimum;

/// @brief Field CompressedFileNotSupported value: I32(335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CompressedFileNotSupported;

/// @brief Field CompressionDisabled value: I32(769)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CompressionDisabled;

/// @brief Field CompressionNotAllowedInTransaction value: I32(6850)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CompressionNotAllowedInTransaction;

/// @brief Field ConnectedOtherPassword value: I32(2108)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectedOtherPassword;

/// @brief Field ConnectedOtherPasswordDefault value: I32(2109)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectedOtherPasswordDefault;

/// @brief Field ConnectionAborted value: I32(1236)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionAborted;

/// @brief Field ConnectionActive value: I32(1230)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionActive;

/// @brief Field ConnectionCountLimit value: I32(1238)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionCountLimit;

/// @brief Field ConnectionInvalid value: I32(1229)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionInvalid;

/// @brief Field ConnectionRefused value: I32(1225)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionRefused;

/// @brief Field ConnectionUnavail value: I32(1201)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConnectionUnavail;

/// @brief Field ContentBlocked value: I32(1296)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ContentBlocked;

/// @brief Field ContextExpired value: I32(1931)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ContextExpired;

/// @brief Field Continue value: I32(1246)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Continue;

/// @brief Field ControlCExit value: I32(572)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ControlCExit;

/// @brief Field ControlIdNotFound value: I32(1421)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ControlIdNotFound;

/// @brief Field ControllingIeport value: I32(4329)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ControllingIeport;

/// @brief Field ConvertToLarge value: I32(600)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ConvertToLarge;

/// @brief Field CoreDriverPackageNotFound value: I32(3016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CoreDriverPackageNotFound;

/// @brief Field CoreResource value: I32(5026)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CoreResource;

/// @brief Field CorruptLogCleared value: I32(798)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptLogCleared;

/// @brief Field CorruptLogCorrupted value: I32(795)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptLogCorrupted;

/// @brief Field CorruptLogDeletedFull value: I32(797)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptLogDeletedFull;

/// @brief Field CorruptLogOverfull value: I32(794)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptLogOverfull;

/// @brief Field CorruptLogUnavailable value: I32(796)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptLogUnavailable;

/// @brief Field CorruptSystemFile value: I32(634)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CorruptSystemFile;

/// @brief Field CouldNotInterpret value: I32(552)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CouldNotInterpret;

/// @brief Field CouldNotResizeLog value: I32(6629)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CouldNotResizeLog;

/// @brief Field CounterTimeout value: I32(1121)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CounterTimeout;

/// @brief Field CrashDump value: I32(753)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CrashDump;

/// @brief Field Crc value: I32(23)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Crc;

/// @brief Field CreateFailed value: I32(1631)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CreateFailed;

/// @brief Field CredRequiresConfirmation value: I32(-2146865127)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CredRequiresConfirmation;

/// @brief Field CrmProtocolAlreadyExists value: I32(6710)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CrmProtocolAlreadyExists;

/// @brief Field CrmProtocolNotFound value: I32(6712)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CrmProtocolNotFound;

/// @brief Field CsEncryptionExistingEncryptedFile value: I32(6019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsEncryptionExistingEncryptedFile;

/// @brief Field CsEncryptionFileNotCse value: I32(6021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsEncryptionFileNotCse;

/// @brief Field CsEncryptionInvalidServerResponse value: I32(6017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsEncryptionInvalidServerResponse;

/// @brief Field CsEncryptionNewEncryptedFile value: I32(6020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsEncryptionNewEncryptedFile;

/// @brief Field CsEncryptionUnsupportedServer value: I32(6018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsEncryptionUnsupportedServer;

/// @brief Field CscshareOffline value: I32(1262)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CscshareOffline;

/// @brief Field CsvVolumeNotLocal value: I32(5951)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CsvVolumeNotLocal;

/// @brief Field CtlogInconsistentTrackingFile value: I32(-1069940700)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtlogInconsistentTrackingFile;

/// @brief Field CtlogInvalidTrackingState value: I32(-1069940701)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtlogInvalidTrackingState;

/// @brief Field CtlogLogfileSizeExceededMaxsize value: I32(-1069940703)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtlogLogfileSizeExceededMaxsize;

/// @brief Field CtlogTrackingNotInitialized value: I32(-1069940704)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtlogTrackingNotInitialized;

/// @brief Field CtlogVhdChangedOffline value: I32(-1069940702)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtlogVhdChangedOffline;

/// @brief Field CtxAccountRestriction value: I32(7064)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxAccountRestriction;

/// @brief Field CtxBadVideoMode value: I32(7025)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxBadVideoMode;

/// @brief Field CtxCannotMakeEventlogEntry value: I32(7005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxCannotMakeEventlogEntry;

/// @brief Field CtxCdmConnect value: I32(7066)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxCdmConnect;

/// @brief Field CtxCdmDisconnect value: I32(7067)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxCdmDisconnect;

/// @brief Field CtxClientLicenseInUse value: I32(7052)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxClientLicenseInUse;

/// @brief Field CtxClientLicenseNotSet value: I32(7053)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxClientLicenseNotSet;

/// @brief Field CtxClientQueryTimeout value: I32(7040)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxClientQueryTimeout;

/// @brief Field CtxClosePending value: I32(7007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxClosePending;

/// @brief Field CtxConsoleConnect value: I32(7042)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxConsoleConnect;

/// @brief Field CtxConsoleDisconnect value: I32(7041)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxConsoleDisconnect;

/// @brief Field CtxEncryptionLevelRequired value: I32(7061)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxEncryptionLevelRequired;

/// @brief Field CtxGraphicsInvalid value: I32(7035)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxGraphicsInvalid;

/// @brief Field CtxInvalidModemname value: I32(7010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxInvalidModemname;

/// @brief Field CtxInvalidPd value: I32(7002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxInvalidPd;

/// @brief Field CtxInvalidWd value: I32(7049)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxInvalidWd;

/// @brief Field CtxLicenseClientInvalid value: I32(7055)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxLicenseClientInvalid;

/// @brief Field CtxLicenseExpired value: I32(7056)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxLicenseExpired;

/// @brief Field CtxLicenseNotAvailable value: I32(7054)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxLicenseNotAvailable;

/// @brief Field CtxLogonDisabled value: I32(7037)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxLogonDisabled;

/// @brief Field CtxModemInfNotFound value: I32(7009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemInfNotFound;

/// @brief Field CtxModemResponseBusy value: I32(7015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseBusy;

/// @brief Field CtxModemResponseError value: I32(7011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseError;

/// @brief Field CtxModemResponseNoCarrier value: I32(7013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseNoCarrier;

/// @brief Field CtxModemResponseNoDialtone value: I32(7014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseNoDialtone;

/// @brief Field CtxModemResponseTimeout value: I32(7012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseTimeout;

/// @brief Field CtxModemResponseVoice value: I32(7016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxModemResponseVoice;

/// @brief Field CtxNoForceLogoff value: I32(7063)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxNoForceLogoff;

/// @brief Field CtxNoOutbuf value: I32(7008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxNoOutbuf;

/// @brief Field CtxNotConsole value: I32(7038)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxNotConsole;

/// @brief Field CtxPdNotFound value: I32(7003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxPdNotFound;

/// @brief Field CtxSecurityLayerError value: I32(7068)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxSecurityLayerError;

/// @brief Field CtxServiceNameCollision value: I32(7006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxServiceNameCollision;

/// @brief Field CtxSessionInUse value: I32(7062)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxSessionInUse;

/// @brief Field CtxShadowDenied value: I32(7044)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxShadowDenied;

/// @brief Field CtxShadowDisabled value: I32(7051)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxShadowDisabled;

/// @brief Field CtxShadowEndedByModeChange value: I32(7058)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxShadowEndedByModeChange;

/// @brief Field CtxShadowInvalid value: I32(7050)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxShadowInvalid;

/// @brief Field CtxShadowNotRunning value: I32(7057)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxShadowNotRunning;

/// @brief Field CtxTdError value: I32(7017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxTdError;

/// @brief Field CtxWdNotFound value: I32(7004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWdNotFound;

/// @brief Field CtxWinstationAccessDenied value: I32(7045)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationAccessDenied;

/// @brief Field CtxWinstationAlreadyExists value: I32(7023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationAlreadyExists;

/// @brief Field CtxWinstationBusy value: I32(7024)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationBusy;

/// @brief Field CtxWinstationNameInvalid value: I32(7001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationNameInvalid;

/// @brief Field CtxWinstationNotFound value: I32(7022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationNotFound;

/// @brief Field CtxWinstationsDisabled value: I32(7060)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CtxWinstationsDisabled;

/// @brief Field CurrentDirectory value: I32(16)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CurrentDirectory;

/// @brief Field CurrentDomainNotAllowed value: I32(1399)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CurrentDomainNotAllowed;

/// @brief Field CurrentTransactionNotValid value: I32(6714)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const CurrentTransactionNotValid;

/// @brief Field DataChecksumError value: I32(323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DataChecksumError;

/// @brief Field DataLostRepair value: I32(6843)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DataLostRepair;

/// @brief Field DataNotAccepted value: I32(592)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DataNotAccepted;

/// @brief Field DatabaseBackupCorrupt value: I32(5087)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DatabaseBackupCorrupt;

/// @brief Field DatabaseDoesNotExist value: I32(1065)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DatabaseDoesNotExist;

/// @brief Field DatabaseFailure value: I32(4313)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DatabaseFailure;

/// @brief Field DatabaseFull value: I32(4314)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DatabaseFull;

/// @brief Field DatatypeMismatch value: I32(1629)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DatatypeMismatch;

/// @brief Field DbgAttachProcessFailureLockdown value: I32(-2135949310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgAttachProcessFailureLockdown;

/// @brief Field DbgCommandException value: I32(697)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgCommandException;

/// @brief Field DbgConnectServerFailureLockdown value: I32(-2135949309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgConnectServerFailureLockdown;

/// @brief Field DbgContinue value: I32(767)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgContinue;

/// @brief Field DbgControlBreak value: I32(696)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgControlBreak;

/// @brief Field DbgControlC value: I32(693)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgControlC;

/// @brief Field DbgCreateProcessFailureLockdown value: I32(-2135949311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgCreateProcessFailureLockdown;

/// @brief Field DbgExceptionHandled value: I32(766)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgExceptionHandled;

/// @brief Field DbgExceptionNotHandled value: I32(688)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgExceptionNotHandled;

/// @brief Field DbgPrintexceptionC value: I32(694)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgPrintexceptionC;

/// @brief Field DbgReplyLater value: I32(689)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgReplyLater;

/// @brief Field DbgRipexception value: I32(695)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgRipexception;

/// @brief Field DbgStartServerFailureLockdown value: I32(-2135949308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgStartServerFailureLockdown;

/// @brief Field DbgTerminateProcess value: I32(692)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgTerminateProcess;

/// @brief Field DbgTerminateThread value: I32(691)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgTerminateThread;

/// @brief Field DbgUnableToProvideHandle value: I32(690)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DbgUnableToProvideHandle;

/// @brief Field DcNotFound value: I32(1425)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DcNotFound;

/// @brief Field DdeFail value: I32(1156)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DdeFail;

/// @brief Field DebugAttachFailed value: I32(590)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DebugAttachFailed;

/// @brief Field DebuggerInactive value: I32(1284)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DebuggerInactive;

/// @brief Field DecryptionFailed value: I32(6001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DecryptionFailed;

/// @brief Field DelayLoadFailed value: I32(1285)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DelayLoadFailed;

/// @brief Field DeletePending value: I32(303)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeletePending;

/// @brief Field DeletingExistingApplicationdataStoreFailed value: I32(15621)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeletingExistingApplicationdataStoreFailed;

/// @brief Field DeletingIcmXform value: I32(2019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeletingIcmXform;

/// @brief Field DependencyAlreadyExists value: I32(5003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependencyAlreadyExists;

/// @brief Field DependencyNotAllowed value: I32(5069)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependencyNotAllowed;

/// @brief Field DependencyNotFound value: I32(5002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependencyNotFound;

/// @brief Field DependencyTreeTooComplex value: I32(5929)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependencyTreeTooComplex;

/// @brief Field DependentResourceExists value: I32(5001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependentResourceExists;

/// @brief Field DependentResourcePropertyConflict value: I32(5924)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependentResourcePropertyConflict;

/// @brief Field DependentServicesRunning value: I32(1051)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DependentServicesRunning;

/// @brief Field DeploymentBlockedByPolicy value: I32(15617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeploymentBlockedByPolicy;

/// @brief Field DestinationElementFull value: I32(1161)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DestinationElementFull;

/// @brief Field DestroyObjectOfOtherThread value: I32(1435)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DestroyObjectOfOtherThread;

/// @brief Field DevNotExist value: I32(55)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DevNotExist;

/// @brief Field DeviceAlreadyAttached value: I32(548)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceAlreadyAttached;

/// @brief Field DeviceAlreadyRemembered value: I32(1202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceAlreadyRemembered;

/// @brief Field DeviceDoorOpen value: I32(1166)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceDoorOpen;

/// @brief Field DeviceEnumerationError value: I32(648)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceEnumerationError;

/// @brief Field DeviceFeatureNotSupported value: I32(316)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceFeatureNotSupported;

/// @brief Field DeviceInUse value: I32(2404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceInUse;

/// @brief Field DeviceNoResources value: I32(322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceNoResources;

/// @brief Field DeviceNotAvailable value: I32(4319)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceNotAvailable;

/// @brief Field DeviceNotConnected value: I32(1167)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceNotConnected;

/// @brief Field DeviceNotPartitioned value: I32(1107)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceNotPartitioned;

/// @brief Field DeviceReinitializationNeeded value: I32(1164)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceReinitializationNeeded;

/// @brief Field DeviceRemoved value: I32(1617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceRemoved;

/// @brief Field DeviceRequiresCleaning value: I32(1165)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceRequiresCleaning;

/// @brief Field DeviceSupportInProgress value: I32(171)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceSupportInProgress;

/// @brief Field DeviceUnreachable value: I32(321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DeviceUnreachable;

/// @brief Field DhcpAddressConflict value: I32(4100)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DhcpAddressConflict;

/// @brief Field DifferentServiceAccount value: I32(1079)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DifferentServiceAccount;

/// @brief Field DirEfsDisallowed value: I32(6010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirEfsDisallowed;

/// @brief Field DirNotEmpty value: I32(145)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirNotEmpty;

/// @brief Field DirNotRoot value: I32(144)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirNotRoot;

/// @brief Field DirectAccessHandle value: I32(130)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirectAccessHandle;

/// @brief Field Directory value: I32(267)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Directory;

/// @brief Field DirectoryNotRm value: I32(6803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirectoryNotRm;

/// @brief Field DirectoryNotSupported value: I32(336)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DirectoryNotSupported;

/// @brief Field Discarded value: I32(157)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Discarded;

/// @brief Field DiskChange value: I32(107)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskChange;

/// @brief Field DiskCorrupt value: I32(1393)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskCorrupt;

/// @brief Field DiskFull value: I32(112)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskFull;

/// @brief Field DiskNotCsvCapable value: I32(5964)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskNotCsvCapable;

/// @brief Field DiskOperationFailed value: I32(1127)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskOperationFailed;

/// @brief Field DiskQuotaExceeded value: I32(1295)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskQuotaExceeded;

/// @brief Field DiskRecalibrateFailed value: I32(1126)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskRecalibrateFailed;

/// @brief Field DiskRepairDisabled value: I32(780)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskRepairDisabled;

/// @brief Field DiskRepairRedirected value: I32(792)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskRepairRedirected;

/// @brief Field DiskRepairUnsuccessful value: I32(793)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskRepairUnsuccessful;

/// @brief Field DiskResetFailed value: I32(1128)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskResetFailed;

/// @brief Field DiskResourcesExhausted value: I32(314)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskResourcesExhausted;

/// @brief Field DiskTooFragmented value: I32(302)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DiskTooFragmented;

/// @brief Field DllInitFailed value: I32(1114)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DllInitFailed;

/// @brief Field DllInitFailedLogoff value: I32(624)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DllInitFailedLogoff;

/// @brief Field DllMightBeIncompatible value: I32(687)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DllMightBeIncompatible;

/// @brief Field DllMightBeInsecure value: I32(686)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DllMightBeInsecure;

/// @brief Field DllNotFound value: I32(1157)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DllNotFound;

/// @brief Field DomainControllerExists value: I32(1250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainControllerExists;

/// @brief Field DomainControllerNotFound value: I32(1908)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainControllerNotFound;

/// @brief Field DomainCtrlrConfigError value: I32(581)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainCtrlrConfigError;

/// @brief Field DomainExists value: I32(1356)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainExists;

/// @brief Field DomainLimitExceeded value: I32(1357)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainLimitExceeded;

/// @brief Field DomainSidSameAsLocalWorkstation value: I32(8644)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainSidSameAsLocalWorkstation;

/// @brief Field DomainTrustInconsistent value: I32(1810)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DomainTrustInconsistent;

/// @brief Field DowngradeDetected value: I32(1265)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DowngradeDetected;

/// @brief Field DriveLocked value: I32(108)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriveLocked;

/// @brief Field DriveMediaMismatch value: I32(4303)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriveMediaMismatch;

/// @brief Field DriverBlocked value: I32(1275)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverBlocked;

/// @brief Field DriverCancelTimeout value: I32(594)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverCancelTimeout;

/// @brief Field DriverDatabaseError value: I32(652)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverDatabaseError;

/// @brief Field DriverFailedPriorUnload value: I32(654)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverFailedPriorUnload;

/// @brief Field DriverFailedSleep value: I32(633)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverFailedSleep;

/// @brief Field DriverProcessTerminated value: I32(1291)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriverProcessTerminated;

/// @brief Field DriversLeakingLockedPages value: I32(729)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DriversLeakingLockedPages;

/// @brief Field DsAddReplicaInhibited value: I32(8302)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAddReplicaInhibited;

/// @brief Field DsAdminLimitExceeded value: I32(8228)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAdminLimitExceeded;

/// @brief Field DsAffectsMultipleDsas value: I32(8249)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAffectsMultipleDsas;

/// @brief Field DsAgCantHaveUniversalMember value: I32(8578)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAgCantHaveUniversalMember;

/// @brief Field DsAliasDerefProblem value: I32(8244)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAliasDerefProblem;

/// @brief Field DsAliasPointsToAlias value: I32(8336)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAliasPointsToAlias;

/// @brief Field DsAliasProblem value: I32(8241)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAliasProblem;

/// @brief Field DsAliasedObjMissing value: I32(8334)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAliasedObjMissing;

/// @brief Field DsAttAlreadyExists value: I32(8318)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttAlreadyExists;

/// @brief Field DsAttIsNotOnObj value: I32(8310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttIsNotOnObj;

/// @brief Field DsAttNotDefForClass value: I32(8317)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttNotDefForClass;

/// @brief Field DsAttNotDefInSchema value: I32(8303)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttNotDefInSchema;

/// @brief Field DsAttSchemaReqId value: I32(8399)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttSchemaReqId;

/// @brief Field DsAttSchemaReqSyntax value: I32(8416)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttSchemaReqSyntax;

/// @brief Field DsAttValAlreadyExists value: I32(8323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttValAlreadyExists;

/// @brief Field DsAttributeOrValueExists value: I32(8205)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttributeOrValueExists;

/// @brief Field DsAttributeOwnedBySam value: I32(8346)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttributeOwnedBySam;

/// @brief Field DsAttributeTypeUndefined value: I32(8204)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAttributeTypeUndefined;

/// @brief Field DsAuditFailure value: I32(8625)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAuditFailure;

/// @brief Field DsAuthMethodNotSupported value: I32(8231)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAuthMethodNotSupported;

/// @brief Field DsAuthUnknown value: I32(8234)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAuthUnknown;

/// @brief Field DsAuthorizationFailed value: I32(8599)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAuthorizationFailed;

/// @brief Field DsAuxClsTestFail value: I32(8389)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsAuxClsTestFail;

/// @brief Field DsBacklinkWithoutLink value: I32(8482)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBacklinkWithoutLink;

/// @brief Field DsBadAttSchemaSyntax value: I32(8400)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBadAttSchemaSyntax;

/// @brief Field DsBadHierarchyFile value: I32(8425)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBadHierarchyFile;

/// @brief Field DsBadInstanceType value: I32(8313)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBadInstanceType;

/// @brief Field DsBadNameSyntax value: I32(8335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBadNameSyntax;

/// @brief Field DsBadRdnAttIdSyntax value: I32(8392)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBadRdnAttIdSyntax;

/// @brief Field DsBuildHierarchyTableFailed value: I32(8426)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBuildHierarchyTableFailed;

/// @brief Field DsBusy value: I32(8206)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsBusy;

/// @brief Field DsCantAccessRemotePartOfAd value: I32(8585)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantAccessRemotePartOfAd;

/// @brief Field DsCantAddAttValues value: I32(8320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantAddAttValues;

/// @brief Field DsCantAddSystemOnly value: I32(8358)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantAddSystemOnly;

/// @brief Field DsCantAddToGc value: I32(8550)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantAddToGc;

/// @brief Field DsCantCacheAtt value: I32(8401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantCacheAtt;

/// @brief Field DsCantCacheClass value: I32(8402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantCacheClass;

/// @brief Field DsCantCreateInNondomainNc value: I32(8553)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantCreateInNondomainNc;

/// @brief Field DsCantCreateUnderSchema value: I32(8510)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantCreateUnderSchema;

/// @brief Field DsCantDelMasterCrossref value: I32(8375)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDelMasterCrossref;

/// @brief Field DsCantDelete value: I32(8398)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDelete;

/// @brief Field DsCantDeleteDsaObj value: I32(8340)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDeleteDsaObj;

/// @brief Field DsCantDemoteWithWriteableNc value: I32(8604)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDemoteWithWriteableNc;

/// @brief Field DsCantDerefAlias value: I32(8337)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDerefAlias;

/// @brief Field DsCantDeriveSpnForDeletedDomain value: I32(8603)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDeriveSpnForDeletedDomain;

/// @brief Field DsCantDeriveSpnWithoutServerRef value: I32(8589)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantDeriveSpnWithoutServerRef;

/// @brief Field DsCantFindDcForSrcDomain value: I32(8537)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantFindDcForSrcDomain;

/// @brief Field DsCantFindDsaObj value: I32(8419)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantFindDsaObj;

/// @brief Field DsCantFindExpectedNc value: I32(8420)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantFindExpectedNc;

/// @brief Field DsCantFindNcInCache value: I32(8421)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantFindNcInCache;

/// @brief Field DsCantMixMasterAndReps value: I32(8331)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMixMasterAndReps;

/// @brief Field DsCantModObjClass value: I32(8215)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantModObjClass;

/// @brief Field DsCantModPrimarygroupid value: I32(8506)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantModPrimarygroupid;

/// @brief Field DsCantModSystemOnly value: I32(8369)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantModSystemOnly;

/// @brief Field DsCantMoveAccountGroup value: I32(8498)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMoveAccountGroup;

/// @brief Field DsCantMoveAppBasicGroup value: I32(8608)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMoveAppBasicGroup;

/// @brief Field DsCantMoveAppQueryGroup value: I32(8609)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMoveAppQueryGroup;

/// @brief Field DsCantMoveDeletedObject value: I32(8489)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMoveDeletedObject;

/// @brief Field DsCantMoveResourceGroup value: I32(8499)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantMoveResourceGroup;

/// @brief Field DsCantOnNonLeaf value: I32(8213)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantOnNonLeaf;

/// @brief Field DsCantOnRdn value: I32(8214)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantOnRdn;

/// @brief Field DsCantRemMissingAtt value: I32(8324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRemMissingAtt;

/// @brief Field DsCantRemMissingAttVal value: I32(8325)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRemMissingAttVal;

/// @brief Field DsCantRemoveAttCache value: I32(8403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRemoveAttCache;

/// @brief Field DsCantRemoveClassCache value: I32(8404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRemoveClassCache;

/// @brief Field DsCantReplaceHiddenRec value: I32(8424)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantReplaceHiddenRec;

/// @brief Field DsCantRetrieveAtts value: I32(8481)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRetrieveAtts;

/// @brief Field DsCantRetrieveChild value: I32(8422)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRetrieveChild;

/// @brief Field DsCantRetrieveDn value: I32(8405)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRetrieveDn;

/// @brief Field DsCantRetrieveInstance value: I32(8407)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRetrieveInstance;

/// @brief Field DsCantRetrieveSd value: I32(8526)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantRetrieveSd;

/// @brief Field DsCantStart value: I32(8531)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantStart;

/// @brief Field DsCantTreeDeleteCriticalObj value: I32(8560)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantTreeDeleteCriticalObj;

/// @brief Field DsCantWithAcctGroupMembershps value: I32(8493)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCantWithAcctGroupMembershps;

/// @brief Field DsChildrenExist value: I32(8332)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsChildrenExist;

/// @brief Field DsClassMustBeConcrete value: I32(8359)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsClassMustBeConcrete;

/// @brief Field DsClassNotDsa value: I32(8343)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsClassNotDsa;

/// @brief Field DsClientLoop value: I32(8259)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsClientLoop;

/// @brief Field DsCodeInconsistency value: I32(8408)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCodeInconsistency;

/// @brief Field DsCompareFalse value: I32(8229)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCompareFalse;

/// @brief Field DsCompareTrue value: I32(8230)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCompareTrue;

/// @brief Field DsConfidentialityRequired value: I32(8237)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsConfidentialityRequired;

/// @brief Field DsConfigParamMissing value: I32(8427)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsConfigParamMissing;

/// @brief Field DsConstraintViolation value: I32(8239)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsConstraintViolation;

/// @brief Field DsConstructedAttMod value: I32(8475)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsConstructedAttMod;

/// @brief Field DsControlNotFound value: I32(8258)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsControlNotFound;

/// @brief Field DsCouldntContactFsmo value: I32(8367)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCouldntContactFsmo;

/// @brief Field DsCouldntIdentifyObjectsForTreeDelete value: I32(8503)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCouldntIdentifyObjectsForTreeDelete;

/// @brief Field DsCouldntLockTreeForDelete value: I32(8502)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCouldntLockTreeForDelete;

/// @brief Field DsCouldntUpdateSpns value: I32(8525)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCouldntUpdateSpns;

/// @brief Field DsCountingAbIndicesFailed value: I32(8428)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCountingAbIndicesFailed;

/// @brief Field DsCrImpossibleToValidate value: I32(8495)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrImpossibleToValidate;

/// @brief Field DsCrImpossibleToValidateV2 value: I32(8586)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrImpossibleToValidateV2;

/// @brief Field DsCrossDomMoveError value: I32(8216)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrossDomMoveError;

/// @brief Field DsCrossDomainCleanupReqd value: I32(8491)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrossDomainCleanupReqd;

/// @brief Field DsCrossNcDnRename value: I32(8368)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrossNcDnRename;

/// @brief Field DsCrossRefBusy value: I32(8602)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrossRefBusy;

/// @brief Field DsCrossRefExists value: I32(8374)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsCrossRefExists;

/// @brief Field DsDatabaseError value: I32(8409)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDatabaseError;

/// @brief Field DsDecodingError value: I32(8253)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDecodingError;

/// @brief Field DsDestinationAuditingNotEnabled value: I32(8536)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDestinationAuditingNotEnabled;

/// @brief Field DsDestinationDomainNotInForest value: I32(8535)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDestinationDomainNotInForest;

/// @brief Field DsDifferentReplEpochs value: I32(8593)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDifferentReplEpochs;

/// @brief Field DsDisallowedInSystemContainer value: I32(8615)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDisallowedInSystemContainer;

/// @brief Field DsDisallowedNcRedirect value: I32(8640)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDisallowedNcRedirect;

/// @brief Field DsDnsLookupFailure value: I32(8524)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDnsLookupFailure;

/// @brief Field DsDomainNameExistsInForest value: I32(8634)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDomainNameExistsInForest;

/// @brief Field DsDomainRenameInProgress value: I32(8612)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDomainRenameInProgress;

/// @brief Field DsDomainVersionTooHigh value: I32(8564)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDomainVersionTooHigh;

/// @brief Field DsDomainVersionTooLow value: I32(8566)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDomainVersionTooLow;

/// @brief Field DsDraAbandonSync value: I32(8462)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraAbandonSync;

/// @brief Field DsDraAccessDenied value: I32(8453)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraAccessDenied;

/// @brief Field DsDraBadDn value: I32(8439)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraBadDn;

/// @brief Field DsDraBadInstanceType value: I32(8445)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraBadInstanceType;

/// @brief Field DsDraBadNc value: I32(8440)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraBadNc;

/// @brief Field DsDraBusy value: I32(8438)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraBusy;

/// @brief Field DsDraConnectionFailed value: I32(8444)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraConnectionFailed;

/// @brief Field DsDraCorruptUtdVector value: I32(8629)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraCorruptUtdVector;

/// @brief Field DsDraDbError value: I32(8451)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraDbError;

/// @brief Field DsDraDnExists value: I32(8441)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraDnExists;

/// @brief Field DsDraEarlierSchemaConflict value: I32(8544)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraEarlierSchemaConflict;

/// @brief Field DsDraExtnConnectionFailed value: I32(8466)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraExtnConnectionFailed;

/// @brief Field DsDraGeneric value: I32(8436)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraGeneric;

/// @brief Field DsDraIncompatiblePartialSet value: I32(8464)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraIncompatiblePartialSet;

/// @brief Field DsDraInconsistentDit value: I32(8443)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraInconsistentDit;

/// @brief Field DsDraInternalError value: I32(8442)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraInternalError;

/// @brief Field DsDraInvalidParameter value: I32(8437)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraInvalidParameter;

/// @brief Field DsDraMailProblem value: I32(8447)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraMailProblem;

/// @brief Field DsDraMissingKrbtgtSecret value: I32(8633)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraMissingKrbtgtSecret;

/// @brief Field DsDraMissingParent value: I32(8460)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraMissingParent;

/// @brief Field DsDraNameCollision value: I32(8458)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraNameCollision;

/// @brief Field DsDraNoReplica value: I32(8452)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraNoReplica;

/// @brief Field DsDraNotSupported value: I32(8454)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraNotSupported;

/// @brief Field DsDraObjIsRepSource value: I32(8450)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraObjIsRepSource;

/// @brief Field DsDraObjNcMismatch value: I32(8545)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraObjNcMismatch;

/// @brief Field DsDraOutOfMem value: I32(8446)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraOutOfMem;

/// @brief Field DsDraOutScheduleWindow value: I32(8617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraOutScheduleWindow;

/// @brief Field DsDraPreempted value: I32(8461)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraPreempted;

/// @brief Field DsDraRecycledTarget value: I32(8639)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraRecycledTarget;

/// @brief Field DsDraRefAlreadyExists value: I32(8448)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraRefAlreadyExists;

/// @brief Field DsDraRefNotFound value: I32(8449)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraRefNotFound;

/// @brief Field DsDraReplPending value: I32(8477)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraReplPending;

/// @brief Field DsDraRpcCancelled value: I32(8455)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraRpcCancelled;

/// @brief Field DsDraSchemaConflict value: I32(8543)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSchemaConflict;

/// @brief Field DsDraSchemaInfoShip value: I32(8542)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSchemaInfoShip;

/// @brief Field DsDraSchemaMismatch value: I32(8418)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSchemaMismatch;

/// @brief Field DsDraSecretsDenied value: I32(8630)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSecretsDenied;

/// @brief Field DsDraShutdown value: I32(8463)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraShutdown;

/// @brief Field DsDraSinkDisabled value: I32(8457)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSinkDisabled;

/// @brief Field DsDraSourceDisabled value: I32(8456)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSourceDisabled;

/// @brief Field DsDraSourceIsPartialReplica value: I32(8465)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSourceIsPartialReplica;

/// @brief Field DsDraSourceReinstalled value: I32(8459)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDraSourceReinstalled;

/// @brief Field DsDrsExtensionsChanged value: I32(8594)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDrsExtensionsChanged;

/// @brief Field DsDsRequired value: I32(8478)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDsRequired;

/// @brief Field DsDsaMustBeIntMaster value: I32(8342)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDsaMustBeIntMaster;

/// @brief Field DsDstDomainNotNative value: I32(8496)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDstDomainNotNative;

/// @brief Field DsDstNcMismatch value: I32(8486)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDstNcMismatch;

/// @brief Field DsDupLdapDisplayName value: I32(8382)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupLdapDisplayName;

/// @brief Field DsDupLinkId value: I32(8468)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupLinkId;

/// @brief Field DsDupMapiId value: I32(8380)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupMapiId;

/// @brief Field DsDupMsdsIntid value: I32(8597)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupMsdsIntid;

/// @brief Field DsDupOid value: I32(8379)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupOid;

/// @brief Field DsDupRdn value: I32(8378)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupRdn;

/// @brief Field DsDupSchemaIdGuid value: I32(8381)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDupSchemaIdGuid;

/// @brief Field DsDuplicateIdFound value: I32(8605)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsDuplicateIdFound;

/// @brief Field DsEncodingError value: I32(8252)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsEncodingError;

/// @brief Field DsEpochMismatch value: I32(8483)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsEpochMismatch;

/// @brief Field DsExistingAdChildNc value: I32(8613)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistingAdChildNc;

/// @brief Field DsExistsInAuxCls value: I32(8393)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInAuxCls;

/// @brief Field DsExistsInMayHave value: I32(8386)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInMayHave;

/// @brief Field DsExistsInMustHave value: I32(8385)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInMustHave;

/// @brief Field DsExistsInPossSup value: I32(8395)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInPossSup;

/// @brief Field DsExistsInRdnattid value: I32(8598)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInRdnattid;

/// @brief Field DsExistsInSubCls value: I32(8394)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsExistsInSubCls;

/// @brief Field DsFilterUnknown value: I32(8254)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsFilterUnknown;

/// @brief Field DsFilterUsesContructedAttrs value: I32(8555)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsFilterUsesContructedAttrs;

/// @brief Field DsFlatNameExistsInForest value: I32(8635)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsFlatNameExistsInForest;

/// @brief Field DsForestVersionTooHigh value: I32(8563)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsForestVersionTooHigh;

/// @brief Field DsForestVersionTooLow value: I32(8565)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsForestVersionTooLow;

/// @brief Field DsGcNotAvailable value: I32(8217)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGcNotAvailable;

/// @brief Field DsGcRequired value: I32(8547)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGcRequired;

/// @brief Field DsGcverifyError value: I32(8417)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGcverifyError;

/// @brief Field DsGenericError value: I32(8341)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGenericError;

/// @brief Field DsGlobalCantHaveCrossdomainMember value: I32(8519)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGlobalCantHaveCrossdomainMember;

/// @brief Field DsGlobalCantHaveLocalMember value: I32(8516)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGlobalCantHaveLocalMember;

/// @brief Field DsGlobalCantHaveUniversalMember value: I32(8517)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGlobalCantHaveUniversalMember;

/// @brief Field DsGovernsidMissing value: I32(8410)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGovernsidMissing;

/// @brief Field DsGroupConversionError value: I32(8607)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsGroupConversionError;

/// @brief Field DsHavePrimaryMembers value: I32(8521)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsHavePrimaryMembers;

/// @brief Field DsHierarchyTableMallocFailed value: I32(8429)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsHierarchyTableMallocFailed;

/// @brief Field DsHierarchyTableTooDeep value: I32(8628)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsHierarchyTableTooDeep;

/// @brief Field DsHighAdldsFfl value: I32(8641)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsHighAdldsFfl;

/// @brief Field DsHighDsaVersion value: I32(8642)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsHighDsaVersion;

/// @brief Field DsIllegalBaseSchemaMod value: I32(8507)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIllegalBaseSchemaMod;

/// @brief Field DsIllegalModOperation value: I32(8311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIllegalModOperation;

/// @brief Field DsIllegalSuperior value: I32(8345)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIllegalSuperior;

/// @brief Field DsIllegalXdomMoveOperation value: I32(8492)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIllegalXdomMoveOperation;

/// @brief Field DsInappropriateAuth value: I32(8233)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInappropriateAuth;

/// @brief Field DsInappropriateMatching value: I32(8238)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInappropriateMatching;

/// @brief Field DsIncompatibleControlsUsed value: I32(8574)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIncompatibleControlsUsed;

/// @brief Field DsIncompatibleVersion value: I32(8567)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIncompatibleVersion;

/// @brief Field DsIncorrectRoleOwner value: I32(8210)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIncorrectRoleOwner;

/// @brief Field DsInitFailure value: I32(8532)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInitFailure;

/// @brief Field DsInitFailureConsole value: I32(8561)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInitFailureConsole;

/// @brief Field DsInstallNoSchVersionInInifile value: I32(8512)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInstallNoSchVersionInInifile;

/// @brief Field DsInstallNoSrcSchVersion value: I32(8511)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInstallNoSrcSchVersion;

/// @brief Field DsInstallSchemaMismatch value: I32(8467)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInstallSchemaMismatch;

/// @brief Field DsInsuffAccessRights value: I32(8344)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInsuffAccessRights;

/// @brief Field DsInsufficientAttrToCreateObject value: I32(8606)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInsufficientAttrToCreateObject;

/// @brief Field DsInternalFailure value: I32(8430)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInternalFailure;

/// @brief Field DsInvalidAttributeSyntax value: I32(8203)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidAttributeSyntax;

/// @brief Field DsInvalidDmd value: I32(8360)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidDmd;

/// @brief Field DsInvalidDnSyntax value: I32(8242)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidDnSyntax;

/// @brief Field DsInvalidGroupType value: I32(8513)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidGroupType;

/// @brief Field DsInvalidLdapDisplayName value: I32(8479)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidLdapDisplayName;

/// @brief Field DsInvalidNameForSpn value: I32(8554)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidNameForSpn;

/// @brief Field DsInvalidRoleOwner value: I32(8366)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidRoleOwner;

/// @brief Field DsInvalidScript value: I32(8600)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidScript;

/// @brief Field DsInvalidSearchFlag value: I32(8500)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidSearchFlag;

/// @brief Field DsInvalidSearchFlagSubtree value: I32(8626)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidSearchFlagSubtree;

/// @brief Field DsInvalidSearchFlagTuple value: I32(8627)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsInvalidSearchFlagTuple;

/// @brief Field DsIsLeaf value: I32(8243)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsIsLeaf;

/// @brief Field DsKeyNotUnique value: I32(8527)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsKeyNotUnique;

/// @brief Field DsLdapSendQueueFull value: I32(8616)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLdapSendQueueFull;

/// @brief Field DsLinkIdNotAvailable value: I32(8577)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLinkIdNotAvailable;

/// @brief Field DsLocalCantHaveCrossdomainLocalMember value: I32(8520)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLocalCantHaveCrossdomainLocalMember;

/// @brief Field DsLocalError value: I32(8251)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLocalError;

/// @brief Field DsLocalMemberOfLocalOnly value: I32(8548)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLocalMemberOfLocalOnly;

/// @brief Field DsLoopDetect value: I32(8246)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLoopDetect;

/// @brief Field DsLowAdldsFfl value: I32(8643)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLowAdldsFfl;

/// @brief Field DsLowDsaVersion value: I32(8568)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsLowDsaVersion;

/// @brief Field DsMachineAccountCreatedPrent4 value: I32(8572)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMachineAccountCreatedPrent4;

/// @brief Field DsMachineAccountQuotaExceeded value: I32(8557)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMachineAccountQuotaExceeded;

/// @brief Field DsMapiIdNotAvailable value: I32(8632)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMapiIdNotAvailable;

/// @brief Field DsMasterdsaRequired value: I32(8314)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMasterdsaRequired;

/// @brief Field DsMaxObjSizeExceeded value: I32(8304)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMaxObjSizeExceeded;

/// @brief Field DsMembershipEvaluatedLocally value: I32(8201)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMembershipEvaluatedLocally;

/// @brief Field DsMissingExpectedAtt value: I32(8411)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMissingExpectedAtt;

/// @brief Field DsMissingFsmoSettings value: I32(8434)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMissingFsmoSettings;

/// @brief Field DsMissingInfrastructureContainer value: I32(8497)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMissingInfrastructureContainer;

/// @brief Field DsMissingRequiredAtt value: I32(8316)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMissingRequiredAtt;

/// @brief Field DsMissingSupref value: I32(8406)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMissingSupref;

/// @brief Field DsModifydnDisallowedByFlag value: I32(8581)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsModifydnDisallowedByFlag;

/// @brief Field DsModifydnDisallowedByInstanceType value: I32(8579)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsModifydnDisallowedByInstanceType;

/// @brief Field DsModifydnWrongGrandparent value: I32(8582)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsModifydnWrongGrandparent;

/// @brief Field DsMustBeRunOnDstDc value: I32(8558)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsMustBeRunOnDstDc;

/// @brief Field DsNameErrorDomainOnly value: I32(8473)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorDomainOnly;

/// @brief Field DsNameErrorNoMapping value: I32(8472)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorNoMapping;

/// @brief Field DsNameErrorNoSyntacticalMapping value: I32(8474)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorNoSyntacticalMapping;

/// @brief Field DsNameErrorNotFound value: I32(8470)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorNotFound;

/// @brief Field DsNameErrorNotUnique value: I32(8471)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorNotUnique;

/// @brief Field DsNameErrorResolving value: I32(8469)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorResolving;

/// @brief Field DsNameErrorTrustReferral value: I32(8583)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameErrorTrustReferral;

/// @brief Field DsNameNotUnique value: I32(8571)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameNotUnique;

/// @brief Field DsNameReferenceInvalid value: I32(8373)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameReferenceInvalid;

/// @brief Field DsNameTooLong value: I32(8348)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameTooLong;

/// @brief Field DsNameTooManyParts value: I32(8347)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameTooManyParts;

/// @brief Field DsNameTypeUnknown value: I32(8351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameTypeUnknown;

/// @brief Field DsNameUnparseable value: I32(8350)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameUnparseable;

/// @brief Field DsNameValueTooLong value: I32(8349)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNameValueTooLong;

/// @brief Field DsNamingMasterGc value: I32(8523)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNamingMasterGc;

/// @brief Field DsNamingViolation value: I32(8247)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNamingViolation;

/// @brief Field DsNcMustHaveNcParent value: I32(8494)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNcMustHaveNcParent;

/// @brief Field DsNcStillHasDsas value: I32(8546)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNcStillHasDsas;

/// @brief Field DsNcnameMissingCrRef value: I32(8412)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNcnameMissingCrRef;

/// @brief Field DsNcnameMustBeNc value: I32(8357)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNcnameMustBeNc;

/// @brief Field DsNoAttributeOrValue value: I32(8202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoAttributeOrValue;

/// @brief Field DsNoBehaviorVersionInMixeddomain value: I32(8569)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoBehaviorVersionInMixeddomain;

/// @brief Field DsNoChainedEval value: I32(8328)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoChainedEval;

/// @brief Field DsNoChaining value: I32(8327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoChaining;

/// @brief Field DsNoCheckpointWithPdc value: I32(8551)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoCheckpointWithPdc;

/// @brief Field DsNoCrossrefForNc value: I32(8363)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoCrossrefForNc;

/// @brief Field DsNoDeletedName value: I32(8355)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoDeletedName;

/// @brief Field DsNoFpoInUniversalGroups value: I32(8549)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoFpoInUniversalGroups;

/// @brief Field DsNoMoreRids value: I32(8209)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoMoreRids;

/// @brief Field DsNoMsdsIntid value: I32(8596)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoMsdsIntid;

/// @brief Field DsNoNestGlobalgroupInMixeddomain value: I32(8514)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoNestGlobalgroupInMixeddomain;

/// @brief Field DsNoNestLocalgroupInMixeddomain value: I32(8515)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoNestLocalgroupInMixeddomain;

/// @brief Field DsNoNtdsaObject value: I32(8623)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoNtdsaObject;

/// @brief Field DsNoObjectMoveInSchemaNc value: I32(8580)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoObjectMoveInSchemaNc;

/// @brief Field DsNoParentObject value: I32(8329)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoParentObject;

/// @brief Field DsNoPktPrivacyOnConnection value: I32(8533)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoPktPrivacyOnConnection;

/// @brief Field DsNoRdnDefinedInSchema value: I32(8306)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoRdnDefinedInSchema;

/// @brief Field DsNoRefDomain value: I32(8575)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoRefDomain;

/// @brief Field DsNoRequestedAttsFound value: I32(8308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoRequestedAttsFound;

/// @brief Field DsNoResultsReturned value: I32(8257)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoResultsReturned;

/// @brief Field DsNoRidsAllocated value: I32(8208)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoRidsAllocated;

/// @brief Field DsNoServerObject value: I32(8622)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoServerObject;

/// @brief Field DsNoSuchObject value: I32(8240)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoSuchObject;

/// @brief Field DsNoTreeDeleteAboveNc value: I32(8501)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNoTreeDeleteAboveNc;

/// @brief Field DsNonAsqSearch value: I32(8624)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonAsqSearch;

/// @brief Field DsNonBaseSearch value: I32(8480)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonBaseSearch;

/// @brief Field DsNonexistentMayHave value: I32(8387)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonexistentMayHave;

/// @brief Field DsNonexistentMustHave value: I32(8388)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonexistentMustHave;

/// @brief Field DsNonexistentPossSup value: I32(8390)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonexistentPossSup;

/// @brief Field DsNonsafeSchemaChange value: I32(8508)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNonsafeSchemaChange;

/// @brief Field DsNotAnObject value: I32(8352)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotAnObject;

/// @brief Field DsNotAuthoritiveForDstNc value: I32(8487)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotAuthoritiveForDstNc;

/// @brief Field DsNotClosest value: I32(8588)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotClosest;

/// @brief Field DsNotInstalled value: I32(8200)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotInstalled;

/// @brief Field DsNotOnBacklink value: I32(8362)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotOnBacklink;

/// @brief Field DsNotSupported value: I32(8256)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotSupported;

/// @brief Field DsNotSupportedSortOrder value: I32(8570)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotSupportedSortOrder;

/// @brief Field DsNotifyFilterTooComplex value: I32(8377)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNotifyFilterTooComplex;

/// @brief Field DsNtdscriptProcessError value: I32(8592)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNtdscriptProcessError;

/// @brief Field DsNtdscriptSyntaxError value: I32(8591)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsNtdscriptSyntaxError;

/// @brief Field DsObjClassNotDefined value: I32(8371)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjClassNotDefined;

/// @brief Field DsObjClassNotSubclass value: I32(8372)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjClassNotSubclass;

/// @brief Field DsObjClassViolation value: I32(8212)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjClassViolation;

/// @brief Field DsObjGuidExists value: I32(8361)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjGuidExists;

/// @brief Field DsObjNotFound value: I32(8333)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjNotFound;

/// @brief Field DsObjStringNameExists value: I32(8305)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjStringNameExists;

/// @brief Field DsObjTooLarge value: I32(8312)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjTooLarge;

/// @brief Field DsObjectBeingRemoved value: I32(8339)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjectBeingRemoved;

/// @brief Field DsObjectClassRequired value: I32(8315)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjectClassRequired;

/// @brief Field DsObjectResultsTooLarge value: I32(8248)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsObjectResultsTooLarge;

/// @brief Field DsOffsetRangeError value: I32(8262)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOffsetRangeError;

/// @brief Field DsOidMappedGroupCantHaveMembers value: I32(8637)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOidMappedGroupCantHaveMembers;

/// @brief Field DsOidNotFound value: I32(8638)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOidNotFound;

/// @brief Field DsOperationsError value: I32(8224)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOperationsError;

/// @brief Field DsOutOfScope value: I32(8338)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOutOfScope;

/// @brief Field DsOutOfVersionStore value: I32(8573)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsOutOfVersionStore;

/// @brief Field DsParamError value: I32(8255)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsParamError;

/// @brief Field DsParentIsAnAlias value: I32(8330)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsParentIsAnAlias;

/// @brief Field DsPdcOperationInProgress value: I32(8490)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsPdcOperationInProgress;

/// @brief Field DsPolicyNotKnown value: I32(8618)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsPolicyNotKnown;

/// @brief Field DsProtocolError value: I32(8225)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsProtocolError;

/// @brief Field DsRangeConstraint value: I32(8322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRangeConstraint;

/// @brief Field DsRdnDoesntMatchSchema value: I32(8307)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRdnDoesntMatchSchema;

/// @brief Field DsRecalcschemaFailed value: I32(8396)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRecalcschemaFailed;

/// @brief Field DsReferral value: I32(8235)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReferral;

/// @brief Field DsReferralLimitExceeded value: I32(8260)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReferralLimitExceeded;

/// @brief Field DsRefusingFsmoRoles value: I32(8433)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRefusingFsmoRoles;

/// @brief Field DsRemoteCrossrefOpFailed value: I32(8601)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRemoteCrossrefOpFailed;

/// @brief Field DsReplLifetimeExceeded value: I32(8614)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReplLifetimeExceeded;

/// @brief Field DsReplicaSetChangeNotAllowedOnDisabledCr value: I32(8595)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReplicaSetChangeNotAllowedOnDisabledCr;

/// @brief Field DsReplicatorOnly value: I32(8370)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReplicatorOnly;

/// @brief Field DsReservedLinkId value: I32(8576)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReservedLinkId;

/// @brief Field DsReservedMapiId value: I32(8631)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsReservedMapiId;

/// @brief Field DsRidmgrDisabled value: I32(8263)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRidmgrDisabled;

/// @brief Field DsRidmgrInitError value: I32(8211)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRidmgrInitError;

/// @brief Field DsRoleNotVerified value: I32(8610)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRoleNotVerified;

/// @brief Field DsRootCantBeSubref value: I32(8326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRootCantBeSubref;

/// @brief Field DsRootMustBeNc value: I32(8301)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRootMustBeNc;

/// @brief Field DsRootRequiresClassTop value: I32(8432)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsRootRequiresClassTop;

/// @brief Field DsSamInitFailure value: I32(8504)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSamInitFailure;

/// @brief Field DsSamInitFailureConsole value: I32(8562)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSamInitFailureConsole;

/// @brief Field DsSamNeedBootkeyFloppy value: I32(8530)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSamNeedBootkeyFloppy;

/// @brief Field DsSamNeedBootkeyPassword value: I32(8529)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSamNeedBootkeyPassword;

/// @brief Field DsSchemaAllocFailed value: I32(8415)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSchemaAllocFailed;

/// @brief Field DsSchemaNotLoaded value: I32(8414)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSchemaNotLoaded;

/// @brief Field DsSchemaUpdateDisallowed value: I32(8509)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSchemaUpdateDisallowed;

/// @brief Field DsSecDescInvalid value: I32(8354)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSecDescInvalid;

/// @brief Field DsSecDescTooShort value: I32(8353)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSecDescTooShort;

/// @brief Field DsSecurityCheckingError value: I32(8413)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSecurityCheckingError;

/// @brief Field DsSecurityIllegalModify value: I32(8423)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSecurityIllegalModify;

/// @brief Field DsSemanticAttTest value: I32(8383)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSemanticAttTest;

/// @brief Field DsSensitiveGroupViolation value: I32(8505)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSensitiveGroupViolation;

/// @brief Field DsServerDown value: I32(8250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsServerDown;

/// @brief Field DsShuttingDown value: I32(8364)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsShuttingDown;

/// @brief Field DsSingleUserModeFailed value: I32(8590)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSingleUserModeFailed;

/// @brief Field DsSingleValueConstraint value: I32(8321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSingleValueConstraint;

/// @brief Field DsSizelimitExceeded value: I32(8227)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSizelimitExceeded;

/// @brief Field DsSortControlMissing value: I32(8261)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSortControlMissing;

/// @brief Field DsSourceAuditingNotEnabled value: I32(8552)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSourceAuditingNotEnabled;

/// @brief Field DsSourceDomainInForest value: I32(8534)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSourceDomainInForest;

/// @brief Field DsSrcAndDstNcIdentical value: I32(8485)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcAndDstNcIdentical;

/// @brief Field DsSrcAndDstObjectClassMismatch value: I32(8540)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcAndDstObjectClassMismatch;

/// @brief Field DsSrcDcMustBeSp4OrGreater value: I32(8559)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcDcMustBeSp4OrGreater;

/// @brief Field DsSrcGuidMismatch value: I32(8488)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcGuidMismatch;

/// @brief Field DsSrcNameMismatch value: I32(8484)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcNameMismatch;

/// @brief Field DsSrcObjNotGroupOrUser value: I32(8538)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcObjNotGroupOrUser;

/// @brief Field DsSrcSidExistsInForest value: I32(8539)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSrcSidExistsInForest;

/// @brief Field DsStringSdConversionFailed value: I32(8522)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsStringSdConversionFailed;

/// @brief Field DsStrongAuthRequired value: I32(8232)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsStrongAuthRequired;

/// @brief Field DsSubClsTestFail value: I32(8391)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSubClsTestFail;

/// @brief Field DsSubrefMustHaveParent value: I32(8356)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSubrefMustHaveParent;

/// @brief Field DsSubtreeNotifyNotNcHead value: I32(8376)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSubtreeNotifyNotNcHead;

/// @brief Field DsSyntaxMismatch value: I32(8384)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsSyntaxMismatch;

/// @brief Field DsThreadLimitExceeded value: I32(8587)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsThreadLimitExceeded;

/// @brief Field DsTimelimitExceeded value: I32(8226)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsTimelimitExceeded;

/// @brief Field DsTreeDeleteNotFinished value: I32(8397)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsTreeDeleteNotFinished;

/// @brief Field DsUnableToSurrenderRoles value: I32(8435)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnableToSurrenderRoles;

/// @brief Field DsUnavailable value: I32(8207)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnavailable;

/// @brief Field DsUnavailableCritExtension value: I32(8236)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnavailableCritExtension;

/// @brief Field DsUndeleteSamValidationFailed value: I32(8645)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUndeleteSamValidationFailed;

/// @brief Field DsUnicodepwdNotInQuotes value: I32(8556)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnicodepwdNotInQuotes;

/// @brief Field DsUniversalCantHaveLocalMember value: I32(8518)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUniversalCantHaveLocalMember;

/// @brief Field DsUnknownError value: I32(8431)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnknownError;

/// @brief Field DsUnknownOperation value: I32(8365)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnknownOperation;

/// @brief Field DsUnwillingToPerform value: I32(8245)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUnwillingToPerform;

/// @brief Field DsUserBufferToSmall value: I32(8309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsUserBufferToSmall;

/// @brief Field DsVersionCheckFailure value: I32(643)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsVersionCheckFailure;

/// @brief Field DsWkoContainerCannotBeSpecial value: I32(8611)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsWkoContainerCannotBeSpecial;

/// @brief Field DsWrongLinkedAttSyntax value: I32(8528)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsWrongLinkedAttSyntax;

/// @brief Field DsWrongOmObjClass value: I32(8476)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DsWrongOmObjClass;

/// @brief Field DupDomainname value: I32(1221)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DupDomainname;

/// @brief Field DupName value: I32(52)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DupName;

/// @brief Field DuplicatePrivileges value: I32(311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DuplicatePrivileges;

/// @brief Field DuplicateServiceName value: I32(1078)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DuplicateServiceName;

/// @brief Field DuplicateTag value: I32(2014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DuplicateTag;

/// @brief Field DynlinkFromInvalidRing value: I32(196)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const DynlinkFromInvalidRing;

/// @brief Field EaAccessDenied value: I32(994)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EaAccessDenied;

/// @brief Field EaFileCorrupt value: I32(276)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EaFileCorrupt;

/// @brief Field EaListInconsistent value: I32(255)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EaListInconsistent;

/// @brief Field EaTableFull value: I32(277)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EaTableFull;

/// @brief Field EasDidntFit value: I32(275)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EasDidntFit;

/// @brief Field EasNotSupported value: I32(282)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EasNotSupported;

/// @brief Field EcCircularForwarding value: I32(15082)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcCircularForwarding;

/// @brief Field EcCredNotFound value: I32(15084)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcCredNotFound;

/// @brief Field EcCredstoreFull value: I32(15083)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcCredstoreFull;

/// @brief Field EcLogDisabled value: I32(15081)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcLogDisabled;

/// @brief Field EcNoActiveChannel value: I32(15085)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcNoActiveChannel;

/// @brief Field EcSubscriptionCannotActivate value: I32(15080)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EcSubscriptionCannotActivate;

/// @brief Field EfsAlgBlobTooBig value: I32(6013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EfsAlgBlobTooBig;

/// @brief Field EfsDisabled value: I32(6015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EfsDisabled;

/// @brief Field EfsNotAllowedInTransaction value: I32(6831)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EfsNotAllowedInTransaction;

/// @brief Field EfsServerNotTrusted value: I32(6011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EfsServerNotTrusted;

/// @brief Field EfsVersionNotSupport value: I32(6016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EfsVersionNotSupport;

/// @brief Field ElevationRequired value: I32(740)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ElevationRequired;

/// @brief Field Empty value: I32(4306)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Empty;

/// @brief Field EncryptionFailed value: I32(6000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EncryptionFailed;

/// @brief Field EncryptionPolicyDeniesOperation value: I32(6022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EncryptionPolicyDeniesOperation;

/// @brief Field EndOfMedia value: I32(1100)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EndOfMedia;

/// @brief Field EnlistmentNotFound value: I32(6717)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EnlistmentNotFound;

/// @brief Field EnlistmentNotSuperior value: I32(6820)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EnlistmentNotSuperior;

/// @brief Field EnvvarNotFound value: I32(203)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EnvvarNotFound;

/// @brief Field EomOverflow value: I32(1129)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EomOverflow;

/// @brief Field ErrorsEncountered value: I32(774)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ErrorsEncountered;

/// @brief Field EvaluationExpiration value: I32(622)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvaluationExpiration;

/// @brief Field EventDone value: I32(710)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EventDone;

/// @brief Field EventPending value: I32(711)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EventPending;

/// @brief Field EventlogCantStart value: I32(1501)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EventlogCantStart;

/// @brief Field EventlogFileChanged value: I32(1503)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EventlogFileChanged;

/// @brief Field EventlogFileCorrupt value: I32(1500)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EventlogFileCorrupt;

/// @brief Field EvtCannotOpenChannelOfQuery value: I32(15036)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtCannotOpenChannelOfQuery;

/// @brief Field EvtChannelCannotActivate value: I32(15025)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtChannelCannotActivate;

/// @brief Field EvtChannelNotFound value: I32(15007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtChannelNotFound;

/// @brief Field EvtConfigurationError value: I32(15010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtConfigurationError;

/// @brief Field EvtEventDefinitionNotFound value: I32(15032)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtEventDefinitionNotFound;

/// @brief Field EvtEventTemplateNotFound value: I32(15003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtEventTemplateNotFound;

/// @brief Field EvtFilterAlreadyscoped value: I32(15014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterAlreadyscoped;

/// @brief Field EvtFilterInvarg value: I32(15016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterInvarg;

/// @brief Field EvtFilterInvtest value: I32(15017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterInvtest;

/// @brief Field EvtFilterInvtype value: I32(15018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterInvtype;

/// @brief Field EvtFilterNoteltset value: I32(15015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterNoteltset;

/// @brief Field EvtFilterOutOfRange value: I32(15038)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterOutOfRange;

/// @brief Field EvtFilterParseerr value: I32(15019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterParseerr;

/// @brief Field EvtFilterTooComplex value: I32(15026)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterTooComplex;

/// @brief Field EvtFilterUnexpectedtoken value: I32(15021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterUnexpectedtoken;

/// @brief Field EvtFilterUnsupportedop value: I32(15020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtFilterUnsupportedop;

/// @brief Field EvtInvalidChannelPath value: I32(15000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidChannelPath;

/// @brief Field EvtInvalidChannelPropertyValue value: I32(15023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidChannelPropertyValue;

/// @brief Field EvtInvalidEventData value: I32(15005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidEventData;

/// @brief Field EvtInvalidOperationOverEnabledDirectChannel value: I32(15022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidOperationOverEnabledDirectChannel;

/// @brief Field EvtInvalidPublisherName value: I32(15004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidPublisherName;

/// @brief Field EvtInvalidPublisherPropertyValue value: I32(15024)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidPublisherPropertyValue;

/// @brief Field EvtInvalidQuery value: I32(15001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtInvalidQuery;

/// @brief Field EvtMalformedXmlText value: I32(15008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtMalformedXmlText;

/// @brief Field EvtMaxInsertsReached value: I32(15031)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtMaxInsertsReached;

/// @brief Field EvtMessageIdNotFound value: I32(15028)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtMessageIdNotFound;

/// @brief Field EvtMessageLocaleNotFound value: I32(15033)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtMessageLocaleNotFound;

/// @brief Field EvtMessageNotFound value: I32(15027)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtMessageNotFound;

/// @brief Field EvtNonValidatingMsxml value: I32(15013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtNonValidatingMsxml;

/// @brief Field EvtPublisherDisabled value: I32(15037)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtPublisherDisabled;

/// @brief Field EvtPublisherMetadataNotFound value: I32(15002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtPublisherMetadataNotFound;

/// @brief Field EvtQueryResultInvalidPosition value: I32(15012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtQueryResultInvalidPosition;

/// @brief Field EvtQueryResultStale value: I32(15011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtQueryResultStale;

/// @brief Field EvtSubscriptionToDirectChannel value: I32(15009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtSubscriptionToDirectChannel;

/// @brief Field EvtUnresolvedParameterInsert value: I32(15030)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtUnresolvedParameterInsert;

/// @brief Field EvtUnresolvedValueInsert value: I32(15029)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtUnresolvedValueInsert;

/// @brief Field EvtVersionTooNew value: I32(15035)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtVersionTooNew;

/// @brief Field EvtVersionTooOld value: I32(15034)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const EvtVersionTooOld;

/// @brief Field ExceptionInResourceCall value: I32(5930)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExceptionInResourceCall;

/// @brief Field ExceptionInService value: I32(1064)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExceptionInService;

/// @brief Field ExclSemAlreadyOwned value: I32(101)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExclSemAlreadyOwned;

/// @brief Field ExeCannotModifySignedBinary value: I32(217)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExeCannotModifySignedBinary;

/// @brief Field ExeCannotModifyStrongSignedBinary value: I32(218)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExeCannotModifyStrongSignedBinary;

/// @brief Field ExeMachineTypeMismatch value: I32(216)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExeMachineTypeMismatch;

/// @brief Field ExeMarkedInvalid value: I32(192)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExeMarkedInvalid;

/// @brief Field ExpiredHandle value: I32(6854)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExpiredHandle;

/// @brief Field ExtendedError value: I32(1208)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExtendedError;

/// @brief Field ExtraneousInformation value: I32(677)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ExtraneousInformation;

/// @brief Field FailFastException value: I32(1653)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailFastException;

/// @brief Field FailI24 value: I32(83)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailI24;

/// @brief Field FailNoactionReboot value: I32(350)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailNoactionReboot;

/// @brief Field FailRebootInitiated value: I32(3018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailRebootInitiated;

/// @brief Field FailRebootRequired value: I32(3017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailRebootRequired;

/// @brief Field FailRestart value: I32(352)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailRestart;

/// @brief Field FailShutdown value: I32(351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailShutdown;

/// @brief Field FailedDriverEntry value: I32(647)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailedDriverEntry;

/// @brief Field FailedServiceControllerConnect value: I32(1063)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FailedServiceControllerConnect;

/// @brief Field FatalAppExit value: I32(713)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FatalAppExit;

/// @brief Field FileCheckedOut value: I32(220)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileCheckedOut;

/// @brief Field FileCorrupt value: I32(1392)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileCorrupt;

/// @brief Field FileEncrypted value: I32(6002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileEncrypted;

/// @brief Field FileExists value: I32(80)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileExists;

/// @brief Field FileHandleRevoked value: I32(806)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileHandleRevoked;

/// @brief Field FileIdentityNotPersistent value: I32(6823)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileIdentityNotPersistent;

/// @brief Field FileInvalid value: I32(1006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileInvalid;

/// @brief Field FileLevelTrimNotSupported value: I32(326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileLevelTrimNotSupported;

/// @brief Field FileNotEncrypted value: I32(6007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileNotEncrypted;

/// @brief Field FileNotFound value: I32(2)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileNotFound;

/// @brief Field FileOffline value: I32(4350)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileOffline;

/// @brief Field FileReadOnly value: I32(6009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileReadOnly;

/// @brief Field FileShareResourceConflict value: I32(5938)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileShareResourceConflict;

/// @brief Field FileSystemLimitation value: I32(665)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileSystemLimitation;

/// @brief Field FileTooLarge value: I32(223)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FileTooLarge;

/// @brief Field FilemarkDetected value: I32(1101)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FilemarkDetected;

/// @brief Field FilenameExcedRange value: I32(206)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FilenameExcedRange;

/// @brief Field FirmwareUpdated value: I32(728)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FirmwareUpdated;

/// @brief Field FloatMultipleFaults value: I32(630)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloatMultipleFaults;

/// @brief Field FloatMultipleTraps value: I32(631)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloatMultipleTraps;

/// @brief Field FloatedSection value: I32(6846)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloatedSection;

/// @brief Field FloppyBadRegisters value: I32(1125)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloppyBadRegisters;

/// @brief Field FloppyIdMarkNotFound value: I32(1122)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloppyIdMarkNotFound;

/// @brief Field FloppyUnknownError value: I32(1124)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloppyUnknownError;

/// @brief Field FloppyVolume value: I32(584)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloppyVolume;

/// @brief Field FloppyWrongCylinder value: I32(1123)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FloppyWrongCylinder;

/// @brief Field FltAlreadyEnlisted value: I32(-2145452005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltAlreadyEnlisted;

/// @brief Field FltCbdqDisabled value: I32(-2145452018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltCbdqDisabled;

/// @brief Field FltContextAllocationNotFound value: I32(-2145452010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltContextAllocationNotFound;

/// @brief Field FltContextAlreadyDefined value: I32(-2145452030)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltContextAlreadyDefined;

/// @brief Field FltContextAlreadyLinked value: I32(-2145452004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltContextAlreadyLinked;

/// @brief Field FltDeletingObject value: I32(-2145452021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltDeletingObject;

/// @brief Field FltDisallowFastIo value: I32(-2145452028)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltDisallowFastIo;

/// @brief Field FltDoNotAttach value: I32(-2145452017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltDoNotAttach;

/// @brief Field FltDoNotDetach value: I32(-2145452016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltDoNotDetach;

/// @brief Field FltDuplicateEntry value: I32(-2145452019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltDuplicateEntry;

/// @brief Field FltFilterNotFound value: I32(-2145452013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltFilterNotFound;

/// @brief Field FltFilterNotReady value: I32(-2145452024)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltFilterNotReady;

/// @brief Field FltInstanceAltitudeCollision value: I32(-2145452015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInstanceAltitudeCollision;

/// @brief Field FltInstanceNameCollision value: I32(-2145452014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInstanceNameCollision;

/// @brief Field FltInstanceNotFound value: I32(-2145452011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInstanceNotFound;

/// @brief Field FltInternalError value: I32(-2145452022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInternalError;

/// @brief Field FltInvalidAsynchronousRequest value: I32(-2145452029)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInvalidAsynchronousRequest;

/// @brief Field FltInvalidContextRegistration value: I32(-2145452009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInvalidContextRegistration;

/// @brief Field FltInvalidNameRequest value: I32(-2145452027)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltInvalidNameRequest;

/// @brief Field FltIoComplete value: I32(2031617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltIoComplete;

/// @brief Field FltMustBeNonpagedPool value: I32(-2145452020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltMustBeNonpagedPool;

/// @brief Field FltNameCacheMiss value: I32(-2145452008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNameCacheMiss;

/// @brief Field FltNoDeviceObject value: I32(-2145452007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNoDeviceObject;

/// @brief Field FltNoHandlerDefined value: I32(-2145452031)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNoHandlerDefined;

/// @brief Field FltNoWaiterForReply value: I32(-2145452000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNoWaiterForReply;

/// @brief Field FltNotInitialized value: I32(-2145452025)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNotInitialized;

/// @brief Field FltNotSafeToPostOperation value: I32(-2145452026)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltNotSafeToPostOperation;

/// @brief Field FltPostOperationCleanup value: I32(-2145452023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltPostOperationCleanup;

/// @brief Field FltRegistrationBusy value: I32(-2145451997)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltRegistrationBusy;

/// @brief Field FltVolumeAlreadyMounted value: I32(-2145452006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltVolumeAlreadyMounted;

/// @brief Field FltVolumeNotFound value: I32(-2145452012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FltVolumeNotFound;

/// @brief Field FormsAuthRequired value: I32(224)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FormsAuthRequired;

/// @brief Field FoundOutOfScope value: I32(601)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FoundOutOfScope;

/// @brief Field FsDriverRequired value: I32(588)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FsDriverRequired;

/// @brief Field FsfilterOpCompletedSuccessfully value: I32(762)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FsfilterOpCompletedSuccessfully;

/// @brief Field FtDiScanRequired value: I32(339)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FtDiScanRequired;

/// @brief Field FtReadRecoveryFromBackup value: I32(704)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FtReadRecoveryFromBackup;

/// @brief Field FtWriteFailure value: I32(338)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FtWriteFailure;

/// @brief Field FtWriteRecovery value: I32(705)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FtWriteRecovery;

/// @brief Field FullBackup value: I32(4004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FullBackup;

/// @brief Field FullscreenMode value: I32(1007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FullscreenMode;

/// @brief Field FunctionFailed value: I32(1627)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FunctionFailed;

/// @brief Field FunctionNotCalled value: I32(1626)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const FunctionNotCalled;

/// @brief Field GenFailure value: I32(31)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GenFailure;

/// @brief Field GenericCommandFailed value: I32(14109)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GenericCommandFailed;

/// @brief Field GenericNotMapped value: I32(1360)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GenericNotMapped;

/// @brief Field GlobalOnlyHook value: I32(1429)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GlobalOnlyHook;

/// @brief Field GpioClientInformationInvalid value: I32(15322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioClientInformationInvalid;

/// @brief Field GpioIncompatibleConnectMode value: I32(15326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioIncompatibleConnectMode;

/// @brief Field GpioInterruptAlreadyUnmasked value: I32(15327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioInterruptAlreadyUnmasked;

/// @brief Field GpioInvalidRegistrationPacket value: I32(15324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioInvalidRegistrationPacket;

/// @brief Field GpioOperationDenied value: I32(15325)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioOperationDenied;

/// @brief Field GpioVersionNotSupported value: I32(15323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GpioVersionNotSupported;

/// @brief Field GracefulDisconnect value: I32(1226)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GracefulDisconnect;

/// @brief Field GraphicsAdapterAccessNotExcluded value: I32(-1071242181)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAdapterAccessNotExcluded;

/// @brief Field GraphicsAdapterChainNotReady value: I32(-1071242189)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAdapterChainNotReady;

/// @brief Field GraphicsAdapterMustHaveAtLeastOneSource value: I32(-1071242456)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAdapterMustHaveAtLeastOneSource;

/// @brief Field GraphicsAdapterMustHaveAtLeastOneTarget value: I32(-1071242455)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAdapterMustHaveAtLeastOneTarget;

/// @brief Field GraphicsAdapterWasReset value: I32(-1071243261)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAdapterWasReset;

/// @brief Field GraphicsAllocationBusy value: I32(-1071243006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAllocationBusy;

/// @brief Field GraphicsAllocationClosed value: I32(-1071242990)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAllocationClosed;

/// @brief Field GraphicsAllocationContentLost value: I32(-1071242986)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAllocationContentLost;

/// @brief Field GraphicsAllocationInvalid value: I32(-1071243002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsAllocationInvalid;

/// @brief Field GraphicsCancelVidpnTopologyAugmentation value: I32(-1071242406)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCancelVidpnTopologyAugmentation;

/// @brief Field GraphicsCannotcolorconvert value: I32(-1071243256)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCannotcolorconvert;

/// @brief Field GraphicsCantAccessActiveVidpn value: I32(-1071242429)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCantAccessActiveVidpn;

/// @brief Field GraphicsCantEvictPinnedAllocation value: I32(-1071242999)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCantEvictPinnedAllocation;

/// @brief Field GraphicsCantLockMemory value: I32(-1071243007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCantLockMemory;

/// @brief Field GraphicsCantRenderLockedAllocation value: I32(-1071242991)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCantRenderLockedAllocation;

/// @brief Field GraphicsChainlinksNotEnumerated value: I32(-1071242190)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsChainlinksNotEnumerated;

/// @brief Field GraphicsChainlinksNotPoweredOn value: I32(-1071242187)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsChainlinksNotPoweredOn;

/// @brief Field GraphicsChainlinksNotStarted value: I32(-1071242188)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsChainlinksNotStarted;

/// @brief Field GraphicsChildDescriptorNotSupported value: I32(-1071242239)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsChildDescriptorNotSupported;

/// @brief Field GraphicsClientvidpnNotSet value: I32(-1071242404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsClientvidpnNotSet;

/// @brief Field GraphicsCoppNotSupported value: I32(-1071241983)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsCoppNotSupported;

/// @brief Field GraphicsDatasetIsEmpty value: I32(2499403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDatasetIsEmpty;

/// @brief Field GraphicsDdcciCurrentCurrentValueGreaterThanMaximumValue value: I32(-1071241768)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciCurrentCurrentValueGreaterThanMaximumValue;

/// @brief Field GraphicsDdcciInvalidData value: I32(-1071241851)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciInvalidData;

/// @brief Field GraphicsDdcciInvalidMessageChecksum value: I32(-1071241845)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciInvalidMessageChecksum;

/// @brief Field GraphicsDdcciInvalidMessageCommand value: I32(-1071241847)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciInvalidMessageCommand;

/// @brief Field GraphicsDdcciInvalidMessageLength value: I32(-1071241846)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciInvalidMessageLength;

/// @brief Field GraphicsDdcciMonitorReturnedInvalidTimingStatusByte value: I32(-1071241850)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciMonitorReturnedInvalidTimingStatusByte;

/// @brief Field GraphicsDdcciVcpNotSupported value: I32(-1071241852)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDdcciVcpNotSupported;

/// @brief Field GraphicsDisplayDeviceNotAttachedToDesktop value: I32(-1071241758)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDisplayDeviceNotAttachedToDesktop;

/// @brief Field GraphicsDriverMismatch value: I32(-1071243255)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsDriverMismatch;

/// @brief Field GraphicsEmptyAdapterMonitorModeSupportIntersection value: I32(-1071242459)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsEmptyAdapterMonitorModeSupportIntersection;

/// @brief Field GraphicsFrequencyrangeAlreadyInSet value: I32(-1071242465)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsFrequencyrangeAlreadyInSet;

/// @brief Field GraphicsFrequencyrangeNotInSet value: I32(-1071242467)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsFrequencyrangeNotInSet;

/// @brief Field GraphicsGammaRampNotSupported value: I32(-1071242424)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsGammaRampNotSupported;

/// @brief Field GraphicsGpuExceptionOnDevice value: I32(-1071242752)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsGpuExceptionOnDevice;

/// @brief Field GraphicsI2CDeviceDoesNotExist value: I32(-1071241855)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsI2CDeviceDoesNotExist;

/// @brief Field GraphicsI2CErrorReceivingData value: I32(-1071241853)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsI2CErrorReceivingData;

/// @brief Field GraphicsI2CErrorTransmittingData value: I32(-1071241854)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsI2CErrorTransmittingData;

/// @brief Field GraphicsI2CNotSupported value: I32(-1071241856)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsI2CNotSupported;

/// @brief Field GraphicsIncompatiblePrivateFormat value: I32(-1071242411)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsIncompatiblePrivateFormat;

/// @brief Field GraphicsInconsistentDeviceLinkState value: I32(-1071242186)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInconsistentDeviceLinkState;

/// @brief Field GraphicsInsufficientDmaBuffer value: I32(-1071243263)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInsufficientDmaBuffer;

/// @brief Field GraphicsInternalError value: I32(-1071241753)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInternalError;

/// @brief Field GraphicsInvalidActiveRegion value: I32(-1071242485)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidActiveRegion;

/// @brief Field GraphicsInvalidAllocationHandle value: I32(-1071242988)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidAllocationHandle;

/// @brief Field GraphicsInvalidAllocationInstance value: I32(-1071242989)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidAllocationInstance;

/// @brief Field GraphicsInvalidAllocationUsage value: I32(-1071242992)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidAllocationUsage;

/// @brief Field GraphicsInvalidClientType value: I32(-1071242405)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidClientType;

/// @brief Field GraphicsInvalidColorbasis value: I32(-1071242434)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidColorbasis;

/// @brief Field GraphicsInvalidCopyprotectionType value: I32(-1071242417)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidCopyprotectionType;

/// @brief Field GraphicsInvalidDisplayAdapter value: I32(-1071243262)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidDisplayAdapter;

/// @brief Field GraphicsInvalidDriverModel value: I32(-1071243260)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidDriverModel;

/// @brief Field GraphicsInvalidFrequency value: I32(-1071242486)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidFrequency;

/// @brief Field GraphicsInvalidGammaRamp value: I32(-1071242425)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidGammaRamp;

/// @brief Field GraphicsInvalidModePruningAlgorithm value: I32(-1071242410)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidModePruningAlgorithm;

/// @brief Field GraphicsInvalidMonitorCapabilityOrigin value: I32(-1071242409)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorCapabilityOrigin;

/// @brief Field GraphicsInvalidMonitorFrequencyrange value: I32(-1071242468)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorFrequencyrange;

/// @brief Field GraphicsInvalidMonitorFrequencyrangeConstraint value: I32(-1071242408)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorFrequencyrangeConstraint;

/// @brief Field GraphicsInvalidMonitorFrequencyrangeset value: I32(-1071242469)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorFrequencyrangeset;

/// @brief Field GraphicsInvalidMonitorSourceMode value: I32(-1071242462)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorSourceMode;

/// @brief Field GraphicsInvalidMonitorSourcemodeset value: I32(-1071242463)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitorSourcemodeset;

/// @brief Field GraphicsInvalidMonitordescriptor value: I32(-1071242453)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitordescriptor;

/// @brief Field GraphicsInvalidMonitordescriptorset value: I32(-1071242454)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidMonitordescriptorset;

/// @brief Field GraphicsInvalidPathContentGeometryTransformation value: I32(-1071242427)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPathContentGeometryTransformation;

/// @brief Field GraphicsInvalidPathContentType value: I32(-1071242418)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPathContentType;

/// @brief Field GraphicsInvalidPathImportanceOrdinal value: I32(-1071242428)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPathImportanceOrdinal;

/// @brief Field GraphicsInvalidPhysicalMonitorHandle value: I32(-1071241844)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPhysicalMonitorHandle;

/// @brief Field GraphicsInvalidPixelformat value: I32(-1071242435)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPixelformat;

/// @brief Field GraphicsInvalidPixelvalueaccessmode value: I32(-1071242433)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPixelvalueaccessmode;

/// @brief Field GraphicsInvalidPointer value: I32(-1071241756)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPointer;

/// @brief Field GraphicsInvalidPrimarysurfaceSize value: I32(-1071242438)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidPrimarysurfaceSize;

/// @brief Field GraphicsInvalidScanlineOrdering value: I32(-1071242414)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidScanlineOrdering;

/// @brief Field GraphicsInvalidStride value: I32(-1071242436)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidStride;

/// @brief Field GraphicsInvalidTotalRegion value: I32(-1071242484)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidTotalRegion;

/// @brief Field GraphicsInvalidVideoPresentSource value: I32(-1071242492)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideoPresentSource;

/// @brief Field GraphicsInvalidVideoPresentSourceMode value: I32(-1071242480)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideoPresentSourceMode;

/// @brief Field GraphicsInvalidVideoPresentTarget value: I32(-1071242491)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideoPresentTarget;

/// @brief Field GraphicsInvalidVideoPresentTargetMode value: I32(-1071242479)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideoPresentTargetMode;

/// @brief Field GraphicsInvalidVideopresentsourceset value: I32(-1071242475)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideopresentsourceset;

/// @brief Field GraphicsInvalidVideopresenttargetset value: I32(-1071242474)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVideopresenttargetset;

/// @brief Field GraphicsInvalidVidpn value: I32(-1071242493)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpn;

/// @brief Field GraphicsInvalidVidpnPresentPath value: I32(-1071242471)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnPresentPath;

/// @brief Field GraphicsInvalidVidpnSourcemodeset value: I32(-1071242488)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnSourcemodeset;

/// @brief Field GraphicsInvalidVidpnTargetSubsetType value: I32(-1071242449)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnTargetSubsetType;

/// @brief Field GraphicsInvalidVidpnTargetmodeset value: I32(-1071242487)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnTargetmodeset;

/// @brief Field GraphicsInvalidVidpnTopology value: I32(-1071242496)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnTopology;

/// @brief Field GraphicsInvalidVidpnTopologyRecommendationReason value: I32(-1071242419)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVidpnTopologyRecommendationReason;

/// @brief Field GraphicsInvalidVisibleregionSize value: I32(-1071242437)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsInvalidVisibleregionSize;

/// @brief Field GraphicsLeadlinkNotEnumerated value: I32(-1071242191)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsLeadlinkNotEnumerated;

/// @brief Field GraphicsLeadlinkStartDeferred value: I32(1076241463)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsLeadlinkStartDeferred;

/// @brief Field GraphicsMaxNumPathsReached value: I32(-1071242407)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMaxNumPathsReached;

/// @brief Field GraphicsMcaInternalError value: I32(-1071241848)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaInternalError;

/// @brief Field GraphicsMcaInvalidCapabilitiesString value: I32(-1071241849)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaInvalidCapabilitiesString;

/// @brief Field GraphicsMcaInvalidTechnologyTypeReturned value: I32(-1071241762)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaInvalidTechnologyTypeReturned;

/// @brief Field GraphicsMcaInvalidVcpVersion value: I32(-1071241767)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaInvalidVcpVersion;

/// @brief Field GraphicsMcaMccsVersionMismatch value: I32(-1071241765)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaMccsVersionMismatch;

/// @brief Field GraphicsMcaMonitorViolatesMccsSpecification value: I32(-1071241766)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaMonitorViolatesMccsSpecification;

/// @brief Field GraphicsMcaUnsupportedColorTemperature value: I32(-1071241761)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaUnsupportedColorTemperature;

/// @brief Field GraphicsMcaUnsupportedMccsVersion value: I32(-1071241764)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMcaUnsupportedMccsVersion;

/// @brief Field GraphicsMirroringDevicesNotSupported value: I32(-1071241757)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMirroringDevicesNotSupported;

/// @brief Field GraphicsModeAlreadyInModeset value: I32(-1071242476)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsModeAlreadyInModeset;

/// @brief Field GraphicsModeIdMustBeUnique value: I32(-1071242460)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsModeIdMustBeUnique;

/// @brief Field GraphicsModeNotInModeset value: I32(-1071242422)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsModeNotInModeset;

/// @brief Field GraphicsModeNotPinned value: I32(2499335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsModeNotPinned;

/// @brief Field GraphicsMonitorCouldNotBeAssociatedWithAdapter value: I32(-1071242444)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitorCouldNotBeAssociatedWithAdapter;

/// @brief Field GraphicsMonitorNoLongerExists value: I32(-1071241843)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitorNoLongerExists;

/// @brief Field GraphicsMonitorNotConnected value: I32(-1071242440)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitorNotConnected;

/// @brief Field GraphicsMonitordescriptorAlreadyInSet value: I32(-1071242451)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitordescriptorAlreadyInSet;

/// @brief Field GraphicsMonitordescriptorIdMustBeUnique value: I32(-1071242450)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitordescriptorIdMustBeUnique;

/// @brief Field GraphicsMonitordescriptorNotInSet value: I32(-1071242452)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMonitordescriptorNotInSet;

/// @brief Field GraphicsMultisamplingNotSupported value: I32(-1071242423)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsMultisamplingNotSupported;

/// @brief Field GraphicsNoActiveVidpn value: I32(-1071242442)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoActiveVidpn;

/// @brief Field GraphicsNoAvailableImportanceOrdinals value: I32(-1071242412)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoAvailableImportanceOrdinals;

/// @brief Field GraphicsNoAvailableVidpnTarget value: I32(-1071242445)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoAvailableVidpnTarget;

/// @brief Field GraphicsNoDisplayDeviceCorrespondsToName value: I32(-1071241759)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoDisplayDeviceCorrespondsToName;

/// @brief Field GraphicsNoDisplayModeManagementSupport value: I32(-1071242431)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoDisplayModeManagementSupport;

/// @brief Field GraphicsNoMonitorsCorrespondToDisplayDevice value: I32(-1071241755)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoMonitorsCorrespondToDisplayDevice;

/// @brief Field GraphicsNoMoreElementsInDataset value: I32(2499404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoMoreElementsInDataset;

/// @brief Field GraphicsNoPreferredMode value: I32(2499358)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoPreferredMode;

/// @brief Field GraphicsNoRecommendedFunctionalVidpn value: I32(-1071242461)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoRecommendedFunctionalVidpn;

/// @brief Field GraphicsNoRecommendedVidpnTopology value: I32(-1071242470)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoRecommendedVidpnTopology;

/// @brief Field GraphicsNoVideoMemory value: I32(-1071243008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoVideoMemory;

/// @brief Field GraphicsNoVidpnmgr value: I32(-1071242443)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNoVidpnmgr;

/// @brief Field GraphicsNotALinkedAdapter value: I32(-1071242192)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNotALinkedAdapter;

/// @brief Field GraphicsNotExclusiveModeOwner value: I32(-1071243264)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNotExclusiveModeOwner;

/// @brief Field GraphicsNotPostDeviceDriver value: I32(-1071242184)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsNotPostDeviceDriver;

/// @brief Field GraphicsOnlyConsoleSessionSupported value: I32(-1071241760)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOnlyConsoleSessionSupported;

/// @brief Field GraphicsOpmAllHdcpHardwareAlreadyInUse value: I32(-1071241960)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmAllHdcpHardwareAlreadyInUse;

/// @brief Field GraphicsOpmDriverInternalError value: I32(-1071241954)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmDriverInternalError;

/// @brief Field GraphicsOpmHdcpSrmNeverSet value: I32(-1071241962)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmHdcpSrmNeverSet;

/// @brief Field GraphicsOpmInternalError value: I32(-1071241973)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInternalError;

/// @brief Field GraphicsOpmInvalidConfigurationRequest value: I32(-1071241951)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInvalidConfigurationRequest;

/// @brief Field GraphicsOpmInvalidEncryptedParameters value: I32(-1071241981)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInvalidEncryptedParameters;

/// @brief Field GraphicsOpmInvalidHandle value: I32(-1071241972)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInvalidHandle;

/// @brief Field GraphicsOpmInvalidInformationRequest value: I32(-1071241955)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInvalidInformationRequest;

/// @brief Field GraphicsOpmInvalidSrm value: I32(-1071241966)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmInvalidSrm;

/// @brief Field GraphicsOpmNoVideoOutputsExist value: I32(-1071241979)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmNoVideoOutputsExist;

/// @brief Field GraphicsOpmNotSupported value: I32(-1071241984)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmNotSupported;

/// @brief Field GraphicsOpmOutputDoesNotSupportAcp value: I32(-1071241964)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmOutputDoesNotSupportAcp;

/// @brief Field GraphicsOpmOutputDoesNotSupportCgmsa value: I32(-1071241963)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmOutputDoesNotSupportCgmsa;

/// @brief Field GraphicsOpmOutputDoesNotSupportHdcp value: I32(-1071241965)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmOutputDoesNotSupportHdcp;

/// @brief Field GraphicsOpmResolutionTooHigh value: I32(-1071241961)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmResolutionTooHigh;

/// @brief Field GraphicsOpmSessionTypeChangeInProgress value: I32(-1071241957)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmSessionTypeChangeInProgress;

/// @brief Field GraphicsOpmSignalingNotSupported value: I32(-1071241952)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmSignalingNotSupported;

/// @brief Field GraphicsOpmSpanningModeEnabled value: I32(-1071241969)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmSpanningModeEnabled;

/// @brief Field GraphicsOpmTheaterModeEnabled value: I32(-1071241968)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmTheaterModeEnabled;

/// @brief Field GraphicsOpmVideoOutputDoesNotHaveCoppSemantics value: I32(-1071241956)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmVideoOutputDoesNotHaveCoppSemantics;

/// @brief Field GraphicsOpmVideoOutputDoesNotHaveOpmSemantics value: I32(-1071241953)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmVideoOutputDoesNotHaveOpmSemantics;

/// @brief Field GraphicsOpmVideoOutputNoLongerExists value: I32(-1071241958)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsOpmVideoOutputNoLongerExists;

/// @brief Field GraphicsParameterArrayTooSmall value: I32(-1071241754)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsParameterArrayTooSmall;

/// @brief Field GraphicsPartialDataPopulated value: I32(1076240394)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPartialDataPopulated;

/// @brief Field GraphicsPathAlreadyInTopology value: I32(-1071242477)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPathAlreadyInTopology;

/// @brief Field GraphicsPathContentGeometryTransformationNotPinned value: I32(2499409)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPathContentGeometryTransformationNotPinned;

/// @brief Field GraphicsPathContentGeometryTransformationNotSupported value: I32(-1071242426)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPathContentGeometryTransformationNotSupported;

/// @brief Field GraphicsPathNotInTopology value: I32(-1071242457)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPathNotInTopology;

/// @brief Field GraphicsPinnedModeMustRemainInSet value: I32(-1071242478)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPinnedModeMustRemainInSet;

/// @brief Field GraphicsPollingTooFrequently value: I32(1076241465)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPollingTooFrequently;

/// @brief Field GraphicsPresentDenied value: I32(-1071243257)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPresentDenied;

/// @brief Field GraphicsPresentModeChanged value: I32(-1071243259)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPresentModeChanged;

/// @brief Field GraphicsPresentOccluded value: I32(-1071243258)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPresentOccluded;

/// @brief Field GraphicsPresentRedirectionDisabled value: I32(-1071243253)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPresentRedirectionDisabled;

/// @brief Field GraphicsPresentUnoccluded value: I32(-1071243252)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPresentUnoccluded;

/// @brief Field GraphicsPvpHfsFailed value: I32(-1071241967)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPvpHfsFailed;

/// @brief Field GraphicsPvpInvalidCertificateLength value: I32(-1071241970)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsPvpInvalidCertificateLength;

/// @brief Field GraphicsResourcesNotRelated value: I32(-1071242448)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsResourcesNotRelated;

/// @brief Field GraphicsSessionTypeChangeInProgress value: I32(-1071249944)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSessionTypeChangeInProgress;

/// @brief Field GraphicsSkipAllocationPreparation value: I32(1076240897)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSkipAllocationPreparation;

/// @brief Field GraphicsSourceAlreadyInSet value: I32(-1071242473)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSourceAlreadyInSet;

/// @brief Field GraphicsSourceIdMustBeUnique value: I32(-1071242447)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSourceIdMustBeUnique;

/// @brief Field GraphicsSourceNotInTopology value: I32(-1071242439)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSourceNotInTopology;

/// @brief Field GraphicsSpecifiedChildAlreadyConnected value: I32(-1071242240)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsSpecifiedChildAlreadyConnected;

/// @brief Field GraphicsStaleModeset value: I32(-1071242464)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsStaleModeset;

/// @brief Field GraphicsStaleVidpnTopology value: I32(-1071242441)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsStaleVidpnTopology;

/// @brief Field GraphicsStartDeferred value: I32(1076241466)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsStartDeferred;

/// @brief Field GraphicsTargetAlreadyInSet value: I32(-1071242472)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTargetAlreadyInSet;

/// @brief Field GraphicsTargetIdMustBeUnique value: I32(-1071242446)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTargetIdMustBeUnique;

/// @brief Field GraphicsTargetNotInTopology value: I32(-1071242432)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTargetNotInTopology;

/// @brief Field GraphicsTooManyReferences value: I32(-1071243005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTooManyReferences;

/// @brief Field GraphicsTopologyChangesNotAllowed value: I32(-1071242413)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTopologyChangesNotAllowed;

/// @brief Field GraphicsTryAgainLater value: I32(-1071243004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTryAgainLater;

/// @brief Field GraphicsTryAgainNow value: I32(-1071243003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsTryAgainNow;

/// @brief Field GraphicsUabNotSupported value: I32(-1071241982)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsUabNotSupported;

/// @brief Field GraphicsUnassignedModesetAlreadyExists value: I32(-1071242416)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsUnassignedModesetAlreadyExists;

/// @brief Field GraphicsUnknownChildStatus value: I32(1076241455)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsUnknownChildStatus;

/// @brief Field GraphicsUnswizzlingApertureUnavailable value: I32(-1071243001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsUnswizzlingApertureUnavailable;

/// @brief Field GraphicsUnswizzlingApertureUnsupported value: I32(-1071243000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsUnswizzlingApertureUnsupported;

/// @brief Field GraphicsVideoPresentTargetsLessThanSources value: I32(-1071242458)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsVideoPresentTargetsLessThanSources;

/// @brief Field GraphicsVidpnModalityNotSupported value: I32(-1071242490)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsVidpnModalityNotSupported;

/// @brief Field GraphicsVidpnSourceInUse value: I32(-1071242430)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsVidpnSourceInUse;

/// @brief Field GraphicsVidpnTopologyCurrentlyNotSupported value: I32(-1071242494)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsVidpnTopologyCurrentlyNotSupported;

/// @brief Field GraphicsVidpnTopologyNotSupported value: I32(-1071242495)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsVidpnTopologyNotSupported;

/// @brief Field GraphicsWindowdcNotAvailable value: I32(-1071243251)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsWindowdcNotAvailable;

/// @brief Field GraphicsWindowlessPresentDisabled value: I32(-1071243250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsWindowlessPresentDisabled;

/// @brief Field GraphicsWrongAllocationDevice value: I32(-1071242987)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GraphicsWrongAllocationDevice;

/// @brief Field GroupExists value: I32(1318)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GroupExists;

/// @brief Field GroupNotAvailable value: I32(5012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GroupNotAvailable;

/// @brief Field GroupNotFound value: I32(5013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GroupNotFound;

/// @brief Field GroupNotOnline value: I32(5014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GroupNotOnline;

/// @brief Field GuidSubstitutionMade value: I32(680)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const GuidSubstitutionMade;

/// @brief Field HandleDiskFull value: I32(39)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HandleDiskFull;

/// @brief Field HandleEof value: I32(38)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HandleEof;

/// @brief Field HandleNoLongerValid value: I32(6815)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HandleNoLongerValid;

/// @brief Field HandlesClosed value: I32(676)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HandlesClosed;

/// @brief Field HashNotPresent value: I32(15301)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HashNotPresent;

/// @brief Field HashNotSupported value: I32(15300)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HashNotSupported;

/// @brief Field HeuristicDamagePossible value: I32(6731)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HeuristicDamagePossible;

/// @brief Field Hibernated value: I32(726)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Hibernated;

/// @brief Field HibernationFailure value: I32(656)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HibernationFailure;

/// @brief Field HookNeedsHmod value: I32(1428)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HookNeedsHmod;

/// @brief Field HookNotInstalled value: I32(1431)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HookNotInstalled;

/// @brief Field HookTypeNotAllowed value: I32(1458)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HookTypeNotAllowed;

/// @brief Field HostDown value: I32(1256)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HostDown;

/// @brief Field HostNodeNotAvailable value: I32(5005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HostNodeNotAvailable;

/// @brief Field HostNodeNotGroupOwner value: I32(5016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HostNodeNotGroupOwner;

/// @brief Field HostNodeNotResourceOwner value: I32(5015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HostNodeNotResourceOwner;

/// @brief Field HostUnreachable value: I32(1232)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HostUnreachable;

/// @brief Field HotkeyAlreadyRegistered value: I32(1409)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HotkeyAlreadyRegistered;

/// @brief Field HotkeyNotRegistered value: I32(1419)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HotkeyNotRegistered;

/// @brief Field HungDisplayDriverThread value: I32(-2144993279)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HungDisplayDriverThread;

/// @brief Field HvAccessDenied value: I32(-1070268410)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvAccessDenied;

/// @brief Field HvAcknowledged value: I32(-1070268394)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvAcknowledged;

/// @brief Field HvFeatureUnavailable value: I32(-1070268386)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvFeatureUnavailable;

/// @brief Field HvInactive value: I32(-1070268388)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInactive;

/// @brief Field HvInsufficientBuffers value: I32(-1070268397)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInsufficientBuffers;

/// @brief Field HvInsufficientDeviceDomains value: I32(-1070268360)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInsufficientDeviceDomains;

/// @brief Field HvInsufficientMemory value: I32(-1070268405)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInsufficientMemory;

/// @brief Field HvInvalidAlignment value: I32(-1070268412)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidAlignment;

/// @brief Field HvInvalidConnectionId value: I32(-1070268398)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidConnectionId;

/// @brief Field HvInvalidHypercallCode value: I32(-1070268414)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidHypercallCode;

/// @brief Field HvInvalidHypercallInput value: I32(-1070268413)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidHypercallInput;

/// @brief Field HvInvalidLpIndex value: I32(-1070268351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidLpIndex;

/// @brief Field HvInvalidParameter value: I32(-1070268411)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidParameter;

/// @brief Field HvInvalidPartitionId value: I32(-1070268403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidPartitionId;

/// @brief Field HvInvalidPartitionState value: I32(-1070268409)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidPartitionState;

/// @brief Field HvInvalidPortId value: I32(-1070268399)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidPortId;

/// @brief Field HvInvalidProximityDomainInfo value: I32(-1070268390)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidProximityDomainInfo;

/// @brief Field HvInvalidSaveRestoreState value: I32(-1070268393)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidSaveRestoreState;

/// @brief Field HvInvalidSynicState value: I32(-1070268392)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidSynicState;

/// @brief Field HvInvalidVpIndex value: I32(-1070268402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvInvalidVpIndex;

/// @brief Field HvNoData value: I32(-1070268389)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvNoData;

/// @brief Field HvNoResources value: I32(-1070268387)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvNoResources;

/// @brief Field HvNotAcknowledged value: I32(-1070268396)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvNotAcknowledged;

/// @brief Field HvNotPresent value: I32(-1070264320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvNotPresent;

/// @brief Field HvObjectInUse value: I32(-1070268391)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvObjectInUse;

/// @brief Field HvOperationDenied value: I32(-1070268408)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvOperationDenied;

/// @brief Field HvPartitionTooDeep value: I32(-1070268404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvPartitionTooDeep;

/// @brief Field HvPropertyValueOutOfRange value: I32(-1070268406)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvPropertyValueOutOfRange;

/// @brief Field HvUnknownProperty value: I32(-1070268407)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HvUnknownProperty;

/// @brief Field HwndsHaveDiffParent value: I32(1441)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const HwndsHaveDiffParent;

/// @brief Field IcmNotEnabled value: I32(2018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IcmNotEnabled;

/// @brief Field IeportFull value: I32(4341)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IeportFull;

/// @brief Field IllFormedPassword value: I32(1324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IllFormedPassword;

/// @brief Field IllegalCharacter value: I32(582)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IllegalCharacter;

/// @brief Field IllegalDllRelocation value: I32(623)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IllegalDllRelocation;

/// @brief Field IllegalElementAddress value: I32(1162)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IllegalElementAddress;

/// @brief Field IllegalFloatContext value: I32(579)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IllegalFloatContext;

/// @brief Field ImageAtDifferentBase value: I32(807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImageAtDifferentBase;

/// @brief Field ImageMachineTypeMismatch value: I32(706)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImageMachineTypeMismatch;

/// @brief Field ImageMachineTypeMismatchExe value: I32(720)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImageMachineTypeMismatchExe;

/// @brief Field ImageNotAtBase value: I32(700)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImageNotAtBase;

/// @brief Field ImageSubsystemNotPresent value: I32(308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImageSubsystemNotPresent;

/// @brief Field ImplementationLimit value: I32(1292)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImplementationLimit;

/// @brief Field ImplicitTransactionNotSupported value: I32(6725)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ImplicitTransactionNotSupported;

/// @brief Field IncBackup value: I32(4003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncBackup;

/// @brief Field IncompatibleServicePrivilege value: I32(1297)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncompatibleServicePrivilege;

/// @brief Field IncompatibleServiceSidType value: I32(1290)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncompatibleServiceSidType;

/// @brief Field IncompatibleWithGlobalShortNameRegistrySetting value: I32(304)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncompatibleWithGlobalShortNameRegistrySetting;

/// @brief Field IncorrectAccountType value: I32(8646)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncorrectAccountType;

/// @brief Field IncorrectAddress value: I32(1241)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncorrectAddress;

/// @brief Field IncorrectSize value: I32(1462)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IncorrectSize;

/// @brief Field IndexAbsent value: I32(1611)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IndexAbsent;

/// @brief Field IndigenousType value: I32(4338)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IndigenousType;

/// @brief Field IndoubtTransactionsExist value: I32(6827)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IndoubtTransactionsExist;

/// @brief Field InfloopInRelocChain value: I32(202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InfloopInRelocChain;

/// @brief Field InstallAlreadyRunning value: I32(1618)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallAlreadyRunning;

/// @brief Field InstallCancel value: I32(15608)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallCancel;

/// @brief Field InstallDeregistrationFailure value: I32(15607)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallDeregistrationFailure;

/// @brief Field InstallFailed value: I32(15609)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallFailed;

/// @brief Field InstallFailure value: I32(1603)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallFailure;

/// @brief Field InstallFirewallServiceNotRunning value: I32(15626)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallFirewallServiceNotRunning;

/// @brief Field InstallInvalidPackage value: I32(15602)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallInvalidPackage;

/// @brief Field InstallLanguageUnsupported value: I32(1623)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallLanguageUnsupported;

/// @brief Field InstallLogFailure value: I32(1622)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallLogFailure;

/// @brief Field InstallNetworkFailure value: I32(15605)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallNetworkFailure;

/// @brief Field InstallNotused value: I32(1634)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallNotused;

/// @brief Field InstallOpenPackageFailed value: I32(15600)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallOpenPackageFailed;

/// @brief Field InstallOutOfDiskSpace value: I32(15604)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallOutOfDiskSpace;

/// @brief Field InstallPackageDowngrade value: I32(15622)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageDowngrade;

/// @brief Field InstallPackageInvalid value: I32(1620)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageInvalid;

/// @brief Field InstallPackageNotFound value: I32(15601)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageNotFound;

/// @brief Field InstallPackageOpenFailed value: I32(1619)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageOpenFailed;

/// @brief Field InstallPackageRejected value: I32(1625)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageRejected;

/// @brief Field InstallPackageVersion value: I32(1613)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPackageVersion;

/// @brief Field InstallPlatformUnsupported value: I32(1633)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPlatformUnsupported;

/// @brief Field InstallPolicyFailure value: I32(15615)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPolicyFailure;

/// @brief Field InstallPrerequisiteFailed value: I32(15613)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallPrerequisiteFailed;

/// @brief Field InstallRegistrationFailure value: I32(15606)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallRegistrationFailure;

/// @brief Field InstallRejected value: I32(1654)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallRejected;

/// @brief Field InstallRemoteDisallowed value: I32(1640)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallRemoteDisallowed;

/// @brief Field InstallRemoteProhibited value: I32(1645)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallRemoteProhibited;

/// @brief Field InstallResolveDependencyFailed value: I32(15603)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallResolveDependencyFailed;

/// @brief Field InstallServiceFailure value: I32(1601)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallServiceFailure;

/// @brief Field InstallServiceSafeboot value: I32(1652)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallServiceSafeboot;

/// @brief Field InstallSourceAbsent value: I32(1612)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallSourceAbsent;

/// @brief Field InstallSuspend value: I32(1604)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallSuspend;

/// @brief Field InstallTempUnwritable value: I32(1632)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallTempUnwritable;

/// @brief Field InstallTransformFailure value: I32(1624)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallTransformFailure;

/// @brief Field InstallTransformRejected value: I32(1644)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallTransformRejected;

/// @brief Field InstallUiFailure value: I32(1621)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallUiFailure;

/// @brief Field InstallUserexit value: I32(1602)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstallUserexit;

/// @brief Field InstructionMisalignment value: I32(549)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InstructionMisalignment;

/// @brief Field InsufficientBuffer value: I32(122)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InsufficientBuffer;

/// @brief Field InsufficientLogonInfo value: I32(608)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InsufficientLogonInfo;

/// @brief Field InsufficientPower value: I32(639)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InsufficientPower;

/// @brief Field InsufficientResourceForSpecifiedSharedSectionSize value: I32(781)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InsufficientResourceForSpecifiedSharedSectionSize;

/// @brief Field IntermixedKernelEaOperation value: I32(324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IntermixedKernelEaOperation;

/// @brief Field InternalDbCorruption value: I32(1358)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InternalDbCorruption;

/// @brief Field InternalDbError value: I32(1383)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InternalDbError;

/// @brief Field InternalError value: I32(1359)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InternalError;

/// @brief Field InterruptStillConnected value: I32(764)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InterruptStillConnected;

/// @brief Field InterruptVectorAlreadyConnected value: I32(763)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InterruptVectorAlreadyConnected;

/// @brief Field InvalidAccelHandle value: I32(1403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAccelHandle;

/// @brief Field InvalidAccess value: I32(12)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAccess;

/// @brief Field InvalidAccountName value: I32(1315)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAccountName;

/// @brief Field InvalidAceCondition value: I32(805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAceCondition;

/// @brief Field InvalidAcl value: I32(1336)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAcl;

/// @brief Field InvalidAddress value: I32(487)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAddress;

/// @brief Field InvalidAtInterruptTime value: I32(104)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidAtInterruptTime;

/// @brief Field InvalidBlock value: I32(9)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidBlock;

/// @brief Field InvalidBlockLength value: I32(1106)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidBlockLength;

/// @brief Field InvalidCap value: I32(320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCap;

/// @brief Field InvalidCategory value: I32(117)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCategory;

/// @brief Field InvalidCleaner value: I32(4310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCleaner;

/// @brief Field InvalidClusterIpv6Address value: I32(5911)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidClusterIpv6Address;

/// @brief Field InvalidCmm value: I32(2010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCmm;

/// @brief Field InvalidColorindex value: I32(2022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidColorindex;

/// @brief Field InvalidColorspace value: I32(2017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidColorspace;

/// @brief Field InvalidComboboxMessage value: I32(1422)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidComboboxMessage;

/// @brief Field InvalidCommandLine value: I32(1639)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCommandLine;

/// @brief Field InvalidComputername value: I32(1210)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidComputername;

/// @brief Field InvalidCruntimeParameter value: I32(1288)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCruntimeParameter;

/// @brief Field InvalidCursorHandle value: I32(1402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidCursorHandle;

/// @brief Field InvalidData value: I32(13)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidData;

/// @brief Field InvalidDatatype value: I32(1804)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDatatype;

/// @brief Field InvalidDeviceObjectParameter value: I32(650)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDeviceObjectParameter;

/// @brief Field InvalidDll value: I32(1154)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDll;

/// @brief Field InvalidDomainRole value: I32(1354)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDomainRole;

/// @brief Field InvalidDomainState value: I32(1353)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDomainState;

/// @brief Field InvalidDomainname value: I32(1212)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDomainname;

/// @brief Field InvalidDrive value: I32(15)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDrive;

/// @brief Field InvalidDriveObject value: I32(4321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDriveObject;

/// @brief Field InvalidDwpHandle value: I32(1405)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidDwpHandle;

/// @brief Field InvalidEaHandle value: I32(278)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEaHandle;

/// @brief Field InvalidEaName value: I32(254)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEaName;

/// @brief Field InvalidEditHeight value: I32(1424)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEditHeight;

/// @brief Field InvalidEnvironment value: I32(1805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEnvironment;

/// @brief Field InvalidEventCount value: I32(151)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEventCount;

/// @brief Field InvalidEventname value: I32(1211)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidEventname;

/// @brief Field InvalidExceptionHandler value: I32(310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidExceptionHandler;

/// @brief Field InvalidExeSignature value: I32(191)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidExeSignature;

/// @brief Field InvalidField value: I32(1616)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidField;

/// @brief Field InvalidFieldInParameterList value: I32(328)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFieldInParameterList;

/// @brief Field InvalidFilterProc value: I32(1427)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFilterProc;

/// @brief Field InvalidFlagNumber value: I32(186)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFlagNumber;

/// @brief Field InvalidFlags value: I32(1004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFlags;

/// @brief Field InvalidFormName value: I32(1902)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFormName;

/// @brief Field InvalidFormSize value: I32(1903)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFormSize;

/// @brief Field InvalidFunction value: I32(1)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidFunction;

/// @brief Field InvalidGroupAttributes value: I32(1345)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidGroupAttributes;

/// @brief Field InvalidGroupname value: I32(1209)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidGroupname;

/// @brief Field InvalidGwCommand value: I32(1443)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidGwCommand;

/// @brief Field InvalidHandle value: I32(6)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidHandle;

/// @brief Field InvalidHandleState value: I32(1609)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidHandleState;

/// @brief Field InvalidHookFilter value: I32(1426)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidHookFilter;

/// @brief Field InvalidHookHandle value: I32(1404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidHookHandle;

/// @brief Field InvalidHwProfile value: I32(619)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidHwProfile;

/// @brief Field InvalidIconHandle value: I32(1414)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidIconHandle;

/// @brief Field InvalidIdAuthority value: I32(1343)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidIdAuthority;

/// @brief Field InvalidImageHash value: I32(577)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidImageHash;

/// @brief Field InvalidImportOfNonDll value: I32(1276)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidImportOfNonDll;

/// @brief Field InvalidIndex value: I32(1413)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidIndex;

/// @brief Field InvalidKernelInfoVersion value: I32(340)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidKernelInfoVersion;

/// @brief Field InvalidKeyboardHandle value: I32(1457)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidKeyboardHandle;

/// @brief Field InvalidLabel value: I32(1299)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLabel;

/// @brief Field InvalidLbMessage value: I32(1432)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLbMessage;

/// @brief Field InvalidLdtDescriptor value: I32(564)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLdtDescriptor;

/// @brief Field InvalidLdtOffset value: I32(563)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLdtOffset;

/// @brief Field InvalidLdtSize value: I32(561)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLdtSize;

/// @brief Field InvalidLevel value: I32(124)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLevel;

/// @brief Field InvalidLibrary value: I32(4301)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLibrary;

/// @brief Field InvalidListFormat value: I32(153)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidListFormat;

/// @brief Field InvalidLockRange value: I32(307)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLockRange;

/// @brief Field InvalidLogonHours value: I32(1328)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLogonHours;

/// @brief Field InvalidLogonType value: I32(1367)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidLogonType;

/// @brief Field InvalidMedia value: I32(4300)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMedia;

/// @brief Field InvalidMediaPool value: I32(4302)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMediaPool;

/// @brief Field InvalidMember value: I32(1388)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMember;

/// @brief Field InvalidMenuHandle value: I32(1401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMenuHandle;

/// @brief Field InvalidMessage value: I32(1002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMessage;

/// @brief Field InvalidMessagedest value: I32(1218)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMessagedest;

/// @brief Field InvalidMessagename value: I32(1217)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMessagename;

/// @brief Field InvalidMinallocsize value: I32(195)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMinallocsize;

/// @brief Field InvalidModuletype value: I32(190)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidModuletype;

/// @brief Field InvalidMonitorHandle value: I32(1461)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMonitorHandle;

/// @brief Field InvalidMsgboxStyle value: I32(1438)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidMsgboxStyle;

/// @brief Field InvalidName value: I32(123)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidName;

/// @brief Field InvalidNetname value: I32(1214)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidNetname;

/// @brief Field InvalidOperation value: I32(4317)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidOperation;

/// @brief Field InvalidOperationOnQuorum value: I32(5068)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidOperationOnQuorum;

/// @brief Field InvalidOplockProtocol value: I32(301)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidOplockProtocol;

/// @brief Field InvalidOrdinal value: I32(182)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidOrdinal;

/// @brief Field InvalidOwner value: I32(1307)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidOwner;

/// @brief Field InvalidPackageSidLength value: I32(4253)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPackageSidLength;

/// @brief Field InvalidParameter value: I32(87)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidParameter;

/// @brief Field InvalidPassword value: I32(86)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPassword;

/// @brief Field InvalidPasswordname value: I32(1216)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPasswordname;

/// @brief Field InvalidPatchXml value: I32(1650)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPatchXml;

/// @brief Field InvalidPepInfoVersion value: I32(341)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPepInfoVersion;

/// @brief Field InvalidPixelFormat value: I32(2000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPixelFormat;

/// @brief Field InvalidPlugplayDevicePath value: I32(620)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPlugplayDevicePath;

/// @brief Field InvalidPortAttributes value: I32(545)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPortAttributes;

/// @brief Field InvalidPrimaryGroup value: I32(1308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrimaryGroup;

/// @brief Field InvalidPrintMonitor value: I32(3007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrintMonitor;

/// @brief Field InvalidPrinterCommand value: I32(1803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrinterCommand;

/// @brief Field InvalidPrinterDriverManifest value: I32(3021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrinterDriverManifest;

/// @brief Field InvalidPrinterName value: I32(1801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrinterName;

/// @brief Field InvalidPrinterState value: I32(1906)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPrinterState;

/// @brief Field InvalidPriority value: I32(1800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidPriority;

/// @brief Field InvalidProfile value: I32(2011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidProfile;

/// @brief Field InvalidQuotaLower value: I32(547)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidQuotaLower;

/// @brief Field InvalidReparseData value: I32(4392)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidReparseData;

/// @brief Field InvalidRunlevelSetting value: I32(15401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidRunlevelSetting;

/// @brief Field InvalidScrollbarRange value: I32(1448)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidScrollbarRange;

/// @brief Field InvalidSecurityDescr value: I32(1338)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSecurityDescr;

/// @brief Field InvalidSegdpl value: I32(198)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSegdpl;

/// @brief Field InvalidSegmentNumber value: I32(180)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSegmentNumber;

/// @brief Field InvalidSeparatorFile value: I32(1799)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSeparatorFile;

/// @brief Field InvalidServerState value: I32(1352)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidServerState;

/// @brief Field InvalidServiceAccount value: I32(1057)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidServiceAccount;

/// @brief Field InvalidServiceControl value: I32(1052)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidServiceControl;

/// @brief Field InvalidServiceLock value: I32(1071)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidServiceLock;

/// @brief Field InvalidServicename value: I32(1213)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidServicename;

/// @brief Field InvalidSharename value: I32(1215)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSharename;

/// @brief Field InvalidShowwinCommand value: I32(1449)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidShowwinCommand;

/// @brief Field InvalidSid value: I32(1337)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSid;

/// @brief Field InvalidSignalNumber value: I32(209)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSignalNumber;

/// @brief Field InvalidSpiValue value: I32(1439)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSpiValue;

/// @brief Field InvalidStackseg value: I32(189)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidStackseg;

/// @brief Field InvalidStagedSignature value: I32(15620)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidStagedSignature;

/// @brief Field InvalidStartingCodeseg value: I32(188)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidStartingCodeseg;

/// @brief Field InvalidState value: I32(5023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidState;

/// @brief Field InvalidSubAuthority value: I32(1335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidSubAuthority;

/// @brief Field InvalidTable value: I32(1628)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTable;

/// @brief Field InvalidTargetHandle value: I32(114)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTargetHandle;

/// @brief Field InvalidTaskIndex value: I32(1551)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTaskIndex;

/// @brief Field InvalidTaskName value: I32(1550)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTaskName;

/// @brief Field InvalidThreadId value: I32(1444)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidThreadId;

/// @brief Field InvalidTime value: I32(1901)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTime;

/// @brief Field InvalidToken value: I32(315)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidToken;

/// @brief Field InvalidTransaction value: I32(6700)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTransaction;

/// @brief Field InvalidTransform value: I32(2020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidTransform;

/// @brief Field InvalidUnwindTarget value: I32(544)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidUnwindTarget;

/// @brief Field InvalidUserBuffer value: I32(1784)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidUserBuffer;

/// @brief Field InvalidUserPrincipalName value: I32(8636)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidUserPrincipalName;

/// @brief Field InvalidVariant value: I32(604)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidVariant;

/// @brief Field InvalidVerifySwitch value: I32(118)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidVerifySwitch;

/// @brief Field InvalidWindowHandle value: I32(1400)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidWindowHandle;

/// @brief Field InvalidWindowStyle value: I32(2002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidWindowStyle;

/// @brief Field InvalidWorkstation value: I32(1329)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const InvalidWorkstation;

/// @brief Field IoDevice value: I32(1117)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoDevice;

/// @brief Field IoIncomplete value: I32(996)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoIncomplete;

/// @brief Field IoPending value: I32(997)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoPending;

/// @brief Field IoPrivilegeFailed value: I32(571)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoPrivilegeFailed;

/// @brief Field IoReissueAsCached value: I32(3950)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoReissueAsCached;

/// @brief Field IoplNotEnabled value: I32(197)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IoplNotEnabled;

/// @brief Field IpAddressConflict1 value: I32(611)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpAddressConflict1;

/// @brief Field IpAddressConflict2 value: I32(612)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpAddressConflict2;

/// @brief Field IpsecAuthFirewallDrop value: I32(13917)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecAuthFirewallDrop;

/// @brief Field IpsecBadSpi value: I32(13910)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecBadSpi;

/// @brief Field IpsecClearTextDrop value: I32(13916)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecClearTextDrop;

/// @brief Field IpsecDefaultMmAuthNotFound value: I32(13014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDefaultMmAuthNotFound;

/// @brief Field IpsecDefaultMmPolicyNotFound value: I32(13013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDefaultMmPolicyNotFound;

/// @brief Field IpsecDefaultQmPolicyNotFound value: I32(13015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDefaultQmPolicyNotFound;

/// @brief Field IpsecDospBlock value: I32(13925)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospBlock;

/// @brief Field IpsecDospInvalidPacket value: I32(13927)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospInvalidPacket;

/// @brief Field IpsecDospKeymodNotAllowed value: I32(13930)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospKeymodNotAllowed;

/// @brief Field IpsecDospMaxEntries value: I32(13929)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospMaxEntries;

/// @brief Field IpsecDospMaxPerIpRatelimitQueues value: I32(13932)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospMaxPerIpRatelimitQueues;

/// @brief Field IpsecDospNotInstalled value: I32(13931)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospNotInstalled;

/// @brief Field IpsecDospReceivedMulticast value: I32(13926)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospReceivedMulticast;

/// @brief Field IpsecDospStateLookupFailed value: I32(13928)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecDospStateLookupFailed;

/// @brief Field IpsecIkeAddUpdateKeyFailed value: I32(13860)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeAddUpdateKeyFailed;

/// @brief Field IpsecIkeAttribFail value: I32(13802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeAttribFail;

/// @brief Field IpsecIkeAuthFail value: I32(13801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeAuthFail;

/// @brief Field IpsecIkeAuthorizationFailure value: I32(13905)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeAuthorizationFailure;

/// @brief Field IpsecIkeAuthorizationFailureWithOptionalRetry value: I32(13907)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeAuthorizationFailureWithOptionalRetry;

/// @brief Field IpsecIkeBenignReinit value: I32(13878)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeBenignReinit;

/// @brief Field IpsecIkeCertChainPolicyMismatch value: I32(13887)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeCertChainPolicyMismatch;

/// @brief Field IpsecIkeCgaAuthFailed value: I32(13892)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeCgaAuthFailed;

/// @brief Field IpsecIkeCoexistenceSuppress value: I32(13902)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeCoexistenceSuppress;

/// @brief Field IpsecIkeCriticalPayloadNotRecognized value: I32(13823)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeCriticalPayloadNotRecognized;

/// @brief Field IpsecIkeCrlFailed value: I32(13817)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeCrlFailed;

/// @brief Field IpsecIkeDecrypt value: I32(13867)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeDecrypt;

/// @brief Field IpsecIkeDhFail value: I32(13822)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeDhFail;

/// @brief Field IpsecIkeDhFailure value: I32(13864)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeDhFailure;

/// @brief Field IpsecIkeDosCookieSent value: I32(13890)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeDosCookieSent;

/// @brief Field IpsecIkeDropNoResponse value: I32(13813)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeDropNoResponse;

/// @brief Field IpsecIkeEncrypt value: I32(13866)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeEncrypt;

/// @brief Field IpsecIkeError value: I32(13816)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeError;

/// @brief Field IpsecIkeFailqueryssp value: I32(13854)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeFailqueryssp;

/// @brief Field IpsecIkeFailsspinit value: I32(13853)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeFailsspinit;

/// @brief Field IpsecIkeGeneralProcessingError value: I32(13804)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeGeneralProcessingError;

/// @brief Field IpsecIkeGetspifail value: I32(13857)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeGetspifail;

/// @brief Field IpsecIkeInnerIpAssignmentFailure value: I32(13899)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInnerIpAssignmentFailure;

/// @brief Field IpsecIkeInvalidAuthAlg value: I32(13874)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidAuthAlg;

/// @brief Field IpsecIkeInvalidAuthPayload value: I32(13889)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidAuthPayload;

/// @brief Field IpsecIkeInvalidCertKeylen value: I32(13881)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidCertKeylen;

/// @brief Field IpsecIkeInvalidCertType value: I32(13819)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidCertType;

/// @brief Field IpsecIkeInvalidCookie value: I32(13846)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidCookie;

/// @brief Field IpsecIkeInvalidEncryptAlg value: I32(13873)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidEncryptAlg;

/// @brief Field IpsecIkeInvalidFilter value: I32(13858)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidFilter;

/// @brief Field IpsecIkeInvalidGroup value: I32(13865)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidGroup;

/// @brief Field IpsecIkeInvalidHash value: I32(13870)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidHash;

/// @brief Field IpsecIkeInvalidHashAlg value: I32(13871)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidHashAlg;

/// @brief Field IpsecIkeInvalidHashSize value: I32(13872)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidHashSize;

/// @brief Field IpsecIkeInvalidHeader value: I32(13824)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidHeader;

/// @brief Field IpsecIkeInvalidKeyUsage value: I32(13818)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidKeyUsage;

/// @brief Field IpsecIkeInvalidMajorVersion value: I32(13880)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidMajorVersion;

/// @brief Field IpsecIkeInvalidMmForQm value: I32(13894)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidMmForQm;

/// @brief Field IpsecIkeInvalidPayload value: I32(13843)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidPayload;

/// @brief Field IpsecIkeInvalidPolicy value: I32(13861)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidPolicy;

/// @brief Field IpsecIkeInvalidResponderLifetimeNotify value: I32(13879)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidResponderLifetimeNotify;

/// @brief Field IpsecIkeInvalidSig value: I32(13875)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidSig;

/// @brief Field IpsecIkeInvalidSignature value: I32(13826)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidSignature;

/// @brief Field IpsecIkeInvalidSituation value: I32(13863)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeInvalidSituation;

/// @brief Field IpsecIkeKerberosError value: I32(13827)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeKerberosError;

/// @brief Field IpsecIkeKillDummyNapTunnel value: I32(13898)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeKillDummyNapTunnel;

/// @brief Field IpsecIkeLoadFailed value: I32(13876)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeLoadFailed;

/// @brief Field IpsecIkeLoadSoftSa value: I32(13844)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeLoadSoftSa;

/// @brief Field IpsecIkeMmAcquireDrop value: I32(13809)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeMmAcquireDrop;

/// @brief Field IpsecIkeMmDelayDrop value: I32(13814)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeMmDelayDrop;

/// @brief Field IpsecIkeMmExpired value: I32(13885)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeMmExpired;

/// @brief Field IpsecIkeMmLimit value: I32(13882)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeMmLimit;

/// @brief Field IpsecIkeNegStatusBegin value: I32(13800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNegStatusBegin;

/// @brief Field IpsecIkeNegStatusEnd value: I32(13897)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNegStatusEnd;

/// @brief Field IpsecIkeNegStatusExtendedEnd value: I32(13909)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNegStatusExtendedEnd;

/// @brief Field IpsecIkeNegotiationDisabled value: I32(13883)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNegotiationDisabled;

/// @brief Field IpsecIkeNegotiationPending value: I32(13803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNegotiationPending;

/// @brief Field IpsecIkeNoCert value: I32(13806)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoCert;

/// @brief Field IpsecIkeNoMmPolicy value: I32(13850)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoMmPolicy;

/// @brief Field IpsecIkeNoPeerCert value: I32(13847)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoPeerCert;

/// @brief Field IpsecIkeNoPolicy value: I32(13825)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoPolicy;

/// @brief Field IpsecIkeNoPrivateKey value: I32(13820)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoPrivateKey;

/// @brief Field IpsecIkeNoPublicKey value: I32(13828)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNoPublicKey;

/// @brief Field IpsecIkeNotcbpriv value: I32(13851)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeNotcbpriv;

/// @brief Field IpsecIkeOutOfMemory value: I32(13859)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeOutOfMemory;

/// @brief Field IpsecIkePeerCrlFailed value: I32(13848)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkePeerCrlFailed;

/// @brief Field IpsecIkePeerDoesntSupportMobike value: I32(13904)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkePeerDoesntSupportMobike;

/// @brief Field IpsecIkePeerMmAssumedInvalid value: I32(13886)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkePeerMmAssumedInvalid;

/// @brief Field IpsecIkePolicyChange value: I32(13849)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkePolicyChange;

/// @brief Field IpsecIkePolicyMatch value: I32(13868)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkePolicyMatch;

/// @brief Field IpsecIkeProcessErr value: I32(13829)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErr;

/// @brief Field IpsecIkeProcessErrCert value: I32(13835)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrCert;

/// @brief Field IpsecIkeProcessErrCertReq value: I32(13836)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrCertReq;

/// @brief Field IpsecIkeProcessErrDelete value: I32(13841)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrDelete;

/// @brief Field IpsecIkeProcessErrHash value: I32(13837)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrHash;

/// @brief Field IpsecIkeProcessErrId value: I32(13834)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrId;

/// @brief Field IpsecIkeProcessErrKe value: I32(13833)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrKe;

/// @brief Field IpsecIkeProcessErrNatoa value: I32(13893)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrNatoa;

/// @brief Field IpsecIkeProcessErrNonce value: I32(13839)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrNonce;

/// @brief Field IpsecIkeProcessErrNotify value: I32(13840)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrNotify;

/// @brief Field IpsecIkeProcessErrProp value: I32(13831)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrProp;

/// @brief Field IpsecIkeProcessErrSa value: I32(13830)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrSa;

/// @brief Field IpsecIkeProcessErrSig value: I32(13838)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrSig;

/// @brief Field IpsecIkeProcessErrTrans value: I32(13832)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrTrans;

/// @brief Field IpsecIkeProcessErrVendor value: I32(13842)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeProcessErrVendor;

/// @brief Field IpsecIkeQmAcquireDrop value: I32(13810)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQmAcquireDrop;

/// @brief Field IpsecIkeQmDelayDrop value: I32(13815)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQmDelayDrop;

/// @brief Field IpsecIkeQmExpired value: I32(13895)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQmExpired;

/// @brief Field IpsecIkeQmLimit value: I32(13884)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQmLimit;

/// @brief Field IpsecIkeQueueDropMm value: I32(13811)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQueueDropMm;

/// @brief Field IpsecIkeQueueDropNoMm value: I32(13812)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeQueueDropNoMm;

/// @brief Field IpsecIkeRatelimitDrop value: I32(13903)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeRatelimitDrop;

/// @brief Field IpsecIkeRequireCpPayloadMissing value: I32(13900)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeRequireCpPayloadMissing;

/// @brief Field IpsecIkeRpcDelete value: I32(13877)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeRpcDelete;

/// @brief Field IpsecIkeSaDeleted value: I32(13807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSaDeleted;

/// @brief Field IpsecIkeSaReaped value: I32(13808)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSaReaped;

/// @brief Field IpsecIkeSecloadfail value: I32(13852)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSecloadfail;

/// @brief Field IpsecIkeShuttingDown value: I32(13891)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeShuttingDown;

/// @brief Field IpsecIkeSimultaneousRekey value: I32(13821)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSimultaneousRekey;

/// @brief Field IpsecIkeSoftSaTornDown value: I32(13845)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSoftSaTornDown;

/// @brief Field IpsecIkeSrvacqfail value: I32(13855)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSrvacqfail;

/// @brief Field IpsecIkeSrvquerycred value: I32(13856)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeSrvquerycred;

/// @brief Field IpsecIkeStrongCredAuthorizationAndCertmapFailure value: I32(13908)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeStrongCredAuthorizationAndCertmapFailure;

/// @brief Field IpsecIkeStrongCredAuthorizationFailure value: I32(13906)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeStrongCredAuthorizationFailure;

/// @brief Field IpsecIkeTimedOut value: I32(13805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeTimedOut;

/// @brief Field IpsecIkeTooManyFilters value: I32(13896)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeTooManyFilters;

/// @brief Field IpsecIkeUnexpectedMessageId value: I32(13888)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeUnexpectedMessageId;

/// @brief Field IpsecIkeUnknownDoi value: I32(13862)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeUnknownDoi;

/// @brief Field IpsecIkeUnsupportedId value: I32(13869)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIkeUnsupportedId;

/// @brief Field IpsecIntegrityCheckFailed value: I32(13915)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecIntegrityCheckFailed;

/// @brief Field IpsecInvalidPacket value: I32(13914)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecInvalidPacket;

/// @brief Field IpsecKeyModuleImpersonationNegotiationPending value: I32(13901)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecKeyModuleImpersonationNegotiationPending;

/// @brief Field IpsecMmAuthExists value: I32(13010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmAuthExists;

/// @brief Field IpsecMmAuthInUse value: I32(13012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmAuthInUse;

/// @brief Field IpsecMmAuthNotFound value: I32(13011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmAuthNotFound;

/// @brief Field IpsecMmAuthPendingDeletion value: I32(13022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmAuthPendingDeletion;

/// @brief Field IpsecMmFilterExists value: I32(13006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmFilterExists;

/// @brief Field IpsecMmFilterNotFound value: I32(13007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmFilterNotFound;

/// @brief Field IpsecMmFilterPendingDeletion value: I32(13018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmFilterPendingDeletion;

/// @brief Field IpsecMmPolicyExists value: I32(13003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmPolicyExists;

/// @brief Field IpsecMmPolicyInUse value: I32(13005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmPolicyInUse;

/// @brief Field IpsecMmPolicyNotFound value: I32(13004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmPolicyNotFound;

/// @brief Field IpsecMmPolicyPendingDeletion value: I32(13021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecMmPolicyPendingDeletion;

/// @brief Field IpsecQmPolicyExists value: I32(13000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecQmPolicyExists;

/// @brief Field IpsecQmPolicyInUse value: I32(13002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecQmPolicyInUse;

/// @brief Field IpsecQmPolicyNotFound value: I32(13001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecQmPolicyNotFound;

/// @brief Field IpsecQmPolicyPendingDeletion value: I32(13023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecQmPolicyPendingDeletion;

/// @brief Field IpsecReplayCheckFailed value: I32(13913)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecReplayCheckFailed;

/// @brief Field IpsecSaLifetimeExpired value: I32(13911)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecSaLifetimeExpired;

/// @brief Field IpsecThrottleDrop value: I32(13918)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecThrottleDrop;

/// @brief Field IpsecTransportFilterExists value: I32(13008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTransportFilterExists;

/// @brief Field IpsecTransportFilterNotFound value: I32(13009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTransportFilterNotFound;

/// @brief Field IpsecTransportFilterPendingDeletion value: I32(13019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTransportFilterPendingDeletion;

/// @brief Field IpsecTunnelFilterExists value: I32(13016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTunnelFilterExists;

/// @brief Field IpsecTunnelFilterNotFound value: I32(13017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTunnelFilterNotFound;

/// @brief Field IpsecTunnelFilterPendingDeletion value: I32(13020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecTunnelFilterPendingDeletion;

/// @brief Field IpsecWrongSa value: I32(13912)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IpsecWrongSa;

/// @brief Field IrqBusy value: I32(1119)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IrqBusy;

/// @brief Field IsJoinPath value: I32(147)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsJoinPath;

/// @brief Field IsJoinTarget value: I32(133)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsJoinTarget;

/// @brief Field IsJoined value: I32(134)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsJoined;

/// @brief Field IsSubstPath value: I32(146)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsSubstPath;

/// @brief Field IsSubstTarget value: I32(149)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsSubstTarget;

/// @brief Field IsSubsted value: I32(135)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IsSubsted;

/// @brief Field IteratedDataExceeds64k value: I32(194)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const IteratedDataExceeds64k;

/// @brief Field JoinToJoin value: I32(138)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JoinToJoin;

/// @brief Field JoinToSubst value: I32(140)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JoinToSubst;

/// @brief Field JournalDeleteInProgress value: I32(1178)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JournalDeleteInProgress;

/// @brief Field JournalEntryDeleted value: I32(1181)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JournalEntryDeleted;

/// @brief Field JournalHookSet value: I32(1430)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JournalHookSet;

/// @brief Field JournalNotActive value: I32(1179)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const JournalNotActive;

/// @brief Field KernelApc value: I32(738)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const KernelApc;

/// @brief Field KeyDeleted value: I32(1018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const KeyDeleted;

/// @brief Field KeyHasChildren value: I32(1020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const KeyHasChildren;

/// @brief Field KmDriverBlocked value: I32(1930)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const KmDriverBlocked;

/// @brief Field LabelTooLong value: I32(154)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LabelTooLong;

/// @brief Field LastAdmin value: I32(1322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LastAdmin;

/// @brief Field LbWithoutTabstops value: I32(1434)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LbWithoutTabstops;

/// @brief Field LibraryFull value: I32(4322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LibraryFull;

/// @brief Field LibraryOffline value: I32(4305)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LibraryOffline;

/// @brief Field LicenseQuotaExceeded value: I32(1395)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LicenseQuotaExceeded;

/// @brief Field ListboxIdNotFound value: I32(1416)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ListboxIdNotFound;

/// @brief Field LmCrossEncryptionRequired value: I32(1390)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LmCrossEncryptionRequired;

/// @brief Field LocalUserSessionKey value: I32(1303)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LocalUserSessionKey;

/// @brief Field LockFailed value: I32(167)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LockFailed;

/// @brief Field LockViolation value: I32(33)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LockViolation;

/// @brief Field Locked value: I32(212)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Locked;

/// @brief Field LogAppendedFlushFailed value: I32(6647)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogAppendedFlushFailed;

/// @brief Field LogArchiveInProgress value: I32(6633)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogArchiveInProgress;

/// @brief Field LogArchiveNotInProgress value: I32(6632)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogArchiveNotInProgress;

/// @brief Field LogBlockIncomplete value: I32(6603)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogBlockIncomplete;

/// @brief Field LogBlockInvalid value: I32(6609)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogBlockInvalid;

/// @brief Field LogBlockVersion value: I32(6608)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogBlockVersion;

/// @brief Field LogBlocksExhausted value: I32(6605)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogBlocksExhausted;

/// @brief Field LogCantDelete value: I32(6616)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogCantDelete;

/// @brief Field LogClientAlreadyRegistered value: I32(6636)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogClientAlreadyRegistered;

/// @brief Field LogClientNotRegistered value: I32(6637)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogClientNotRegistered;

/// @brief Field LogContainerLimitExceeded value: I32(6617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogContainerLimitExceeded;

/// @brief Field LogContainerOpenFailed value: I32(6641)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogContainerOpenFailed;

/// @brief Field LogContainerReadFailed value: I32(6639)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogContainerReadFailed;

/// @brief Field LogContainerStateInvalid value: I32(6642)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogContainerStateInvalid;

/// @brief Field LogContainerWriteFailed value: I32(6640)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogContainerWriteFailed;

/// @brief Field LogCorruptionDetected value: I32(6817)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogCorruptionDetected;

/// @brief Field LogDedicated value: I32(6631)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogDedicated;

/// @brief Field LogEphemeral value: I32(6634)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogEphemeral;

/// @brief Field LogFileFull value: I32(1502)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogFileFull;

/// @brief Field LogFull value: I32(6628)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogFull;

/// @brief Field LogFullHandlerInProgress value: I32(6638)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogFullHandlerInProgress;

/// @brief Field LogGrowthFailed value: I32(6833)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogGrowthFailed;

/// @brief Field LogHardError value: I32(718)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogHardError;

/// @brief Field LogInconsistentSecurity value: I32(6646)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogInconsistentSecurity;

/// @brief Field LogInvalidRange value: I32(6604)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogInvalidRange;

/// @brief Field LogMetadataCorrupt value: I32(6612)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogMetadataCorrupt;

/// @brief Field LogMetadataFlushFailed value: I32(6645)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogMetadataFlushFailed;

/// @brief Field LogMetadataInconsistent value: I32(6614)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogMetadataInconsistent;

/// @brief Field LogMetadataInvalid value: I32(6613)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogMetadataInvalid;

/// @brief Field LogMultiplexed value: I32(6630)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogMultiplexed;

/// @brief Field LogNoRestart value: I32(6611)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogNoRestart;

/// @brief Field LogNotEnoughContainers value: I32(6635)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogNotEnoughContainers;

/// @brief Field LogPinned value: I32(6644)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPinned;

/// @brief Field LogPinnedArchiveTail value: I32(6623)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPinnedArchiveTail;

/// @brief Field LogPinnedReservation value: I32(6648)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPinnedReservation;

/// @brief Field LogPolicyAlreadyInstalled value: I32(6619)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPolicyAlreadyInstalled;

/// @brief Field LogPolicyConflict value: I32(6622)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPolicyConflict;

/// @brief Field LogPolicyInvalid value: I32(6621)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPolicyInvalid;

/// @brief Field LogPolicyNotInstalled value: I32(6620)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogPolicyNotInstalled;

/// @brief Field LogReadContextInvalid value: I32(6606)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogReadContextInvalid;

/// @brief Field LogReadModeInvalid value: I32(6610)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogReadModeInvalid;

/// @brief Field LogRecordNonexistent value: I32(6624)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogRecordNonexistent;

/// @brief Field LogRecordsReservedInvalid value: I32(6625)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogRecordsReservedInvalid;

/// @brief Field LogReservationInvalid value: I32(6615)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogReservationInvalid;

/// @brief Field LogResizeInvalidSize value: I32(6806)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogResizeInvalidSize;

/// @brief Field LogRestartInvalid value: I32(6607)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogRestartInvalid;

/// @brief Field LogSectorInvalid value: I32(6600)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogSectorInvalid;

/// @brief Field LogSectorParityInvalid value: I32(6601)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogSectorParityInvalid;

/// @brief Field LogSectorRemapped value: I32(6602)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogSectorRemapped;

/// @brief Field LogSpaceReservedInvalid value: I32(6626)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogSpaceReservedInvalid;

/// @brief Field LogStartOfLog value: I32(6618)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogStartOfLog;

/// @brief Field LogStateInvalid value: I32(6643)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogStateInvalid;

/// @brief Field LogTailInvalid value: I32(6627)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogTailInvalid;

/// @brief Field LoginTimeRestriction value: I32(1239)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LoginTimeRestriction;

/// @brief Field LoginWkstaRestriction value: I32(1240)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LoginWkstaRestriction;

/// @brief Field LogonFailure value: I32(1326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonFailure;

/// @brief Field LogonNotGranted value: I32(1380)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonNotGranted;

/// @brief Field LogonServerConflict value: I32(568)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonServerConflict;

/// @brief Field LogonSessionCollision value: I32(1366)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonSessionCollision;

/// @brief Field LogonSessionExists value: I32(1363)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonSessionExists;

/// @brief Field LogonTypeNotGranted value: I32(1385)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LogonTypeNotGranted;

/// @brief Field Longjump value: I32(682)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Longjump;

/// @brief Field LostWritebehindData value: I32(596)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LostWritebehindData;

/// @brief Field LostWritebehindDataLocalDiskError value: I32(790)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LostWritebehindDataLocalDiskError;

/// @brief Field LostWritebehindDataNetworkDisconnected value: I32(788)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LostWritebehindDataNetworkDisconnected;

/// @brief Field LostWritebehindDataNetworkServerError value: I32(789)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LostWritebehindDataNetworkServerError;

/// @brief Field LuidsExhausted value: I32(1334)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const LuidsExhausted;

/// @brief Field MachineLocked value: I32(1271)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MachineLocked;

/// @brief Field MagazineNotPresent value: I32(1163)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MagazineNotPresent;

/// @brief Field MalformedSubstitutionString value: I32(14094)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MalformedSubstitutionString;

/// @brief Field MappedAlignment value: I32(1132)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MappedAlignment;

/// @brief Field MarshallOverflow value: I32(603)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MarshallOverflow;

/// @brief Field MaxSessionsReached value: I32(353)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MaxSessionsReached;

/// @brief Field MaxThrdsReached value: I32(164)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MaxThrdsReached;

/// @brief Field McaException value: I32(784)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaException;

/// @brief Field McaInternalError value: I32(15205)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaInternalError;

/// @brief Field McaInvalidCapabilitiesString value: I32(15200)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaInvalidCapabilitiesString;

/// @brief Field McaInvalidTechnologyTypeReturned value: I32(15206)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaInvalidTechnologyTypeReturned;

/// @brief Field McaInvalidVcpVersion value: I32(15201)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaInvalidVcpVersion;

/// @brief Field McaMccsVersionMismatch value: I32(15203)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaMccsVersionMismatch;

/// @brief Field McaMonitorViolatesMccsSpecification value: I32(15202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaMonitorViolatesMccsSpecification;

/// @brief Field McaOccured value: I32(651)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaOccured;

/// @brief Field McaUnsupportedColorTemperature value: I32(15207)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaUnsupportedColorTemperature;

/// @brief Field McaUnsupportedMccsVersion value: I32(15204)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const McaUnsupportedMccsVersion;

/// @brief Field MediaChanged value: I32(1110)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaChanged;

/// @brief Field MediaCheck value: I32(679)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaCheck;

/// @brief Field MediaIncompatible value: I32(4315)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaIncompatible;

/// @brief Field MediaNotAvailable value: I32(4318)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaNotAvailable;

/// @brief Field MediaOffline value: I32(4304)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaOffline;

/// @brief Field MediaUnavailable value: I32(4308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediaUnavailable;

/// @brief Field MediumNotAccessible value: I32(4323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MediumNotAccessible;

/// @brief Field MemberInAlias value: I32(1378)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MemberInAlias;

/// @brief Field MemberInGroup value: I32(1320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MemberInGroup;

/// @brief Field MemberNotInAlias value: I32(1377)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MemberNotInAlias;

/// @brief Field MemberNotInGroup value: I32(1321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MemberNotInGroup;

/// @brief Field MembersPrimaryGroup value: I32(1374)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MembersPrimaryGroup;

/// @brief Field MemoryHardware value: I32(779)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MemoryHardware;

/// @brief Field MenuItemNotFound value: I32(1456)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MenuItemNotFound;

/// @brief Field MessageExceedsMaxSize value: I32(4336)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MessageExceedsMaxSize;

/// @brief Field MessageSyncOnly value: I32(1159)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MessageSyncOnly;

/// @brief Field MetaExpansionTooLong value: I32(208)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MetaExpansionTooLong;

/// @brief Field MetafileNotSupported value: I32(2003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MetafileNotSupported;

/// @brief Field MiniversionInaccessibleFromSpecifiedTransaction value: I32(6810)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MiniversionInaccessibleFromSpecifiedTransaction;

/// @brief Field MissingSystemfile value: I32(573)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MissingSystemfile;

/// @brief Field ModNotFound value: I32(126)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ModNotFound;

/// @brief Field MonitorInvalidDescriptorChecksum value: I32(-1071247357)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidDescriptorChecksum;

/// @brief Field MonitorInvalidDetailedTimingBlock value: I32(-1071247351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidDetailedTimingBlock;

/// @brief Field MonitorInvalidManufactureDate value: I32(-1071247350)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidManufactureDate;

/// @brief Field MonitorInvalidSerialNumberMondscBlock value: I32(-1071247354)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidSerialNumberMondscBlock;

/// @brief Field MonitorInvalidStandardTimingBlock value: I32(-1071247356)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidStandardTimingBlock;

/// @brief Field MonitorInvalidUserFriendlyMondscBlock value: I32(-1071247353)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorInvalidUserFriendlyMondscBlock;

/// @brief Field MonitorNoDescriptor value: I32(-2144989183)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorNoDescriptor;

/// @brief Field MonitorNoMoreDescriptorData value: I32(-1071247352)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorNoMoreDescriptorData;

/// @brief Field MonitorUnknownDescriptorFormat value: I32(-2144989182)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorUnknownDescriptorFormat;

/// @brief Field MonitorWmiDatablockRegistrationFailed value: I32(-1071247355)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MonitorWmiDatablockRegistrationFailed;

/// @brief Field MoreData value: I32(234)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MoreData;

/// @brief Field MoreWrites value: I32(1120)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MoreWrites;

/// @brief Field MountPointNotResolved value: I32(649)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MountPointNotResolved;

/// @brief Field MpProcessorMismatch value: I32(725)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MpProcessorMismatch;

/// @brief Field MrMidNotFound value: I32(317)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrMidNotFound;

/// @brief Field MrmAutomergeEnabled value: I32(15139)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmAutomergeEnabled;

/// @brief Field MrmDuplicateEntry value: I32(15119)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmDuplicateEntry;

/// @brief Field MrmDuplicateMapName value: I32(15118)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmDuplicateMapName;

/// @brief Field MrmFilepathTooLong value: I32(15121)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmFilepathTooLong;

/// @brief Field MrmIndeterminateQualifierValue value: I32(15138)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmIndeterminateQualifierValue;

/// @brief Field MrmInvalidFileType value: I32(15112)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidFileType;

/// @brief Field MrmInvalidPriFile value: I32(15126)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidPriFile;

/// @brief Field MrmInvalidPriconfig value: I32(15111)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidPriconfig;

/// @brief Field MrmInvalidQualifierOperator value: I32(15137)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidQualifierOperator;

/// @brief Field MrmInvalidQualifierValue value: I32(15114)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidQualifierValue;

/// @brief Field MrmInvalidResourceIdentifier value: I32(15120)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmInvalidResourceIdentifier;

/// @brief Field MrmMapNotFound value: I32(15135)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmMapNotFound;

/// @brief Field MrmNamedResourceNotFound value: I32(15127)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmNamedResourceNotFound;

/// @brief Field MrmNoCandidate value: I32(15115)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmNoCandidate;

/// @brief Field MrmNoMatchOrDefaultCandidate value: I32(15116)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmNoMatchOrDefaultCandidate;

/// @brief Field MrmResourceTypeMismatch value: I32(15117)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmResourceTypeMismatch;

/// @brief Field MrmRuntimeNoDefaultOrNeutralResource value: I32(15110)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmRuntimeNoDefaultOrNeutralResource;

/// @brief Field MrmTooManyResources value: I32(15140)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmTooManyResources;

/// @brief Field MrmUnknownQualifier value: I32(15113)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmUnknownQualifier;

/// @brief Field MrmUnsupportedDirectoryType value: I32(15122)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmUnsupportedDirectoryType;

/// @brief Field MrmUnsupportedProfileType value: I32(15136)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MrmUnsupportedProfileType;

/// @brief Field MuiFileNotFound value: I32(15100)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiFileNotFound;

/// @brief Field MuiFileNotLoaded value: I32(15105)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiFileNotLoaded;

/// @brief Field MuiIntlsettingsInvalidLocaleName value: I32(15108)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiIntlsettingsInvalidLocaleName;

/// @brief Field MuiIntlsettingsUilangNotInstalled value: I32(15107)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiIntlsettingsUilangNotInstalled;

/// @brief Field MuiInvalidFile value: I32(15101)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiInvalidFile;

/// @brief Field MuiInvalidLocaleName value: I32(15103)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiInvalidLocaleName;

/// @brief Field MuiInvalidRcConfig value: I32(15102)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiInvalidRcConfig;

/// @brief Field MuiInvalidUltimatefallbackName value: I32(15104)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MuiInvalidUltimatefallbackName;

/// @brief Field MultipleFaultViolation value: I32(640)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MultipleFaultViolation;

/// @brief Field MutantLimitExceeded value: I32(587)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MutantLimitExceeded;

/// @brief Field MutualAuthFailed value: I32(1397)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const MutualAuthFailed;

/// @brief Field NdisAdapterNotFound value: I32(-2144075770)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisAdapterNotFound;

/// @brief Field NdisAdapterNotReady value: I32(-2144075759)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisAdapterNotReady;

/// @brief Field NdisAdapterRemoved value: I32(-2144075752)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisAdapterRemoved;

/// @brief Field NdisAlreadyMapped value: I32(-2144075747)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisAlreadyMapped;

/// @brief Field NdisBadCharacteristics value: I32(-2144075771)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisBadCharacteristics;

/// @brief Field NdisBadVersion value: I32(-2144075772)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisBadVersion;

/// @brief Field NdisBufferTooShort value: I32(-2144075754)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisBufferTooShort;

/// @brief Field NdisDeviceFailed value: I32(-2144075768)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisDeviceFailed;

/// @brief Field NdisDot11AutoConfigEnabled value: I32(-2144067584)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisDot11AutoConfigEnabled;

/// @brief Field NdisDot11MediaInUse value: I32(-2144067583)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisDot11MediaInUse;

/// @brief Field NdisDot11PowerStateInvalid value: I32(-2144067582)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisDot11PowerStateInvalid;

/// @brief Field NdisErrorReadingFile value: I32(-2144075748)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisErrorReadingFile;

/// @brief Field NdisFileNotFound value: I32(-2144075749)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisFileNotFound;

/// @brief Field NdisGroupAddressInUse value: I32(-2144075750)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisGroupAddressInUse;

/// @brief Field NdisIndicationRequired value: I32(3407873)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisIndicationRequired;

/// @brief Field NdisInterfaceClosing value: I32(-2144075774)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInterfaceClosing;

/// @brief Field NdisInterfaceNotFound value: I32(-2144075733)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInterfaceNotFound;

/// @brief Field NdisInvalidAddress value: I32(-2144075742)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidAddress;

/// @brief Field NdisInvalidData value: I32(-2144075755)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidData;

/// @brief Field NdisInvalidDeviceRequest value: I32(-2144075760)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidDeviceRequest;

/// @brief Field NdisInvalidLength value: I32(-2144075756)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidLength;

/// @brief Field NdisInvalidOid value: I32(-2144075753)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidOid;

/// @brief Field NdisInvalidPacket value: I32(-2144075761)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidPacket;

/// @brief Field NdisInvalidPort value: I32(-2144075731)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidPort;

/// @brief Field NdisInvalidPortState value: I32(-2144075730)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisInvalidPortState;

/// @brief Field NdisLowPowerState value: I32(-2144075729)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisLowPowerState;

/// @brief Field NdisMediaDisconnected value: I32(-2144075745)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisMediaDisconnected;

/// @brief Field NdisMulticastExists value: I32(-2144075766)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisMulticastExists;

/// @brief Field NdisMulticastFull value: I32(-2144075767)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisMulticastFull;

/// @brief Field NdisMulticastNotFound value: I32(-2144075765)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisMulticastNotFound;

/// @brief Field NdisNotSupported value: I32(-2144075589)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisNotSupported;

/// @brief Field NdisOffloadConnectionRejected value: I32(-1070329838)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisOffloadConnectionRejected;

/// @brief Field NdisOffloadPathRejected value: I32(-1070329837)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisOffloadPathRejected;

/// @brief Field NdisOffloadPolicy value: I32(-1070329841)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisOffloadPolicy;

/// @brief Field NdisOpenFailed value: I32(-2144075769)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisOpenFailed;

/// @brief Field NdisPaused value: I32(-2144075734)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisPaused;

/// @brief Field NdisPmProtocolOffloadListFull value: I32(-2144067580)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisPmProtocolOffloadListFull;

/// @brief Field NdisPmWolPatternListFull value: I32(-2144067581)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisPmWolPatternListFull;

/// @brief Field NdisReinitRequired value: I32(-2144075728)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisReinitRequired;

/// @brief Field NdisRequestAborted value: I32(-2144075764)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisRequestAborted;

/// @brief Field NdisResetInProgress value: I32(-2144075763)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisResetInProgress;

/// @brief Field NdisResourceConflict value: I32(-2144075746)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisResourceConflict;

/// @brief Field NdisUnsupportedMedia value: I32(-2144075751)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisUnsupportedMedia;

/// @brief Field NdisUnsupportedRevision value: I32(-2144075732)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NdisUnsupportedRevision;

/// @brief Field NeedsRemediation value: I32(15612)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NeedsRemediation;

/// @brief Field NegativeSeek value: I32(131)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NegativeSeek;

/// @brief Field NestingNotAllowed value: I32(215)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NestingNotAllowed;

/// @brief Field NetOpenFailed value: I32(570)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetOpenFailed;

/// @brief Field NetWriteFault value: I32(88)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetWriteFault;

/// @brief Field NetlogonNotStarted value: I32(1792)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetlogonNotStarted;

/// @brief Field NetnameDeleted value: I32(64)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetnameDeleted;

/// @brief Field NetworkAccessDenied value: I32(65)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetworkAccessDenied;

/// @brief Field NetworkBusy value: I32(54)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetworkBusy;

/// @brief Field NetworkNotAvailable value: I32(5035)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetworkNotAvailable;

/// @brief Field NetworkUnreachable value: I32(1231)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NetworkUnreachable;

/// @brief Field NoAceCondition value: I32(804)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoAceCondition;

/// @brief Field NoAssociation value: I32(1155)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoAssociation;

/// @brief Field NoBrowserServersFound value: I32(6118)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoBrowserServersFound;

/// @brief Field NoCallbackActive value: I32(614)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoCallbackActive;

/// @brief Field NoData value: I32(232)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoData;

/// @brief Field NoDataDetected value: I32(1104)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoDataDetected;

/// @brief Field NoEfs value: I32(6004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoEfs;

/// @brief Field NoEventPair value: I32(580)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoEventPair;

/// @brief Field NoGuidTranslation value: I32(560)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoGuidTranslation;

/// @brief Field NoImpersonationToken value: I32(1309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoImpersonationToken;

/// @brief Field NoInheritance value: I32(1391)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoInheritance;

/// @brief Field NoLinkTrackingInTransaction value: I32(6852)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoLinkTrackingInTransaction;

/// @brief Field NoLogSpace value: I32(1019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoLogSpace;

/// @brief Field NoLogonServers value: I32(1311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoLogonServers;

/// @brief Field NoMatch value: I32(1169)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMatch;

/// @brief Field NoMediaInDrive value: I32(1112)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMediaInDrive;

/// @brief Field NoMoreDevices value: I32(1248)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreDevices;

/// @brief Field NoMoreFiles value: I32(18)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreFiles;

/// @brief Field NoMoreItems value: I32(259)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreItems;

/// @brief Field NoMoreMatches value: I32(626)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreMatches;

/// @brief Field NoMoreSearchHandles value: I32(113)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreSearchHandles;

/// @brief Field NoMoreUserHandles value: I32(1158)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoMoreUserHandles;

/// @brief Field NoNetOrBadPath value: I32(1203)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoNetOrBadPath;

/// @brief Field NoNetwork value: I32(1222)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoNetwork;

/// @brief Field NoNvramResources value: I32(1470)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoNvramResources;

/// @brief Field NoPagefile value: I32(578)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoPagefile;

/// @brief Field NoProcSlots value: I32(89)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoProcSlots;

/// @brief Field NoPromotionActive value: I32(8222)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoPromotionActive;

/// @brief Field NoQuotasForAccount value: I32(1302)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoQuotasForAccount;

/// @brief Field NoRangesProcessed value: I32(312)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoRangesProcessed;

/// @brief Field NoRecoveryPolicy value: I32(6003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoRecoveryPolicy;

/// @brief Field NoRecoveryProgram value: I32(1082)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoRecoveryProgram;

/// @brief Field NoSavepointWithOpenFiles value: I32(6842)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSavepointWithOpenFiles;

/// @brief Field NoScrollbars value: I32(1447)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoScrollbars;

/// @brief Field NoSecrets value: I32(8620)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSecrets;

/// @brief Field NoSecurityOnObject value: I32(1350)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSecurityOnObject;

/// @brief Field NoShutdownInProgress value: I32(1116)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoShutdownInProgress;

/// @brief Field NoSignalSent value: I32(205)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSignalSent;

/// @brief Field NoSiteSettingsObject value: I32(8619)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSiteSettingsObject;

/// @brief Field NoSitename value: I32(1919)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSitename;

/// @brief Field NoSpoolSpace value: I32(62)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSpoolSpace;

/// @brief Field NoSuchAlias value: I32(1376)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchAlias;

/// @brief Field NoSuchDomain value: I32(1355)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchDomain;

/// @brief Field NoSuchGroup value: I32(1319)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchGroup;

/// @brief Field NoSuchLogonSession value: I32(1312)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchLogonSession;

/// @brief Field NoSuchMember value: I32(1387)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchMember;

/// @brief Field NoSuchPackage value: I32(1364)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchPackage;

/// @brief Field NoSuchPrivilege value: I32(1313)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchPrivilege;

/// @brief Field NoSuchSite value: I32(1249)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchSite;

/// @brief Field NoSuchUser value: I32(1317)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSuchUser;

/// @brief Field NoSupportingDrives value: I32(4339)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSupportingDrives;

/// @brief Field NoSystemMenu value: I32(1437)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSystemMenu;

/// @brief Field NoSystemResources value: I32(1450)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoSystemResources;

/// @brief Field NoToken value: I32(1008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoToken;

/// @brief Field NoTrackingService value: I32(1172)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoTrackingService;

/// @brief Field NoTrustLsaSecret value: I32(1786)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoTrustLsaSecret;

/// @brief Field NoTrustSamAccount value: I32(1787)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoTrustSamAccount;

/// @brief Field NoTxfMetadata value: I32(6816)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoTxfMetadata;

/// @brief Field NoUnicodeTranslation value: I32(1113)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoUnicodeTranslation;

/// @brief Field NoUserKeys value: I32(6006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoUserKeys;

/// @brief Field NoUserSessionKey value: I32(1394)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoUserSessionKey;

/// @brief Field NoVolumeId value: I32(1173)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoVolumeId;

/// @brief Field NoVolumeLabel value: I32(125)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoVolumeLabel;

/// @brief Field NoWildcardCharacters value: I32(1417)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoWildcardCharacters;

/// @brief Field NoWritableDcFound value: I32(8621)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoWritableDcFound;

/// @brief Field NoYieldPerformed value: I32(721)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoYieldPerformed;

/// @brief Field Noaccess value: I32(998)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Noaccess;

/// @brief Field NodeCannotBeClustered value: I32(5898)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NodeCannotBeClustered;

/// @brief Field NodeCantHostResource value: I32(5071)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NodeCantHostResource;

/// @brief Field NodeNotAvailable value: I32(5036)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NodeNotAvailable;

/// @brief Field Nointerface value: I32(632)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Nointerface;

/// @brief Field NologonInterdomainTrustAccount value: I32(1807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NologonInterdomainTrustAccount;

/// @brief Field NologonServerTrustAccount value: I32(1809)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NologonServerTrustAccount;

/// @brief Field NologonWorkstationTrustAccount value: I32(1808)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NologonWorkstationTrustAccount;

/// @brief Field NonAccountSid value: I32(1257)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NonAccountSid;

/// @brief Field NonCsvPath value: I32(5950)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NonCsvPath;

/// @brief Field NonDomainSid value: I32(1258)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NonDomainSid;

/// @brief Field NonMdichildWindow value: I32(1445)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NonMdichildWindow;

/// @brief Field NoncoreGroupsFound value: I32(5937)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoncoreGroupsFound;

/// @brief Field NoneMapped value: I32(1332)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NoneMapped;

/// @brief Field NonpagedSystemResources value: I32(1451)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NonpagedSystemResources;

/// @brief Field NotAReparsePoint value: I32(4390)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotAReparsePoint;

/// @brief Field NotAllAssigned value: I32(1300)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotAllAssigned;

/// @brief Field NotAllowedOnSystemFile value: I32(313)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotAllowedOnSystemFile;

/// @brief Field NotAppcontainer value: I32(4250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotAppcontainer;

/// @brief Field NotAuthenticated value: I32(1244)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotAuthenticated;

/// @brief Field NotCapable value: I32(775)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotCapable;

/// @brief Field NotChildWindow value: I32(1442)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotChildWindow;

/// @brief Field NotConnected value: I32(2250)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotConnected;

/// @brief Field NotContainer value: I32(1207)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotContainer;

/// @brief Field NotDosDisk value: I32(26)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotDosDisk;

/// @brief Field NotEmpty value: I32(4307)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotEmpty;

/// @brief Field NotEnoughMemory value: I32(8)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotEnoughMemory;

/// @brief Field NotEnoughQuota value: I32(1816)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotEnoughQuota;

/// @brief Field NotEnoughServerMemory value: I32(1130)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotEnoughServerMemory;

/// @brief Field NotExportFormat value: I32(6008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotExportFormat;

/// @brief Field NotFound value: I32(1168)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotFound;

/// @brief Field NotGuiProcess value: I32(1471)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotGuiProcess;

/// @brief Field NotJoined value: I32(136)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotJoined;

/// @brief Field NotLocked value: I32(158)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotLocked;

/// @brief Field NotLoggedOn value: I32(1245)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotLoggedOn;

/// @brief Field NotLogonProcess value: I32(1362)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotLogonProcess;

/// @brief Field NotOwner value: I32(288)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotOwner;

/// @brief Field NotQuorumCapable value: I32(5021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotQuorumCapable;

/// @brief Field NotQuorumClass value: I32(5025)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotQuorumClass;

/// @brief Field NotReadFromCopy value: I32(337)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotReadFromCopy;

/// @brief Field NotReady value: I32(21)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotReady;

/// @brief Field NotRedundantStorage value: I32(333)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotRedundantStorage;

/// @brief Field NotRegistryFile value: I32(1017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotRegistryFile;

/// @brief Field NotSafeModeDriver value: I32(646)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSafeModeDriver;

/// @brief Field NotSafebootService value: I32(1084)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSafebootService;

/// @brief Field NotSameDevice value: I32(17)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSameDevice;

/// @brief Field NotSnapshotVolume value: I32(6841)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSnapshotVolume;

/// @brief Field NotSubsted value: I32(137)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSubsted;

/// @brief Field NotSupported value: I32(50)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSupported;

/// @brief Field NotSupportedInAppcontainer value: I32(4252)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSupportedInAppcontainer;

/// @brief Field NotSupportedOnSbs value: I32(1254)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSupportedOnSbs;

/// @brief Field NotSupportedOnStandardServer value: I32(8584)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotSupportedOnStandardServer;

/// @brief Field NotTinyStream value: I32(598)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotTinyStream;

/// @brief Field NothingToTerminate value: I32(758)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NothingToTerminate;

/// @brief Field NotificationGuidAlreadyDefined value: I32(309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotificationGuidAlreadyDefined;

/// @brief Field NotifyCleanup value: I32(745)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotifyCleanup;

/// @brief Field NotifyEnumDir value: I32(1022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NotifyEnumDir;

/// @brief Field NtCrossEncryptionRequired value: I32(1386)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NtCrossEncryptionRequired;

/// @brief Field NtlmBlocked value: I32(1937)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NtlmBlocked;

/// @brief Field NullLmPassword value: I32(1304)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const NullLmPassword;

/// @brief Field ObjectAlreadyExists value: I32(5010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ObjectAlreadyExists;

/// @brief Field ObjectInList value: I32(5011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ObjectInList;

/// @brief Field ObjectNameExists value: I32(698)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ObjectNameExists;

/// @brief Field ObjectNoLongerExists value: I32(6807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ObjectNoLongerExists;

/// @brief Field ObjectNotFound value: I32(4312)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ObjectNotFound;

/// @brief Field OffloadReadFileNotSupported value: I32(4442)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OffloadReadFileNotSupported;

/// @brief Field OffloadReadFltNotSupported value: I32(4440)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OffloadReadFltNotSupported;

/// @brief Field OffloadWriteFileNotSupported value: I32(4443)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OffloadWriteFileNotSupported;

/// @brief Field OffloadWriteFltNotSupported value: I32(4441)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OffloadWriteFltNotSupported;

/// @brief Field OffsetAlignmentViolation value: I32(327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OffsetAlignmentViolation;

/// @brief Field OldWinVersion value: I32(1150)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OldWinVersion;

/// @brief Field OnlyIfConnected value: I32(1251)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OnlyIfConnected;

/// @brief Field OpenFailed value: I32(110)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OpenFailed;

/// @brief Field OpenFiles value: I32(2401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OpenFiles;

/// @brief Field OperationAborted value: I32(995)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OperationAborted;

/// @brief Field OperationInProgress value: I32(329)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OperationInProgress;

/// @brief Field OperationNotSupportedInTransaction value: I32(6853)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OperationNotSupportedInTransaction;

/// @brief Field OplockBreakInProgress value: I32(742)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OplockBreakInProgress;

/// @brief Field OplockHandleClosed value: I32(803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OplockHandleClosed;

/// @brief Field OplockNotGranted value: I32(300)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OplockNotGranted;

/// @brief Field OplockSwitchedToNewHandle value: I32(800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OplockSwitchedToNewHandle;

/// @brief Field OrphanNameExhausted value: I32(799)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OrphanNameExhausted;

/// @brief Field OutOfPaper value: I32(28)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OutOfPaper;

/// @brief Field OutOfStructures value: I32(84)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OutOfStructures;

/// @brief Field Outofmemory value: I32(14)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Outofmemory;

/// @brief Field OverrideNochanges value: I32(1252)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const OverrideNochanges;

/// @brief Field PackageAlreadyExists value: I32(15611)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PackageAlreadyExists;

/// @brief Field PackageRepositoryCorrupted value: I32(15614)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PackageRepositoryCorrupted;

/// @brief Field PackageUpdating value: I32(15616)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PackageUpdating;

/// @brief Field PackagesInUse value: I32(15618)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PackagesInUse;

/// @brief Field PageFaultCopyOnWrite value: I32(749)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PageFaultCopyOnWrite;

/// @brief Field PageFaultDemandZero value: I32(748)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PageFaultDemandZero;

/// @brief Field PageFaultGuardPage value: I32(750)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PageFaultGuardPage;

/// @brief Field PageFaultPagingFile value: I32(751)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PageFaultPagingFile;

/// @brief Field PageFaultTransition value: I32(747)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PageFaultTransition;

/// @brief Field PagedSystemResources value: I32(1452)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PagedSystemResources;

/// @brief Field PagefileCreateFailed value: I32(576)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PagefileCreateFailed;

/// @brief Field PagefileQuota value: I32(1454)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PagefileQuota;

/// @brief Field PagefileQuotaExceeded value: I32(567)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PagefileQuotaExceeded;

/// @brief Field ParameterQuotaExceeded value: I32(1283)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ParameterQuotaExceeded;

/// @brief Field PartialCopy value: I32(299)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PartialCopy;

/// @brief Field PartitionFailure value: I32(1105)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PartitionFailure;

/// @brief Field PasswordChangeRequired value: I32(1938)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PasswordChangeRequired;

/// @brief Field PasswordExpired value: I32(1330)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PasswordExpired;

/// @brief Field PasswordMustChange value: I32(1907)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PasswordMustChange;

/// @brief Field PasswordRestriction value: I32(1325)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PasswordRestriction;

/// @brief Field PatchManagedAdvertisedProduct value: I32(1651)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchManagedAdvertisedProduct;

/// @brief Field PatchNoSequence value: I32(1648)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchNoSequence;

/// @brief Field PatchPackageInvalid value: I32(1636)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchPackageInvalid;

/// @brief Field PatchPackageOpenFailed value: I32(1635)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchPackageOpenFailed;

/// @brief Field PatchPackageRejected value: I32(1643)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchPackageRejected;

/// @brief Field PatchPackageUnsupported value: I32(1637)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchPackageUnsupported;

/// @brief Field PatchRemovalDisallowed value: I32(1649)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchRemovalDisallowed;

/// @brief Field PatchRemovalUnsupported value: I32(1646)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchRemovalUnsupported;

/// @brief Field PatchTargetNotFound value: I32(1642)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PatchTargetNotFound;

/// @brief Field PathBusy value: I32(148)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PathBusy;

/// @brief Field PathNotFound value: I32(3)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PathNotFound;

/// @brief Field PerUserTrustQuotaExceeded value: I32(1932)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PerUserTrustQuotaExceeded;

/// @brief Field PipeBusy value: I32(231)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PipeBusy;

/// @brief Field PipeConnected value: I32(535)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PipeConnected;

/// @brief Field PipeListening value: I32(536)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PipeListening;

/// @brief Field PipeLocal value: I32(229)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PipeLocal;

/// @brief Field PipeNotConnected value: I32(233)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PipeNotConnected;

/// @brief Field PkinitFailure value: I32(1263)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PkinitFailure;

/// @brief Field PlugplayQueryVetoed value: I32(683)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PlugplayQueryVetoed;

/// @brief Field PnpBadMpsTable value: I32(671)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpBadMpsTable;

/// @brief Field PnpInvalidId value: I32(674)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpInvalidId;

/// @brief Field PnpIrqTranslationFailed value: I32(673)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpIrqTranslationFailed;

/// @brief Field PnpRebootRequired value: I32(638)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpRebootRequired;

/// @brief Field PnpRestartEnumeration value: I32(636)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpRestartEnumeration;

/// @brief Field PnpTranslationFailed value: I32(672)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PnpTranslationFailed;

/// @brief Field PointNotFound value: I32(1171)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PointNotFound;

/// @brief Field PolicyObjectNotFound value: I32(8219)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PolicyObjectNotFound;

/// @brief Field PolicyOnlyInDs value: I32(8220)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PolicyOnlyInDs;

/// @brief Field PopupAlreadyActive value: I32(1446)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PopupAlreadyActive;

/// @brief Field PortMessageTooLong value: I32(546)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PortMessageTooLong;

/// @brief Field PortNotSet value: I32(642)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PortNotSet;

/// @brief Field PortUnreachable value: I32(1234)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PortUnreachable;

/// @brief Field PossibleDeadlock value: I32(1131)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PossibleDeadlock;

/// @brief Field PotentialFileFound value: I32(1180)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PotentialFileFound;

/// @brief Field PredefinedHandle value: I32(714)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PredefinedHandle;

/// @brief Field PrimaryTransportConnectFailed value: I32(746)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrimaryTransportConnectFailed;

/// @brief Field PrintCancelled value: I32(63)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintCancelled;

/// @brief Field PrintJobRestartRequired value: I32(3020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintJobRestartRequired;

/// @brief Field PrintMonitorAlreadyInstalled value: I32(3006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintMonitorAlreadyInstalled;

/// @brief Field PrintMonitorInUse value: I32(3008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintMonitorInUse;

/// @brief Field PrintProcessorAlreadyInstalled value: I32(3005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintProcessorAlreadyInstalled;

/// @brief Field PrinterAlreadyExists value: I32(1802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterAlreadyExists;

/// @brief Field PrinterDeleted value: I32(1905)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDeleted;

/// @brief Field PrinterDriverAlreadyInstalled value: I32(1795)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverAlreadyInstalled;

/// @brief Field PrinterDriverBlocked value: I32(3014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverBlocked;

/// @brief Field PrinterDriverDownloadNeeded value: I32(3019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverDownloadNeeded;

/// @brief Field PrinterDriverInUse value: I32(3001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverInUse;

/// @brief Field PrinterDriverPackageInUse value: I32(3015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverPackageInUse;

/// @brief Field PrinterDriverWarned value: I32(3013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterDriverWarned;

/// @brief Field PrinterHasJobsQueued value: I32(3009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterHasJobsQueued;

/// @brief Field PrinterNotFound value: I32(3012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterNotFound;

/// @brief Field PrinterNotShareable value: I32(3022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrinterNotShareable;

/// @brief Field PrintqFull value: I32(61)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrintqFull;

/// @brief Field PrivateDialogIndex value: I32(1415)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrivateDialogIndex;

/// @brief Field PrivilegeNotHeld value: I32(1314)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PrivilegeNotHeld;

/// @brief Field ProcNotFound value: I32(127)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcNotFound;

/// @brief Field ProcessAborted value: I32(1067)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessAborted;

/// @brief Field ProcessInJob value: I32(760)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessInJob;

/// @brief Field ProcessIsProtected value: I32(1293)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessIsProtected;

/// @brief Field ProcessModeAlreadyBackground value: I32(402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessModeAlreadyBackground;

/// @brief Field ProcessModeNotBackground value: I32(403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessModeNotBackground;

/// @brief Field ProcessNotInJob value: I32(759)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProcessNotInJob;

/// @brief Field ProductUninstalled value: I32(1614)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProductUninstalled;

/// @brief Field ProductVersion value: I32(1638)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProductVersion;

/// @brief Field ProfileDoesNotMatchDevice value: I32(2023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfileDoesNotMatchDevice;

/// @brief Field ProfileNotAssociatedWithDevice value: I32(2015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfileNotAssociatedWithDevice;

/// @brief Field ProfileNotFound value: I32(2016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfileNotFound;

/// @brief Field ProfilingAtLimit value: I32(553)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfilingAtLimit;

/// @brief Field ProfilingNotStarted value: I32(550)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfilingNotStarted;

/// @brief Field ProfilingNotStopped value: I32(551)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProfilingNotStopped;

/// @brief Field PromotionActive value: I32(8221)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PromotionActive;

/// @brief Field ProtocolUnreachable value: I32(1233)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ProtocolUnreachable;

/// @brief Field PwdHistoryConflict value: I32(617)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PwdHistoryConflict;

/// @brief Field PwdTooLong value: I32(657)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PwdTooLong;

/// @brief Field PwdTooRecent value: I32(616)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PwdTooRecent;

/// @brief Field PwdTooShort value: I32(615)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const PwdTooShort;

/// @brief Field QueryStorageError value: I32(-2143682559)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QueryStorageError;

/// @brief Field QuorumDiskNotFound value: I32(5086)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumDiskNotFound;

/// @brief Field QuorumNotAllowedInThisGroup value: I32(5928)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumNotAllowedInThisGroup;

/// @brief Field QuorumOwnerAlive value: I32(5034)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumOwnerAlive;

/// @brief Field QuorumResource value: I32(5020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumResource;

/// @brief Field QuorumResourceOnlineFailed value: I32(5027)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumResourceOnlineFailed;

/// @brief Field QuorumlogOpenFailed value: I32(5028)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuorumlogOpenFailed;

/// @brief Field QuotaListInconsistent value: I32(621)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const QuotaListInconsistent;

/// @brief Field RangeListConflict value: I32(627)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RangeListConflict;

/// @brief Field RangeNotFound value: I32(644)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RangeNotFound;

/// @brief Field RdpProtocolError value: I32(7065)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RdpProtocolError;

/// @brief Field ReadFault value: I32(30)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReadFault;

/// @brief Field RecNonExistent value: I32(4005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RecNonExistent;

/// @brief Field ReceiveExpedited value: I32(708)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReceiveExpedited;

/// @brief Field ReceivePartial value: I32(707)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReceivePartial;

/// @brief Field ReceivePartialExpedited value: I32(709)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReceivePartialExpedited;

/// @brief Field RecoveryFailure value: I32(1279)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RecoveryFailure;

/// @brief Field RecoveryFileCorrupt value: I32(15619)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RecoveryFileCorrupt;

/// @brief Field RecoveryNotNeeded value: I32(6821)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RecoveryNotNeeded;

/// @brief Field RedirPaused value: I32(72)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RedirPaused;

/// @brief Field RedirectorHasOpenHandles value: I32(1794)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RedirectorHasOpenHandles;

/// @brief Field RegNatConsumption value: I32(1261)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegNatConsumption;

/// @brief Field RegistryCorrupt value: I32(1015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegistryCorrupt;

/// @brief Field RegistryHiveRecovered value: I32(685)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegistryHiveRecovered;

/// @brief Field RegistryIoFailed value: I32(1016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegistryIoFailed;

/// @brief Field RegistryQuotaLimit value: I32(613)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegistryQuotaLimit;

/// @brief Field RegistryRecovered value: I32(1014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RegistryRecovered;

/// @brief Field RelocChainXeedsSeglim value: I32(201)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RelocChainXeedsSeglim;

/// @brief Field RemNotList value: I32(51)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemNotList;

/// @brief Field RemoteFileVersionMismatch value: I32(6814)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemoteFileVersionMismatch;

/// @brief Field RemotePrintConnectionsBlocked value: I32(1936)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemotePrintConnectionsBlocked;

/// @brief Field RemoteSessionLimitExceeded value: I32(1220)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemoteSessionLimitExceeded;

/// @brief Field RemoteStorageMediaError value: I32(4352)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemoteStorageMediaError;

/// @brief Field RemoteStorageNotActive value: I32(4351)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemoteStorageNotActive;

/// @brief Field RemoveFailed value: I32(15610)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RemoveFailed;

/// @brief Field Reparse value: I32(741)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Reparse;

/// @brief Field ReparseAttributeConflict value: I32(4391)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReparseAttributeConflict;

/// @brief Field ReparseObject value: I32(755)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReparseObject;

/// @brief Field ReparseTagInvalid value: I32(4393)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReparseTagInvalid;

/// @brief Field ReparseTagMismatch value: I32(4394)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReparseTagMismatch;

/// @brief Field ReplyMessageMismatch value: I32(595)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReplyMessageMismatch;

/// @brief Field ReqNotAccep value: I32(71)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ReqNotAccep;

/// @brief Field RequestAborted value: I32(1235)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RequestAborted;

/// @brief Field RequestOutOfSequence value: I32(776)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RequestOutOfSequence;

/// @brief Field RequestPaused value: I32(3050)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RequestPaused;

/// @brief Field RequestRefused value: I32(4320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RequestRefused;

/// @brief Field RequiresInteractiveWindowstation value: I32(1459)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RequiresInteractiveWindowstation;

/// @brief Field ResidentFileNotSupported value: I32(334)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResidentFileNotSupported;

/// @brief Field ResiliencyFileCorrupt value: I32(15625)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResiliencyFileCorrupt;

/// @brief Field ResmonCreateFailed value: I32(5017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResmonCreateFailed;

/// @brief Field ResmonInvalidState value: I32(5084)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResmonInvalidState;

/// @brief Field ResmonOnlineFailed value: I32(5018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResmonOnlineFailed;

/// @brief Field ResmonSystemResourcesLacking value: I32(5956)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResmonSystemResourcesLacking;

/// @brief Field ResourceCallTimedOut value: I32(5910)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceCallTimedOut;

/// @brief Field ResourceDataNotFound value: I32(1812)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceDataNotFound;

/// @brief Field ResourceDisabled value: I32(4309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceDisabled;

/// @brief Field ResourceEnumUserStop value: I32(15106)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceEnumUserStop;

/// @brief Field ResourceFailed value: I32(5038)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceFailed;

/// @brief Field ResourceLangNotFound value: I32(1815)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceLangNotFound;

/// @brief Field ResourceNameNotFound value: I32(1814)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNameNotFound;

/// @brief Field ResourceNotAvailable value: I32(5006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNotAvailable;

/// @brief Field ResourceNotFound value: I32(5007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNotFound;

/// @brief Field ResourceNotInAvailableStorage value: I32(5965)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNotInAvailableStorage;

/// @brief Field ResourceNotOnline value: I32(5004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNotOnline;

/// @brief Field ResourceNotPresent value: I32(4316)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceNotPresent;

/// @brief Field ResourceOnline value: I32(5019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceOnline;

/// @brief Field ResourcePropertiesStored value: I32(5024)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourcePropertiesStored;

/// @brief Field ResourcePropertyUnchangeable value: I32(5089)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourcePropertyUnchangeable;

/// @brief Field ResourceRequirementsChanged value: I32(756)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceRequirementsChanged;

/// @brief Field ResourceTypeNotFound value: I32(1813)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourceTypeNotFound;

/// @brief Field ResourcemanagerNotFound value: I32(6716)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourcemanagerNotFound;

/// @brief Field ResourcemanagerReadOnly value: I32(6707)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResourcemanagerReadOnly;

/// @brief Field RestartApplication value: I32(1467)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RestartApplication;

/// @brief Field ResumeHibernation value: I32(727)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ResumeHibernation;

/// @brief Field Retry value: I32(1237)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Retry;

/// @brief Field RevisionMismatch value: I32(1306)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RevisionMismatch;

/// @brief Field Ring2StackInUse value: I32(207)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Ring2StackInUse;

/// @brief Field Ring2segMustBeMovable value: I32(200)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Ring2segMustBeMovable;

/// @brief Field RmAlreadyStarted value: I32(6822)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmAlreadyStarted;

/// @brief Field RmCannotBeFrozenForSnapshot value: I32(6728)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmCannotBeFrozenForSnapshot;

/// @brief Field RmDisconnected value: I32(6819)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmDisconnected;

/// @brief Field RmMetadataCorrupt value: I32(6802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmMetadataCorrupt;

/// @brief Field RmNotActive value: I32(6801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmNotActive;

/// @brief Field RmodeApp value: I32(1153)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RmodeApp;

/// @brief Field RollbackTimerExpired value: I32(6829)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RollbackTimerExpired;

/// @brief Field Rowsnotreleased value: I32(772)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Rowsnotreleased;

/// @brief Field RplNotAllowed value: I32(4006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RplNotAllowed;

/// @brief Field RunlevelSwitchAgentTimeout value: I32(15403)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RunlevelSwitchAgentTimeout;

/// @brief Field RunlevelSwitchInProgress value: I32(15404)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RunlevelSwitchInProgress;

/// @brief Field RunlevelSwitchTimeout value: I32(15402)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RunlevelSwitchTimeout;

/// @brief Field RxactCommitFailure value: I32(1370)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RxactCommitFailure;

/// @brief Field RxactCommitNecessary value: I32(678)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RxactCommitNecessary;

/// @brief Field RxactCommitted value: I32(744)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RxactCommitted;

/// @brief Field RxactInvalidState value: I32(1369)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RxactInvalidState;

/// @brief Field RxactStateCreated value: I32(701)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const RxactStateCreated;

/// @brief Field SamInitFailure value: I32(8541)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SamInitFailure;

/// @brief Field SameDrive value: I32(143)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SameDrive;

/// @brief Field ScopeNotFound value: I32(318)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ScopeNotFound;

/// @brief Field ScreenAlreadyLocked value: I32(1440)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ScreenAlreadyLocked;

/// @brief Field ScrubDataDisabled value: I32(332)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ScrubDataDisabled;

/// @brief Field SecondaryIcProviderNotRegistered value: I32(15321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecondaryIcProviderNotRegistered;

/// @brief Field SecretTooLong value: I32(1382)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecretTooLong;

/// @brief Field SectorNotFound value: I32(27)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SectorNotFound;

/// @brief Field SecurebootFileReplaced value: I32(4426)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootFileReplaced;

/// @brief Field SecurebootInvalidPolicy value: I32(4422)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootInvalidPolicy;

/// @brief Field SecurebootNotEnabled value: I32(4425)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootNotEnabled;

/// @brief Field SecurebootPolicyNotSigned value: I32(4424)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootPolicyNotSigned;

/// @brief Field SecurebootPolicyPublisherNotFound value: I32(4423)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootPolicyPublisherNotFound;

/// @brief Field SecurebootPolicyViolation value: I32(4421)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootPolicyViolation;

/// @brief Field SecurebootRollbackDetected value: I32(4420)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurebootRollbackDetected;

/// @brief Field SecurityStreamIsInconsistent value: I32(306)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SecurityStreamIsInconsistent;

/// @brief Field Seek value: I32(25)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Seek;

/// @brief Field SeekOnDevice value: I32(132)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SeekOnDevice;

/// @brief Field SegmentNotification value: I32(702)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SegmentNotification;

/// @brief Field SemIsSet value: I32(102)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SemIsSet;

/// @brief Field SemNotFound value: I32(187)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SemNotFound;

/// @brief Field SemOwnerDied value: I32(105)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SemOwnerDied;

/// @brief Field SemTimeout value: I32(121)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SemTimeout;

/// @brief Field SemUserLimit value: I32(106)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SemUserLimit;

/// @brief Field SerialNoDevice value: I32(1118)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SerialNoDevice;

/// @brief Field ServerDisabled value: I32(1341)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServerDisabled;

/// @brief Field ServerHasOpenHandles value: I32(1811)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServerHasOpenHandles;

/// @brief Field ServerNotDisabled value: I32(1342)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServerNotDisabled;

/// @brief Field ServerShutdownInProgress value: I32(1255)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServerShutdownInProgress;

/// @brief Field ServerSidMismatch value: I32(628)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServerSidMismatch;

/// @brief Field ServiceAlreadyRunning value: I32(1056)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceAlreadyRunning;

/// @brief Field ServiceCannotAcceptCtrl value: I32(1061)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceCannotAcceptCtrl;

/// @brief Field ServiceDatabaseLocked value: I32(1055)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceDatabaseLocked;

/// @brief Field ServiceDependencyDeleted value: I32(1075)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceDependencyDeleted;

/// @brief Field ServiceDependencyFail value: I32(1068)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceDependencyFail;

/// @brief Field ServiceDisabled value: I32(1058)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceDisabled;

/// @brief Field ServiceDoesNotExist value: I32(1060)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceDoesNotExist;

/// @brief Field ServiceExists value: I32(1073)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceExists;

/// @brief Field ServiceLogonFailed value: I32(1069)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceLogonFailed;

/// @brief Field ServiceMarkedForDelete value: I32(1072)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceMarkedForDelete;

/// @brief Field ServiceNeverStarted value: I32(1077)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNeverStarted;

/// @brief Field ServiceNoThread value: I32(1054)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNoThread;

/// @brief Field ServiceNotActive value: I32(1062)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNotActive;

/// @brief Field ServiceNotFound value: I32(1243)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNotFound;

/// @brief Field ServiceNotInExe value: I32(1083)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNotInExe;

/// @brief Field ServiceNotification value: I32(716)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNotification;

/// @brief Field ServiceNotifyClientLagging value: I32(1294)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceNotifyClientLagging;

/// @brief Field ServiceRequestTimeout value: I32(1053)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceRequestTimeout;

/// @brief Field ServiceSpecificError value: I32(1066)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceSpecificError;

/// @brief Field ServiceStartHang value: I32(1070)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServiceStartHang;

/// @brief Field ServicesFailedAutostart value: I32(15405)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ServicesFailedAutostart;

/// @brief Field SessionCredentialConflict value: I32(1219)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SessionCredentialConflict;

/// @brief Field SetNotFound value: I32(1170)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SetNotFound;

/// @brief Field SetPowerStateFailed value: I32(1141)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SetPowerStateFailed;

/// @brief Field SetPowerStateVetoed value: I32(1140)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SetPowerStateVetoed;

/// @brief Field SetcountOnBadLb value: I32(1433)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SetcountOnBadLb;

/// @brief Field SetmarkDetected value: I32(1103)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SetmarkDetected;

/// @brief Field SharedPolicy value: I32(8218)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SharedPolicy;

/// @brief Field SharingBufferExceeded value: I32(36)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SharingBufferExceeded;

/// @brief Field SharingPaused value: I32(70)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SharingPaused;

/// @brief Field SharingViolation value: I32(32)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SharingViolation;

/// @brief Field ShortNamesNotEnabledOnVolume value: I32(305)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ShortNamesNotEnabledOnVolume;

/// @brief Field ShutdownCluster value: I32(5008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ShutdownCluster;

/// @brief Field ShutdownInProgress value: I32(1115)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ShutdownInProgress;

/// @brief Field ShutdownIsScheduled value: I32(1190)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ShutdownIsScheduled;

/// @brief Field ShutdownUsersLoggedOn value: I32(1191)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ShutdownUsersLoggedOn;

/// @brief Field SignalPending value: I32(162)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SignalPending;

/// @brief Field SignalRefused value: I32(156)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SignalRefused;

/// @brief Field SingleInstanceApp value: I32(1152)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SingleInstanceApp;

/// @brief Field SmartcardSubsystemFailure value: I32(1264)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SmartcardSubsystemFailure;

/// @brief Field SmiPrimitiveInstallerFailed value: I32(14108)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SmiPrimitiveInstallerFailed;

/// @brief Field SomeNotMapped value: I32(1301)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SomeNotMapped;

/// @brief Field SourceElementEmpty value: I32(1160)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SourceElementEmpty;

/// @brief Field SpacesDriveRedundancyInvalid value: I32(-2132344826)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesDriveRedundancyInvalid;

/// @brief Field SpacesDriveSectorSizeInvalid value: I32(-2132344828)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesDriveSectorSizeInvalid;

/// @brief Field SpacesInterleaveLengthInvalid value: I32(-2132344823)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesInterleaveLengthInvalid;

/// @brief Field SpacesNotEnoughDrives value: I32(-2132344821)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesNotEnoughDrives;

/// @brief Field SpacesNumberOfColumnsInvalid value: I32(-2132344822)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesNumberOfColumnsInvalid;

/// @brief Field SpacesNumberOfDataCopiesInvalid value: I32(-2132344825)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesNumberOfDataCopiesInvalid;

/// @brief Field SpacesParityLayoutInvalid value: I32(-2132344824)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesParityLayoutInvalid;

/// @brief Field SpacesPoolWasDeleted value: I32(15138817)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesPoolWasDeleted;

/// @brief Field SpacesResiliencyTypeInvalid value: I32(-2132344829)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpacesResiliencyTypeInvalid;

/// @brief Field SparseNotAllowedInTransaction value: I32(6844)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SparseNotAllowedInTransaction;

/// @brief Field SpecialAccount value: I32(1371)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpecialAccount;

/// @brief Field SpecialGroup value: I32(1372)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpecialGroup;

/// @brief Field SpecialUser value: I32(1373)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpecialUser;

/// @brief Field SplNoAddjob value: I32(3004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SplNoAddjob;

/// @brief Field SplNoStartdoc value: I32(3003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SplNoStartdoc;

/// @brief Field SpoolFileNotFound value: I32(3002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SpoolFileNotFound;

/// @brief Field StackBufferOverrun value: I32(1282)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StackBufferOverrun;

/// @brief Field StackOverflow value: I32(1001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StackOverflow;

/// @brief Field StackOverflowRead value: I32(599)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StackOverflowRead;

/// @brief Field StateCompositeSettingValueSizeLimitExceeded value: I32(15815)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateCompositeSettingValueSizeLimitExceeded;

/// @brief Field StateContainerNameSizeLimitExceeded value: I32(15818)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateContainerNameSizeLimitExceeded;

/// @brief Field StateCreateContainerFailed value: I32(15805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateCreateContainerFailed;

/// @brief Field StateDeleteContainerFailed value: I32(15806)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateDeleteContainerFailed;

/// @brief Field StateDeleteSettingFailed value: I32(15809)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateDeleteSettingFailed;

/// @brief Field StateEnumerateContainerFailed value: I32(15813)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateEnumerateContainerFailed;

/// @brief Field StateEnumerateSettingsFailed value: I32(15814)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateEnumerateSettingsFailed;

/// @brief Field StateGetVersionFailed value: I32(15801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateGetVersionFailed;

/// @brief Field StateLoadStoreFailed value: I32(15800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateLoadStoreFailed;

/// @brief Field StateOpenContainerFailed value: I32(15804)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateOpenContainerFailed;

/// @brief Field StateQuerySettingFailed value: I32(15810)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateQuerySettingFailed;

/// @brief Field StateReadCompositeSettingFailed value: I32(15811)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateReadCompositeSettingFailed;

/// @brief Field StateReadSettingFailed value: I32(15807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateReadSettingFailed;

/// @brief Field StateSetVersionFailed value: I32(15802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateSetVersionFailed;

/// @brief Field StateSettingNameSizeLimitExceeded value: I32(15817)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateSettingNameSizeLimitExceeded;

/// @brief Field StateSettingValueSizeLimitExceeded value: I32(15816)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateSettingValueSizeLimitExceeded;

/// @brief Field StateStructuredResetFailed value: I32(15803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateStructuredResetFailed;

/// @brief Field StateWriteCompositeSettingFailed value: I32(15812)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateWriteCompositeSettingFailed;

/// @brief Field StateWriteSettingFailed value: I32(15808)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StateWriteSettingFailed;

/// @brief Field StaticInit value: I32(4002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StaticInit;

/// @brief Field StoppedOnSymlink value: I32(681)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StoppedOnSymlink;

/// @brief Field StreamMiniversionNotFound value: I32(6808)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StreamMiniversionNotFound;

/// @brief Field StreamMiniversionNotValid value: I32(6809)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const StreamMiniversionNotValid;

/// @brief Field SubstToJoin value: I32(141)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SubstToJoin;

/// @brief Field SubstToSubst value: I32(139)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SubstToSubst;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Success;

/// @brief Field SuccessRebootInitiated value: I32(1641)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SuccessRebootInitiated;

/// @brief Field SuccessRebootRequired value: I32(3010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SuccessRebootRequired;

/// @brief Field SuccessRestartRequired value: I32(3011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SuccessRestartRequired;

/// @brief Field Swaperror value: I32(999)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Swaperror;

/// @brief Field SxsActivationContextDisabled value: I32(14006)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsActivationContextDisabled;

/// @brief Field SxsAssemblyIsNotADeployment value: I32(14103)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsAssemblyIsNotADeployment;

/// @brief Field SxsAssemblyMissing value: I32(14081)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsAssemblyMissing;

/// @brief Field SxsAssemblyNotFound value: I32(14003)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsAssemblyNotFound;

/// @brief Field SxsAssemblyNotLocked value: I32(14097)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsAssemblyNotLocked;

/// @brief Field SxsCantGenActctx value: I32(14001)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsCantGenActctx;

/// @brief Field SxsComponentStoreCorrupt value: I32(14098)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsComponentStoreCorrupt;

/// @brief Field SxsCorruptActivationStack value: I32(14082)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsCorruptActivationStack;

/// @brief Field SxsCorruption value: I32(14083)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsCorruption;

/// @brief Field SxsDuplicateAssemblyName value: I32(14027)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateAssemblyName;

/// @brief Field SxsDuplicateClsid value: I32(14023)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateClsid;

/// @brief Field SxsDuplicateDllName value: I32(14021)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateDllName;

/// @brief Field SxsDuplicateIid value: I32(14024)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateIid;

/// @brief Field SxsDuplicateProgid value: I32(14026)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateProgid;

/// @brief Field SxsDuplicateTlbid value: I32(14025)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateTlbid;

/// @brief Field SxsDuplicateWindowclassName value: I32(14022)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsDuplicateWindowclassName;

/// @brief Field SxsEarlyDeactivation value: I32(14084)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsEarlyDeactivation;

/// @brief Field SxsFileHashMismatch value: I32(14028)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsFileHashMismatch;

/// @brief Field SxsFileHashMissing value: I32(14110)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsFileHashMissing;

/// @brief Field SxsFileNotPartOfAssembly value: I32(14104)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsFileNotPartOfAssembly;

/// @brief Field SxsIdentitiesDifferent value: I32(14102)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsIdentitiesDifferent;

/// @brief Field SxsIdentityDuplicateAttribute value: I32(14092)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsIdentityDuplicateAttribute;

/// @brief Field SxsIdentityParseError value: I32(14093)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsIdentityParseError;

/// @brief Field SxsIncorrectPublicKeyToken value: I32(14095)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsIncorrectPublicKeyToken;

/// @brief Field SxsInvalidActctxdataFormat value: I32(14002)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidActctxdataFormat;

/// @brief Field SxsInvalidAssemblyIdentityAttribute value: I32(14017)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidAssemblyIdentityAttribute;

/// @brief Field SxsInvalidAssemblyIdentityAttributeName value: I32(14080)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidAssemblyIdentityAttributeName;

/// @brief Field SxsInvalidDeactivation value: I32(14085)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidDeactivation;

/// @brief Field SxsInvalidIdentityAttributeName value: I32(14091)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidIdentityAttributeName;

/// @brief Field SxsInvalidIdentityAttributeValue value: I32(14090)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidIdentityAttributeValue;

/// @brief Field SxsInvalidXmlNamespaceUri value: I32(14014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsInvalidXmlNamespaceUri;

/// @brief Field SxsKeyNotFound value: I32(14007)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsKeyNotFound;

/// @brief Field SxsLeafManifestDependencyNotInstalled value: I32(14016)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsLeafManifestDependencyNotInstalled;

/// @brief Field SxsManifestFormatError value: I32(14004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestFormatError;

/// @brief Field SxsManifestIdentitySameButContentsDifferent value: I32(14101)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestIdentitySameButContentsDifferent;

/// @brief Field SxsManifestInvalidRequiredDefaultNamespace value: I32(14019)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestInvalidRequiredDefaultNamespace;

/// @brief Field SxsManifestMissingRequiredDefaultNamespace value: I32(14018)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestMissingRequiredDefaultNamespace;

/// @brief Field SxsManifestParseError value: I32(14005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestParseError;

/// @brief Field SxsManifestTooBig value: I32(14105)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsManifestTooBig;

/// @brief Field SxsMissingAssemblyIdentityAttribute value: I32(14079)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsMissingAssemblyIdentityAttribute;

/// @brief Field SxsMultipleDeactivation value: I32(14086)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsMultipleDeactivation;

/// @brief Field SxsPolicyParseError value: I32(14029)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsPolicyParseError;

/// @brief Field SxsPrivateManifestCrossPathWithReparsePoint value: I32(14020)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsPrivateManifestCrossPathWithReparsePoint;

/// @brief Field SxsProcessDefaultAlreadySet value: I32(14011)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProcessDefaultAlreadySet;

/// @brief Field SxsProcessTerminationRequested value: I32(14087)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProcessTerminationRequested;

/// @brief Field SxsProtectionCatalogFileMissing value: I32(14078)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProtectionCatalogFileMissing;

/// @brief Field SxsProtectionCatalogNotValid value: I32(14076)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProtectionCatalogNotValid;

/// @brief Field SxsProtectionPublicKeyTooShort value: I32(14075)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProtectionPublicKeyTooShort;

/// @brief Field SxsProtectionRecoveryFailed value: I32(14074)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsProtectionRecoveryFailed;

/// @brief Field SxsReleaseActivationContext value: I32(14088)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsReleaseActivationContext;

/// @brief Field SxsRootManifestDependencyNotInstalled value: I32(14015)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsRootManifestDependencyNotInstalled;

/// @brief Field SxsSectionNotFound value: I32(14000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsSectionNotFound;

/// @brief Field SxsSettingNotRegistered value: I32(14106)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsSettingNotRegistered;

/// @brief Field SxsSystemDefaultActivationContextEmpty value: I32(14089)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsSystemDefaultActivationContextEmpty;

/// @brief Field SxsThreadQueriesDisabled value: I32(14010)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsThreadQueriesDisabled;

/// @brief Field SxsTransactionClosureIncomplete value: I32(14107)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsTransactionClosureIncomplete;

/// @brief Field SxsUnknownEncoding value: I32(14013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsUnknownEncoding;

/// @brief Field SxsUnknownEncodingGroup value: I32(14012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsUnknownEncodingGroup;

/// @brief Field SxsUntranslatableHresult value: I32(14077)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsUntranslatableHresult;

/// @brief Field SxsVersionConflict value: I32(14008)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsVersionConflict;

/// @brief Field SxsWrongSectionType value: I32(14009)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsWrongSectionType;

/// @brief Field SxsXmlEBadchardata value: I32(14036)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadchardata;

/// @brief Field SxsXmlEBadcharinstring value: I32(14034)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadcharinstring;

/// @brief Field SxsXmlEBadnamechar value: I32(14033)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadnamechar;

/// @brief Field SxsXmlEBadperefinsubset value: I32(14059)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadperefinsubset;

/// @brief Field SxsXmlEBadstartnamechar value: I32(14032)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadstartnamechar;

/// @brief Field SxsXmlEBadxmlcase value: I32(14069)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadxmlcase;

/// @brief Field SxsXmlEBadxmldecl value: I32(14056)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEBadxmldecl;

/// @brief Field SxsXmlECommentsyntax value: I32(14031)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlECommentsyntax;

/// @brief Field SxsXmlEDuplicateattribute value: I32(14053)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEDuplicateattribute;

/// @brief Field SxsXmlEExpectingclosequote value: I32(14045)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEExpectingclosequote;

/// @brief Field SxsXmlEExpectingtagend value: I32(14038)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEExpectingtagend;

/// @brief Field SxsXmlEIncompleteEncoding value: I32(14043)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEIncompleteEncoding;

/// @brief Field SxsXmlEInternalerror value: I32(14041)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInternalerror;

/// @brief Field SxsXmlEInvalidDecimal value: I32(14047)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidDecimal;

/// @brief Field SxsXmlEInvalidHexidecimal value: I32(14048)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidHexidecimal;

/// @brief Field SxsXmlEInvalidStandalone value: I32(14070)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidStandalone;

/// @brief Field SxsXmlEInvalidUnicode value: I32(14049)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidUnicode;

/// @brief Field SxsXmlEInvalidVersion value: I32(14072)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidVersion;

/// @brief Field SxsXmlEInvalidatrootlevel value: I32(14055)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidatrootlevel;

/// @brief Field SxsXmlEInvalidencoding value: I32(14067)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidencoding;

/// @brief Field SxsXmlEInvalidswitch value: I32(14068)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEInvalidswitch;

/// @brief Field SxsXmlEMissingParen value: I32(14044)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingParen;

/// @brief Field SxsXmlEMissingequals value: I32(14073)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingequals;

/// @brief Field SxsXmlEMissingquote value: I32(14030)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingquote;

/// @brief Field SxsXmlEMissingroot value: I32(14057)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingroot;

/// @brief Field SxsXmlEMissingsemicolon value: I32(14039)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingsemicolon;

/// @brief Field SxsXmlEMissingwhitespace value: I32(14037)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMissingwhitespace;

/// @brief Field SxsXmlEMultipleColons value: I32(14046)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMultipleColons;

/// @brief Field SxsXmlEMultipleroots value: I32(14054)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEMultipleroots;

/// @brief Field SxsXmlEReservednamespace value: I32(14066)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEReservednamespace;

/// @brief Field SxsXmlEUnbalancedparen value: I32(14040)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnbalancedparen;

/// @brief Field SxsXmlEUnclosedcdata value: I32(14065)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedcdata;

/// @brief Field SxsXmlEUnclosedcomment value: I32(14063)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedcomment;

/// @brief Field SxsXmlEUncloseddecl value: I32(14064)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUncloseddecl;

/// @brief Field SxsXmlEUnclosedendtag value: I32(14061)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedendtag;

/// @brief Field SxsXmlEUnclosedstarttag value: I32(14060)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedstarttag;

/// @brief Field SxsXmlEUnclosedstring value: I32(14062)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedstring;

/// @brief Field SxsXmlEUnclosedtag value: I32(14052)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnclosedtag;

/// @brief Field SxsXmlEUnexpectedStandalone value: I32(14071)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnexpectedStandalone;

/// @brief Field SxsXmlEUnexpectedWhitespace value: I32(14042)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnexpectedWhitespace;

/// @brief Field SxsXmlEUnexpectedendtag value: I32(14051)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnexpectedendtag;

/// @brief Field SxsXmlEUnexpectedeof value: I32(14058)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEUnexpectedeof;

/// @brief Field SxsXmlEWhitespaceorquestionmark value: I32(14050)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEWhitespaceorquestionmark;

/// @brief Field SxsXmlEXmldeclsyntax value: I32(14035)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SxsXmlEXmldeclsyntax;

/// @brief Field SymlinkClassDisabled value: I32(1463)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SymlinkClassDisabled;

/// @brief Field SymlinkNotSupported value: I32(1464)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SymlinkNotSupported;

/// @brief Field SyncForegroundRefreshRequired value: I32(1274)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SyncForegroundRefreshRequired;

/// @brief Field SynchronizationRequired value: I32(569)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SynchronizationRequired;

/// @brief Field SystemDeviceNotFound value: I32(15299)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemDeviceNotFound;

/// @brief Field SystemHiveTooLarge value: I32(653)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemHiveTooLarge;

/// @brief Field SystemImageBadSignature value: I32(637)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemImageBadSignature;

/// @brief Field SystemNeedsRemediation value: I32(15623)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemNeedsRemediation;

/// @brief Field SystemPowerstateComplexTransition value: I32(783)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemPowerstateComplexTransition;

/// @brief Field SystemPowerstateTransition value: I32(782)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemPowerstateTransition;

/// @brief Field SystemProcessTerminated value: I32(591)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemProcessTerminated;

/// @brief Field SystemShutdown value: I32(641)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemShutdown;

/// @brief Field SystemTrace value: I32(150)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const SystemTrace;

/// @brief Field TagNotFound value: I32(2012)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TagNotFound;

/// @brief Field TagNotPresent value: I32(2013)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TagNotPresent;

/// @brief Field Thread1Inactive value: I32(210)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Thread1Inactive;

/// @brief Field ThreadAlreadyInTask value: I32(1552)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ThreadAlreadyInTask;

/// @brief Field ThreadModeAlreadyBackground value: I32(400)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ThreadModeAlreadyBackground;

/// @brief Field ThreadModeNotBackground value: I32(401)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ThreadModeNotBackground;

/// @brief Field ThreadNotInProcess value: I32(566)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ThreadNotInProcess;

/// @brief Field ThreadWasSuspended value: I32(699)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ThreadWasSuspended;

/// @brief Field TimeSkew value: I32(1398)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TimeSkew;

/// @brief Field Timeout value: I32(1460)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Timeout;

/// @brief Field TimerNotCanceled value: I32(541)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TimerNotCanceled;

/// @brief Field TimerResolutionNotSet value: I32(607)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TimerResolutionNotSet;

/// @brief Field TimerResumeIgnored value: I32(722)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TimerResumeIgnored;

/// @brief Field TlwWithWschild value: I32(1406)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TlwWithWschild;

/// @brief Field TmIdentityMismatch value: I32(6845)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TmIdentityMismatch;

/// @brief Field TmInitializationFailed value: I32(6706)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TmInitializationFailed;

/// @brief Field TmVolatile value: I32(6828)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TmVolatile;

/// @brief Field TokenAlreadyInUse value: I32(1375)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TokenAlreadyInUse;

/// @brief Field TooManyCmds value: I32(56)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyCmds;

/// @brief Field TooManyContextIds value: I32(1384)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyContextIds;

/// @brief Field TooManyDescriptors value: I32(331)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyDescriptors;

/// @brief Field TooManyLinks value: I32(1142)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyLinks;

/// @brief Field TooManyLuidsRequested value: I32(1333)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyLuidsRequested;

/// @brief Field TooManyModules value: I32(214)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyModules;

/// @brief Field TooManyMuxwaiters value: I32(152)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyMuxwaiters;

/// @brief Field TooManyNames value: I32(68)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyNames;

/// @brief Field TooManyOpenFiles value: I32(4)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyOpenFiles;

/// @brief Field TooManyPosts value: I32(298)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyPosts;

/// @brief Field TooManySecrets value: I32(1381)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManySecrets;

/// @brief Field TooManySemRequests value: I32(103)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManySemRequests;

/// @brief Field TooManySemaphores value: I32(100)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManySemaphores;

/// @brief Field TooManySess value: I32(69)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManySess;

/// @brief Field TooManySids value: I32(1389)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManySids;

/// @brief Field TooManyTcbs value: I32(155)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyTcbs;

/// @brief Field TooManyThreads value: I32(565)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TooManyThreads;

/// @brief Field TransactedMappingUnsupportedRemote value: I32(6834)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactedMappingUnsupportedRemote;

/// @brief Field TransactionAlreadyAborted value: I32(6704)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionAlreadyAborted;

/// @brief Field TransactionAlreadyCommitted value: I32(6705)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionAlreadyCommitted;

/// @brief Field TransactionFreezeInProgress value: I32(6840)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionFreezeInProgress;

/// @brief Field TransactionIntegrityViolated value: I32(6726)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionIntegrityViolated;

/// @brief Field TransactionInvalidMarshallBuffer value: I32(6713)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionInvalidMarshallBuffer;

/// @brief Field TransactionMustWritethrough value: I32(6729)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionMustWritethrough;

/// @brief Field TransactionNoSuperior value: I32(6730)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNoSuperior;

/// @brief Field TransactionNotActive value: I32(6701)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotActive;

/// @brief Field TransactionNotEnlisted value: I32(6855)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotEnlisted;

/// @brief Field TransactionNotFound value: I32(6715)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotFound;

/// @brief Field TransactionNotJoined value: I32(6708)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotJoined;

/// @brief Field TransactionNotRequested value: I32(6703)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotRequested;

/// @brief Field TransactionNotRoot value: I32(6721)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionNotRoot;

/// @brief Field TransactionObjectExpired value: I32(6722)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionObjectExpired;

/// @brief Field TransactionPropagationFailed value: I32(6711)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionPropagationFailed;

/// @brief Field TransactionRecordTooLong value: I32(6724)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionRecordTooLong;

/// @brief Field TransactionRequestNotValid value: I32(6702)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionRequestNotValid;

/// @brief Field TransactionRequiredPromotion value: I32(6837)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionRequiredPromotion;

/// @brief Field TransactionResponseNotEnlisted value: I32(6723)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionResponseNotEnlisted;

/// @brief Field TransactionScopeCallbacksNotSet value: I32(6836)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionScopeCallbacksNotSet;

/// @brief Field TransactionSuperiorExists value: I32(6709)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionSuperiorExists;

/// @brief Field TransactionalConflict value: I32(6800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionalConflict;

/// @brief Field TransactionalOpenNotAllowed value: I32(6832)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionalOpenNotAllowed;

/// @brief Field TransactionmanagerIdentityMismatch value: I32(6727)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionmanagerIdentityMismatch;

/// @brief Field TransactionmanagerNotFound value: I32(6718)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionmanagerNotFound;

/// @brief Field TransactionmanagerNotOnline value: I32(6719)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionmanagerNotOnline;

/// @brief Field TransactionmanagerRecoveryNameCollision value: I32(6720)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionmanagerRecoveryNameCollision;

/// @brief Field TransactionsNotFrozen value: I32(6839)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionsNotFrozen;

/// @brief Field TransactionsUnsupportedRemote value: I32(6805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransactionsUnsupportedRemote;

/// @brief Field TransformNotSupported value: I32(2004)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransformNotSupported;

/// @brief Field TranslationComplete value: I32(757)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TranslationComplete;

/// @brief Field TransportFull value: I32(4328)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TransportFull;

/// @brief Field TrustFailure value: I32(1790)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TrustFailure;

/// @brief Field TrustedDomainFailure value: I32(1788)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TrustedDomainFailure;

/// @brief Field TrustedRelationshipFailure value: I32(1789)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TrustedRelationshipFailure;

/// @brief Field TsIncompatibleSessions value: I32(7069)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TsIncompatibleSessions;

/// @brief Field TsVideoSubsystemError value: I32(7070)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TsVideoSubsystemError;

/// @brief Field TxfAttributeCorrupt value: I32(6830)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TxfAttributeCorrupt;

/// @brief Field TxfDirNotEmpty value: I32(6826)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TxfDirNotEmpty;

/// @brief Field TxfMetadataAlreadyPresent value: I32(6835)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const TxfMetadataAlreadyPresent;

/// @brief Field UnableToClean value: I32(4311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToClean;

/// @brief Field UnableToEjectMountedMedia value: I32(4330)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToEjectMountedMedia;

/// @brief Field UnableToInventoryDrive value: I32(4325)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToInventoryDrive;

/// @brief Field UnableToInventorySlot value: I32(4326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToInventorySlot;

/// @brief Field UnableToInventoryTransport value: I32(4327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToInventoryTransport;

/// @brief Field UnableToLoadMedium value: I32(4324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToLoadMedium;

/// @brief Field UnableToLockMedia value: I32(1108)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToLockMedia;

/// @brief Field UnableToMoveReplacement value: I32(1176)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToMoveReplacement;

/// @brief Field UnableToMoveReplacement2 value: I32(1177)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToMoveReplacement2;

/// @brief Field UnableToRemoveReplaced value: I32(1175)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToRemoveReplaced;

/// @brief Field UnableToUnloadMedia value: I32(1109)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnableToUnloadMedia;

/// @brief Field UndefinedCharacter value: I32(583)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UndefinedCharacter;

/// @brief Field UndefinedScope value: I32(319)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UndefinedScope;

/// @brief Field UnexpNetErr value: I32(59)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnexpNetErr;

/// @brief Field UnexpectedMmCreateErr value: I32(556)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnexpectedMmCreateErr;

/// @brief Field UnexpectedMmExtendErr value: I32(558)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnexpectedMmExtendErr;

/// @brief Field UnexpectedMmMapError value: I32(557)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnexpectedMmMapError;

/// @brief Field UnexpectedOmid value: I32(4334)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnexpectedOmid;

/// @brief Field UnhandledException value: I32(574)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnhandledException;

/// @brief Field UnidentifiedError value: I32(1287)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnidentifiedError;

/// @brief Field UnknownComponent value: I32(1607)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownComponent;

/// @brief Field UnknownFeature value: I32(1606)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownFeature;

/// @brief Field UnknownPatch value: I32(1647)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownPatch;

/// @brief Field UnknownPort value: I32(1796)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownPort;

/// @brief Field UnknownPrintMonitor value: I32(3000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownPrintMonitor;

/// @brief Field UnknownPrinterDriver value: I32(1797)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownPrinterDriver;

/// @brief Field UnknownPrintprocessor value: I32(1798)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownPrintprocessor;

/// @brief Field UnknownProduct value: I32(1605)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownProduct;

/// @brief Field UnknownProperty value: I32(1608)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownProperty;

/// @brief Field UnknownRevision value: I32(1305)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnknownRevision;

/// @brief Field UnmappedSubstitutionString value: I32(14096)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnmappedSubstitutionString;

/// @brief Field UnrecognizedMedia value: I32(1785)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnrecognizedMedia;

/// @brief Field UnrecognizedVolume value: I32(1005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnrecognizedVolume;

/// @brief Field UnsupportedCompression value: I32(618)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnsupportedCompression;

/// @brief Field UnsupportedType value: I32(1630)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnsupportedType;

/// @brief Field Unwind value: I32(542)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Unwind;

/// @brief Field UnwindConsolidate value: I32(684)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UnwindConsolidate;

/// @brief Field UserApc value: I32(737)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UserApc;

/// @brief Field UserDeleteTrustQuotaExceeded value: I32(1934)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UserDeleteTrustQuotaExceeded;

/// @brief Field UserExists value: I32(1316)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UserExists;

/// @brief Field UserMappedFile value: I32(1224)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UserMappedFile;

/// @brief Field UserProfileLoad value: I32(500)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const UserProfileLoad;

/// @brief Field ValidateContinue value: I32(625)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const ValidateContinue;

/// @brief Field VcDisconnected value: I32(240)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VcDisconnected;

/// @brief Field VdmDisallowed value: I32(1286)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VdmDisallowed;

/// @brief Field VdmHardError value: I32(593)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VdmHardError;

/// @brief Field VerifierStop value: I32(537)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VerifierStop;

/// @brief Field VersionParseError value: I32(777)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VersionParseError;

/// @brief Field VhdAlreadyAtOrBelowMinimumVirtualSize value: I32(-1069940697)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdAlreadyAtOrBelowMinimumVirtualSize;

/// @brief Field VhdBitmapMismatch value: I32(-1069940724)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdBitmapMismatch;

/// @brief Field VhdBlockAllocationFailure value: I32(-1069940727)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdBlockAllocationFailure;

/// @brief Field VhdBlockAllocationTableCorrupt value: I32(-1069940726)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdBlockAllocationTableCorrupt;

/// @brief Field VhdChildParentIdMismatch value: I32(-1069940722)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdChildParentIdMismatch;

/// @brief Field VhdChildParentSizeMismatch value: I32(-1069940713)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdChildParentSizeMismatch;

/// @brief Field VhdChildParentTimestampMismatch value: I32(-1069940721)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdChildParentTimestampMismatch;

/// @brief Field VhdCouldNotComputeMinimumVirtualSize value: I32(-1069940698)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdCouldNotComputeMinimumVirtualSize;

/// @brief Field VhdDifferencingChainCycleDetected value: I32(-1069940712)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdDifferencingChainCycleDetected;

/// @brief Field VhdDifferencingChainErrorInParent value: I32(-1069940711)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdDifferencingChainErrorInParent;

/// @brief Field VhdDriveFooterChecksumMismatch value: I32(-1069940734)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdDriveFooterChecksumMismatch;

/// @brief Field VhdDriveFooterCorrupt value: I32(-1069940733)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdDriveFooterCorrupt;

/// @brief Field VhdDriveFooterMissing value: I32(-1069940735)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdDriveFooterMissing;

/// @brief Field VhdFormatUnknown value: I32(-1069940732)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdFormatUnknown;

/// @brief Field VhdFormatUnsupportedVersion value: I32(-1069940731)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdFormatUnsupportedVersion;

/// @brief Field VhdInvalidBlockSize value: I32(-1069940725)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdInvalidBlockSize;

/// @brief Field VhdInvalidFileSize value: I32(-1069940717)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdInvalidFileSize;

/// @brief Field VhdInvalidSize value: I32(-1069940718)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdInvalidSize;

/// @brief Field VhdInvalidState value: I32(-1069940708)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdInvalidState;

/// @brief Field VhdInvalidType value: I32(-1069940709)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdInvalidType;

/// @brief Field VhdMetadataFull value: I32(-1069940696)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdMetadataFull;

/// @brief Field VhdMetadataReadFailure value: I32(-1069940720)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdMetadataReadFailure;

/// @brief Field VhdMetadataWriteFailure value: I32(-1069940719)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdMetadataWriteFailure;

/// @brief Field VhdParentVhdAccessDenied value: I32(-1069940714)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdParentVhdAccessDenied;

/// @brief Field VhdParentVhdNotFound value: I32(-1069940723)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdParentVhdNotFound;

/// @brief Field VhdResizeWouldTruncateData value: I32(-1069940699)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdResizeWouldTruncateData;

/// @brief Field VhdSparseHeaderChecksumMismatch value: I32(-1069940730)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdSparseHeaderChecksumMismatch;

/// @brief Field VhdSparseHeaderCorrupt value: I32(-1069940728)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdSparseHeaderCorrupt;

/// @brief Field VhdSparseHeaderUnsupportedVersion value: I32(-1069940729)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VhdSparseHeaderUnsupportedVersion;

/// @brief Field VidChildGpaPageSetCorrupted value: I32(-1070137330)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidChildGpaPageSetCorrupted;

/// @brief Field VidDuplicateHandler value: I32(-1070137343)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidDuplicateHandler;

/// @brief Field VidExceededKmContextCountLimit value: I32(-1070137314)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidExceededKmContextCountLimit;

/// @brief Field VidExceededMbpEntryMapLimit value: I32(-1070137332)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidExceededMbpEntryMapLimit;

/// @brief Field VidHandlerNotPresent value: I32(-1070137340)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidHandlerNotPresent;

/// @brief Field VidInvalidChildGpaPageSet value: I32(-1070137310)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidChildGpaPageSet;

/// @brief Field VidInvalidGpaRangeHandle value: I32(-1070137323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidGpaRangeHandle;

/// @brief Field VidInvalidMemoryBlockHandle value: I32(-1070137326)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidMemoryBlockHandle;

/// @brief Field VidInvalidMessageQueueHandle value: I32(-1070137324)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidMessageQueueHandle;

/// @brief Field VidInvalidNumaNodeIndex value: I32(-1070137328)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidNumaNodeIndex;

/// @brief Field VidInvalidNumaSettings value: I32(-1070137329)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidNumaSettings;

/// @brief Field VidInvalidObjectName value: I32(-1070137339)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidObjectName;

/// @brief Field VidInvalidPpmHandle value: I32(-1070137320)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidPpmHandle;

/// @brief Field VidInvalidProcessorState value: I32(-1070137315)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidInvalidProcessorState;

/// @brief Field VidKmInterfaceAlreadyInitialized value: I32(-1070137313)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidKmInterfaceAlreadyInitialized;

/// @brief Field VidMbPropertyAlreadySetReset value: I32(-1070137312)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMbPropertyAlreadySetReset;

/// @brief Field VidMbStillReferenced value: I32(-1070137331)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMbStillReferenced;

/// @brief Field VidMbpAlreadyLockedUsingReservedPage value: I32(-1070137307)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMbpAlreadyLockedUsingReservedPage;

/// @brief Field VidMbpCountExceededLimit value: I32(-1070137306)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMbpCountExceededLimit;

/// @brief Field VidMbpsAreLocked value: I32(-1070137319)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMbpsAreLocked;

/// @brief Field VidMemoryBlockLockCountExceeded value: I32(-1070137321)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMemoryBlockLockCountExceeded;

/// @brief Field VidMessageQueueAlreadyExists value: I32(-1070137333)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMessageQueueAlreadyExists;

/// @brief Field VidMessageQueueClosed value: I32(-1070137318)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMessageQueueClosed;

/// @brief Field VidMessageQueueNameTooLong value: I32(-1070137337)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMessageQueueNameTooLong;

/// @brief Field VidMmioRangeDestroyed value: I32(-1070137311)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidMmioRangeDestroyed;

/// @brief Field VidNoMemoryBlockNotificationQueue value: I32(-1070137322)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidNoMemoryBlockNotificationQueue;

/// @brief Field VidNotificationQueueAlreadyAssociated value: I32(-1070137327)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidNotificationQueueAlreadyAssociated;

/// @brief Field VidPageRangeOverflow value: I32(-1070137325)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidPageRangeOverflow;

/// @brief Field VidPartitionAlreadyExists value: I32(-1070137336)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidPartitionAlreadyExists;

/// @brief Field VidPartitionDoesNotExist value: I32(-1070137335)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidPartitionDoesNotExist;

/// @brief Field VidPartitionNameNotFound value: I32(-1070137334)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidPartitionNameNotFound;

/// @brief Field VidPartitionNameTooLong value: I32(-1070137338)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidPartitionNameTooLong;

/// @brief Field VidQueueFull value: I32(-1070137341)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidQueueFull;

/// @brief Field VidRemoteNodeParentGpaPagesUsed value: I32(-2143879167)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidRemoteNodeParentGpaPagesUsed;

/// @brief Field VidReservePageSetIsBeingUsed value: I32(-1070137309)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidReservePageSetIsBeingUsed;

/// @brief Field VidReservePageSetTooSmall value: I32(-1070137308)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidReservePageSetTooSmall;

/// @brief Field VidSavedStateCorrupt value: I32(-1070137305)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidSavedStateCorrupt;

/// @brief Field VidSavedStateIncompatible value: I32(-1070137303)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidSavedStateIncompatible;

/// @brief Field VidSavedStateUnrecognizedItem value: I32(-1070137304)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidSavedStateUnrecognizedItem;

/// @brief Field VidStopPending value: I32(-1070137316)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidStopPending;

/// @brief Field VidTooManyHandlers value: I32(-1070137342)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidTooManyHandlers;

/// @brief Field VidVirtualProcessorLimitExceeded value: I32(-1070137317)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VidVirtualProcessorLimitExceeded;

/// @brief Field VirtdiskDiskAlreadyOwned value: I32(-1069940706)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtdiskDiskAlreadyOwned;

/// @brief Field VirtdiskDiskOnlineAndWritable value: I32(-1069940705)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtdiskDiskOnlineAndWritable;

/// @brief Field VirtdiskNotVirtualDisk value: I32(-1069940715)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtdiskNotVirtualDisk;

/// @brief Field VirtdiskProviderNotFound value: I32(-1069940716)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtdiskProviderNotFound;

/// @brief Field VirtdiskUnsupportedDiskSectorSize value: I32(-1069940707)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtdiskUnsupportedDiskSectorSize;

/// @brief Field VirtualDiskLimitation value: I32(-1069940710)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirtualDiskLimitation;

/// @brief Field VirusDeleted value: I32(226)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirusDeleted;

/// @brief Field VirusInfected value: I32(225)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VirusInfected;

/// @brief Field VolmgrAllDisksFailed value: I32(-1070071767)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrAllDisksFailed;

/// @brief Field VolmgrBadBootDisk value: I32(-1070071729)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrBadBootDisk;

/// @brief Field VolmgrDatabaseFull value: I32(-1070071807)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDatabaseFull;

/// @brief Field VolmgrDifferentSectorSize value: I32(-1070071730)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDifferentSectorSize;

/// @brief Field VolmgrDiskConfigurationCorrupted value: I32(-1070071806)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskConfigurationCorrupted;

/// @brief Field VolmgrDiskConfigurationNotInSync value: I32(-1070071805)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskConfigurationNotInSync;

/// @brief Field VolmgrDiskContainsNonSimpleVolume value: I32(-1070071803)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskContainsNonSimpleVolume;

/// @brief Field VolmgrDiskDuplicate value: I32(-1070071802)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskDuplicate;

/// @brief Field VolmgrDiskDynamic value: I32(-1070071801)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskDynamic;

/// @brief Field VolmgrDiskIdInvalid value: I32(-1070071800)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskIdInvalid;

/// @brief Field VolmgrDiskInvalid value: I32(-1070071799)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskInvalid;

/// @brief Field VolmgrDiskLastVoter value: I32(-1070071798)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLastVoter;

/// @brief Field VolmgrDiskLayoutInvalid value: I32(-1070071797)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutInvalid;

/// @brief Field VolmgrDiskLayoutNonBasicBetweenBasicPartitions value: I32(-1070071796)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutNonBasicBetweenBasicPartitions;

/// @brief Field VolmgrDiskLayoutNotCylinderAligned value: I32(-1070071795)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutNotCylinderAligned;

/// @brief Field VolmgrDiskLayoutPartitionsTooSmall value: I32(-1070071794)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutPartitionsTooSmall;

/// @brief Field VolmgrDiskLayoutPrimaryBetweenLogicalPartitions value: I32(-1070071793)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutPrimaryBetweenLogicalPartitions;

/// @brief Field VolmgrDiskLayoutTooManyPartitions value: I32(-1070071792)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskLayoutTooManyPartitions;

/// @brief Field VolmgrDiskMissing value: I32(-1070071791)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskMissing;

/// @brief Field VolmgrDiskNotEmpty value: I32(-1070071790)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskNotEmpty;

/// @brief Field VolmgrDiskNotEnoughSpace value: I32(-1070071789)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskNotEnoughSpace;

/// @brief Field VolmgrDiskRevectoringFailed value: I32(-1070071788)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskRevectoringFailed;

/// @brief Field VolmgrDiskSectorSizeInvalid value: I32(-1070071787)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskSectorSizeInvalid;

/// @brief Field VolmgrDiskSetNotContained value: I32(-1070071786)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskSetNotContained;

/// @brief Field VolmgrDiskUsedByMultipleMembers value: I32(-1070071785)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskUsedByMultipleMembers;

/// @brief Field VolmgrDiskUsedByMultiplePlexes value: I32(-1070071784)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDiskUsedByMultiplePlexes;

/// @brief Field VolmgrDynamicDiskNotSupported value: I32(-1070071783)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrDynamicDiskNotSupported;

/// @brief Field VolmgrExtentAlreadyUsed value: I32(-1070071782)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentAlreadyUsed;

/// @brief Field VolmgrExtentNotContiguous value: I32(-1070071781)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentNotContiguous;

/// @brief Field VolmgrExtentNotInPublicRegion value: I32(-1070071780)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentNotInPublicRegion;

/// @brief Field VolmgrExtentNotSectorAligned value: I32(-1070071779)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentNotSectorAligned;

/// @brief Field VolmgrExtentOverlapsEbrPartition value: I32(-1070071778)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentOverlapsEbrPartition;

/// @brief Field VolmgrExtentVolumeLengthsDoNotMatch value: I32(-1070071777)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrExtentVolumeLengthsDoNotMatch;

/// @brief Field VolmgrFaultTolerantNotSupported value: I32(-1070071776)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrFaultTolerantNotSupported;

/// @brief Field VolmgrIncompleteDiskMigration value: I32(-2143813630)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrIncompleteDiskMigration;

/// @brief Field VolmgrIncompleteRegeneration value: I32(-2143813631)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrIncompleteRegeneration;

/// @brief Field VolmgrInterleaveLengthInvalid value: I32(-1070071775)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrInterleaveLengthInvalid;

/// @brief Field VolmgrMaximumRegisteredUsers value: I32(-1070071774)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMaximumRegisteredUsers;

/// @brief Field VolmgrMemberInSync value: I32(-1070071773)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberInSync;

/// @brief Field VolmgrMemberIndexDuplicate value: I32(-1070071772)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberIndexDuplicate;

/// @brief Field VolmgrMemberIndexInvalid value: I32(-1070071771)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberIndexInvalid;

/// @brief Field VolmgrMemberMissing value: I32(-1070071770)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberMissing;

/// @brief Field VolmgrMemberNotDetached value: I32(-1070071769)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberNotDetached;

/// @brief Field VolmgrMemberRegenerating value: I32(-1070071768)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMemberRegenerating;

/// @brief Field VolmgrMirrorNotSupported value: I32(-1070071717)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrMirrorNotSupported;

/// @brief Field VolmgrNoRegisteredUsers value: I32(-1070071766)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNoRegisteredUsers;

/// @brief Field VolmgrNoSuchUser value: I32(-1070071765)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNoSuchUser;

/// @brief Field VolmgrNoValidLogCopies value: I32(-1070071720)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNoValidLogCopies;

/// @brief Field VolmgrNotPrimaryPack value: I32(-1070071726)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNotPrimaryPack;

/// @brief Field VolmgrNotificationReset value: I32(-1070071764)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNotificationReset;

/// @brief Field VolmgrNumberOfDisksInMemberInvalid value: I32(-1070071723)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfDisksInMemberInvalid;

/// @brief Field VolmgrNumberOfDisksInPlexInvalid value: I32(-1070071724)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfDisksInPlexInvalid;

/// @brief Field VolmgrNumberOfDisksInvalid value: I32(-1070071718)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfDisksInvalid;

/// @brief Field VolmgrNumberOfExtentsInvalid value: I32(-1070071731)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfExtentsInvalid;

/// @brief Field VolmgrNumberOfMembersInvalid value: I32(-1070071763)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfMembersInvalid;

/// @brief Field VolmgrNumberOfPlexesInvalid value: I32(-1070071762)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrNumberOfPlexesInvalid;

/// @brief Field VolmgrPackConfigOffline value: I32(-1070071728)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackConfigOffline;

/// @brief Field VolmgrPackConfigOnline value: I32(-1070071727)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackConfigOnline;

/// @brief Field VolmgrPackConfigUpdateFailed value: I32(-1070071804)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackConfigUpdateFailed;

/// @brief Field VolmgrPackDuplicate value: I32(-1070071761)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackDuplicate;

/// @brief Field VolmgrPackHasQuorum value: I32(-1070071756)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackHasQuorum;

/// @brief Field VolmgrPackIdInvalid value: I32(-1070071760)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackIdInvalid;

/// @brief Field VolmgrPackInvalid value: I32(-1070071759)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackInvalid;

/// @brief Field VolmgrPackLogUpdateFailed value: I32(-1070071725)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackLogUpdateFailed;

/// @brief Field VolmgrPackNameInvalid value: I32(-1070071758)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackNameInvalid;

/// @brief Field VolmgrPackOffline value: I32(-1070071757)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackOffline;

/// @brief Field VolmgrPackWithoutQuorum value: I32(-1070071755)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPackWithoutQuorum;

/// @brief Field VolmgrPartitionStyleInvalid value: I32(-1070071754)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPartitionStyleInvalid;

/// @brief Field VolmgrPartitionUpdateFailed value: I32(-1070071753)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPartitionUpdateFailed;

/// @brief Field VolmgrPlexInSync value: I32(-1070071752)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexInSync;

/// @brief Field VolmgrPlexIndexDuplicate value: I32(-1070071751)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexIndexDuplicate;

/// @brief Field VolmgrPlexIndexInvalid value: I32(-1070071750)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexIndexInvalid;

/// @brief Field VolmgrPlexLastActive value: I32(-1070071749)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexLastActive;

/// @brief Field VolmgrPlexMissing value: I32(-1070071748)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexMissing;

/// @brief Field VolmgrPlexNotRaid5 value: I32(-1070071745)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexNotRaid5;

/// @brief Field VolmgrPlexNotSimple value: I32(-1070071744)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexNotSimple;

/// @brief Field VolmgrPlexNotSimpleSpanned value: I32(-1070071721)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexNotSimpleSpanned;

/// @brief Field VolmgrPlexRegenerating value: I32(-1070071747)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexRegenerating;

/// @brief Field VolmgrPlexTypeInvalid value: I32(-1070071746)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPlexTypeInvalid;

/// @brief Field VolmgrPrimaryPackPresent value: I32(-1070071719)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrPrimaryPackPresent;

/// @brief Field VolmgrRaid5NotSupported value: I32(-1070071716)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrRaid5NotSupported;

/// @brief Field VolmgrStructureSizeInvalid value: I32(-1070071743)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrStructureSizeInvalid;

/// @brief Field VolmgrTooManyNotificationRequests value: I32(-1070071742)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrTooManyNotificationRequests;

/// @brief Field VolmgrTransactionInProgress value: I32(-1070071741)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrTransactionInProgress;

/// @brief Field VolmgrUnexpectedDiskLayoutChange value: I32(-1070071740)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrUnexpectedDiskLayoutChange;

/// @brief Field VolmgrVolumeContainsMissingDisk value: I32(-1070071739)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeContainsMissingDisk;

/// @brief Field VolmgrVolumeIdInvalid value: I32(-1070071738)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeIdInvalid;

/// @brief Field VolmgrVolumeLengthInvalid value: I32(-1070071737)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeLengthInvalid;

/// @brief Field VolmgrVolumeLengthNotSectorSizeMultiple value: I32(-1070071736)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeLengthNotSectorSizeMultiple;

/// @brief Field VolmgrVolumeMirrored value: I32(-1070071722)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeMirrored;

/// @brief Field VolmgrVolumeNotMirrored value: I32(-1070071735)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeNotMirrored;

/// @brief Field VolmgrVolumeNotRetained value: I32(-1070071734)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeNotRetained;

/// @brief Field VolmgrVolumeOffline value: I32(-1070071733)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeOffline;

/// @brief Field VolmgrVolumeRetained value: I32(-1070071732)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolmgrVolumeRetained;

/// @brief Field VolsnapBootfileNotValid value: I32(-2138963967)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolsnapBootfileNotValid;

/// @brief Field VolsnapHibernateReady value: I32(761)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolsnapHibernateReady;

/// @brief Field VolsnapPrepareHibernate value: I32(655)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolsnapPrepareHibernate;

/// @brief Field VolumeContainsSysFiles value: I32(4337)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolumeContainsSysFiles;

/// @brief Field VolumeDirty value: I32(6851)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolumeDirty;

/// @brief Field VolumeMounted value: I32(743)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolumeMounted;

/// @brief Field VolumeNotSisEnabled value: I32(4500)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolumeNotSisEnabled;

/// @brief Field VolumeNotSupportEfs value: I32(6014)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const VolumeNotSupportEfs;

/// @brief Field Wait1 value: I32(731)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wait1;

/// @brief Field Wait2 value: I32(732)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wait2;

/// @brief Field Wait3 value: I32(733)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wait3;

/// @brief Field Wait63 value: I32(734)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wait63;

/// @brief Field WaitForOplock value: I32(765)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WaitForOplock;

/// @brief Field WaitNoChildren value: I32(128)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WaitNoChildren;

/// @brief Field WakeSystem value: I32(730)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WakeSystem;

/// @brief Field WakeSystemDebugger value: I32(675)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WakeSystemDebugger;

/// @brief Field WasLocked value: I32(717)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WasLocked;

/// @brief Field WasUnlocked value: I32(715)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WasUnlocked;

/// @brief Field WindowNotCombobox value: I32(1423)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WindowNotCombobox;

/// @brief Field WindowNotDialog value: I32(1420)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WindowNotDialog;

/// @brief Field WindowOfOtherThread value: I32(1408)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WindowOfOtherThread;

/// @brief Field WinsInternal value: I32(4000)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WinsInternal;

/// @brief Field WmiAlreadyDisabled value: I32(4212)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiAlreadyDisabled;

/// @brief Field WmiAlreadyEnabled value: I32(4206)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiAlreadyEnabled;

/// @brief Field WmiDpFailed value: I32(4209)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiDpFailed;

/// @brief Field WmiDpNotFound value: I32(4204)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiDpNotFound;

/// @brief Field WmiGuidDisconnected value: I32(4207)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiGuidDisconnected;

/// @brief Field WmiGuidNotFound value: I32(4200)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiGuidNotFound;

/// @brief Field WmiInstanceNotFound value: I32(4201)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiInstanceNotFound;

/// @brief Field WmiInvalidMof value: I32(4210)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiInvalidMof;

/// @brief Field WmiInvalidReginfo value: I32(4211)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiInvalidReginfo;

/// @brief Field WmiItemidNotFound value: I32(4202)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiItemidNotFound;

/// @brief Field WmiReadOnly value: I32(4213)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiReadOnly;

/// @brief Field WmiServerUnavailable value: I32(4208)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiServerUnavailable;

/// @brief Field WmiSetFailure value: I32(4214)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiSetFailure;

/// @brief Field WmiTryAgain value: I32(4203)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiTryAgain;

/// @brief Field WmiUnresolvedInstanceRef value: I32(4205)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WmiUnresolvedInstanceRef;

/// @brief Field WorkingSetQuota value: I32(1453)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WorkingSetQuota;

/// @brief Field WowAssertion value: I32(670)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WowAssertion;

/// @brief Field WriteFault value: I32(29)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WriteFault;

/// @brief Field WriteProtect value: I32(19)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WriteProtect;

/// @brief Field WrongCompartment value: I32(1468)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WrongCompartment;

/// @brief Field WrongDisk value: I32(34)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WrongDisk;

/// @brief Field WrongEfs value: I32(6005)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WrongEfs;

/// @brief Field WrongPassword value: I32(1323)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WrongPassword;

/// @brief Field WrongTargetName value: I32(1396)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const WrongTargetName;

/// @brief Field Wx86Error value: I32(540)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wx86Error;

/// @brief Field Wx86Warning value: I32(539)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const Wx86Warning;

/// @brief Field XmlEncodingMismatch value: I32(14100)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const XmlEncodingMismatch;

/// @brief Field XmlParseError value: I32(1465)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const XmlParseError;

/// @brief Field XmldsigError value: I32(1466)
static ::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM const XmldsigError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::wNofxGYQJONbgxWwDDeHvqBVcBYM) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
