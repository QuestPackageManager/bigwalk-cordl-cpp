#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace Rewired::Utils::Classes::Data {
template<typename >
struct RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class RingBuffer_1;
}
namespace Rewired::Utils::Classes::Data {
template<typename >
struct RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::RingBuffer_1);
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::RingBuffer_1, "Rewired.Utils.Classes.Data", "RingBuffer`1");
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR, "Rewired.Utils.Classes.Data", "RingBuffer`1/zZlzrkNnaRuFCeBRHuFIqdhXjsTR");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename >
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.RingBuffer`1/zZlzrkNnaRuFCeBRHuFIqdhXjsTR<>
struct CORDL_TYPE RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR {
public:
// Declarations
 __declspec(property(get=get_Current))   Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<\u{1}>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::RingBuffer_1<>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline  get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<\u{1}>"
constexpr ::System::Collections::Generic::IEnumerator_1<>* i___System__Collections__Generic__IEnumerator_1__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method pigCXVlutLgGlMMBUFuAKdbVlmmv, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool pigCXVlutLgGlMMBUFuAKdbVlmmv() ;

// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::Rewired::Utils::Classes::Data::RingBuffer_1<\u{1}>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty: "\u{1}", modifiers: "", def_value: None }]
constexpr RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR(::Rewired::Utils::Classes::Data::RingBuffer_1<>*  buffer, int32_t  index, int32_t  version,   current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3012};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::RingBuffer_1<>*  buffer;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field version, offset: 0xc, size: 0x4, def value: None
 int32_t  version;

/// @brief Field current, offset: 0x10, size: 0x8, def value: None
   current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
using zZlzrkNnaRuFCeBRHuFIqdhXjsTR = ::Rewired::Utils::Classes::Data::RingBuffer_1_zZlzrkNnaRuFCeBRHuFIqdhXjsTR<T>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_EqualityComparer, put=set_EqualityComparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  EqualityComparer;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field IwtFwXLoVbmXQdpMdfywTSDGxSAo, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_IwtFwXLoVbmXQdpMdfywTSDGxSAo, put=__cordl_internal_set_IwtFwXLoVbmXQdpMdfywTSDGxSAo)) int32_t  IwtFwXLoVbmXQdpMdfywTSDGxSAo;

/// @brief Field KzxGqdKMHEiDMCIFysnjDSMvpLxm, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_KzxGqdKMHEiDMCIFysnjDSMvpLxm, put=__cordl_internal_set_KzxGqdKMHEiDMCIFysnjDSMvpLxm)) int32_t  KzxGqdKMHEiDMCIFysnjDSMvpLxm;

 __declspec(property(get=get_OverrunCount)) int32_t  OverrunCount;

 __declspec(property(get=wKzXgdcpWhrCjjvFcrjdwVCviqPS)) int32_t  System_Collections_Generic_ICollection_T__Count;

 __declspec(property(get=RRHEVSnFwcuSHFYtvgBklUpyuUQX)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

/// @brief Field UqUsUxvxNOTojzdKwXIdnNABnlbS, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UqUsUxvxNOTojzdKwXIdnNABnlbS, put=__cordl_internal_set_UqUsUxvxNOTojzdKwXIdnNABnlbS)) ::ArrayW<T>  UqUsUxvxNOTojzdKwXIdnNABnlbS;

/// @brief Field XAuhVIBZJizwItqELRUvXKWyCnEAA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_XAuhVIBZJizwItqELRUvXKWyCnEAA, put=__cordl_internal_set_XAuhVIBZJizwItqELRUvXKWyCnEAA)) ::System::Collections::Generic::IEqualityComparer_1<T>*  XAuhVIBZJizwItqELRUvXKWyCnEAA;

/// @brief Field eLkOaSOXfzzkGEHDVIjeEINgUkOM, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eLkOaSOXfzzkGEHDVIjeEINgUkOM, put=__cordl_internal_set_eLkOaSOXfzzkGEHDVIjeEINgUkOM)) int32_t  eLkOaSOXfzzkGEHDVIjeEINgUkOM;

/// @brief Field ioQnkBZdbCMnwVgLnhgBtxIPlAQd, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ioQnkBZdbCMnwVgLnhgBtxIPlAQd, put=__cordl_internal_set_ioQnkBZdbCMnwVgLnhgBtxIPlAQd)) int32_t  ioQnkBZdbCMnwVgLnhgBtxIPlAQd;

/// @brief Field mZhDHZgWcQIRdgGopzbRXWvsTJNc, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mZhDHZgWcQIRdgGopzbRXWvsTJNc, put=__cordl_internal_set_mZhDHZgWcQIRdgGopzbRXWvsTJNc)) int32_t  mZhDHZgWcQIRdgGopzbRXWvsTJNc;

/// @brief Field sxQmNaviojNnhZNLSAJzaEFzjAfUA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sxQmNaviojNnhZNLSAJzaEFzjAfUA, put=__cordl_internal_set_sxQmNaviojNnhZNLSAJzaEFzjAfUA)) int32_t  sxQmNaviojNnhZNLSAJzaEFzjAfUA;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CPZVIptmJfspOPcVXgGjpkuRccHbA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CPZVIptmJfspOPcVXgGjpkuRccHbA() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  item) ;

/// @brief Method EnqueueIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool EnqueueIfUnique(T  item) ;

/// @brief Method GnxHIcKSoxLjFStdXJrqnoWtAZmB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool GnxHIcKSoxLjFStdXJrqnoWtAZmB(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method LoCRtYmtELythelrzFQtFMiFacdE, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool LoCRtYmtELythelrzFQtFMiFacdE(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Data::RingBuffer_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method RRHEVSnFwcuSHFYtvgBklUpyuUQX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool RRHEVSnFwcuSHFYtvgBklUpyuUQX() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RemoveAll(T  item) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RemoveAll(T  item, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method VRTxRdUmrjEOHPeOICISjyGAPJcKA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void VRTxRdUmrjEOHPeOICISjyGAPJcKA(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_IwtFwXLoVbmXQdpMdfywTSDGxSAo() const;

constexpr int32_t& __cordl_internal_get_IwtFwXLoVbmXQdpMdfywTSDGxSAo() ;

constexpr int32_t const& __cordl_internal_get_KzxGqdKMHEiDMCIFysnjDSMvpLxm() const;

constexpr int32_t& __cordl_internal_get_KzxGqdKMHEiDMCIFysnjDSMvpLxm() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_UqUsUxvxNOTojzdKwXIdnNABnlbS() const;

constexpr ::ArrayW<T>& __cordl_internal_get_UqUsUxvxNOTojzdKwXIdnNABnlbS() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& __cordl_internal_get_XAuhVIBZJizwItqELRUvXKWyCnEAA() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __cordl_internal_get_XAuhVIBZJizwItqELRUvXKWyCnEAA() ;

constexpr int32_t const& __cordl_internal_get_eLkOaSOXfzzkGEHDVIjeEINgUkOM() const;

constexpr int32_t& __cordl_internal_get_eLkOaSOXfzzkGEHDVIjeEINgUkOM() ;

constexpr int32_t const& __cordl_internal_get_ioQnkBZdbCMnwVgLnhgBtxIPlAQd() const;

constexpr int32_t& __cordl_internal_get_ioQnkBZdbCMnwVgLnhgBtxIPlAQd() ;

constexpr int32_t const& __cordl_internal_get_mZhDHZgWcQIRdgGopzbRXWvsTJNc() const;

constexpr int32_t& __cordl_internal_get_mZhDHZgWcQIRdgGopzbRXWvsTJNc() ;

constexpr int32_t const& __cordl_internal_get_sxQmNaviojNnhZNLSAJzaEFzjAfUA() const;

constexpr int32_t& __cordl_internal_get_sxQmNaviojNnhZNLSAJzaEFzjAfUA() ;

constexpr void __cordl_internal_set_IwtFwXLoVbmXQdpMdfywTSDGxSAo(int32_t  value) ;

constexpr void __cordl_internal_set_KzxGqdKMHEiDMCIFysnjDSMvpLxm(int32_t  value) ;

constexpr void __cordl_internal_set_UqUsUxvxNOTojzdKwXIdnNABnlbS(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_XAuhVIBZJizwItqELRUvXKWyCnEAA(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr void __cordl_internal_set_eLkOaSOXfzzkGEHDVIjeEINgUkOM(int32_t  value) ;

constexpr void __cordl_internal_set_ioQnkBZdbCMnwVgLnhgBtxIPlAQd(int32_t  value) ;

constexpr void __cordl_internal_set_mZhDHZgWcQIRdgGopzbRXWvsTJNc(int32_t  value) ;

constexpr void __cordl_internal_set_sxQmNaviojNnhZNLSAJzaEFzjAfUA(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method eblmeQLvNhSLUtHpyfYEwIMatydv, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void eblmeQLvNhSLUtHpyfYEwIMatydv(::ArrayW<T>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_EqualityComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_EqualityComparer() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_OverrunCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_OverrunCount() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method oUTaHqyGTaakKkCgflHYSzSsQFUkA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void oUTaHqyGTaakKkCgflHYSzSsQFUkA(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qqTqaeAsoSDbMbOblaXYCIcMwOwR, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t qqTqaeAsoSDbMbOblaXYCIcMwOwR(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method rPTaQLBRafCicZlDkjvpiSwekQphA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool rPTaQLBRafCicZlDkjvpiSwekQphA(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_EqualityComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_EqualityComparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method sxKmxMxMbGBYgfJyZoFnLPNXtJRB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* sxKmxMxMbGBYgfJyZoFnLPNXtJRB() ;

/// @brief Method tOUcVXAsAflrLgWgzhJtUvigaCtrA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t tOUcVXAsAflrLgWgzhJtUvigaCtrA(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method uRBAmdDyqSMsPFQXzgdaOxmLzikG, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t uRBAmdDyqSMsPFQXzgdaOxmLzikG(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method wKzXgdcpWhrCjjvFcrjdwVCviqPS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t wKzXgdcpWhrCjjvFcrjdwVCviqPS() ;

/// @brief Method xgApXIzkGBIPHLRXGCZnnKbMhMfO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t xgApXIzkGBIPHLRXGCZnnKbMhMfO(T  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3013};

/// @brief Field UqUsUxvxNOTojzdKwXIdnNABnlbS, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___UqUsUxvxNOTojzdKwXIdnNABnlbS;

/// @brief Field ioQnkBZdbCMnwVgLnhgBtxIPlAQd, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ioQnkBZdbCMnwVgLnhgBtxIPlAQd;

/// @brief Field eLkOaSOXfzzkGEHDVIjeEINgUkOM, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___eLkOaSOXfzzkGEHDVIjeEINgUkOM;

/// @brief Field IwtFwXLoVbmXQdpMdfywTSDGxSAo, offset: 0x20, size: 0x4, def value: None
 int32_t  ___IwtFwXLoVbmXQdpMdfywTSDGxSAo;

/// @brief Field KzxGqdKMHEiDMCIFysnjDSMvpLxm, offset: 0x24, size: 0x4, def value: None
 int32_t  ___KzxGqdKMHEiDMCIFysnjDSMvpLxm;

/// @brief Field sxQmNaviojNnhZNLSAJzaEFzjAfUA, offset: 0x28, size: 0x4, def value: None
 int32_t  ___sxQmNaviojNnhZNLSAJzaEFzjAfUA;

/// @brief Field mZhDHZgWcQIRdgGopzbRXWvsTJNc, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___mZhDHZgWcQIRdgGopzbRXWvsTJNc;

/// @brief Field XAuhVIBZJizwItqELRUvXKWyCnEAA, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<T>*  ___XAuhVIBZJizwItqELRUvXKWyCnEAA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
