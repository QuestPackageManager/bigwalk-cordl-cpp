#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/BufferedData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedData_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility {
template<typename T>
class BufferedData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Utility::BufferedData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Utility::BufferedData_1, "WaveHarmonic.Crest.Utility", "BufferedData`1");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.BufferedData`1<T>
class CORDL_TYPE BufferedData_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) T  Current;

 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Field _Buffers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Buffers, put=__cordl_internal_set__Buffers)) ::ArrayW<T>  _Buffers;

/// @brief Field _CurrentFrameIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentFrameIndex, put=__cordl_internal_set__CurrentFrameIndex)) int32_t  _CurrentFrameIndex;

/// @brief Method Flip, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Flip() ;

static inline ::WaveHarmonic::Crest::Utility::BufferedData_1<T>* New_ctor(int32_t  size, ::System::Func_1<T>*  initialize) ;

/// @brief Method Previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Previous(int32_t  framesBack) ;

/// @brief Method RunLambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunLambda(::System::Action_1<T>*  lambda) ;

constexpr ::ArrayW<T> const& __cordl_internal_get__Buffers() const;

constexpr ::ArrayW<T>& __cordl_internal_get__Buffers() ;

constexpr int32_t const& __cordl_internal_get__CurrentFrameIndex() const;

constexpr int32_t& __cordl_internal_get__CurrentFrameIndex() ;

constexpr void __cordl_internal_set__Buffers(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__CurrentFrameIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::System::Func_1<T>*  initialize) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Current() ;

/// @brief Method get_Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Size() ;

/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedData_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedData_1(BufferedData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedData_1(BufferedData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20163};

/// @brief Field _Buffers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____Buffers;

/// @brief Field _CurrentFrameIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ____CurrentFrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Utility
