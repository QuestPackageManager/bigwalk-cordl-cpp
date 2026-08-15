#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformUsers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformUsers)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting {
struct AuthTypes;
}
namespace Shipmate::Porting {
class BaseAuthValues;
}
namespace Shipmate::Porting {
struct EUserFetchingType;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformUsers;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformUsers*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformUsers*, "Shipmate.Porting.Mocked", "MockedPlatformUsers");
// Dependencies Shipmate.Porting.AbstractPlatformUsers
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformUsers
class CORDL_TYPE MockedPlatformUsers : public ::Shipmate::Porting::AbstractPlatformUsers {
public:
// Declarations
 __declspec(property(get=get_HasUser)) bool  HasUser;

 __declspec(property(get=get_LocalPlatformType)) ::Shipmate::Porting::AuthTypes  LocalPlatformType;

 __declspec(property(get=get_MainUserName)) ::StringW  MainUserName;

 __declspec(property(get=get_UserId)) uint64_t  UserId;

/// @brief Method CleanupAuth, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void CleanupAuth() ;

/// @brief Method FetchMainUser, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask FetchMainUser(::Shipmate::Porting::EUserFetchingType  aRequestAccountPicker) ;

/// @brief Method GetAuth, addr 0x181ac9910, size 0x60, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> GetAuth(bool  aRequireOnlineAccount, ::System::Threading::CancellationToken  cancellationToken, bool  skipUpsell) ;

static inline ::Shipmate::Porting::Mocked::MockedPlatformUsers* New_ctor() ;

/// @brief Method RevokeMainUser, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void RevokeMainUser() ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasUser, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_HasUser() ;

/// @brief Method get_LocalPlatformType, addr 0x180393450, size 0x10, virtual true, abstract: false, final false
inline ::Shipmate::Porting::AuthTypes get_LocalPlatformType() ;

/// @brief Method get_MainUserName, addr 0x181ac9970, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_MainUserName() ;

/// @brief Method get_UserId, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline uint64_t get_UserId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformUsers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformUsers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformUsers(MockedPlatformUsers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformUsers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformUsers(MockedPlatformUsers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformUsers) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
