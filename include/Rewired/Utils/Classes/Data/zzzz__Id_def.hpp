#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Id.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Id)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct Id;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::Id);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::Id, "Rewired.Utils.Classes.Data", "Id");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.Id
struct CORDL_TYPE Id {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Id>"
constexpr operator  ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Id>*() ;

/// @brief Convert operator to "::System::IEquatable_1<uint32_t>"
constexpr operator  ::System::IEquatable_1<uint32_t>*() ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Rewired::Utils::Classes::Data::Id  other) ;

/// @brief Method Equals, addr 0x181953a30, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(uint32_t  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Increment, addr 0x181953ae0, size 0x20, virtual false, abstract: false, final false
inline void Increment() ;

/// @brief Method IsValid, addr 0x181953b00, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid(::Rewired::Utils::Classes::Data::Id  id) ;

/// @brief Method IsValid, addr 0x181953b00, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid(uint32_t  id) ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Id>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Id>* i___System__IEquatable_1___Rewired__Utils__Classes__Data__Id_() ;

/// @brief Convert to "::System::IEquatable_1<uint32_t>"
constexpr ::System::IEquatable_1<uint32_t>* i___System__IEquatable_1_uint32_t_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::Utils::Classes::Data::Id  a, ::Rewired::Utils::Classes::Data::Id  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Id op_Implicit___Rewired__Utils__Classes__Data__Id(uint32_t  a) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Implicit_uint32_t(::Rewired::Utils::Classes::Data::Id  a) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::Utils::Classes::Data::Id  a, ::Rewired::Utils::Classes::Data::Id  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Id() ;

// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Id(uint32_t  id) noexcept;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr uint32_t  Default{static_cast<uint32_t>(0x0u)};

/// @brief Field First offset 0xffffffff size 0x4
static constexpr uint32_t  First{static_cast<uint32_t>(0x1u)};

/// @brief Field Invalid offset 0xffffffff size 0x4
static constexpr uint32_t  Invalid{static_cast<uint32_t>(0xffffffffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 uint32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::Id, id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::Id) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
