#pragma once
// IWYU pragma private; include "Telepathy/Pool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pool_1)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Telepathy {
template<typename T>
class Pool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Telepathy::Pool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Telepathy::Pool_1, "Telepathy", "Pool`1");
// Dependencies System.Object
namespace Telepathy {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Telepathy.Pool`1<T>
class CORDL_TYPE Pool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field objectGenerator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectGenerator, put=__cordl_internal_set_objectGenerator)) ::System::Func_1<T>*  objectGenerator;

/// @brief Field objects, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::Stack_1<T>*  objects;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Count() ;

static inline ::Telepathy::Pool_1<T>* New_ctor(::System::Func_1<T>*  objectGenerator) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return(T  item) ;

/// @brief Method Take, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Take() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_objectGenerator() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_objectGenerator() ;

constexpr ::System::Collections::Generic::Stack_1<T>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_objects() ;

constexpr void __cordl_internal_set_objectGenerator(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::Stack_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  objectGenerator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pool_1(Pool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pool_1(Pool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21326};

/// @brief Field objects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<T>*  ___objects;

/// @brief Field objectGenerator, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ___objectGenerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Telepathy
