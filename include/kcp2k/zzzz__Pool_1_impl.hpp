#pragma once
// IWYU pragma private; include "kcp2k/Pool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Pool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& kcp2k::Pool_1<T>::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& kcp2k::Pool_1<T>::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr void kcp2k::Pool_1<T>::__cordl_internal_set_objects(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& kcp2k::Pool_1<T>::__cordl_internal_get_objectGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectGenerator;
}
template<typename T>
constexpr ::System::Func_1<T>* const& kcp2k::Pool_1<T>::__cordl_internal_get_objectGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectGenerator;
}
template<typename T>
constexpr void kcp2k::Pool_1<T>::__cordl_internal_set_objectGenerator(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectGenerator = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& kcp2k::Pool_1<T>::__cordl_internal_get_objectResetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectResetter;
}
template<typename T>
constexpr ::System::Action_1<T>* const& kcp2k::Pool_1<T>::__cordl_internal_get_objectResetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectResetter;
}
template<typename T>
constexpr void kcp2k::Pool_1<T>::__cordl_internal_set_objectResetter(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectResetter = value;
}
template<typename T>
inline void kcp2k::Pool_1<T>::_ctor(::System::Func_1<T>*  objectGenerator, ::System::Action_1<T>*  objectResetter, int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Pool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectGenerator, objectResetter, initialCapacity);
}
template<typename T>
inline T kcp2k::Pool_1<T>::Take()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Pool_1<T>*>(),
                        {"Take", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void kcp2k::Pool_1<T>::Return(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Pool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void kcp2k::Pool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Pool_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t kcp2k::Pool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Pool_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::kcp2k::Pool_1<T>* kcp2k::Pool_1<T>::New_ctor(::System::Func_1<T>*  objectGenerator, ::System::Action_1<T>*  objectResetter, int32_t  initialCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::Pool_1<T>*>(objectGenerator, objectResetter, initialCapacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::kcp2k::Pool_1<T>::Pool_1()   {
}
