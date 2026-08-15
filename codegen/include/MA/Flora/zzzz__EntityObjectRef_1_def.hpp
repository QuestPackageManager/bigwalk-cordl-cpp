#pragma once
// IWYU pragma private; include "MA/Flora/EntityObjectRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityObjectRef_1)
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
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::EntityObjectRef_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::EntityObjectRef_1, "MA.Flora", "EntityObjectRef`1");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.EntityObjectRef`1<T>
struct CORDL_TYPE EntityObjectRef_1 {
public:
// Declarations
 __declspec(property(get=get_Object, put=set_Object)) T  Object;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>"
constexpr operator  ::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>*() ;

/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::EntityObjectRef_1<T>  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::EntityObjectRef_1<T>  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToFixedString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString64Bytes ToFixedString() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::EntityId  value) ;

/// @brief Method get_None, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::EntityObjectRef_1<T> get_None() ;

/// @brief Method get_Object, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Object() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>"
constexpr ::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>* i___System__IComparable_1___MA__Flora__EntityObjectRef_1_T__() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>"
constexpr ::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>* i___System__IEquatable_1___MA__Flora__EntityObjectRef_1_T__() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::EntityObjectRef_1<T>  left, ::MA::Flora::EntityObjectRef_1<T>  right) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::MA::Flora::EntityObjectRef_1<T>  obj) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::MA::Flora::EntityObjectRef_1<T> op_Implicit___MA__Flora__EntityObjectRef_1_T_(T  instance) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::EntityId op_Implicit___UnityEngine__EntityId(::MA::Flora::EntityObjectRef_1<T>  obj) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::EntityObjectRef_1<T>  left, ::MA::Flora::EntityObjectRef_1<T>  right) ;

/// @brief Method set_Object, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Object(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EntityObjectRef_1() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }]
constexpr EntityObjectRef_1(::UnityEngine::EntityId  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
