#pragma once
// IWYU pragma private; include "UnityEngine/Application.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct ApplicationMemoryUsageChange;
}
namespace UnityEngine {
struct ApplicationMemoryUsage;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
struct ThreadPriority;
}
// Forward declare root types
namespace UnityEngine {
class Application;
}
namespace UnityEngine {
class Application_LogCallback;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Application_MemoryUsageChangedCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Application*);
MARK_REF_T(::UnityEngine::Application_LogCallback*);
MARK_REF_T(::UnityEngine::Application_LowMemoryCallback*);
MARK_REF_T(::UnityEngine::Application_MemoryUsageChangedCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Application*, "UnityEngine", "Application");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_LogCallback*, "UnityEngine", "Application/LogCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_LowMemoryCallback*, "UnityEngine", "Application/LowMemoryCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Application_MemoryUsageChangedCallback*, "UnityEngine", "Application/MemoryUsageChangedCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LowMemoryCallback
class CORDL_TYPE Application_LowMemoryCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Application_LowMemoryCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_LowMemoryCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_LowMemoryCallback(Application_LowMemoryCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_LowMemoryCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_LowMemoryCallback(Application_LowMemoryCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_LowMemoryCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/MemoryUsageChangedCallback
class CORDL_TYPE Application_MemoryUsageChangedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::UnityEngine::ApplicationMemoryUsageChange>  usage) ;

static inline ::UnityEngine::Application_MemoryUsageChangedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_MemoryUsageChangedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_MemoryUsageChangedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_MemoryUsageChangedCallback(Application_MemoryUsageChangedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_MemoryUsageChangedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application/LogCallback
class CORDL_TYPE Application_LogCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

static inline ::UnityEngine::Application_LogCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x182248220, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application_LogCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Application_LogCallback(Application_LogCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application_LogCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application_LogCallback(Application_LogCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application_LogCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Application
class CORDL_TYPE Application : public ::System::Object {
public:
// Declarations
using LogCallback = ::UnityEngine::Application_LogCallback;

using LowMemoryCallback = ::UnityEngine::Application_LowMemoryCallback;

using MemoryUsageChangedCallback = ::UnityEngine::Application_MemoryUsageChangedCallback;

/// @brief Field deepLinkActivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deepLinkActivated, put=setStaticF_deepLinkActivated)) ::System::Action_1<::StringW>*  deepLinkActivated;

/// @brief Field focusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_focusChanged, put=setStaticF_focusChanged)) ::System::Action_1<bool>*  focusChanged;

/// @brief Field lowMemory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lowMemory, put=setStaticF_lowMemory)) ::UnityEngine::Application_LowMemoryCallback*  lowMemory;

/// @brief Field memoryUsageChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memoryUsageChanged, put=setStaticF_memoryUsageChanged)) ::UnityEngine::Application_MemoryUsageChangedCallback*  memoryUsageChanged;

/// @brief Field quitting, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_quitting, put=setStaticF_quitting)) ::System::Action*  quitting;

/// @brief Field s_LogCallbackHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LogCallbackHandler, put=setStaticF_s_LogCallbackHandler)) ::UnityEngine::Application_LogCallback*  s_LogCallbackHandler;

/// @brief Field s_LogCallbackHandlerThreaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LogCallbackHandlerThreaded, put=setStaticF_s_LogCallbackHandlerThreaded)) ::UnityEngine::Application_LogCallback*  s_LogCallbackHandlerThreaded;

/// @brief Field s_currentCancellationTokenSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_currentCancellationTokenSource, put=setStaticF_s_currentCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  s_currentCancellationTokenSource;

/// @brief Field unloading, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unloading, put=setStaticF_unloading)) ::System::Action*  unloading;

/// @brief Field wantsToQuit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wantsToQuit, put=setStaticF_wantsToQuit)) ::System::Func_1<bool>*  wantsToQuit;

/// @brief Method CallLogCallback, addr 0x18223e2d0, size 0xc0, virtual false, abstract: false, final false
static inline void CallLogCallback(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type, bool  invokedOnMainThread) ;

/// @brief Method CallLowMemory, addr 0x18223e390, size 0xd0, virtual false, abstract: false, final false
static inline void CallLowMemory(::UnityEngine::ApplicationMemoryUsage  usage) ;

/// @brief Method HasLogCallback, addr 0x18223e460, size 0x50, virtual false, abstract: false, final false
static inline bool HasLogCallback() ;

/// @brief Method Internal_ApplicationQuit, addr 0x18223e4b0, size 0x50, virtual false, abstract: false, final false
static inline void Internal_ApplicationQuit() ;

/// @brief Method Internal_ApplicationUnload, addr 0x18223e500, size 0x50, virtual false, abstract: false, final false
static inline void Internal_ApplicationUnload() ;

/// @brief Method Internal_ApplicationWantsToQuit, addr 0x18223e550, size 0x120, virtual false, abstract: false, final false
static inline bool Internal_ApplicationWantsToQuit() ;

/// @brief Method Internal_InitializeExitCancellationToken, addr 0x18223e670, size 0xa0, virtual false, abstract: false, final false
static inline void Internal_InitializeExitCancellationToken() ;

/// @brief Method Internal_RaiseExitCancellationToken, addr 0x18223e710, size 0x50, virtual false, abstract: false, final false
static inline void Internal_RaiseExitCancellationToken() ;

/// @brief Method InvokeDeepLinkActivated, addr 0x18223e760, size 0x60, virtual false, abstract: false, final false
static inline void InvokeDeepLinkActivated(::StringW  url) ;

/// @brief Method InvokeFocusChanged, addr 0x18223e7c0, size 0x60, virtual false, abstract: false, final false
static inline void InvokeFocusChanged(bool  focus) ;

/// @brief Method InvokeOnBeforeRender, addr 0x18223e820, size 0x10, virtual false, abstract: false, final false
static inline void InvokeOnBeforeRender() ;

/// @brief Method OpenURL, addr 0x18223e840, size 0xf0, virtual false, abstract: false, final false
static inline void OpenURL(::StringW  url) ;

/// @brief Method OpenURL_Injected, addr 0x18223e830, size 0x10, virtual false, abstract: false, final false
static inline void OpenURL_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url) ;

/// @brief Method Quit, addr 0x18223e940, size 0x10, virtual false, abstract: false, final false
static inline void Quit() ;

/// @brief Method Quit, addr 0x18223e930, size 0x10, virtual false, abstract: false, final false
static inline void Quit(int32_t  exitCode) ;

/// @brief Method SetLogCallbackDefined, addr 0x18223e950, size 0x10, virtual false, abstract: false, final false
static inline void SetLogCallbackDefined(bool  defined) ;

/// @brief Method add_focusChanged, addr 0x18223e9c0, size 0xd0, virtual false, abstract: false, final false
static inline void add_focusChanged(::System::Action_1<bool>*  value) ;

/// @brief Method add_logMessageReceived, addr 0x18223eb70, size 0xe0, virtual false, abstract: false, final false
static inline void add_logMessageReceived(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method add_logMessageReceivedThreaded, addr 0x18223ea90, size 0xe0, virtual false, abstract: false, final false
static inline void add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method add_quitting, addr 0x18223ec50, size 0xb0, virtual false, abstract: false, final false
static inline void add_quitting(::System::Action*  value) ;

static inline ::System::Action_1<::StringW>* getStaticF_deepLinkActivated() ;

static inline ::System::Action_1<bool>* getStaticF_focusChanged() ;

static inline ::UnityEngine::Application_LowMemoryCallback* getStaticF_lowMemory() ;

static inline ::UnityEngine::Application_MemoryUsageChangedCallback* getStaticF_memoryUsageChanged() ;

static inline ::System::Action* getStaticF_quitting() ;

static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandler() ;

static inline ::UnityEngine::Application_LogCallback* getStaticF_s_LogCallbackHandlerThreaded() ;

static inline ::System::Threading::CancellationTokenSource* getStaticF_s_currentCancellationTokenSource() ;

static inline ::System::Action* getStaticF_unloading() ;

static inline ::System::Func_1<bool>* getStaticF_wantsToQuit() ;

/// @brief Method get_dataPath, addr 0x18223ed10, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_dataPath() ;

/// @brief Method get_dataPath_Injected, addr 0x18223ed00, size 0x10, virtual false, abstract: false, final false
static inline void get_dataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_exitCancellationToken, addr 0x18223eda0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken get_exitCancellationToken() ;

/// @brief Method get_isBatchMode, addr 0x18223ede0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isBatchMode() ;

/// @brief Method get_isEditor, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isEditor() ;

/// @brief Method get_isFocused, addr 0x18223edf0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isFocused() ;

/// @brief Method get_isMobilePlatform, addr 0x18223ee00, size 0x50, virtual false, abstract: false, final false
static inline bool get_isMobilePlatform() ;

/// @brief Method get_isPlaying, addr 0x18223ee50, size 0x10, virtual false, abstract: false, final false
static inline bool get_isPlaying() ;

/// @brief Method get_persistentDataPath, addr 0x18223ee70, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_persistentDataPath() ;

/// @brief Method get_persistentDataPath_Injected, addr 0x18223ee60, size 0x10, virtual false, abstract: false, final false
static inline void get_persistentDataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_platform, addr 0x18223ef00, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RuntimePlatform get_platform() ;

/// @brief Method get_productName, addr 0x18223ef20, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_productName() ;

/// @brief Method get_productName_Injected, addr 0x18223ef10, size 0x10, virtual false, abstract: false, final false
static inline void get_productName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_runInBackground, addr 0x18223efb0, size 0x10, virtual false, abstract: false, final false
static inline bool get_runInBackground() ;

/// @brief Method get_streamingAssetsPath, addr 0x18223efd0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_streamingAssetsPath() ;

/// @brief Method get_streamingAssetsPath_Injected, addr 0x18223efc0, size 0x10, virtual false, abstract: false, final false
static inline void get_streamingAssetsPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_systemLanguage, addr 0x18223f060, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::SystemLanguage get_systemLanguage() ;

/// @brief Method get_targetFrameRate, addr 0x18223f070, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_targetFrameRate() ;

/// @brief Method get_temporaryCachePath, addr 0x18223f090, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_temporaryCachePath() ;

/// @brief Method get_temporaryCachePath_Injected, addr 0x18223f080, size 0x10, virtual false, abstract: false, final false
static inline void get_temporaryCachePath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_unityVersion, addr 0x18223f150, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_unityVersion() ;

/// @brief Method get_unityVersionMaj, addr 0x18223f120, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_unityVersionMaj() ;

/// @brief Method get_unityVersionVer, addr 0x18223f130, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_unityVersionVer() ;

/// @brief Method get_unityVersion_Injected, addr 0x18223f140, size 0x10, virtual false, abstract: false, final false
static inline void get_unityVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_version, addr 0x18223f1f0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_version() ;

/// @brief Method get_version_Injected, addr 0x18223f1e0, size 0x10, virtual false, abstract: false, final false
static inline void get_version_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method remove_focusChanged, addr 0x18223f280, size 0xd0, virtual false, abstract: false, final false
static inline void remove_focusChanged(::System::Action_1<bool>*  value) ;

/// @brief Method remove_logMessageReceived, addr 0x18223f420, size 0xd0, virtual false, abstract: false, final false
static inline void remove_logMessageReceived(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method remove_logMessageReceivedThreaded, addr 0x18223f350, size 0xd0, virtual false, abstract: false, final false
static inline void remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value) ;

/// @brief Method remove_quitting, addr 0x18223f4f0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_quitting(::System::Action*  value) ;

static inline void setStaticF_deepLinkActivated(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_focusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value) ;

static inline void setStaticF_memoryUsageChanged(::UnityEngine::Application_MemoryUsageChangedCallback*  value) ;

static inline void setStaticF_quitting(::System::Action*  value) ;

static inline void setStaticF_s_LogCallbackHandler(::UnityEngine::Application_LogCallback*  value) ;

static inline void setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::Application_LogCallback*  value) ;

static inline void setStaticF_s_currentCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

static inline void setStaticF_unloading(::System::Action*  value) ;

static inline void setStaticF_wantsToQuit(::System::Func_1<bool>*  value) ;

/// @brief Method set_backgroundLoadingPriority, addr 0x18223f5a0, size 0x10, virtual false, abstract: false, final false
static inline void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority  value) ;

/// @brief Method set_runInBackground, addr 0x18223f5b0, size 0x10, virtual false, abstract: false, final false
static inline void set_runInBackground(bool  value) ;

/// @brief Method set_targetFrameRate, addr 0x18223f5c0, size 0x590, virtual false, abstract: false, final false
static inline void set_targetFrameRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Application() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Application(Application && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Application(Application const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Application) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
