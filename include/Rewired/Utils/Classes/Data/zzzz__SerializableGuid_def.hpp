#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/SerializableGuid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableGuid)
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct SerializableGuid;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::SerializableGuid);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::SerializableGuid, "Rewired.Utils.Classes.Data", "SerializableGuid");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.SerializableGuid
struct CORDL_TYPE SerializableGuid {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::Rewired::Utils::Classes::Data::SerializableGuid  Empty;

/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>"
constexpr operator  ::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>*() ;

/// @brief Method Equals, addr 0x181957ae0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1804a5a90, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Rewired::Utils::Classes::Data::SerializableGuid  other) ;

/// @brief Method GetBytes, addr 0x181957b50, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method GetHashCode, addr 0x181957bf0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToGuid, addr 0x181957c40, size 0x60, virtual false, abstract: false, final false
inline ::System::Guid ToGuid() ;

/// @brief Method ToString, addr 0x181957d10, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x181957d70, size 0x60, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0x181957ca0, size 0x70, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method .ctor, addr 0x181957dd0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::SerializableGuid getStaticF_Empty() ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>* i___System__IEquatable_1___Rewired__Utils__Classes__Data__SerializableGuid_() ;

/// @brief Method op_Equality, addr 0x1804a5a90, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::Utils::Classes::Data::SerializableGuid  a, ::Rewired::Utils::Classes::Data::SerializableGuid  b) ;

/// @brief Method op_Inequality, addr 0x181957e40, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::Utils::Classes::Data::SerializableGuid  a, ::Rewired::Utils::Classes::Data::SerializableGuid  b) ;

static inline void setStaticF_Empty(::Rewired::Utils::Classes::Data::SerializableGuid  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableGuid() ;

// Ctor Parameters [CppParam { name: "_a", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int64_t", modifiers: "", def_value: None }]
constexpr SerializableGuid(int64_t  _a, int64_t  _b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field length offset 0xffffffff size 0x4
static constexpr int32_t  length{static_cast<int32_t>(0x10)};

/// @brief Field _a, offset: 0x0, size: 0x8, def value: None
 int64_t  _a;

/// @brief Field _b, offset: 0x8, size: 0x8, def value: None
 int64_t  _b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializableGuid, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::SerializableGuid, _b) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::SerializableGuid) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
