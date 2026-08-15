#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/OnIngestStatCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnIngestStatCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::Stats {
struct IngestStatCompleteCallbackInfoInternal;
}
namespace Epic::OnlineServices::Stats {
class OnIngestStatCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
class OnIngestStatCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternalImplementation*, "Epic.OnlineServices.Stats", "OnIngestStatCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Stats {
// Is value type: false
// CS Name: Epic.OnlineServices.Stats.OnIngestStatCompleteCallbackInternalImplementation
class CORDL_TYPE OnIngestStatCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dd1c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Stats::IngestStatCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dd220, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnIngestStatCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnIngestStatCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnIngestStatCompleteCallbackInternalImplementation(OnIngestStatCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnIngestStatCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnIngestStatCompleteCallbackInternalImplementation(OnIngestStatCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Stats::OnIngestStatCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
