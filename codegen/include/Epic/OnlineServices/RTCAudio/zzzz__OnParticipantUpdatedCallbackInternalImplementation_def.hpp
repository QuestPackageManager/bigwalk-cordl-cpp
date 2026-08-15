#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnParticipantUpdatedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnParticipantUpdatedCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
class OnParticipantUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct ParticipantUpdatedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnParticipantUpdatedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnParticipantUpdatedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnParticipantUpdatedCallbackInternalImplementation
class CORDL_TYPE OnParticipantUpdatedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e9600, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::ParticipantUpdatedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e9670, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnParticipantUpdatedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnParticipantUpdatedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnParticipantUpdatedCallbackInternalImplementation(OnParticipantUpdatedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnParticipantUpdatedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnParticipantUpdatedCallbackInternalImplementation(OnParticipantUpdatedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
