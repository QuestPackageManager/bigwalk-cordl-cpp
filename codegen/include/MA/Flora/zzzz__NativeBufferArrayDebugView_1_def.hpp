#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayDebugView_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NativeBufferArrayDebugView_1)
namespace MA::Flora {
template<typename T>
struct NativeBufferArray_1;
}
// Forward declare root types
namespace MA::Flora {
template<typename T>
class NativeBufferArrayDebugView_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::MA::Flora::NativeBufferArrayDebugView_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::MA::Flora::NativeBufferArrayDebugView_1, "MA.Flora", "NativeBufferArrayDebugView`1");
// Dependencies MA.Flora.NativeBufferArray`1<T>, System.Object
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: false
// CS Name: MA.Flora.NativeBufferArrayDebugView`1<T>
class CORDL_TYPE NativeBufferArrayDebugView_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Items)) ::ArrayW<::ArrayW<T>>  Items;

/// @brief Field m_BufferArray, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_BufferArray, put=__cordl_internal_set_m_BufferArray)) ::MA::Flora::NativeBufferArray_1<T>  m_BufferArray;

static inline ::MA::Flora::NativeBufferArrayDebugView_1<T>* New_ctor(::MA::Flora::NativeBufferArray_1<T>  source) ;

constexpr ::MA::Flora::NativeBufferArray_1<T> const& __cordl_internal_get_m_BufferArray() const;

constexpr ::MA::Flora::NativeBufferArray_1<T>& __cordl_internal_get_m_BufferArray() ;

constexpr void __cordl_internal_set_m_BufferArray(::MA::Flora::NativeBufferArray_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::NativeBufferArray_1<T>  source) ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<T>> get_Items() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferArrayDebugView_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeBufferArrayDebugView_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeBufferArrayDebugView_1(NativeBufferArrayDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeBufferArrayDebugView_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeBufferArrayDebugView_1(NativeBufferArrayDebugView_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12880};

/// @brief Field m_BufferArray, offset: 0x10, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<T>  ___m_BufferArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MA::Flora
