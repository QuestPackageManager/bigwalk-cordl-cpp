#pragma once
// IWYU pragma private; include "Steamworks/CSteamID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CSteamID)
namespace Steamworks {
struct AccountID_t;
}
namespace Steamworks {
struct EAccountType;
}
namespace Steamworks {
struct EUniverse;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct CSteamID;
}
// Write type traits
MARK_VAL_T(::Steamworks::CSteamID);
DEFINE_IL2CPP_CLASS(::Steamworks::CSteamID, "Steamworks", "CSteamID");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CSteamID
#pragma pack(push, 4)
struct CORDL_TYPE CSteamID {
public:
// Declarations
/// @brief Field LanModeGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LanModeGS, put=setStaticF_LanModeGS)) ::Steamworks::CSteamID  LanModeGS;

/// @brief Field Nil, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Nil, put=setStaticF_Nil)) ::Steamworks::CSteamID  Nil;

/// @brief Field NonSteamGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NonSteamGS, put=setStaticF_NonSteamGS)) ::Steamworks::CSteamID  NonSteamGS;

/// @brief Field NotInitYetGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NotInitYetGS, put=setStaticF_NotInitYetGS)) ::Steamworks::CSteamID  NotInitYetGS;

/// @brief Field OutofDateGS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OutofDateGS, put=setStaticF_OutofDateGS)) ::Steamworks::CSteamID  OutofDateGS;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr operator  ::System::IComparable_1<::Steamworks::CSteamID>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr operator  ::System::IEquatable_1<::Steamworks::CSteamID>*() ;

/// @brief Method BAnonAccount, addr 0x1805a8820, size 0x60, virtual false, abstract: false, final false
inline bool BAnonAccount() ;

/// @brief Method BAnonGameServerAccount, addr 0x1805a8880, size 0x40, virtual false, abstract: false, final false
inline bool BAnonGameServerAccount() ;

/// @brief Method BAnonUserAccount, addr 0x1805a88c0, size 0x40, virtual false, abstract: false, final false
inline bool BAnonUserAccount() ;

/// @brief Method BBlankAnonAccount, addr 0x1805a8900, size 0x80, virtual false, abstract: false, final false
inline bool BBlankAnonAccount() ;

/// @brief Method BChatAccount, addr 0x1805a8980, size 0x40, virtual false, abstract: false, final false
inline bool BChatAccount() ;

/// @brief Method BClanAccount, addr 0x1805a89c0, size 0x40, virtual false, abstract: false, final false
inline bool BClanAccount() ;

/// @brief Method BConsoleUserAccount, addr 0x1805a8a00, size 0x40, virtual false, abstract: false, final false
inline bool BConsoleUserAccount() ;

/// @brief Method BContentServerAccount, addr 0x1805a8a40, size 0x40, virtual false, abstract: false, final false
inline bool BContentServerAccount() ;

/// @brief Method BGameServerAccount, addr 0x1805a8a80, size 0x60, virtual false, abstract: false, final false
inline bool BGameServerAccount() ;

/// @brief Method BIndividualAccount, addr 0x1805a8ae0, size 0x60, virtual false, abstract: false, final false
inline bool BIndividualAccount() ;

/// @brief Method BPersistentGameServerAccount, addr 0x1805a8b40, size 0x40, virtual false, abstract: false, final false
inline bool BPersistentGameServerAccount() ;

/// @brief Method Clear, addr 0x18035d7d0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CompareTo, addr 0x1805a8470, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::CSteamID  other) ;

/// @brief Method CreateBlankAnonLogon, addr 0x1805a8b80, size 0x60, virtual false, abstract: false, final false
inline void CreateBlankAnonLogon(::Steamworks::EUniverse  eUniverse) ;

/// @brief Method CreateBlankAnonUserLogon, addr 0x1805a8be0, size 0x60, virtual false, abstract: false, final false
inline void CreateBlankAnonUserLogon(::Steamworks::EUniverse  eUniverse) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::CSteamID  other) ;

/// @brief Method Equals, addr 0x1805a8c40, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetAccountID, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Steamworks::AccountID_t GetAccountID() ;

/// @brief Method GetEAccountType, addr 0x1805a8cd0, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::EAccountType GetEAccountType() ;

/// @brief Method GetEUniverse, addr 0x1805a8cf0, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::EUniverse GetEUniverse() ;

/// @brief Method GetHashCode, addr 0x1805a8520, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnAccountInstance, addr 0x1805a8d10, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetUnAccountInstance() ;

/// @brief Method InstancedSet, addr 0x1805a8d30, size 0xb0, virtual false, abstract: false, final false
inline void InstancedSet(::Steamworks::AccountID_t  unAccountID, uint32_t  unInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method IsLobby, addr 0x1805a8de0, size 0x60, virtual false, abstract: false, final false
inline bool IsLobby() ;

/// @brief Method IsValid, addr 0x1805a8e40, size 0xc0, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method Set, addr 0x1805a8fb0, size 0xf0, virtual false, abstract: false, final false
inline void Set(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method SetAccountID, addr 0x1805a8f00, size 0x20, virtual false, abstract: false, final false
inline void SetAccountID(::Steamworks::AccountID_t  other) ;

/// @brief Method SetAccountInstance, addr 0x1805a8f20, size 0x30, virtual false, abstract: false, final false
inline void SetAccountInstance(uint32_t  other) ;

/// @brief Method SetEAccountType, addr 0x1805a8f50, size 0x30, virtual false, abstract: false, final false
inline void SetEAccountType(::Steamworks::EAccountType  other) ;

/// @brief Method SetEUniverse, addr 0x1805a8f80, size 0x30, virtual false, abstract: false, final false
inline void SetEUniverse(::Steamworks::EUniverse  other) ;

/// @brief Method ToString, addr 0x1805a8770, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  ulSteamID) ;

/// @brief Method .ctor, addr 0x1805a9260, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method .ctor, addr 0x1805a91e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::AccountID_t  unAccountID, uint32_t  unAccountInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType) ;

static inline ::Steamworks::CSteamID getStaticF_LanModeGS() ;

static inline ::Steamworks::CSteamID getStaticF_Nil() ;

static inline ::Steamworks::CSteamID getStaticF_NonSteamGS() ;

static inline ::Steamworks::CSteamID getStaticF_NotInitYetGS() ;

static inline ::Steamworks::CSteamID getStaticF_OutofDateGS() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr ::System::IComparable_1<::Steamworks::CSteamID>* i___System__IComparable_1___Steamworks__CSteamID_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr ::System::IEquatable_1<::Steamworks::CSteamID>* i___System__IEquatable_1___Steamworks__CSteamID_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID op_Explicit___Steamworks__CSteamID(uint64_t  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::Steamworks::CSteamID  that) ;

/// @brief Method op_Inequality, addr 0x1805a92e0, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y) ;

static inline void setStaticF_LanModeGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_Nil(::Steamworks::CSteamID  value) ;

static inline void setStaticF_NonSteamGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_NotInitYetGS(::Steamworks::CSteamID  value) ;

static inline void setStaticF_OutofDateGS(::Steamworks::CSteamID  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CSteamID() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr CSteamID(uint64_t  m_SteamID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_SteamID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::CSteamID, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CSteamID) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
