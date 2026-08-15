#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Helper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Helper)
namespace Epic::OnlineServices {
class DelegateHolder_Helper___c;
}
namespace Epic::OnlineServices {
class Handle;
}
namespace Epic::OnlineServices {
struct Helper_Allocation;
}
namespace Epic::OnlineServices {
class Helper_DelegateHolder;
}
namespace Epic::OnlineServices {
struct Helper_PinnedBuffer;
}
namespace Epic::OnlineServices {
class Helper___c;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__3_3;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__4_3;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__5_3;
}
namespace Epic::OnlineServices {
template<typename TCallback>
class Helper___c__8_1;
}
namespace Epic::OnlineServices {
class Helper___c__DisplayClass6_0;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class Delegate;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices {
class DelegateHolder_Helper___c;
}
namespace Epic::OnlineServices {
class Helper;
}
namespace Epic::OnlineServices {
class Helper_DelegateHolder;
}
namespace Epic::OnlineServices {
class Helper___c;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__3_3;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__4_3;
}
namespace Epic::OnlineServices {
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
class Helper___c__5_3;
}
namespace Epic::OnlineServices {
template<typename TCallback>
class Helper___c__8_1;
}
namespace Epic::OnlineServices {
class Helper___c__DisplayClass6_0;
}
namespace Epic::OnlineServices {
struct Helper_Allocation;
}
namespace Epic::OnlineServices {
struct Helper_PinnedBuffer;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::DelegateHolder_Helper___c*);
MARK_REF_T(::Epic::OnlineServices::Helper*);
MARK_REF_T(::Epic::OnlineServices::Helper_DelegateHolder*);
MARK_REF_T(::Epic::OnlineServices::Helper___c*);
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::Helper___c__3_3);
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::Helper___c__4_3);
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::Helper___c__5_3);
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::Helper___c__8_1);
MARK_REF_T(::Epic::OnlineServices::Helper___c__DisplayClass6_0*);
MARK_VAL_T(::Epic::OnlineServices::Helper_Allocation);
MARK_VAL_T(::Epic::OnlineServices::Helper_PinnedBuffer);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::DelegateHolder_Helper___c*, "Epic.OnlineServices", "Helper/DelegateHolder/<>c");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper*, "Epic.OnlineServices", "Helper");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper_DelegateHolder*, "Epic.OnlineServices", "Helper/DelegateHolder");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper___c*, "Epic.OnlineServices", "Helper/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::Helper___c__3_3, "Epic.OnlineServices", "Helper/<>c__3`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::Helper___c__4_3, "Epic.OnlineServices", "Helper/<>c__4`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::Helper___c__5_3, "Epic.OnlineServices", "Helper/<>c__5`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::Helper___c__8_1, "Epic.OnlineServices", "Helper/<>c__8`1");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper___c__DisplayClass6_0*, "Epic.OnlineServices", "Helper/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper_Allocation, "Epic.OnlineServices", "Helper/Allocation");
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Helper_PinnedBuffer, "Epic.OnlineServices", "Helper/PinnedBuffer");
// Dependencies System.Nullable`1<T>
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.Helper/Allocation
struct CORDL_TYPE Helper_Allocation {
public:
// Declarations
 __declspec(property(get=get_Cache, put=set_Cache)) ::System::Object*  Cache;

 __declspec(property(get=get_IsArrayItemAllocated, put=set_IsArrayItemAllocated)) ::System::Nullable_1<bool>  IsArrayItemAllocated;

