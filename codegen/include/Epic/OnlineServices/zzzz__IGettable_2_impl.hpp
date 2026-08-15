#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IGettable_2.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T,typename TEnum>
inline void Epic::OnlineServices::IGettable_2<T,TEnum>::Get(::by_ref<T>  other, TEnum  enumValue, ::System::Nullable_1<int32_t>  arrayLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::IGettable_2<T,TEnum>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, enumValue, arrayLength);
}
