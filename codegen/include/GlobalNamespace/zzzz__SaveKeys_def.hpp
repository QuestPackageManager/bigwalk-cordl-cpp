#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveKeys.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SaveKeys)
// Forward declare root types
namespace GlobalNamespace {
class SaveKeys;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SaveKeys*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveKeys*, "", "SaveKeys");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaveKeys
class CORDL_TYPE SaveKeys : public ::System::Object {
public:
// Declarations
/// @brief Field keyLookIdHead, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyLookIdHead, put=setStaticF_keyLookIdHead)) ::StringW  keyLookIdHead;

/// @brief Field keyLookIdLegs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyLookIdLegs, put=setStaticF_keyLookIdLegs)) ::StringW  keyLookIdLegs;

/// @brief Field keyLookIdTorso, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyLookIdTorso, put=setStaticF_keyLookIdTorso)) ::StringW  keyLookIdTorso;

/// @brief Field keyNetworkAddress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyNetworkAddress, put=setStaticF_keyNetworkAddress)) ::StringW  keyNetworkAddress;

/// @brief Field keyWalkingProven, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyWalkingProven, put=setStaticF_keyWalkingProven)) ::StringW  keyWalkingProven;

/// @brief Field slotName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_slotName, put=setStaticF_slotName)) ::StringW  slotName;

static inline ::GlobalNamespace::SaveKeys* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_keyLookIdHead() ;

static inline ::StringW getStaticF_keyLookIdLegs() ;

static inline ::StringW getStaticF_keyLookIdTorso() ;

static inline ::StringW getStaticF_keyNetworkAddress() ;

static inline ::StringW getStaticF_keyWalkingProven() ;

static inline ::StringW getStaticF_slotName() ;

static inline void setStaticF_keyLookIdHead(::StringW  value) ;

static inline void setStaticF_keyLookIdLegs(::StringW  value) ;

static inline void setStaticF_keyLookIdTorso(::StringW  value) ;

static inline void setStaticF_keyNetworkAddress(::StringW  value) ;

static inline void setStaticF_keyWalkingProven(::StringW  value) ;

static inline void setStaticF_slotName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveKeys() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveKeys", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveKeys(SaveKeys && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveKeys", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveKeys(SaveKeys const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SaveKeys) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