 __declspec(property(get=get_Size, put=set_Size)) int32_t  Size;

/// @brief Method .ctor, addr 0x1804be160, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::System::Object*  cache, ::System::Nullable_1<bool>  isArrayItemAllocated) ;

/// @brief Method get_Cache, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_Cache() ;

/// @brief Method get_IsArrayItemAllocated, addr 0x1804bd9a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_IsArrayItemAllocated() ;

/// @brief Method get_Size, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Size() ;

/// @brief Method set_Cache, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Cache(::System::Object*  value) ;

/// @brief Method set_IsArrayItemAllocated, addr 0x1804bd9b0, size 0x10, virtual false, abstract: false, final false
inline void set_IsArrayItemAllocated(::System::Nullable_1<bool>  value) ;

/// @brief Method set_Size, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Size(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Helper_Allocation() ;

// Ctor Parameters [CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Cache_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_IsArrayItemAllocated_k__BackingField", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: None }]
constexpr Helper_Allocation(int32_t  _Size_k__BackingField, ::System::Object*  _Cache_k__BackingField, ::System::Nullable_1<bool>  _IsArrayItemAllocated_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Size>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Size_k__BackingField;

/// @brief Field <Cache>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _Cache_k__BackingField;

/// @brief Field <IsArrayItemAllocated>k__BackingField, offset: 0x10, size: 0x2, def value: None
 ::System::Nullable_1<bool>  _IsArrayItemAllocated_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Helper_Allocation, _Size_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Helper_Allocation, _Cache_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Helper_Allocation, _IsArrayItemAllocated_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Helper_Allocation) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Runtime.InteropServices.GCHandle
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.Helper/PinnedBuffer
struct CORDL_TYPE Helper_PinnedBuffer {
public:
// Declarations
 __declspec(property(get=get_Handle, put=set_Handle)) ::System::Runtime::InteropServices::GCHandle  Handle;

