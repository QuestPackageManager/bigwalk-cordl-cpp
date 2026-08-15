#pragma once
// IWYU pragma private; include "Mirror/Pool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Pool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& Mirror::Pool_1<T>::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& Mirror::Pool_1<T>::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
template<typename T>
constexpr void Mirror::Pool_1<T>::__cordl_internal_set_objects(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& Mirror::Pool_1<T>::__cordl_internal_get_objectGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectGenerator;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Mirror::Pool_1<T>::__cordl_internal_get_objectGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectGenerator;
}
template<typename T>
constexpr void Mirror::Pool_1<T>::__cordl_internal_set_objectGenerator(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectGenerator = value;
}
template<typename T>
inline void Mirror::Pool_1<T>::_ctor(::System::Func_1<T>*  objectGenerator, int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Pool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectGenerator, initialCapacity);
}
template<typename T>
inline T Mirror::Pool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Pool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Mirror::Pool_1<T>::Return(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Pool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline int32_t Mirror::Pool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Pool_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Mirror::Pool_1<T>* Mirror::Pool_1<T>::New_ctor(::System::Func_1<T>*  objectGenerator, int32_t  initialCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Pool_1<T>*>(objectGenerator, initialCapacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::Pool_1<T>::Pool_1()   {
}
