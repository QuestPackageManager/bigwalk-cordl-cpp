#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/OnQueryLeaderboardRanksCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryLeaderboardRanksCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::Leaderboards {
struct OnQueryLeaderboardRanksCompleteCallbackInfoInternal;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardRanksCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardRanksCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation*, "Epic.OnlineServices.Leaderboards", "OnQueryLeaderboardRanksCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Leaderboards {
// Is value type: false
// CS Name: Epic.OnlineServices.Leaderboards.OnQueryLeaderboardRanksCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryLeaderboardRanksCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051ac20, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051ac80, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryLeaderboardRanksCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryLeaderboardRanksCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryLeaderboardRanksCompleteCallbackInternalImplementation(OnQueryLeaderboardRanksCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryLeaderboardRanksCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryLeaderboardRanksCompleteCallbackInternalImplementation(OnQueryLeaderboardRanksCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