 __declspec(property(get=get_RefCount, put=set_RefCount)) int32_t  RefCount;

/// @brief Method .ctor, addr 0x1804df860, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::InteropServices::GCHandle  handle) ;

/// @brief Method get_Handle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Runtime::InteropServices::GCHandle get_Handle() ;

/// @brief Method get_RefCount, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RefCount() ;

/// @brief Method set_Handle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_Handle(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method set_RefCount, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_RefCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Helper_PinnedBuffer() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "_RefCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Helper_PinnedBuffer(::System::Runtime::InteropServices::GCHandle  _Handle_k__BackingField, int32_t  _RefCount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  _Handle_k__BackingField;

/// @brief Field <RefCount>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _RefCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Helper_PinnedBuffer, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Helper_PinnedBuffer, _RefCount_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Helper_PinnedBuffer) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/DelegateHolder/<>c
class CORDL_TYPE DelegateHolder_Helper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::DelegateHolder_Helper___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__8_0;

static inline ::Epic::OnlineServices::DelegateHolder_Helper___c* New_ctor() ;

/// @brief Method <.ctor>b__8_0, addr 0x1804e27c0, size 0x10, virtual false, abstract: false, final false
inline bool __ctor_b__8_0(::System::Delegate*  d) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::DelegateHolder_Helper___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::DelegateHolder_Helper___c*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateHolder_Helper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateHolder_Helper___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateHolder_Helper___c(DelegateHolder_Helper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateHolder_Helper___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateHolder_Helper___c(DelegateHolder_Helper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::DelegateHolder_Helper___c) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Nullable`1<T>, System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/DelegateHolder
class CORDL_TYPE Helper_DelegateHolder : public ::System::Object {
public:
// Declarations
using __c = ::Epic::OnlineServices::DelegateHolder_Helper___c;

 __declspec(property(get=get_Delegates, put=set_Delegates)) ::System::Collections::Generic::List_1<::System::Delegate*>*  Delegates;

 __declspec(property(get=get_NotificationId, put=set_NotificationId)) ::System::Nullable_1<uint64_t>  NotificationId;

/// @brief Field <Delegates>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Delegates_k__BackingField, put=__cordl_internal_set__Delegates_k__BackingField)) ::System::Collections::Generic::List_1<::System::Delegate*>*  _Delegates_k__BackingField;

/// @brief Field <NotificationId>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__NotificationId_k__BackingField, put=__cordl_internal_set__NotificationId_k__BackingField)) ::System::Nullable_1<uint64_t>  _NotificationId_k__BackingField;

static inline ::Epic::OnlineServices::Helper_DelegateHolder* New_ctor(::ArrayW<::System::Delegate*>  delegates) ;

constexpr ::System::Collections::Generic::List_1<::System::Delegate*>* const& __cordl_internal_get__Delegates_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::System::Delegate*>*& __cordl_internal_get__Delegates_k__BackingField() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get__NotificationId_k__BackingField() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get__NotificationId_k__BackingField() ;

constexpr void __cordl_internal_set__Delegates_k__BackingField(::System::Collections::Generic::List_1<::System::Delegate*>*  value) ;

constexpr void __cordl_internal_set__NotificationId_k__BackingField(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method .ctor, addr 0x1804d7f80, size 0x490, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Delegate*>  delegates) ;

/// @brief Method get_Delegates, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Delegate*>* get_Delegates() ;

/// @brief Method get_NotificationId, addr 0x1802e2d70, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint64_t> get_NotificationId() ;

/// @brief Method set_Delegates, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Delegates(::System::Collections::Generic::List_1<::System::Delegate*>*  value) ;

/// @brief Method set_NotificationId, addr 0x1802f1b20, size 0x10, virtual false, abstract: false, final false
inline void set_NotificationId(::System::Nullable_1<uint64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper_DelegateHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper_DelegateHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper_DelegateHolder(Helper_DelegateHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper_DelegateHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper_DelegateHolder(Helper_DelegateHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7421};

/// @brief Field <Delegates>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Delegate*>*  ____Delegates_k__BackingField;

/// @brief Field <NotificationId>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ____NotificationId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Helper_DelegateHolder, ____Delegates_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Helper_DelegateHolder, ____NotificationId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Helper_DelegateHolder) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c
class CORDL_TYPE Helper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::Helper___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__1_0;

/// @brief Field <>9__62_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__62_0, put=setStaticF___9__62_0)) ::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*  __9__62_0;

static inline ::Epic::OnlineServices::Helper___c* New_ctor() ;

/// @brief Method <AddCallback>b__1_0, addr 0x1804e27c0, size 0x10, virtual false, abstract: false, final false
inline bool _AddCallback_b__1_0(::System::Delegate*  d) ;

/// @brief Method <GetAllocationCount>b__62_0, addr 0x1804e27d0, size 0x10, virtual false, abstract: false, final false
inline int32_t _GetAllocationCount_b__62_0(int32_t  acc, ::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Helper___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__1_0() ;

static inline ::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>* getStaticF___9__62_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::Helper___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

static inline void setStaticF___9__62_0(::System::Func_3<int32_t,::System::Collections::Generic::KeyValuePair_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c(Helper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c(Helper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Helper___c) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// cpp template
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c__3`3<TCallbackInfoInternal,TCallback,TCallbackInfo>
class CORDL_TYPE Helper___c__3_3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__3_0;

static inline ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* New_ctor() ;

/// @brief Method <TryGetCallback>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _TryGetCallback_b__3_0(::System::Delegate*  d) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c__3_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__3_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c__3_3(Helper___c__3_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__3_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c__3_3(Helper___c__3_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// cpp template
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c__4`3<TCallbackInfoInternal,TCallback,TCallbackInfo>
class CORDL_TYPE Helper___c__4_3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__4_0;

static inline ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* New_ctor() ;

/// @brief Method <TryGetAndRemoveCallback>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _TryGetAndRemoveCallback_b__4_0(::System::Delegate*  d) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c__4_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__4_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c__4_3(Helper___c__4_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__4_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c__4_3(Helper___c__4_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7424};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// cpp template
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c__5`3<TCallbackInfoInternal,TCallback,TCallbackInfo>
class CORDL_TYPE Helper___c__5_3 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__5_0;

static inline ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* New_ctor() ;

/// @brief Method <TryGetStructCallback>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _TryGetStructCallback_b__5_0(::System::Delegate*  d) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal,TCallback,TCallbackInfo>*  value) ;

static inline void setStaticF___9__5_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c__5_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__5_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c__5_3(Helper___c__5_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__5_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c__5_3(Helper___c__5_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// cpp template
template<typename TCallback>
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c__8`1<TCallback>
class CORDL_TYPE Helper___c__8_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Epic::OnlineServices::Helper___c__8_1<TCallback>*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Delegate*,bool>*  __9__8_0;

static inline ::Epic::OnlineServices::Helper___c__8_1<TCallback>* New_ctor() ;

/// @brief Method <TryGetStaticCallback>b__8_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _TryGetStaticCallback_b__8_0(::System::Delegate*  d) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Helper___c__8_1<TCallback>* getStaticF___9() ;

static inline ::System::Func_2<::System::Delegate*,bool>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Epic::OnlineServices::Helper___c__8_1<TCallback>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Delegate*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c__8_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__8_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c__8_1(Helper___c__8_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__8_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c__8_1(Helper___c__8_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Helper/<>c__DisplayClass6_0
class CORDL_TYPE Helper___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field notificationId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_notificationId, put=__cordl_internal_set_notificationId)) uint64_t  notificationId;

static inline ::Epic::OnlineServices::Helper___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <RemoveCallbackByNotificationId>b__0, addr 0x1804e27e0, size 0x50, virtual false, abstract: false, final false
inline bool _RemoveCallbackByNotificationId_b__0(::System::Collections::Generic::KeyValuePair_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>  pair) ;

constexpr uint64_t const& __cordl_internal_get_notificationId() const;

constexpr uint64_t& __cordl_internal_get_notificationId() ;

constexpr void __cordl_internal_set_notificationId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper___c__DisplayClass6_0(Helper___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper___c__DisplayClass6_0(Helper___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7427};

/// @brief Field notificationId, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___notificationId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Helper___c__DisplayClass6_0, ___notificationId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Helper___c__DisplayClass6_0) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.Helper
class CORDL_TYPE Helper : public ::System::Object {
public:
// Declarations
using Allocation = ::Epic::OnlineServices::Helper_Allocation;

using DelegateHolder = ::Epic::OnlineServices::Helper_DelegateHolder;

using PinnedBuffer = ::Epic::OnlineServices::Helper_PinnedBuffer;

using __c = ::Epic::OnlineServices::Helper___c;

template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
using __c__3_3 = ::Epic::OnlineServices::Helper___c__3_3<TCallbackInfoInternal, TCallback, TCallbackInfo>;

template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
using __c__4_3 = ::Epic::OnlineServices::Helper___c__4_3<TCallbackInfoInternal, TCallback, TCallbackInfo>;

template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
using __c__5_3 = ::Epic::OnlineServices::Helper___c__5_3<TCallbackInfoInternal, TCallback, TCallbackInfo>;

template<typename TCallback>
using __c__8_1 = ::Epic::OnlineServices::Helper___c__8_1<TCallback>;

using __c__DisplayClass6_0 = ::Epic::OnlineServices::Helper___c__DisplayClass6_0;

/// @brief Field s_Allocations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Allocations, put=setStaticF_s_Allocations)) ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*  s_Allocations;

/// @brief Field s_Callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Callbacks, put=setStaticF_s_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*  s_Callbacks;

/// @brief Field s_ClientDatas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ClientDatas, put=setStaticF_s_ClientDatas)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  s_ClientDatas;

/// @brief Field s_LastClientDataId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LastClientDataId, put=setStaticF_s_LastClientDataId)) int64_t  s_LastClientDataId;

/// @brief Field s_PinnedBuffers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PinnedBuffers, put=setStaticF_s_PinnedBuffers)) ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*  s_PinnedBuffers;

/// @brief Field s_StaticCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StaticCallbacks, put=setStaticF_s_StaticCallbacks)) ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*  s_StaticCallbacks;

/// @brief Method AddAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr AddAllocation(::ArrayW<T>  array, bool  isArrayItemAllocated) ;

/// @brief Method AddAllocation, addr 0x1804d92e0, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::IntPtr AddAllocation(int32_t  size) ;

/// @brief Method AddAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr AddAllocation(int32_t  size, ::ArrayW<T>  cache, ::System::Nullable_1<bool>  isArrayItemAllocated) ;

/// @brief Method AddAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr AddAllocation(int32_t  size, T  cache) ;

/// @brief Method AddAllocation, addr 0x1804d92d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr AddAllocation(uint32_t  size) ;

/// @brief Method AddCallback, addr 0x1804d95e0, size 0x210, virtual false, abstract: false, final false
static inline void AddCallback(::System::IntPtr  clientDataPointer, ::ArrayW<::System::Delegate*>  delegates) ;

/// @brief Method AddCallback, addr 0x1804d9490, size 0x150, virtual false, abstract: false, final false
static inline void AddCallback(::by_ref<::System::IntPtr>  clientDataPointer, ::System::Object*  clientData, ::ArrayW<::System::Delegate*>  delegates) ;

/// @brief Method AddClientData, addr 0x1804d97f0, size 0x150, virtual false, abstract: false, final false
static inline ::System::IntPtr AddClientData(::System::Object*  clientData) ;

/// @brief Method AddPinnedBuffer, addr 0x1804d9c80, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr AddPinnedBuffer(::ArrayW<uint8_t>  array) ;

/// @brief Method AddPinnedBuffer, addr 0x1804d9940, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr AddPinnedBuffer(::System::ArraySegment_1<uint8_t>  array) ;

/// @brief Method AddPinnedBuffer, addr 0x1804d99a0, size 0x290, virtual false, abstract: false, final false
static inline ::System::IntPtr AddPinnedBuffer(::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method AddPinnedBuffer, addr 0x1804d9c30, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr AddPinnedBuffer(::Epic::OnlineServices::Utf8String*  str) ;

/// @brief Method AddStaticCallback, addr 0x1804d9ca0, size 0x170, virtual false, abstract: false, final false
static inline void AddStaticCallback(::StringW  key, ::ArrayW<::System::Delegate*>  delegates) ;

/// @brief Method AssignNotificationIdToCallback, addr 0x1804d9e10, size 0x190, virtual false, abstract: false, final false
static inline void AssignNotificationIdToCallback(::System::IntPtr  clientDataPointer, uint64_t  notificationId) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArray>
static inline void Convert(::ArrayW<TArray>  from, ::by_ref<int32_t>  to) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArray>
static inline void Convert(::ArrayW<TArray>  from, ::by_ref<uint32_t>  to) ;

/// @brief Method Convert, addr 0x1804da280, size 0xb0, virtual false, abstract: false, final false
static inline void Convert(::ArrayW<uint8_t>  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to) ;

/// @brief Method Convert, addr 0x1804d9fa0, size 0x20, virtual false, abstract: false, final false
static inline void Convert(::Epic::OnlineServices::Handle*  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Convert, addr 0x1804d9fc0, size 0xb0, virtual false, abstract: false, final false
static inline void Convert(::StringW  from, ::by_ref<::ArrayW<uint8_t>>  to, int32_t  fromLength) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Convert(::System::ArraySegment_1<T>  from, ::by_ref<uint32_t>  to) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArray>
static inline void Convert(::System::ArraySegment_1<TArray>  from, ::by_ref<int32_t>  to) ;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename THandle>
static inline void Convert(::System::IntPtr  from, ::by_ref<THandle>  to) ;

/// @brief Method Convert, addr 0x1804da080, size 0xd0, virtual false, abstract: false, final false
static inline void Convert(::System::Nullable_1<::System::DateTimeOffset>  from, ::by_ref<int64_t>  to) ;

/// @brief Method Convert, addr 0x1804da070, size 0x10, virtual false, abstract: false, final false
static inline void Convert(bool  from, ::by_ref<int32_t>  to) ;

/// @brief Method Convert, addr 0x1804da150, size 0x10, virtual false, abstract: false, final false
static inline void Convert(int32_t  from, ::by_ref<bool>  to) ;

/// @brief Method Convert, addr 0x1804da160, size 0x120, virtual false, abstract: false, final false
static inline void Convert(int64_t  from, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>  to) ;

/// @brief Method Copy, addr 0x1804da330, size 0x30, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint8_t>  from, ::System::IntPtr  to) ;

/// @brief Method Copy, addr 0x1804da360, size 0x30, virtual false, abstract: false, final false
static inline void Copy(::System::ArraySegment_1<uint8_t>  from, ::System::IntPtr  to) ;

/// @brief Method Dispose, addr 0x1804da390, size 0x20, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::System::IDisposable*>  disposable) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDisposable>
static inline void Dispose(::by_ref<TDisposable>  disposable) ;

/// @brief Method Dispose, addr 0x1804be470, size 0x40, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::System::IntPtr>  value) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArray>
static inline void Get(::ArrayW<TArray>  from, ::by_ref<int32_t>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TArray>
static inline void Get(::ArrayW<TArray>  from, ::by_ref<uint32_t>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::ArrayW<TInternal>  from, ::by_ref<::ArrayW<TPublic>>  to) ;

/// @brief Method Get, addr 0x1804da280, size 0xb0, virtual false, abstract: false, final false
static inline void Get(::ArrayW<uint8_t>  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to) ;

/// @brief Method Get, addr 0x1804da820, size 0x20, virtual false, abstract: false, final false
static inline void Get(::System::ArraySegment_1<uint8_t>  from, ::by_ref<uint32_t>  to) ;

/// @brief Method Get, addr 0x1804da840, size 0x20, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>  to, int32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x1804da840, size 0x20, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<::Epic::OnlineServices::Utf8String*>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x1804da930, size 0x20, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<::System::IntPtr>>  to, uint32_t  arrayLength) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, int32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename THandle>
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<THandle>>  to, uint32_t  arrayLength) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<TPublic>>  to, int32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::System::IntPtr  from, ::by_ref<::ArrayW<TPublic>>  to, uint32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Get, addr 0x1804da510, size 0x130, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::Epic::OnlineServices::Utf8String*>  to) ;

/// @brief Method Get, addr 0x1804da860, size 0xa0, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::System::ArraySegment_1<uint8_t>>  to, uint32_t  arrayLength) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::System::IntPtr  from, ::by_ref<::System::Nullable_1<T>>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::System::IntPtr  from, ::by_ref<::System::Nullable_1<TPublic>>  to) ;

/// @brief Method Get, addr 0x1804da900, size 0x30, virtual false, abstract: false, final false
static inline void Get(::System::IntPtr  from, ::by_ref<::System::Object*>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename THandle>
static inline void Get(::System::IntPtr  from, ::by_ref<THandle>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::System::IntPtr  from, ::by_ref<TPublic>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::by_ref<TInternal>  from, ::by_ref<::System::Nullable_1<TPublic>>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::by_ref<TInternal>  from, ::by_ref<TPublic>  to) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInternal,typename TPublic>
static inline void Get(::by_ref<TInternal>  from, ::by_ref<TPublic>  to, ::by_ref<::System::IntPtr>  clientDataPointer) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(T  from, ::by_ref<::System::Nullable_1<T>>  to) ;

/// @brief Method Get, addr 0x1804da070, size 0x10, virtual false, abstract: false, final false
static inline void Get(bool  from, ::by_ref<int32_t>  to) ;

/// @brief Method Get, addr 0x1804da7f0, size 0x30, virtual false, abstract: false, final false
static inline void Get(int32_t  from, ::by_ref<::System::Nullable_1<bool>>  to) ;

/// @brief Method Get, addr 0x1804da150, size 0x10, virtual false, abstract: false, final false
static inline void Get(int32_t  from, ::by_ref<bool>  to) ;

/// @brief Method Get, addr 0x1804da160, size 0x120, virtual false, abstract: false, final false
static inline void Get(int64_t  from, ::by_ref<::System::Nullable_1<::System::DateTimeOffset>>  to) ;

/// @brief Method GetAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetAllocation(::System::IntPtr  from, ::by_ref<::ArrayW<T>>  to, int32_t  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method GetAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename THandle>
static inline void GetAllocation(::System::IntPtr  source, ::by_ref<::ArrayW<THandle>>  target, int32_t  arrayLength) ;

/// @brief Method GetAllocation, addr 0x1804da510, size 0x130, virtual false, abstract: false, final false
static inline void GetAllocation(::System::IntPtr  source, ::by_ref<::Epic::OnlineServices::Utf8String*>  target) ;

/// @brief Method GetAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetAllocation(::System::IntPtr  source, ::by_ref<::System::Nullable_1<T>>  target) ;

/// @brief Method GetAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetAllocation(::System::IntPtr  source, ::by_ref<T>  target) ;

/// @brief Method GetAllocationCount, addr 0x1804da3b0, size 0x160, virtual false, abstract: false, final false
static inline int32_t GetAllocationCount() ;

/// @brief Method GetAnsiStringLength, addr 0x1804da680, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetAnsiStringLength(::ArrayW<uint8_t>  bytes) ;

/// @brief Method GetAnsiStringLength, addr 0x1804da640, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetAnsiStringLength(::System::IntPtr  pointer) ;

/// @brief Method GetClientData, addr 0x1804da6d0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Object* GetClientData(::System::IntPtr  clientDataPointer) ;

static inline ::Epic::OnlineServices::Helper* New_ctor() ;

/// @brief Method RemoveAllocation, addr 0x1804da950, size 0x470, virtual false, abstract: false, final false
static inline void RemoveAllocation(::by_ref<::System::IntPtr>  pointer) ;

/// @brief Method RemoveCallback, addr 0x1804daf40, size 0x110, virtual false, abstract: false, final false
static inline void RemoveCallback(::System::IntPtr  clientDataPointer) ;

/// @brief Method RemoveCallbackByNotificationId, addr 0x1804dadc0, size 0x180, virtual false, abstract: false, final false
static inline void RemoveCallbackByNotificationId(uint64_t  notificationId) ;

/// @brief Method RemoveClientData, addr 0x1804db050, size 0x100, virtual false, abstract: false, final false
static inline void RemoveClientData(::System::IntPtr  clientDataPointer) ;

/// @brief Method RemovePinnedBuffer, addr 0x1804db150, size 0x240, virtual false, abstract: false, final false
static inline void RemovePinnedBuffer(::by_ref<::System::IntPtr>  pointer) ;

/// @brief Method Set, addr 0x1804db420, size 0x80, virtual false, abstract: false, final false
static inline void Set(::ArrayW<::Epic::OnlineServices::Utf8String*>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x1804db390, size 0x90, virtual false, abstract: false, final false
static inline void Set(::ArrayW<::Epic::OnlineServices::Utf8String*>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::ArrayW<T>  from, ::by_ref<::System::IntPtr>  to, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(::ArrayW<TPublic>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<int32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(::ArrayW<TPublic>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength, bool  isArrayItemAllocated) ;

/// @brief Method Set, addr 0x1804d9fa0, size 0x20, virtual false, abstract: false, final false
static inline void Set(::Epic::OnlineServices::Handle*  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x1804db580, size 0xf0, virtual false, abstract: false, final false
static inline void Set(::Epic::OnlineServices::Utf8String*  from, ::by_ref<::ArrayW<uint8_t>>  to, int32_t  stringLength) ;

/// @brief Method Set, addr 0x1804db7d0, size 0x80, virtual false, abstract: false, final false
static inline void Set(::Epic::OnlineServices::Utf8String*  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x1804db670, size 0xc0, virtual false, abstract: false, final false
static inline void Set(::System::ArraySegment_1<uint8_t>  from, ::by_ref<::System::IntPtr>  to, ::by_ref<uint32_t>  arrayLength) ;

/// @brief Method Set, addr 0x1804db4a0, size 0xe0, virtual false, abstract: false, final false
static inline void Set(::System::Nullable_1<::System::DateTimeOffset>  from, ::by_ref<int64_t>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::System::Nullable_1<T>  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::System::Nullable_1<T>  from, ::by_ref<::System::Nullable_1<T>>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(::System::Nullable_1<T>  from, ::by_ref<T>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(::System::Nullable_1<TPublic>  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(::System::Nullable_1<TPublic>  from, ::by_ref<TInternal>  to) ;

/// @brief Method Set, addr 0x1804db850, size 0x30, virtual false, abstract: false, final false
static inline void Set(::System::Nullable_1<bool>  from, ::by_ref<int32_t>  to) ;

/// @brief Method Set, addr 0x1804db730, size 0xa0, virtual false, abstract: false, final false
static inline void Set(::System::Object*  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(::by_ref<TPublic>  from, ::by_ref<TInternal>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(T  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Set(T  from, ::by_ref<::System::Nullable_1<T>>  to) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPublic,typename TInternal>
static inline void Set(TPublic  from, ::by_ref<::System::IntPtr>  to) ;

/// @brief Method Set, addr 0x1804da070, size 0x10, virtual false, abstract: false, final false
static inline void Set(bool  from, ::by_ref<int32_t>  to) ;

/// @brief Method TryGetAllocationCache, addr 0x1804db880, size 0x180, virtual false, abstract: false, final false
static inline bool TryGetAllocationCache(::System::IntPtr  pointer, ::by_ref<::System::Object*>  cache) ;

/// @brief Method TryGetAndRemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
static inline bool TryGetAndRemoveCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo) ;

/// @brief Method TryGetCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
static inline bool TryGetCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo) ;

/// @brief Method TryGetStaticCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCallback>
static inline bool TryGetStaticCallback(::StringW  key, ::by_ref<TCallback>  callback) ;

/// @brief Method TryGetStructCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCallbackInfoInternal,typename TCallback,typename TCallbackInfo>
static inline bool TryGetStructCallback(::by_ref<TCallbackInfoInternal>  callbackInfoInternal, ::by_ref<TCallback>  callback, ::by_ref<TCallbackInfo>  callbackInfo) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>* getStaticF_s_Allocations() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>* getStaticF_s_Callbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>* getStaticF_s_ClientDatas() ;

static inline int64_t getStaticF_s_LastClientDataId() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>* getStaticF_s_PinnedBuffers() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>* getStaticF_s_StaticCallbacks() ;

static inline void setStaticF_s_Allocations(::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_Allocation>*  value) ;

static inline void setStaticF_s_Callbacks(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Epic::OnlineServices::Helper_DelegateHolder*>*  value) ;

static inline void setStaticF_s_ClientDatas(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  value) ;

static inline void setStaticF_s_LastClientDataId(int64_t  value) ;

static inline void setStaticF_s_PinnedBuffers(::System::Collections::Generic::Dictionary_2<uint64_t,::Epic::OnlineServices::Helper_PinnedBuffer>*  value) ;

static inline void setStaticF_s_StaticCallbacks(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Helper_DelegateHolder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helper(Helper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helper(Helper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Helper) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
