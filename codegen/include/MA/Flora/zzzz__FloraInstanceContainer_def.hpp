#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceContainer)
namespace MA::Flora {
struct AxisAlignedBox;
}
namespace MA::Flora {
class FloraAdditionalRendererSettings;
}
namespace MA::Flora {
class FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate;
}
namespace MA::Flora {
struct FloraInstanceContainer_Version;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
class FloraInstanceRenderer;
}
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace MA::Flora {
struct FloraLocalToWorld;
}
namespace MA::Flora {
class FloraSystem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceContainer_Version;
}
namespace MA::Flora {
class FloraInstanceContainer;
}
namespace MA::Flora {
class FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall;
}
namespace MA::Flora {
class FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceContainer_Version);
MARK_REF_T(::MA::Flora::FloraInstanceContainer*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*);
MARK_REF_T(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_Version, "MA.Flora", "FloraInstanceContainer/Version");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer*, "MA.Flora", "FloraInstanceContainer");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall*, "MA.Flora", "FloraInstanceContainer/CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate*, "MA.Flora", "FloraInstanceContainer/CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E4$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E4$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E5$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E5$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E6$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate*, "MA.Flora", "FloraInstanceContainer/TransformInstancesWithBurst_000007E6$PostfixBurstDelegate");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceContainer/Version
struct CORDL_TYPE FloraInstanceContainer_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraInstanceContainer_Version_Unwrapped
enum struct __FloraInstanceContainer_Version_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Initial = static_cast<int32_t>(0x1),
__E_GlobalDensity = static_cast<int32_t>(0x2),
__E_SerializeDataAsBytes = static_cast<int32_t>(0x3),
__E_RemoveCullingData = static_cast<int32_t>(0x4),
__E_GlobalInstanceData = static_cast<int32_t>(0x5),
__E_Latest = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraInstanceContainer_Version_Unwrapped () const noexcept {
return static_cast<__FloraInstanceContainer_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraInstanceContainer_Version(int32_t  value__) noexcept;

/// @brief Field GlobalDensity value: I32(2)
static ::MA::Flora::FloraInstanceContainer_Version const GlobalDensity;

/// @brief Field GlobalInstanceData value: I32(5)
static ::MA::Flora::FloraInstanceContainer_Version const GlobalInstanceData;

/// @brief Field Initial value: I32(1)
static ::MA::Flora::FloraInstanceContainer_Version const Initial;

/// @brief Field Latest value: I32(6)
static ::MA::Flora::FloraInstanceContainer_Version const Latest;

/// @brief Field None value: I32(0)
static ::MA::Flora::FloraInstanceContainer_Version const None;

/// @brief Field RemoveCullingData value: I32(4)
static ::MA::Flora::FloraInstanceContainer_Version const RemoveCullingData;

/// @brief Field SerializeDataAsBytes value: I32(3)
static ::MA::Flora::FloraInstanceContainer_Version const SerializeDataAsBytes;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceContainer_Version, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceContainer_Version) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E4$PostfixBurstDelegate
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814f48e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

static inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E4$BurstDirectCall
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814f4660, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814f4530, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814f4780, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E5$PostfixBurstDelegate
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814f4d20, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform) ;

static inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E5$BurstDirectCall
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814f4aa0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814f4970, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814f4bc0, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13278};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E6$PostfixBurstDelegate
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814f5160, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

