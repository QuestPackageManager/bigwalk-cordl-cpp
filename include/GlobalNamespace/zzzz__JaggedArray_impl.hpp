#pragma once
// IWYU pragma private; include "GlobalNamespace/JaggedArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__JaggedArray_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JaggedArray.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JaggedArray::*)()>(&::GlobalNamespace::JaggedArray::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JaggedArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JaggedArray::*)(int32_t, int32_t)>(&::GlobalNamespace::JaggedArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180482a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JaggedArray.AddArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JaggedArray::*)(::ArrayW<int32_t>, int32_t)>(&::GlobalNamespace::JaggedArray::AddArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180482920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"AddArray", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JaggedArray.GetElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JaggedArray::*)(int32_t, int32_t)>(&::GlobalNamespace::JaggedArray::GetElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804829b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& GlobalNamespace::JaggedArray::__cordl_internal_get__dataArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::JaggedArray::__cordl_internal_get__dataArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataArray;
}
constexpr void GlobalNamespace::JaggedArray::__cordl_internal_set__dataArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataArray = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::JaggedArray::__cordl_internal_get__indexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::JaggedArray::__cordl_internal_get__indexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexArray;
}
constexpr void GlobalNamespace::JaggedArray::__cordl_internal_set__indexArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indexArray = value;
}
constexpr int32_t& GlobalNamespace::JaggedArray::__cordl_internal_get__currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentIndex;
}
constexpr int32_t const& GlobalNamespace::JaggedArray::__cordl_internal_get__currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentIndex;
}
constexpr void GlobalNamespace::JaggedArray::__cordl_internal_set__currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentIndex = value;
}
inline int32_t GlobalNamespace::JaggedArray::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::JaggedArray::_ctor(int32_t  totalSize, int32_t  numberOfArrays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalSize, numberOfArrays);
}
inline void GlobalNamespace::JaggedArray::AddArray(::ArrayW<int32_t>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"AddArray", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline int32_t GlobalNamespace::JaggedArray::GetElement(int32_t  arrayIndex, int32_t  elementIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JaggedArray*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, arrayIndex, elementIndex);
}
inline ::GlobalNamespace::JaggedArray* GlobalNamespace::JaggedArray::New_ctor(int32_t  totalSize, int32_t  numberOfArrays)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JaggedArray*>(totalSize, numberOfArrays));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JaggedArray::JaggedArray()   {
}
