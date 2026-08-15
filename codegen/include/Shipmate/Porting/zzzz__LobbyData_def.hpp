#pragma once
// IWYU pragma private; include "Shipmate/Porting/LobbyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyData)
// Forward declare root types
namespace Shipmate::Porting {
class LobbyData;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::LobbyData*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::LobbyData*, "Shipmate.Porting", "LobbyData");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.LobbyData
class CORDL_TYPE LobbyData : public ::System::Object {
public:
// Declarations
/// @brief Field roomName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomName, put=__cordl_internal_set_roomName)) ::StringW  roomName;

/// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Deserialize(::ArrayW<uint8_t>  aSerializedData) ;

static inline ::Shipmate::Porting::LobbyData* New_ctor() ;

/// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Serialize() ;

constexpr ::StringW const& __cordl_internal_get_roomName() const;

constexpr ::StringW& __cordl_internal_get_roomName() ;

constexpr void __cordl_internal_set_roomName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyData(LobbyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyData(LobbyData const& ) = delete;

/// @brief Field FULL_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  FULL_DATA{u"fd"};

/// @brief Field ROOM_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_NAME{u"rn"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20644};

/// @brief Field roomName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___roomName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::LobbyData, ___roomName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::LobbyData) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
