#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnQueryNATTypeCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryNATTypeCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::P2P {
class OnQueryNATTypeCompleteCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
struct OnQueryNATTypeCompleteInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
class OnQueryNATTypeCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation*, "Epic.OnlineServices.P2P", "OnQueryNATTypeCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::P2P {
// Is value type: false
// CS Name: Epic.OnlineServices.P2P.OnQueryNATTypeCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryNATTypeCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180530b80, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteInfoInternal>  data) ;

static inline ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180530be0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryNATTypeCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryNATTypeCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryNATTypeCompleteCallbackInternalImplementation(OnQueryNATTypeCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryNATTypeCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryNATTypeCompleteCallbackInternalImplementation(OnQueryNATTypeCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9581};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
