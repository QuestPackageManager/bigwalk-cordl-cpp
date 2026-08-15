#pragma once
// IWYU pragma private; include "UnityEngine/UnityConsent/EndUserConsent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EndUserConsent)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UnityConsent {
struct ConsentState;
}
// Forward declare root types
namespace UnityEngine::UnityConsent {
class EndUserConsent;
}
// Write type traits
MARK_REF_T(::UnityEngine::UnityConsent::EndUserConsent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UnityConsent::EndUserConsent*, "UnityEngine.UnityConsent", "EndUserConsent");
// Dependencies System.Object
namespace UnityEngine::UnityConsent {
// Is value type: false
// CS Name: UnityEngine.UnityConsent.EndUserConsent
class CORDL_TYPE EndUserConsent : public ::System::Object {
public:
// Declarations
/// @brief Field consentStateChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_consentStateChanged, put=setStaticF_consentStateChanged)) ::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*  consentStateChanged;

/// @brief Method GetConsentState, addr 0x182548fc0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::UnityConsent::ConsentState GetConsentState() ;

/// @brief Method GetConsentState_Injected, addr 0x182548fb0, size 0x10, virtual false, abstract: false, final false
static inline void GetConsentState_Injected(::by_ref<::UnityEngine::UnityConsent::ConsentState>  ret) ;

/// @brief Method OnConsentStateChanged, addr 0x182548ff0, size 0x60, virtual false, abstract: false, final false
static inline void OnConsentStateChanged() ;

static inline ::System::Action_1<::UnityEngine::UnityConsent::ConsentState>* getStaticF_consentStateChanged() ;

static inline void setStaticF_consentStateChanged(::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndUserConsent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndUserConsent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EndUserConsent(EndUserConsent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndUserConsent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndUserConsent(EndUserConsent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21650};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UnityConsent::EndUserConsent) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UnityConsent
