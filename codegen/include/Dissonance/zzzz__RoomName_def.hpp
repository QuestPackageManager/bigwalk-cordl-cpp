#pragma once
// IWYU pragma private; include "Dissonance/RoomName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoomName)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Dissonance {
struct RoomName;
}
// Write type traits
MARK_VAL_T(::Dissonance::RoomName);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomName, "Dissonance", "RoomName");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.RoomName
struct CORDL_TYPE RoomName {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_SuppressDuplicateCheck, put=set_SuppressDuplicateCheck)) bool  SuppressDuplicateCheck;

/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::RoomName>"
constexpr operator  ::System::IEquatable_1<::Dissonance::RoomName>*() ;

/// @brief Method Equals, addr 0x1805cfd00, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::RoomName  other) ;

/// @brief Method .ctor, addr 0x1805cfd40, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x1805cfd80, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  suppress) ;

/// @brief Method get_Name, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_SuppressDuplicateCheck, addr 0x1803bd9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_SuppressDuplicateCheck() ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::RoomName>"
constexpr ::System::IEquatable_1<::Dissonance::RoomName>* i___System__IEquatable_1___Dissonance__RoomName_() ;

/// @brief Method op_Implicit, addr 0x1805cfdd0, size 0xc0, virtual false, abstract: false, final false
static inline ::Dissonance::RoomName op_Implicit___Dissonance__RoomName(::StringW  name) ;

/// @brief Method op_Implicit, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Dissonance::RoomName  name) ;

/// @brief Method set_Name, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_SuppressDuplicateCheck, addr 0x1803bda20, size 0x10, virtual false, abstract: false, final false
inline void set_SuppressDuplicateCheck(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomName() ;

// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_SuppressDuplicateCheck_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr RoomName(::StringW  _Name_k__BackingField, bool  _SuppressDuplicateCheck_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Name_k__BackingField;

/// @brief Field <SuppressDuplicateCheck>k__BackingField, offset: 0x8, size: 0x1, def value: None
 bool  _SuppressDuplicateCheck_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::RoomName, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomName, _SuppressDuplicateCheck_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::RoomName) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
