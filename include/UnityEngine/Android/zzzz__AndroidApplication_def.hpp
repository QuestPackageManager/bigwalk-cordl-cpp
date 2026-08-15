#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidApplication.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidApplication)
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Android {
class AndroidConfiguration;
}
namespace UnityEngine::Android {
class AndroidInsets;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidApplication;
}
// Write type traits
MARK_REF_T(::UnityEngine::Android::AndroidApplication*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Android::AndroidApplication*, "UnityEngine.Android", "AndroidApplication");
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidApplication
class CORDL_TYPE AndroidApplication : public ::System::Object {
public:
// Declarations
/// @brief Field m_CurrentAndroidInsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CurrentAndroidInsets, put=setStaticF_m_CurrentAndroidInsets)) ::UnityEngine::Android::AndroidInsets*  m_CurrentAndroidInsets;

/// @brief Field m_CurrentConfiguration, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CurrentConfiguration, put=setStaticF_m_CurrentConfiguration)) ::UnityEngine::Android::AndroidConfiguration*  m_CurrentConfiguration;

/// @brief Field m_MainThreadSynchronizationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_MainThreadSynchronizationContext, put=setStaticF_m_MainThreadSynchronizationContext)) ::System::Threading::SynchronizationContext*  m_MainThreadSynchronizationContext;

/// @brief Field onConfigurationChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onConfigurationChanged, put=setStaticF_onConfigurationChanged)) ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*  onConfigurationChanged;

/// @brief Field onInsetsChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onInsetsChanged, put=setStaticF_onInsetsChanged)) ::System::Action_1<::UnityEngine::Android::AndroidInsets*>*  onInsetsChanged;

/// @brief Method AcquireMainThreadSynchronizationContext, addr 0x1822249f0, size 0x60, virtual false, abstract: false, final false
static inline void AcquireMainThreadSynchronizationContext() ;

/// @brief Method DispatchConfigurationChanged, addr 0x182224a50, size 0x30, virtual false, abstract: false, final false
static inline void DispatchConfigurationChanged(bool  notifySubscribers) ;

/// @brief Method DispatchInsetsChanged, addr 0x182224a80, size 0x30, virtual false, abstract: false, final false
static inline void DispatchInsetsChanged() ;

/// @brief Method GetCurrentConfiguration, addr 0x182224ab0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Android::AndroidConfiguration* GetCurrentConfiguration() ;

/// @brief Method GetCurrentInsets, addr 0x182224ad0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Android::AndroidInsets* GetCurrentInsets() ;

/// @brief Method SetCurrentConfiguration, addr 0x182224af0, size 0x30, virtual false, abstract: false, final false
static inline void SetCurrentConfiguration(::UnityEngine::Android::AndroidConfiguration*  config) ;

/// @brief Method SetCurrentInsets, addr 0x182224b20, size 0x30, virtual false, abstract: false, final false
static inline void SetCurrentInsets(::UnityEngine::Android::AndroidInsets*  insets) ;

static inline ::UnityEngine::Android::AndroidInsets* getStaticF_m_CurrentAndroidInsets() ;

static inline ::UnityEngine::Android::AndroidConfiguration* getStaticF_m_CurrentConfiguration() ;

static inline ::System::Threading::SynchronizationContext* getStaticF_m_MainThreadSynchronizationContext() ;

static inline ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* getStaticF_onConfigurationChanged() ;

static inline ::System::Action_1<::UnityEngine::Android::AndroidInsets*>* getStaticF_onInsetsChanged() ;

/// @brief Method get_UnityPlayerRaw, addr 0x182224b50, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_UnityPlayerRaw() ;

static inline void setStaticF_m_CurrentAndroidInsets(::UnityEngine::Android::AndroidInsets*  value) ;

static inline void setStaticF_m_CurrentConfiguration(::UnityEngine::Android::AndroidConfiguration*  value) ;

static inline void setStaticF_m_MainThreadSynchronizationContext(::System::Threading::SynchronizationContext*  value) ;

static inline void setStaticF_onConfigurationChanged(::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*  value) ;

static inline void setStaticF_onInsetsChanged(::System::Action_1<::UnityEngine::Android::AndroidInsets*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidApplication() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidApplication(AndroidApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidApplication(AndroidApplication const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Android::AndroidApplication) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Android
