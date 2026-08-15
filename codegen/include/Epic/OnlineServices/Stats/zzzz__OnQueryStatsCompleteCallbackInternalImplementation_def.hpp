#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/OnQueryStatsCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryStatsCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::Stats {
struct OnQueryStatsCompleteCallbackInfoInternal;
}
namespace Epic::OnlineServices::Stats {
class OnQueryStatsCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
class OnQueryStatsCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation*, "Epic.OnlineServices.Stats", "OnQueryStatsCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Stats {
// Is value type: false
// CS Name: Epic.OnlineServices.Stats.OnQueryStatsCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryStatsCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ddaf0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ddb50, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryStatsCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryStatsCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryStatsCompleteCallbackInternalImplementation(OnQueryStatsCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryStatsCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryStatsCompleteCallbackInternalImplementation(OnQueryStatsCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