static inline ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate(FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/TransformInstancesWithBurst_000007E6$BurstDirectCall
class CORDL_TYPE FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814f4ee0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814f4db0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814f5000, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall(FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate
class CORDL_TYPE FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814e3990, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB) ;

static inline ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814e3a20, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate(FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate(FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13281};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer/CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall
class CORDL_TYPE FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1814e3710, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1814e35e0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1814e3830, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall(FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall(FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraInstanceContainer::Version, MA.Flora.FloraInstanceHandle, MA.Flora.FloraInstanceTransform, Unity.Collections.NativeList`1<T>, UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraInstanceContainer
class CORDL_TYPE FloraInstanceContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall = ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$BurstDirectCall;

using CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate = ::MA::Flora::FloraInstanceContainer_CalculateCombinedBoundsWithBurst_000007E7$PostfixBurstDelegate;

using TransformInstancesWithBurst_000007E4$BurstDirectCall = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$BurstDirectCall;

using TransformInstancesWithBurst_000007E4$PostfixBurstDelegate = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E4$PostfixBurstDelegate;

using TransformInstancesWithBurst_000007E5$BurstDirectCall = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$BurstDirectCall;

using TransformInstancesWithBurst_000007E5$PostfixBurstDelegate = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E5$PostfixBurstDelegate;

using TransformInstancesWithBurst_000007E6$BurstDirectCall = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$BurstDirectCall;

using TransformInstancesWithBurst_000007E6$PostfixBurstDelegate = ::MA::Flora::FloraInstanceContainer_TransformInstancesWithBurst_000007E6$PostfixBurstDelegate;

using Version = ::MA::Flora::FloraInstanceContainer_Version;

 __declspec(property(get=get_InstanceCount)) int32_t  InstanceCount;

 __declspec(property(get=get_InstanceHandles)) ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

 __declspec(property(get=get_LocalTransforms)) ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  LocalTransforms;

 __declspec(property(get=get_Prefab, put=set_Prefab)) ::UnityW<::UnityEngine::GameObject>  Prefab;

/// @brief Field m_InstanceHandles, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceHandles, put=__cordl_internal_set_m_InstanceHandles)) ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  m_InstanceHandles;

/// @brief Field m_LinkedObjects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LinkedObjects, put=__cordl_internal_set_m_LinkedObjects)) ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  m_LinkedObjects;

/// @brief Field m_LocalTransforms, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalTransforms, put=__cordl_internal_set_m_LocalTransforms)) ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  m_LocalTransforms;

/// @brief Field m_Prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Prefab, put=__cordl_internal_set_m_Prefab)) ::UnityW<::UnityEngine::GameObject>  m_Prefab;

/// @brief Field m_Prototype, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Prototype, put=__cordl_internal_set_m_Prototype)) ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  m_Prototype;

/// @brief Field m_SerializedTransformBytes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SerializedTransformBytes, put=__cordl_internal_set_m_SerializedTransformBytes)) ::ArrayW<uint8_t>  m_SerializedTransformBytes;

/// @brief Field m_SerializedTransformCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SerializedTransformCount, put=__cordl_internal_set_m_SerializedTransformCount)) int32_t  m_SerializedTransformCount;

/// @brief Field m_Transform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Transform, put=__cordl_internal_set_m_Transform)) ::UnityW<::UnityEngine::Transform>  m_Transform;

/// @brief Field m_Version, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::MA::Flora::FloraInstanceContainer_Version  m_Version;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddInstance, addr 0x1814c6510, size 0x2d0, virtual false, abstract: false, final false
inline int32_t AddInstance(::MA::Flora::FloraInstanceTransform  newInstanceTransform, ::UnityEngine::Space  space) ;

/// @brief Method AddInstances, addr 0x1814c6ad0, size 0x310, virtual false, abstract: false, final false
inline void AddInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  instanceTransforms, ::UnityEngine::Space  space) ;

/// @brief Method AddInstances, addr 0x1814c67e0, size 0x2f0, virtual false, abstract: false, final false
inline void AddInstances(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices) ;

/// @brief Method Awake, addr 0x1814c6de0, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateBounds, addr 0x1814c6e90, size 0x470, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateBounds(::UnityEngine::Space  space) ;

/// @brief Method CalculateCombinedBoundsWithBurst, addr 0x1814c7660, size 0x10, virtual false, abstract: false, final false
static inline void CalculateCombinedBoundsWithBurst(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB) ;

/// @brief Method CalculateCombinedBoundsWithBurst$BurstManaged, addr 0x1814c7300, size 0x360, virtual false, abstract: false, final false
static inline void CalculateCombinedBoundsWithBurst$BurstManaged(::by_ref<::MA::Flora::AxisAlignedBox>  prefabAABB, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  localTransforms, ::by_ref<::MA::Flora::AxisAlignedBox>  combinedAABB) ;

/// @brief Method ClearInstances, addr 0x1814c7670, size 0xc0, virtual false, abstract: false, final false
inline void ClearInstances() ;

/// @brief Method EnsureAdditionalCapacity, addr 0x1814c7730, size 0x80, virtual false, abstract: false, final false
inline void EnsureAdditionalCapacity(int32_t  additionalInstanceCount) ;

/// @brief Method EnsureCapacity, addr 0x1814c77b0, size 0x70, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  instanceCount) ;

/// @brief Method Finalize, addr 0x1814c7820, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetInstanceBounds, addr 0x1814c7850, size 0x280, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetInstanceBounds(int32_t  instanceIndex, ::UnityEngine::Space  space) ;

/// @brief Method GetInstanceHandle, addr 0x1814c7ad0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle GetInstanceHandle(int32_t  instanceIndex) ;

/// @brief Method GetInstancePosition, addr 0x1814c7af0, size 0x110, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetInstancePosition(int32_t  instanceIndex, ::UnityEngine::Space  space) ;

/// @brief Method GetInstanceRotation, addr 0x1814c7c00, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetInstanceRotation(int32_t  instanceIndex, ::UnityEngine::Space  space) ;

/// @brief Method GetInstanceScale, addr 0x1814c7cd0, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetInstanceScale(int32_t  instanceIndex, ::UnityEngine::Space  space) ;

/// @brief Method GetInstanceTransform, addr 0x1814c7e00, size 0xd0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceTransform GetInstanceTransform(int32_t  instanceIndex, ::UnityEngine::Space  space) ;

/// @brief Method GetInstanceTransforms, addr 0x1814c7ed0, size 0x150, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> GetInstanceTransforms(::UnityEngine::Space  space, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method IsInstanceEnabled, addr 0x1814c8020, size 0x60, virtual false, abstract: false, final false
inline bool IsInstanceEnabled(int32_t  instanceIndex) ;

/// @brief Method IsValidIndex, addr 0x1814c8080, size 0x20, virtual false, abstract: false, final false
inline bool IsValidIndex(int32_t  instanceIndex) ;

static inline ::MA::Flora::FloraInstanceContainer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1814c80a0, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1814c80b0, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1814c8190, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSystemWasCreated, addr 0x1814c8270, size 0x50, virtual false, abstract: false, final false
inline void OnSystemWasCreated(::MA::Flora::FloraSystem*  system) ;

/// @brief Method OnSystemWillBeDestroyed, addr 0x1814c82c0, size 0x40, virtual false, abstract: false, final false
inline void OnSystemWillBeDestroyed(::MA::Flora::FloraSystem*  system) ;

/// @brief Method RemoveInstance, addr 0x1814c8300, size 0x120, virtual false, abstract: false, final false
inline void RemoveInstance(int32_t  indexToRemove) ;

/// @brief Method RemoveInstances, addr 0x1814c8420, size 0x2f0, virtual false, abstract: false, final false
inline void RemoveInstances(::Unity::Collections::NativeArray_1<int32_t>  instancesToRemove) ;

/// @brief Method SetInstanceEnabled, addr 0x1814c8710, size 0x70, virtual false, abstract: false, final false
inline void SetInstanceEnabled(int32_t  instanceIndex, bool  enabled) ;

/// @brief Method TransformInstancesWithBurst, addr 0x1814c90a0, size 0x10, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

/// @brief Method TransformInstancesWithBurst, addr 0x1814c9090, size 0x10, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform) ;

/// @brief Method TransformInstancesWithBurst, addr 0x1814c90b0, size 0x10, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

/// @brief Method TransformInstancesWithBurst$BurstManaged, addr 0x1814c8780, size 0x510, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

/// @brief Method TransformInstancesWithBurst$BurstManaged, addr 0x1814c8c90, size 0x400, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::MA::Flora::FloraLocalToWorld>  transform) ;

/// @brief Method TransformInstancesWithBurst$BurstManaged, addr 0x1814c8c90, size 0x400, virtual false, abstract: false, final false
static inline void TransformInstancesWithBurst$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  input, ::by_ref<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>  output, ::by_ref<::Unity::Mathematics::float4x4>  transform) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1814c90c0, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x1814c90e0, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UpdateInstanceLocalToWorldMatrices, addr 0x1814c9360, size 0x410, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  newLocalToWorldMatrices) ;

/// @brief Method UpdateInstanceLocalToWorldMatrices, addr 0x1814c9120, size 0x240, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorldMatrices(int32_t  startInstanceIndex, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  newLocalToWorldMatrices) ;

/// @brief Method UpdateInstanceLocalToWorldMatrix, addr 0x1814c9770, size 0x340, virtual false, abstract: false, final false
inline void UpdateInstanceLocalToWorldMatrix(int32_t  instanceIndex, ::Unity::Mathematics::float4x4  newLocalToWorld) ;

/// @brief Method UpdateInstancePosition, addr 0x1814c9ab0, size 0x150, virtual false, abstract: false, final false
inline void UpdateInstancePosition(int32_t  instanceIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceRotation, addr 0x1814c9c00, size 0x150, virtual false, abstract: false, final false
inline void UpdateInstanceRotation(int32_t  instanceIndex, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceScale, addr 0x1814c9d50, size 0x200, virtual false, abstract: false, final false
inline void UpdateInstanceScale(int32_t  instanceIndex, ::UnityEngine::Vector3  scale, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransform, addr 0x1814c9f50, size 0x380, virtual false, abstract: false, final false
inline void UpdateInstanceTransform(int32_t  instanceIndex, ::MA::Flora::FloraInstanceTransform  newInstanceTransform, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransforms, addr 0x1814ca6c0, size 0x400, virtual false, abstract: false, final false
inline void UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  newInstanceTransforms, ::UnityEngine::Space  space) ;

/// @brief Method UpdateInstanceTransforms, addr 0x1814ca2d0, size 0x3f0, virtual false, abstract: false, final false
inline void UpdateInstanceTransforms(int32_t  startInstanceIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  newInstanceTransforms, ::UnityEngine::Space  space) ;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> const& __cordl_internal_get_m_InstanceHandles() const;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>& __cordl_internal_get_m_InstanceHandles() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>* const& __cordl_internal_get_m_LinkedObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*& __cordl_internal_get_m_LinkedObjects() ;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform> const& __cordl_internal_get_m_LocalTransforms() const;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>& __cordl_internal_get_m_LocalTransforms() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Prefab() ;

constexpr ::UnityW<::MA::Flora::FloraAdditionalRendererSettings> const& __cordl_internal_get_m_Prototype() const;

constexpr ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>& __cordl_internal_get_m_Prototype() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_SerializedTransformBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_SerializedTransformBytes() ;

constexpr int32_t const& __cordl_internal_get_m_SerializedTransformCount() const;

constexpr int32_t& __cordl_internal_get_m_SerializedTransformCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Transform() ;

constexpr ::MA::Flora::FloraInstanceContainer_Version const& __cordl_internal_get_m_Version() const;

constexpr ::MA::Flora::FloraInstanceContainer_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_InstanceHandles(::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  value) ;

constexpr void __cordl_internal_set_m_LinkedObjects(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  value) ;

constexpr void __cordl_internal_set_m_LocalTransforms(::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  value) ;

constexpr void __cordl_internal_set_m_Prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_Prototype(::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  value) ;

constexpr void __cordl_internal_set_m_SerializedTransformBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_SerializedTransformCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Version(::MA::Flora::FloraInstanceContainer_Version  value) ;

/// @brief Method .ctor, addr 0x1814caac0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InstanceCount, addr 0x1814cabb0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_InstanceCount() ;

/// @brief Method get_InstanceHandles, addr 0x1814cabd0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> get_InstanceHandles() ;

/// @brief Method get_LocalTransforms, addr 0x1814cabf0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> get_LocalTransforms() ;

/// @brief Method get_Prefab, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Prefab() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_Prefab, addr 0x1814cac10, size 0xb0, virtual false, abstract: false, final false
inline void set_Prefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraInstanceContainer(FloraInstanceContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraInstanceContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraInstanceContainer(FloraInstanceContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13283};

/// @brief Field m_Version, offset: 0x20, size: 0x4, def value: None
 ::MA::Flora::FloraInstanceContainer_Version  ___m_Version;

/// @brief Field m_Prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Prefab;

/// @brief Field m_SerializedTransformCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_SerializedTransformCount;

/// @brief Field m_SerializedTransformBytes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_SerializedTransformBytes;

/// @brief Field m_Prototype, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  ___m_Prototype;

/// @brief Field m_LinkedObjects, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  ___m_LinkedObjects;

/// @brief Field m_Transform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Transform;

/// @brief Field m_InstanceHandles, offset: 0x58, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  ___m_InstanceHandles;

/// @brief Field m_LocalTransforms, offset: 0x60, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  ___m_LocalTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_Version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_Prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_SerializedTransformCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_SerializedTransformBytes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_Prototype) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_LinkedObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_Transform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_InstanceHandles) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceContainer, ___m_LocalTransforms) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceContainer) == 0x68, "Size mismatch!");

} // namespace end def MA::Flora
